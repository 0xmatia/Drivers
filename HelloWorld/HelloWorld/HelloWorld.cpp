#include <wdm.h>
#include "HelloWorld.h"

extern "C" {

	VOID Unload(IN PDRIVER_OBJECT /*DriverObject*/)
	{
		DbgPrint("\nGoodbye cruel world.\n");
	}
	NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING/* RegistryPath*/)
	{
		DbgPrint("\nHello World\n");
		DriverObject->DriverUnload = Unload;
		return STATUS_SUCCESS;
	}
/*
	Your code here, you should:

	1. Make this driver load successfully, printing: 'Hello World!'
	2. Make it unload successfully, printing: 'Goodbye Cruel World'

	Prints should be seen in DbgView (Run it inside the VM).
	#JaBaMaTiA
*/

}

