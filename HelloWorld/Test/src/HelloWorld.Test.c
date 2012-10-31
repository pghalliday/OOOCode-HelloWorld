#include "OOOUnitTestDefines.h"
#include "OOOMockDebug.h"
#include "HelloWorld.h"

OOOTest(HelloWorld)
{
	OOOMockDebug * pDebug = OOOConstruct(OOOMockDebug);
	HelloWorld * pHelloWorld = OOOConstruct(HelloWorld, OOOCast(OOOIDebug, pDebug));

	OOOCall(pHelloWorld, sayHello);
	OOOCheck(OOOCall(pDebug, check, "Hello, world!"));

	OOODestroy(pHelloWorld);
	OOODestroy(pDebug);
}
