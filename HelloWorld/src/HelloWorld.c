#include "HelloWorld.h"

#define OOOClass HelloWorld

OOOPrivateData
	OOOILog * iLog;
OOOPrivateDataEnd

OOODestructor
{
}
OOODestructorEnd

OOOMethod(void, sayHello)
{
	OOOICall(OOOF(iLog), print, "Hello, world!");
}
OOOMethodEnd

OOOConstructor(OOOILog * iLog)
{
	OOOMapMethods
		OOOMapMethod(sayHello)
	OOOMapMethodsEnd

	OOOF(iLog) = iLog;
}
OOOConstructorEnd

#undef OOOClass
