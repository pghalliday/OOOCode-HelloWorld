###############################################
# Automatically generated file. Do not edit.
###############################################

DIRBUILD_OPTIONS= -n HelloWorldDir -i 1000 -v  \
    "../../HelloWorld/release/HelloWorld.otv" -mn HelloWorld -mt autoexec

HelloWorldDir.dir: ../../HelloWorld/release/HelloWorld.otv 
	"$(OPENTV_EXEC)dirbuild" $(DIRBUILD_OPTIONS) -o "HelloWorldDir.dir"

FR="HelloWorldDir.dir" 

