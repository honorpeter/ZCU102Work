################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/camReader.c \
../src/sdReader.c \
../src/system.c 

OBJS += \
./src/camReader.o \
./src/sdReader.o \
./src/system.o 

C_DEPS += \
./src/camReader.d \
./src/sdReader.d \
./src/system.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v8 Linux gcc compiler'
	aarch64-linux-gnu-gcc -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


