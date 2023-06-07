################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../tensorflow_lite/tensorflow/lite/micro/arena_allocator/non_persistent_arena_buffer_allocator.cc \
../tensorflow_lite/tensorflow/lite/micro/arena_allocator/persistent_arena_buffer_allocator.cc \
../tensorflow_lite/tensorflow/lite/micro/arena_allocator/recording_single_arena_buffer_allocator.cc \
../tensorflow_lite/tensorflow/lite/micro/arena_allocator/single_arena_buffer_allocator.cc 

CC_DEPS += \
./tensorflow_lite/tensorflow/lite/micro/arena_allocator/non_persistent_arena_buffer_allocator.d \
./tensorflow_lite/tensorflow/lite/micro/arena_allocator/persistent_arena_buffer_allocator.d \
./tensorflow_lite/tensorflow/lite/micro/arena_allocator/recording_single_arena_buffer_allocator.d \
./tensorflow_lite/tensorflow/lite/micro/arena_allocator/single_arena_buffer_allocator.d 

OBJS += \
./tensorflow_lite/tensorflow/lite/micro/arena_allocator/non_persistent_arena_buffer_allocator.o \
./tensorflow_lite/tensorflow/lite/micro/arena_allocator/persistent_arena_buffer_allocator.o \
./tensorflow_lite/tensorflow/lite/micro/arena_allocator/recording_single_arena_buffer_allocator.o \
./tensorflow_lite/tensorflow/lite/micro/arena_allocator/single_arena_buffer_allocator.o 


# Each subdirectory must supply rules for building sources it contributes
tensorflow_lite/tensorflow/lite/micro/arena_allocator/%.o tensorflow_lite/tensorflow/lite/micro/arena_allocator/%.su: ../tensorflow_lite/tensorflow/lite/micro/arena_allocator/%.cc tensorflow_lite/tensorflow/lite/micro/arena_allocator/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L475xx -DCMSIS_NN -c -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Core/Inc" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/STM32L4xx_HAL_Driver/Inc" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/STM32L4xx_HAL_Driver/Inc/Legacy" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Device/ST/STM32L4xx/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Core/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/DSP/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/DSP/PrivateInclude" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/NN/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/flatbuffers/include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/gemmlowp" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/ruy" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-tensorflow_lite-2f-tensorflow-2f-lite-2f-micro-2f-arena_allocator

clean-tensorflow_lite-2f-tensorflow-2f-lite-2f-micro-2f-arena_allocator:
	-$(RM) ./tensorflow_lite/tensorflow/lite/micro/arena_allocator/non_persistent_arena_buffer_allocator.d ./tensorflow_lite/tensorflow/lite/micro/arena_allocator/non_persistent_arena_buffer_allocator.o ./tensorflow_lite/tensorflow/lite/micro/arena_allocator/non_persistent_arena_buffer_allocator.su ./tensorflow_lite/tensorflow/lite/micro/arena_allocator/persistent_arena_buffer_allocator.d ./tensorflow_lite/tensorflow/lite/micro/arena_allocator/persistent_arena_buffer_allocator.o ./tensorflow_lite/tensorflow/lite/micro/arena_allocator/persistent_arena_buffer_allocator.su ./tensorflow_lite/tensorflow/lite/micro/arena_allocator/recording_single_arena_buffer_allocator.d ./tensorflow_lite/tensorflow/lite/micro/arena_allocator/recording_single_arena_buffer_allocator.o ./tensorflow_lite/tensorflow/lite/micro/arena_allocator/recording_single_arena_buffer_allocator.su ./tensorflow_lite/tensorflow/lite/micro/arena_allocator/single_arena_buffer_allocator.d ./tensorflow_lite/tensorflow/lite/micro/arena_allocator/single_arena_buffer_allocator.o ./tensorflow_lite/tensorflow/lite/micro/arena_allocator/single_arena_buffer_allocator.su

.PHONY: clean-tensorflow_lite-2f-tensorflow-2f-lite-2f-micro-2f-arena_allocator

