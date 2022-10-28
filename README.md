# gameguard-auth-bypass
[GunBoundS2] Bypass GameGuard Client Authentication (recv 0x1015 send 0x1016).

Packets Indexes
```c++
#define PACKET_RECV 1015
#define PACKET_SEND 1016
```

Functions Addresses
```c++
#define ADDR_V465 0x00418C40
#define ADDR_V672 0x004189C0
#define ADDR_V923 0x00000000 /* not public */
```

# Usage:

Version 4.65
```c++
void main()
{
    BypassGGAuth(PACKET_SEND, ADDR_V465);
}
```

Version 7.62
```c++
void main()
{
    BypassGGAuth(PACKET_SEND, ADDR_V672);
}
```

Version 9.23
```c++
void main()
{
    BypassGGAuth(PACKET_SEND, ADDR_V923);
}
```
