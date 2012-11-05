################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := "C:/OpenTV/SDKSuiteC2.2/SDK/bin/perl"  "C:/OpenTV/SDKSuiteC2.2/SDK/bin/clean.pl"

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include submodules/UnitTest/UnitTest/src/subdir.mk
-include submodules/Log/Log/src/subdir.mk
-include src/subdir.mk
-include Test/src/subdir.mk
-include Test/subdir.mk
-include objects.mk

define deps_include
-include $(1)
OPENTV_DEPS += $(1)
endef

RCD_OPTIONS += -MMD -MT$@ -MF$*.dxd
RCT_OPTIONS += -MMD -MT$@ -MF$*.dxt
C_OPTIONS += -MMD  -MT$@ -MF$*.d
EXP_OPTIONS = -MMD  -MT$@ -MF$*.dx


VPATH := ../
include $(OPENTV)/kit.mak
RC_FLAGS :=$(RC_FLAGS) -vv -ec
COMPILER_INCLUDES2 +=  -I"../src" -I"../Test" -I"../Test/src" -I"../submodules/OOOCode/OOOCode/src" -I"../submodules/Log/Log/src" -I"../submodules/UnitTest/UnitTest/src"   -O1 $(WARNINGS)
COMPILE+=${COMPILER_INCLUDES2}
POSTLINK_OPTIONS=stacksize=1024
RC_INCLUDES2 +=  -I"../src" -I"../Test" -I"../Test/src" -I"../submodules/OOOCode/OOOCode/src" -I"../submodules/Log/Log/src" -I"../submodules/UnitTest/UnitTest/src" 
GCCO_FLAGS +=  -O1 $(WARNINGS)
EXP_OPTIONS +=  -I..
-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
OXTS += \
HelloWorld.oxt \

OCDS += \
HelloWorld.ocd \

ODBS += \
HelloWorld.odb \

OOOS += \
HelloWorld.ooo \


# All Target
all: HelloWorld.otv

# Tool invocations
HelloWorld.ooo: $(OBJS) $(RCOS)
	@echo 'Invoking: object linker'
	$(DO_OOO)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
partclean:
	-$(RM) $(OBJS)$(OCDS)$(RTOS)$(ODBS)$(RDOS)$(OXTS)$(RCDS)$(OTVS)$(RCOS)$(RCTS)$(OOOS) $(FR) $(OPENTV_DEPS) HelloWorld.otv
clean:
	-$(RM) -d *
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

%.dxt: %.rct
	$(TITLE)
	$(GCC_OCOD) $(RC_INCLUDES)  $(RC_INCLUDES2)  -x c $(GCCO_FLAGS) $(RCT_OPTIONS) -c $< -o $*.rto

%.dxd: %.rcd
	$(TITLE)
	$(GCC_OCOD) $(RC_INCLUDES) -I../$(dir $<) $(RC_INCLUDES2)  -x c $(GCCO_FLAGS) $(RCD_OPTIONS) -c $< -o $*.rdo

%.dx: %.exp
	$(TITLE)
	$(CC) $(COMPILE) $(BIGEXPORT) $(EXP_OPTIONS) -c -o $*.oxt -D__EXPORT_TABLE -x c $<

%.d: %.c
	$(TITLE)
	$(CC) $(COMPILE) $(C_OPTIONS) -c $< -o $*.o

$(foreach dxd,$(RDOS:.rdo=.dxd),$(eval $(call deps_include,$(dxd))))
$(foreach dxt,$(RTOS:.rto=.dxt),$(eval $(call deps_include,$(dxt))))
$(foreach d,$(OBJS:.o=.d),$(eval $(call deps_include,$(d))))
$(foreach dx,$(OXTS:.oxt=.dx),$(eval $(call deps_include,$(dx))))

