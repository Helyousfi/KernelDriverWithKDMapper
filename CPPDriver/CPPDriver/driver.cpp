/*

The main entry point for the driver. The DriverEntry function is called when the driver is loaded. 
It makes a call to nullhook::call_kernel_function, which seems to be a hook handler.

*/

#include "hook.h"

extern "C" NTSTATUS DriverEntry(PDRIVER_OBJECT driver_object, PUNICODE_STRING reg_path)
{
	UNREFERENCED_PARAMETER(driver_object);
	UNREFERENCED_PARAMETER(reg_path);

	nullhook::call_kernel_function(&nullhook::hook_handler);

	return STATUS_SUCCESS;
}