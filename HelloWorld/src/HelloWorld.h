#ifndef HelloWorld_H
#define HelloWorld_H

#include "OOOCode.h"
#include "OOOIDebug.h"

#define OOOClass HelloWorld
OOODeclare(OOOIDebug * iDebug)
	OOOImplements
	OOOImplementsEnd
	OOOExports
		OOOExport(void, sayHello)
	OOOExportsEnd
OOODeclareEnd
#undef OOOClass

#endif