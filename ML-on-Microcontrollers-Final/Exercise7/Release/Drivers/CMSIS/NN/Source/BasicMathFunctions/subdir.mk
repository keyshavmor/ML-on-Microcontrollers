################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s16.c \
../Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.c \
../Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s16.c \
../Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.c 

C_DEPS += \
./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s16.d \
./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.d \
./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s16.d \
./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.d 

OBJS += \
./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s16.o \
./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.o \
./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s16.o \
./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/NN/Source/BasicMathFunctions/%.o Drivers/CMSIS/NN/Source/BasicMathFunctions/%.su: ../Drivers/CMSIS/NN/Source/BasicMathFunctions/%.c Drivers/CMSIS/NN/Source/BasicMathFunctions/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L475xx -DCMSIS_NN -c -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Core/Inc" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/STM32L4xx_HAL_Driver/Inc" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/STM32L4xx_HAL_Driver/Inc/Legacy" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Device/ST/STM32L4xx/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Core/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/DSP/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/DSP/PrivateInclude" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/NN/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/Drivers/CMSIS/Include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/flatbuffers/include" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/gemmlowp" -I"/Users/mnadalorian/STM32CubeIDE/workspace_1.11.2/Exercise7/tensorflow_lite/third_party/ruy" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-CMSIS-2f-NN-2f-Source-2f-BasicMathFunctions

clean-Drivers-2f-CMSIS-2f-NN-2f-Source-2f-BasicMathFunctions:
	-$(RM) ./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s16.d ./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s16.o ./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s16.su ./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.d ./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.o ./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.su ./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s16.d ./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s16.o ./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s16.su ./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.d ./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.o ./Drivers/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.su

.PHONY: clean-Drivers-2f-CMSIS-2f-NN-2f-Source-2f-BasicMathFunctions

