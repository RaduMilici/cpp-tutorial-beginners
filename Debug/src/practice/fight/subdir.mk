################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/practice/fight/Brawl.cpp \
../src/practice/fight/Fighter.cpp \
../src/practice/fight/fightStart.cpp 

OBJS += \
./src/practice/fight/Brawl.o \
./src/practice/fight/Fighter.o \
./src/practice/fight/fightStart.o 

CPP_DEPS += \
./src/practice/fight/Brawl.d \
./src/practice/fight/Fighter.d \
./src/practice/fight/fightStart.d 


# Each subdirectory must supply rules for building sources it contributes
src/practice/fight/%.o: ../src/practice/fight/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


