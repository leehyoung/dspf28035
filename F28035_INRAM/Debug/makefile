################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := c:/ti/ccsv6/tools/compiler/c2000_6.2.5

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
"./source/main.obj" \
"./source/init_sys.obj" \
"./source/Example_Flash2803x_API.obj" \
"./source/DSP2803x_usDelay.obj" \
"./source/DSP2803x_SysCtrl.obj" \
"./source/DSP2803x_Gpio.obj" \
"./source/DSP2803x_GlobalVariableDefs.obj" \
"./source/DSP2803x_CodeStartBranch.obj" \
"../include/2803x_FlashAPI_BootROMSymbols.lib" \
"../include/Flash2803x_API_V100.lib" \
"../CMD/DSP2803x_Headers_nonBIOS.cmd" \
"../CMD/Example_Flash28035_ROM_API.cmd" \
-l"libc.a" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include source/subdir_vars.mk
-include include/subdir_vars.mk
-include CMD/subdir_vars.mk
-include source/subdir_rules.mk
-include include/subdir_rules.mk
-include CMD/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
F28035_INRAM.out \

EXE_OUTPUTS__QUOTED += \
"F28035_INRAM.out" \

BIN_OUTPUTS += \
F28035_INRAM.hex \

BIN_OUTPUTS__QUOTED += \
"F28035_INRAM.hex" \


# All Target
all: F28035_INRAM.out

# Tool invocations
F28035_INRAM.out: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C2000 Linker'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --cla_support=cla0 -g --diag_warning=225 --display_error_number --diag_wrap=off -z -m"F28035_INRAM.map" --stack_size=0x300 --warn_sections -i"c:/ti/ccsv6/tools/compiler/c2000_6.2.5/lib" -i"c:/ti/ccsv6/tools/compiler/c2000_6.2.5/include" --reread_libs --display_error_number --diag_wrap=off --xml_link_info="F28035_INRAM_linkInfo.xml" --rom_model -o "F28035_INRAM.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

F28035_INRAM.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: C2000 Hex Utility'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.5/bin/hex2000"  -o "F28035_INRAM.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "source\DSP2803x_GlobalVariableDefs.pp" "source\DSP2803x_Gpio.pp" "source\DSP2803x_SysCtrl.pp" "source\Example_Flash2803x_API.pp" "source\init_sys.pp" "source\main.pp" 
	-$(RM) "source\DSP2803x_CodeStartBranch.obj" "source\DSP2803x_GlobalVariableDefs.obj" "source\DSP2803x_Gpio.obj" "source\DSP2803x_SysCtrl.obj" "source\DSP2803x_usDelay.obj" "source\Example_Flash2803x_API.obj" "source\init_sys.obj" "source\main.obj" 
	-$(RM) "source\DSP2803x_CodeStartBranch.pp" "source\DSP2803x_usDelay.pp" 
	-@echo 'Finished clean'
	-@echo ' '

post-build:
	-"c:/ti/ccsv6/utils/tiobj2bin/tiobj2bin.bat" "F28035_INRAM.out" "F28035_INRAM.bin" "c:/ti/ccsv6/tools/compiler/c2000_6.2.5/bin/ofd2000.exe" "c:/ti/ccsv6/tools/compiler/c2000_6.2.5/bin/hex2000.exe" "c:/ti/ccsv6/utils/tiobj2bin/mkhex4bin.exe"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets

