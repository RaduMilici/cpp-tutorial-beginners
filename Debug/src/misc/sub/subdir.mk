################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/misc/sub/Cat.cpp 

OBJS += \
./src/misc/sub/Cat.o 

CPP_DEPS += \
./src/misc/sub/Cat.d 


# Each subdirectory must supply rules for building sources it contributes
src/misc/sub/%.o: ../src/misc/sub/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


