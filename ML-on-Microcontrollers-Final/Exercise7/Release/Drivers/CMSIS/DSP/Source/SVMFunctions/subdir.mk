################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_init_f16.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_init_f32.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_predict_f16.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_predict_f32.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_init_f16.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_init_f32.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_predict_f16.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_predict_f32.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_init_f16.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_init_f32.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_predict_f16.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_predict_f32.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_init_f16.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_init_f32.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_predict_f16.c \
../Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_predict_f32.c 

C_DEPS += \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_init_f16.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_init_f32.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_predict_f16.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_predict_f32.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_init_f16.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_init_f32.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_predict_f16.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_predict_f32.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_init_f16.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_init_f32.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_predict_f16.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_predict_f32.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_init_f16.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_init_f32.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_predict_f16.d \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_predict_f32.d 

OBJS += \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_init_f16.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_init_f32.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_predict_f16.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_predict_f32.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_init_f16.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_init_f32.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_predict_f16.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_predict_f32.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_init_f16.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_init_f32.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_predict_f16.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_predict_f32.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_init_f16.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_init_f32.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_predict_f16.o \
./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_predict_f32.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/DSP/Source/SVMFunctions/%.o Drivers/CMSIS/DSP/Source/SVMFunctions/%.su: ../Drivers/CMSIS/DSP/Source/SVMFunctions/%.c Drivers/CMSIS/DSP/Source/SVMFunctions/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L475xx -DCMSIS_NN -c -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Core/Inc" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/STM32L4xx_HAL_Driver/Inc" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/STM32L4xx_HAL_Driver/Inc/Legacy" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Device/ST/STM32L4xx/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Core/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/DSP/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/DSP/PrivateInclude" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/NN/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/flatbuffers/include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/gemmlowp" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/ruy" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-CMSIS-2f-DSP-2f-Source-2f-SVMFunctions

clean-Drivers-2f-CMSIS-2f-DSP-2f-Source-2f-SVMFunctions:
	-$(RM) ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_init_f16.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_init_f16.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_init_f16.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_init_f32.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_init_f32.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_init_f32.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_predict_f16.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_predict_f16.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_predict_f16.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_predict_f32.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_predict_f32.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_linear_predict_f32.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_init_f16.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_init_f16.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_init_f16.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_init_f32.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_init_f32.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_init_f32.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_predict_f16.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_predict_f16.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_predict_f16.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_predict_f32.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_predict_f32.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_polynomial_predict_f32.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_init_f16.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_init_f16.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_init_f16.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_init_f32.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_init_f32.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_init_f32.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_predict_f16.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_predict_f16.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_predict_f16.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_predict_f32.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_predict_f32.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_rbf_predict_f32.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_init_f16.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_init_f16.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_init_f16.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_init_f32.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_init_f32.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_init_f32.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_predict_f16.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_predict_f16.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_predict_f16.su ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_predict_f32.d ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_predict_f32.o ./Drivers/CMSIS/DSP/Source/SVMFunctions/arm_svm_sigmoid_predict_f32.su

.PHONY: clean-Drivers-2f-CMSIS-2f-DSP-2f-Source-2f-SVMFunctions

