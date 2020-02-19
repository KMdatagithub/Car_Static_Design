################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../car_sm.c \
../DIO.c \
../ICU.c \
../main.c \
../Motor.c \
../PWM.c \
../softwareDelay.c \
../Steering.c \
../Timer.c \
../TimerDelay.c \
../Us.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
car_sm.o \
DIO.o \
ICU.o \
main.o \
Motor.o \
PWM.o \
softwareDelay.o \
Steering.o \
Timer.o \
TimerDelay.o \
Us.o

OBJS_AS_ARGS +=  \
car_sm.o \
DIO.o \
ICU.o \
main.o \
Motor.o \
PWM.o \
softwareDelay.o \
Steering.o \
Timer.o \
TimerDelay.o \
Us.o

C_DEPS +=  \
car_sm.d \
DIO.d \
ICU.d \
main.d \
Motor.d \
PWM.d \
softwareDelay.d \
Steering.d \
Timer.d \
TimerDelay.d \
Us.d

C_DEPS_AS_ARGS +=  \
car_sm.d \
DIO.d \
ICU.d \
main.d \
Motor.d \
PWM.d \
softwareDelay.d \
Steering.d \
Timer.d \
TimerDelay.d \
Us.d

OUTPUT_FILE_PATH +=Car_Static_Design.elf

OUTPUT_FILE_PATH_AS_ARGS +=Car_Static_Design.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler























./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.9.2
	$(QUOTE)E:\Prog_Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"E:\Prog_Files\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.0.90\include"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32 -B "E:\Prog_Files\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.0.90\gcc\dev\atmega32" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 4.9.2
	$(QUOTE)E:\Prog_Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="Car_Static_Design.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega32 -B "E:\Prog_Files\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.0.90\gcc\dev\atmega32"  
	@echo Finished building target: $@
	"E:\Prog_Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "Car_Static_Design.elf" "Car_Static_Design.hex"
	"E:\Prog_Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "Car_Static_Design.elf" "Car_Static_Design.eep" || exit 0
	"E:\Prog_Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "Car_Static_Design.elf" > "Car_Static_Design.lss"
	"E:\Prog_Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "Car_Static_Design.elf" "Car_Static_Design.srec"
	"E:\Prog_Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "Car_Static_Design.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "Car_Static_Design.elf" "Car_Static_Design.a" "Car_Static_Design.hex" "Car_Static_Design.lss" "Car_Static_Design.eep" "Car_Static_Design.map" "Car_Static_Design.srec" "Car_Static_Design.usersignatures"
	