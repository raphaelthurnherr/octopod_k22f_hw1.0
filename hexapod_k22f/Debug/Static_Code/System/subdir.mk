################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Static_Code/System/CPU_Init.c \
../Static_Code/System/Peripherals_Init.c \
../Static_Code/System/Vectors.c 

OBJS += \
./Static_Code/System/CPU_Init.o \
./Static_Code/System/Peripherals_Init.o \
./Static_Code/System/Vectors.o 

C_DEPS += \
./Static_Code/System/CPU_Init.d \
./Static_Code/System/Peripherals_Init.d \
./Static_Code/System/Vectors.d 


# Each subdirectory must supply rules for building sources it contributes
Static_Code/System/%.o: ../Static_Code/System/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:/Users/raph/Google Drive/dev/embedded_soft/k22f/repository/hexapod_k22f/Static_Code/System" -I"C:/Users/raph/Google Drive/dev/embedded_soft/k22f/repository/hexapod_k22f/Static_Code/PDD" -I"C:/Users/raph/Google Drive/dev/embedded_soft/k22f/repository/hexapod_k22f/Static_Code/IO_Map" -I"C:/Users/raph/Google Drive/dev/embedded_soft/k22f/repository/hexapod_k22f/Sources" -I"C:/Users/raph/Google Drive/dev/embedded_soft/k22f/repository/hexapod_k22f/Generated_Code" -I"C:\Freescale\KDS_3.0.0\eclipse\ProcessorExpert/lib/Kinetis/pdd/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


