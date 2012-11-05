#ifndef HelloWorld_H
#define HelloWorld_H

#include "OOOCode.h"
#include "OOOILog.h"

#define OOOClass HelloWorld
OOODeclare(OOOILog * iLog)
	OOOImplements
	OOOImplementsEnd
	OOOExports
		OOOExport(void, sayHello)
	OOOExportsEnd
OOODeclareEnd
#undef OOOClass

#endif
