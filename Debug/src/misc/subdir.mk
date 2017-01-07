################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/misc/Cat.cpp \
../src/misc/Dog.cpp \
../src/misc/Dwarf.cpp \
../src/misc/Orc.cpp \
../src/misc/Person.cpp 

OBJS += \
./src/misc/Cat.o \
./src/misc/Dog.o \
./src/misc/Dwarf.o \
./src/misc/Orc.o \
./src/misc/Person.o 

CPP_DEPS += \
./src/misc/Cat.d \
./src/misc/Dog.d \
./src/misc/Dwarf.d \
./src/misc/Orc.d \
./src/misc/Person.d 


# Each subdirectory must supply rules for building sources it contributes
src/misc/%.o: ../src/misc/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


