#define PACKET_RECV 1015
#define PACKET_SEND 1016

#define ADDR_V465 0x00418C40
#define ADDR_V672 0x004189C0
#define ADDR_V923 0x00000000 /* not public */

#include <windows.h>

void BypassGGAuth(DWORD Address)
{
     typedef int __stdcall GGAuthFunc(int, int*);
     GGAuthFunc* fGGAuthFunc = (GGAuthFunc*)Address;
     fGGAuthFunc(1016, (int*)22);
}
