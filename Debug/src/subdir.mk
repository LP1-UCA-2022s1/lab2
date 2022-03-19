################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Laboratorio\ 2\ 18\ marzo.c 

C_DEPS += \
./src/Laboratorio\ 2\ 18\ marzo.d 

OBJS += \
./src/Laboratorio\ 2\ 18\ marzo.o 


# Each subdirectory must supply rules for building sources it contributes
src/Laboratorio\ 2\ 18\ marzo.o: ../src/Laboratorio\ 2\ 18\ marzo.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Laboratorio 2 18 marzo.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Laboratorio\ 2\ 18\ marzo.d ./src/Laboratorio\ 2\ 18\ marzo.o

.PHONY: clean-src

