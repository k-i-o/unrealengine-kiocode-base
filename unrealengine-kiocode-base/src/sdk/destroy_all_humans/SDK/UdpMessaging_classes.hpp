#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UdpMessaging

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class UdpMessaging.UdpMessagingSettings
// 0x0078 (0x00A0 - 0x0028)
class UUdpMessagingSettings final : public UObject
{
public:
	bool                                          EnableTransport;                                   // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_123B[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UnicastEndpoint;                                   // 0x0030(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MulticastEndpoint;                                 // 0x0040(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         MulticastTimeToLive;                               // 0x0050(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_123C[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         StaticEndpoints;                                   // 0x0058(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                          EnableTunnel;                                      // 0x0068(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_123D[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TunnelUnicastEndpoint;                             // 0x0070(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TunnelMulticastEndpoint;                           // 0x0080(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         RemoteTunnelEndpoints;                             // 0x0090(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UdpMessagingSettings">();
	}
	static class UUdpMessagingSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUdpMessagingSettings>();
	}
};
static_assert(alignof(UUdpMessagingSettings) == 0x000008, "Wrong alignment on UUdpMessagingSettings");
static_assert(sizeof(UUdpMessagingSettings) == 0x0000A0, "Wrong size on UUdpMessagingSettings");
static_assert(offsetof(UUdpMessagingSettings, EnableTransport) == 0x000028, "Member 'UUdpMessagingSettings::EnableTransport' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, UnicastEndpoint) == 0x000030, "Member 'UUdpMessagingSettings::UnicastEndpoint' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, MulticastEndpoint) == 0x000040, "Member 'UUdpMessagingSettings::MulticastEndpoint' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, MulticastTimeToLive) == 0x000050, "Member 'UUdpMessagingSettings::MulticastTimeToLive' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, StaticEndpoints) == 0x000058, "Member 'UUdpMessagingSettings::StaticEndpoints' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, EnableTunnel) == 0x000068, "Member 'UUdpMessagingSettings::EnableTunnel' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, TunnelUnicastEndpoint) == 0x000070, "Member 'UUdpMessagingSettings::TunnelUnicastEndpoint' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, TunnelMulticastEndpoint) == 0x000080, "Member 'UUdpMessagingSettings::TunnelMulticastEndpoint' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, RemoteTunnelEndpoints) == 0x000090, "Member 'UUdpMessagingSettings::RemoteTunnelEndpoints' has a wrong offset!");

}
