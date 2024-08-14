#include "driver.h"

extern "C" NTSTATUS
DriverEntry(
    PDRIVER_OBJECT   DriverObject,
    PUNICODE_STRING  RegistryPath
)
{
    UNREFERENCED_PARAMETER(DriverObject);
    UNREFERENCED_PARAMETER(RegistryPath);

    DbgPrintEx(0, 0, "TESTING KDMAPPER");
    return STATUS_SUCCESS;
}
