################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/allocatingMemory.cpp \
../src/arithmetic.cpp \
../src/arrays.cpp \
../src/charArrays.cpp \
../src/char_bool.cpp \
../src/classes.cpp \
../src/compareFloats.cpp \
../src/conditions.cpp \
../src/const.cpp \
../src/copyConstructors.cpp \
../src/doWhileLoop.cpp \
../src/floatTypes.cpp \
../src/forLoop.cpp \
../src/functions.cpp \
../src/ifCheck.cpp \
../src/ifElseCheck.cpp \
../src/input.cpp \
../src/integerTypes.cpp \
../src/main.cpp \
../src/newOperator.cpp \
../src/overloading.cpp \
../src/pointerArithmetic.cpp \
../src/pointers.cpp \
../src/pointersAndArrays.cpp \
../src/references.cpp \
../src/sizeOfArrays.cpp \
../src/stringStream.cpp \
../src/strings.cpp \
../src/switch.cpp \
../src/thisKeyword.cpp \
../src/variables.cpp \
../src/whileLoop.cpp 

OBJS += \
./src/allocatingMemory.o \
./src/arithmetic.o \
./src/arrays.o \
./src/charArrays.o \
./src/char_bool.o \
./src/classes.o \
./src/compareFloats.o \
./src/conditions.o \
./src/const.o \
./src/copyConstructors.o \
./src/doWhileLoop.o \
./src/floatTypes.o \
./src/forLoop.o \
./src/functions.o \
./src/ifCheck.o \
./src/ifElseCheck.o \
./src/input.o \
./src/integerTypes.o \
./src/main.o \
./src/newOperator.o \
./src/overloading.o \
./src/pointerArithmetic.o \
./src/pointers.o \
./src/pointersAndArrays.o \
./src/references.o \
./src/sizeOfArrays.o \
./src/stringStream.o \
./src/strings.o \
./src/switch.o \
./src/thisKeyword.o \
./src/variables.o \
./src/whileLoop.o 

CPP_DEPS += \
./src/allocatingMemory.d \
./src/arithmetic.d \
./src/arrays.d \
./src/charArrays.d \
./src/char_bool.d \
./src/classes.d \
./src/compareFloats.d \
./src/conditions.d \
./src/const.d \
./src/copyConstructors.d \
./src/doWhileLoop.d \
./src/floatTypes.d \
./src/forLoop.d \
./src/functions.d \
./src/ifCheck.d \
./src/ifElseCheck.d \
./src/input.d \
./src/integerTypes.d \
./src/main.d \
./src/newOperator.d \
./src/overloading.d \
./src/pointerArithmetic.d \
./src/pointers.d \
./src/pointersAndArrays.d \
./src/references.d \
./src/sizeOfArrays.d \
./src/stringStream.d \
./src/strings.d \
./src/switch.d \
./src/thisKeyword.d \
./src/variables.d \
./src/whileLoop.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


