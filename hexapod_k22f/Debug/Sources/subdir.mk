################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sources/DCFcom.c \
../Sources/Events.c \
../Sources/main.c \
../Sources/sensors.c \
../Sources/sw_pwm.c 

OBJS += \
./Sources/DCFcom.o \
./Sources/Events.o \
./Sources/main.o \
./Sources/sensors.o \
./Sources/sw_pwm.o 

C_DEPS += \
./Sources/DCFcom.d \
./Sources/Events.d \
./Sources/main.d \
./Sources/sensors.d \
./Sources/sw_pwm.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/%.o: ../Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:/Users/raph/Google Drive/dev/embedded_soft/k22f/repository/hexapod_k22f/Static_Code/System" -I"C:/Users/raph/Google Drive/dev/embedded_soft/k22f/repository/hexapod_k22f/Static_Code/PDD" -I"C:/Users/raph/Google Drive/dev/embedded_soft/k22f/repository/hexapod_k22f/Static_Code/IO_Map" -I"C:\Freescale\KDS_2.0.0\eclipse\ProcessorExpert/lib/Kinetis/pdd_100434/inc" -I"C:/Users/raph/Google Drive/dev/embedded_soft/k22f/repository/hexapod_k22f/Sources" -I"C:/Users/raph/Google Drive/dev/embedded_soft/k22f/repository/hexapod_k22f/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


