#include "app.h"
#include "usart.h"


#include "tensorflow/lite/micro/all_ops_resolver.h"
#include "tensorflow/lite/micro/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/micro_allocator.h"
#include "tensorflow/lite/micro/system_setup.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "cifar10_reduced_j_qat.h"

/* Cycle Counter Variables and Functions */
static volatile unsigned int *DWT_CYCCNT  ;
static volatile unsigned int *DWT_CONTROL ;
static volatile unsigned int *SCB_DEMCR   ;

void ResetTimer(){
	DWT_CYCCNT   = (unsigned int *)0xE0001004; //address of the register
	DWT_CONTROL  = (unsigned int *)0xE0001000; //address of the register
	SCB_DEMCR    = (unsigned int *)0xE000EDFC; //address of the register
	*SCB_DEMCR   = *SCB_DEMCR | 0x01000000;
	*DWT_CYCCNT  = 0; // reset the counter
	*DWT_CONTROL = 0;
}

void StartTimer(){
	*DWT_CONTROL = *DWT_CONTROL | 1 ; // enable the counter
}

void StopTimer(){
	*DWT_CONTROL = *DWT_CONTROL & 0 ; // disable the counter
}

unsigned int getCycles(){
	return *DWT_CYCCNT;
}

tflite::ErrorReporter* error_reporter = nullptr;
const tflite::Model* nn = nullptr;
tflite::MicroInterpreter* interpreter = nullptr;
TfLiteTensor* nn_input = nullptr;
TfLiteTensor* nn_output = nullptr;
constexpr size_t kTensorArenaSize = 66*1024;
uint8_t tensor_arena[kTensorArenaSize];


int application(void)
{
	// Setup code
//	MicroPrintf("Hello there");
	TfLiteStatus tflite_status;
	tflite::InitializeTarget();
	// Set up logging (modify tensorflow/lite/micro/debug_log.cc)
	static tflite::MicroErrorReporter micro_error_reporter;
	error_reporter = &micro_error_reporter;

	//   Map the model into a usable data structure
	nn = tflite::GetModel(cifar10_reduced_j_qat);
	if (nn->version() != TFLITE_SCHEMA_VERSION)
	{
		error_reporter->Report("Model version does not match Schema\n");
	}

	static tflite::AllOpsResolver micro_op_resolver;

	static tflite::MicroAllocator *micro_allocator;
	micro_allocator = tflite::MicroAllocator::Create(tensor_arena, kTensorArenaSize, error_reporter);
	// Build an interpreter to run the model with.
	static tflite::MicroInterpreter static_interpreter(
			nn, micro_op_resolver, micro_allocator, error_reporter);
	interpreter = &static_interpreter;

	// Allocate memory from the tensor_arena for the model's tensors.
	tflite_status = interpreter->AllocateTensors();
	if (tflite_status != kTfLiteOk){
		error_reporter->Report("AllocateTensors() failed\n");
	}

	TfLiteTensor* nn_input = interpreter->input(0);
	TfLiteTensor* nn_output = interpreter->output(0);

	uint32_t cycle_count = 0;
	uint8_t cycle_count_array[4] = {0, 0, 0, 0};


	while(1){
		ResetTimer();
		HAL_UART_Receive(&huart1, (uint8_t*)nn_input->data.uint8, 32*32*3, HAL_MAX_DELAY);
		HAL_Delay(1000);
		HAL_UART_Transmit(&huart1, (uint8_t*)nn_input->data.uint8, 32*32*3, HAL_MAX_DELAY);
		HAL_Delay(1000);
		StartTimer();
		tflite_status = interpreter->Invoke();
		StopTimer();
		cycle_count = getCycles();
		cycle_count_array[3] = (cycle_count >> 24) & 0xFF; // MSB
		cycle_count_array[2] = (cycle_count >> 16) & 0xFF;
		cycle_count_array[1] = (cycle_count >> 8) & 0xFF;
		cycle_count_array[0] = cycle_count & 0xFF; //LSB
	    HAL_UART_Transmit(&huart1, (uint8_t *)cycle_count_array,4, HAL_MAX_DELAY);
		HAL_Delay(1000);
		if(tflite_status != kTfLiteOk){
			error_reporter->Report("Invoke failed");
		}
		HAL_UART_Transmit(&huart1, (uint8_t*)nn_output->data.uint8, 10, HAL_MAX_DELAY);
	}
}

void DebugLog(const char* s)
{
//	return;
	HAL_UART_Transmit(&huart1, (uint8_t*)s, strlen(s), 100);
}
