################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/app/Controller/Controller.c 

OBJS += \
./Core/Src/app/Controller/Controller.o 

C_DEPS += \
./Core/Src/app/Controller/Controller.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/app/Controller/%.o Core/Src/app/Controller/%.su: ../Core/Src/app/Controller/%.c Core/Src/app/Controller/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-app-2f-Controller

clean-Core-2f-Src-2f-app-2f-Controller:
	-$(RM) ./Core/Src/app/Controller/Controller.d ./Core/Src/app/Controller/Controller.o ./Core/Src/app/Controller/Controller.su

.PHONY: clean-Core-2f-Src-2f-app-2f-Controller

