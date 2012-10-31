#include "HelloWorld.h"

#define OOOClass HelloWorld

OOOPrivateData
	OOOIDebug * iDebug;
OOOPrivateDataEnd

OOODestructor
{
}
OOODestructorEnd

OOOMethod(void, sayHello)
{
	OOOICall(OOOF(iDebug), print, "Hello, world!");
}
OOOMethodEnd

OOOConstructor(OOOIDebug * iDebug)
{
	OOOMapMethods
		OOOMapMethod(sayHello)
	OOOMapMethodsEnd

	OOOF(iDebug) = iDebug;
}
OOOConstructorEnd

#undef OOOClass
