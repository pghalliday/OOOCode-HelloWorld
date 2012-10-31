#include "OOOUnitTestDefines.h"
#include "OOOMockDebug.h"
#include "HelloWorld.h"

OOOTest(HelloWorld)
{
	OOOMockDebug * pDebug = OOOConstruct(OOOMockDebug);
	OOOIDebug * iDebug = OOOCast(OOOIDebug, pDebug);
	HelloWorld * pHelloWorld = OOOConstruct(HelloWorld, iDebug);

	OOOCall(pHelloWorld, sayHello);
	OOOCheck(OOOCall(pDebug, check, "Hello, world!"));

	OOODestroy(pHelloWorld);
	OOODestroy(pDebug);
}
