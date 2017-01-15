################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/misc/animals/Goat.cpp 

OBJS += \
./src/misc/animals/Goat.o 

CPP_DEPS += \
./src/misc/animals/Goat.d 


# Each subdirectory must supply rules for building sources it contributes
src/misc/animals/%.o: ../src/misc/animals/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


