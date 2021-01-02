#include "hexcell_api.h"

namespace hexcell
{
	struct ApplicationDesc
	{
		char* Vendor; //utf8
		char* Name; //utf8
		int Version;
	};

	class Application
	{
		
	};

	HEXCELL_EXPORT Application* InitApp(const ApplicationDesc& desc);
}

HEXCELL_EXPORT int somefunc(int a, int b);