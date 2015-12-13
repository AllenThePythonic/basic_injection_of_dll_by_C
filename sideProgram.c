#include <stdio.h>

/* After created this class, it should be injected by DLL Injector */

_declspec(dllexport) void mainA() 
{
	void (*showMsg)() = (void (*)()) 0x4005aa;
	showMsg();

	int *pNum = (int *) 0x29e64454;
	*pNum = 1000;
}
