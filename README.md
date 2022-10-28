# gameguard-auth-bypass
[GunBoundS2] Bypass GameGuard Client Authentication (recv 0x1015 send 0x1016).

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
