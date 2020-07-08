################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
source/DSP2803x_CodeStartBranch.obj: ../source/DSP2803x_CodeStartBranch.asm $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --include_path="c:/ti/ccsv6/tools/compiler/c2000_6.2.5/include" --include_path="C:/ti/myprojects/F28035_INRAM/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="source/DSP2803x_CodeStartBranch.pp" --obj_directory="source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

source/DSP2803x_GlobalVariableDefs.obj: ../source/DSP2803x_GlobalVariableDefs.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --include_path="c:/ti/ccsv6/tools/compiler/c2000_6.2.5/include" --include_path="C:/ti/myprojects/F28035_INRAM/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="source/DSP2803x_GlobalVariableDefs.pp" --obj_directory="source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

source/DSP2803x_Gpio.obj: ../source/DSP2803x_Gpio.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --include_path="c:/ti/ccsv6/tools/compiler/c2000_6.2.5/include" --include_path="C:/ti/myprojects/F28035_INRAM/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="source/DSP2803x_Gpio.pp" --obj_directory="source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

source/DSP2803x_SysCtrl.obj: ../source/DSP2803x_SysCtrl.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --include_path="c:/ti/ccsv6/tools/compiler/c2000_6.2.5/include" --include_path="C:/ti/myprojects/F28035_INRAM/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="source/DSP2803x_SysCtrl.pp" --obj_directory="source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

source/DSP2803x_usDelay.obj: ../source/DSP2803x_usDelay.asm $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --include_path="c:/ti/ccsv6/tools/compiler/c2000_6.2.5/include" --include_path="C:/ti/myprojects/F28035_INRAM/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="source/DSP2803x_usDelay.pp" --obj_directory="source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

source/Example_Flash2803x_API.obj: ../source/Example_Flash2803x_API.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --include_path="c:/ti/ccsv6/tools/compiler/c2000_6.2.5/include" --include_path="C:/ti/myprojects/F28035_INRAM/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="source/Example_Flash2803x_API.pp" --obj_directory="source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

source/init_sys.obj: ../source/init_sys.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --include_path="c:/ti/ccsv6/tools/compiler/c2000_6.2.5/include" --include_path="C:/ti/myprojects/F28035_INRAM/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="source/init_sys.pp" --obj_directory="source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

source/main.obj: ../source/main.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --include_path="c:/ti/ccsv6/tools/compiler/c2000_6.2.5/include" --include_path="C:/ti/myprojects/F28035_INRAM/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="source/main.pp" --obj_directory="source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


