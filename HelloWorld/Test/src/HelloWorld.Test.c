#include "OOOUnitTestDefines.h"
#include "OOOBufferedLog.h"
#include "HelloWorld.h"

OOOTest(HelloWorld)
{
	OOOBufferedLog * pLog = OOOConstruct(OOOBufferedLog);
	HelloWorld * pHelloWorld = OOOConstruct(HelloWorld, OOOCast(OOOILog, pLog));

	OOOCall(pHelloWorld, sayHello);
	OOOCheck(OOOCall(pLog, check, "Hello, world!"));

	OOODestroy(pHelloWorld);
	OOODestroy(pLog);
}
