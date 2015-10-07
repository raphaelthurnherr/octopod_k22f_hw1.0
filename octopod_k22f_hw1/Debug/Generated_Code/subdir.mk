################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/ASerialLdd1.c \
../Generated_Code/BitIoLdd1.c \
../Generated_Code/BitIoLdd2.c \
../Generated_Code/BitIoLdd3.c \
../Generated_Code/BitIoLdd4.c \
../Generated_Code/BitIoLdd5.c \
../Generated_Code/BitIoLdd6.c \
../Generated_Code/BitIoLdd7.c \
../Generated_Code/BitIoLdd8.c \
../Generated_Code/BitIoLdd9.c \
../Generated_Code/Cpu.c \
../Generated_Code/ExtIntLdd1.c \
../Generated_Code/ExtIntLdd2.c \
../Generated_Code/ExtIntLdd3.c \
../Generated_Code/ExtIntLdd4.c \
../Generated_Code/ExtIntLdd5.c \
../Generated_Code/FX1.c \
../Generated_Code/GI2C1.c \
../Generated_Code/I2C1.c \
../Generated_Code/I2C2.c \
../Generated_Code/IR0_detect.c \
../Generated_Code/IR1_detect.c \
../Generated_Code/IR2_detect.c \
../Generated_Code/Int1accel.c \
../Generated_Code/Led_blue.c \
../Generated_Code/Led_green.c \
../Generated_Code/Led_red.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/PWM_CTRL_OE.c \
../Generated_Code/SCL1.c \
../Generated_Code/SCL2.c \
../Generated_Code/SDA1.c \
../Generated_Code/SDA2.c \
../Generated_Code/SW_I2C_PWM.c \
../Generated_Code/TI1.c \
../Generated_Code/TI2.c \
../Generated_Code/TI3.c \
../Generated_Code/TU1.c \
../Generated_Code/TU2.c \
../Generated_Code/TU3.c \
../Generated_Code/TimerIntLdd1.c \
../Generated_Code/TimerIntLdd2.c \
../Generated_Code/TimerIntLdd3.c \
../Generated_Code/UART0.c \
../Generated_Code/UsonicPWM.c \
../Generated_Code/UsonicTrig.c \
../Generated_Code/WAIT1.c \
../Generated_Code/pin_mux.c 

OBJS += \
./Generated_Code/ASerialLdd1.o \
./Generated_Code/BitIoLdd1.o \
./Generated_Code/BitIoLdd2.o \
./Generated_Code/BitIoLdd3.o \
./Generated_Code/BitIoLdd4.o \
./Generated_Code/BitIoLdd5.o \
./Generated_Code/BitIoLdd6.o \
./Generated_Code/BitIoLdd7.o \
./Generated_Code/BitIoLdd8.o \
./Generated_Code/BitIoLdd9.o \
./Generated_Code/Cpu.o \
./Generated_Code/ExtIntLdd1.o \
./Generated_Code/ExtIntLdd2.o \
./Generated_Code/ExtIntLdd3.o \
./Generated_Code/ExtIntLdd4.o \
./Generated_Code/ExtIntLdd5.o \
./Generated_Code/FX1.o \
./Generated_Code/GI2C1.o \
./Generated_Code/I2C1.o \
./Generated_Code/I2C2.o \
./Generated_Code/IR0_detect.o \
./Generated_Code/IR1_detect.o \
./Generated_Code/IR2_detect.o \
./Generated_Code/Int1accel.o \
./Generated_Code/Led_blue.o \
./Generated_Code/Led_green.o \
./Generated_Code/Led_red.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/PWM_CTRL_OE.o \
./Generated_Code/SCL1.o \
./Generated_Code/SCL2.o \
./Generated_Code/SDA1.o \
./Generated_Code/SDA2.o \
./Generated_Code/SW_I2C_PWM.o \
./Generated_Code/TI1.o \
./Generated_Code/TI2.o \
./Generated_Code/TI3.o \
./Generated_Code/TU1.o \
./Generated_Code/TU2.o \
./Generated_Code/TU3.o \
./Generated_Code/TimerIntLdd1.o \
./Generated_Code/TimerIntLdd2.o \
./Generated_Code/TimerIntLdd3.o \
./Generated_Code/UART0.o \
./Generated_Code/UsonicPWM.o \
./Generated_Code/UsonicTrig.o \
./Generated_Code/WAIT1.o \
./Generated_Code/pin_mux.o 

C_DEPS += \
./Generated_Code/ASerialLdd1.d \
./Generated_Code/BitIoLdd1.d \
./Generated_Code/BitIoLdd2.d \
./Generated_Code/BitIoLdd3.d \
./Generated_Code/BitIoLdd4.d \
./Generated_Code/BitIoLdd5.d \
./Generated_Code/BitIoLdd6.d \
./Generated_Code/BitIoLdd7.d \
./Generated_Code/BitIoLdd8.d \
./Generated_Code/BitIoLdd9.d \
./Generated_Code/Cpu.d \
./Generated_Code/ExtIntLdd1.d \
./Generated_Code/ExtIntLdd2.d \
./Generated_Code/ExtIntLdd3.d \
./Generated_Code/ExtIntLdd4.d \
./Generated_Code/ExtIntLdd5.d \
./Generated_Code/FX1.d \
./Generated_Code/GI2C1.d \
./Generated_Code/I2C1.d \
./Generated_Code/I2C2.d \
./Generated_Code/IR0_detect.d \
./Generated_Code/IR1_detect.d \
./Generated_Code/IR2_detect.d \
./Generated_Code/Int1accel.d \
./Generated_Code/Led_blue.d \
./Generated_Code/Led_green.d \
./Generated_Code/Led_red.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/PWM_CTRL_OE.d \
./Generated_Code/SCL1.d \
./Generated_Code/SCL2.d \
./Generated_Code/SDA1.d \
./Generated_Code/SDA2.d \
./Generated_Code/SW_I2C_PWM.d \
./Generated_Code/TI1.d \
./Generated_Code/TI2.d \
./Generated_Code/TI3.d \
./Generated_Code/TU1.d \
./Generated_Code/TU2.d \
./Generated_Code/TU3.d \
./Generated_Code/TimerIntLdd1.d \
./Generated_Code/TimerIntLdd2.d \
./Generated_Code/TimerIntLdd3.d \
./Generated_Code/UART0.d \
./Generated_Code/UsonicPWM.d \
./Generated_Code/UsonicTrig.d \
./Generated_Code/WAIT1.d \
./Generated_Code/pin_mux.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:/Users/rapha_000/Google Drive/dev/embedded_soft/k22f/repository/octopod_k22f_hw1/Generated_Code/System" -I"C:/Users/rapha_000/Google Drive/dev/embedded_soft/k22f/repository/octopod_k22f_hw1/Generated_Code/PDD" -I"C:/Users/rapha_000/Google Drive/dev/embedded_soft/k22f/repository/octopod_k22f_hw1/Generated_Code/IO_Map" -I"C:/Users/rapha_000/Google Drive/dev/embedded_soft/k22f/repository/octopod_k22f_hw1/Sources" -I"C:/Users/rapha_000/Google Drive/dev/embedded_soft/k22f/repository/octopod_k22f_hw1/Generated_Code" -I"C:\Freescale\KDS_3.0.0\eclipse\ProcessorExpert/lib/Kinetis/pdd/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


