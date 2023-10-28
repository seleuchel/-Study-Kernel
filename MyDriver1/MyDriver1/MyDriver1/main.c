#include <ntddk.h>

NTSTATUS DriverEntry(
	IN PDRIVER_OBJECT DriverObject,
	IN PUNICODE_STRING RegistryPath
)
{
	UNREFERENCED_PARAMETER(DriverObject);
	UNREFERENCED_PARAMETER(RegistryPath);
	DbgPrintEx(DPFLTR_IHVDRIVER_ID, 0, "Helloworld\n");
	return STATUS_UNSUCCESSFUL;
}