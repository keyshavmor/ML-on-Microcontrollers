################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/gpio.c \
../Core/Src/main.c \
../Core/Src/stm32l4xx_hal_msp.c \
../Core/Src/stm32l4xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32l4xx.c \
../Core/Src/usart.c 

CPP_SRCS += \
../Core/Src/app.cpp 

C_DEPS += \
./Core/Src/gpio.d \
./Core/Src/main.d \
./Core/Src/stm32l4xx_hal_msp.d \
./Core/Src/stm32l4xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32l4xx.d \
./Core/Src/usart.d 

OBJS += \
./Core/Src/app.o \
./Core/Src/gpio.o \
./Core/Src/main.o \
./Core/Src/stm32l4xx_hal_msp.o \
./Core/Src/stm32l4xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32l4xx.o \
./Core/Src/usart.o 

CPP_DEPS += \
./Core/Src/app.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su: ../Core/Src/%.cpp Core/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L475xx -DCMSIS_NN -c -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Core/Inc" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/STM32L4xx_HAL_Driver/Inc" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/STM32L4xx_HAL_Driver/Inc/Legacy" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Device/ST/STM32L4xx/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Core/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/DSP/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/DSP/PrivateInclude" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/NN/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/flatbuffers/include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/gemmlowp" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/ruy" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/%.o Core/Src/%.su: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L475xx -DCMSIS_NN -c -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Core/Inc" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/STM32L4xx_HAL_Driver/Inc" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/STM32L4xx_HAL_Driver/Inc/Legacy" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Device/ST/STM32L4xx/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Core/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/DSP/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/DSP/PrivateInclude" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/NN/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/flatbuffers/include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/gemmlowp" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/ruy" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/app.d ./Core/Src/app.o ./Core/Src/app.su ./Core/Src/gpio.d ./Core/Src/gpio.o ./Core/Src/gpio.su ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/stm32l4xx_hal_msp.d ./Core/Src/stm32l4xx_hal_msp.o ./Core/Src/stm32l4xx_hal_msp.su ./Core/Src/stm32l4xx_it.d ./Core/Src/stm32l4xx_it.o ./Core/Src/stm32l4xx_it.su ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32l4xx.d ./Core/Src/system_stm32l4xx.o ./Core/Src/system_stm32l4xx.su ./Core/Src/usart.d ./Core/Src/usart.o ./Core/Src/usart.su

.PHONY: clean-Core-2f-Src

