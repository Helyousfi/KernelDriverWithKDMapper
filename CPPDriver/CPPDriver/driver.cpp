#include <ntddk.h>
#include <ntifs.h>
#include <windef.h>
#include <ntstrsafe.h>

extern "C" NTSTATUS
DriverEntry(
    _In_ PDRIVER_OBJECT   DriverObject,
    _In_ PUNICODE_STRING  RegistryPath
)
{
    UNREFERENCED_PARAMETER(RegistryPath);
    UNREFERENCED_PARAMETER(RegistryPath);

    DbgPrintEx(0, 0, "TESTING KDMAPPER");
    return STATUS_SUCCESS;
}
