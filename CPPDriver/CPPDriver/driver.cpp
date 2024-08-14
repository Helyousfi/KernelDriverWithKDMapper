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
    NTSTATUS status;
    UNICODE_STRING deviceName;
    UNICODE_STRING symbolicLinkName;
    PDEVICE_OBJECT deviceObject = NULL;

    UNREFERENCED_PARAMETER(RegistryPath);


    return STATUS_SUCCESS;
}
