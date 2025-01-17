#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SteamVRController

#include "Basic.hpp"

#include "SteamVRController_structs.hpp"


namespace SDK::Params
{

// Function SteamVRController.SteamVRControllerLibrary.SetTouchDPadMapping
// 0x0001 (0x0001 - 0x0000)
struct SteamVRControllerLibrary_SetTouchDPadMapping final
{
public:
	ESteamVRTouchDPadMapping                      NewMapping;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SteamVRControllerLibrary_SetTouchDPadMapping) == 0x000001, "Wrong alignment on SteamVRControllerLibrary_SetTouchDPadMapping");
static_assert(sizeof(SteamVRControllerLibrary_SetTouchDPadMapping) == 0x000001, "Wrong size on SteamVRControllerLibrary_SetTouchDPadMapping");
static_assert(offsetof(SteamVRControllerLibrary_SetTouchDPadMapping, NewMapping) == 0x000000, "Member 'SteamVRControllerLibrary_SetTouchDPadMapping::NewMapping' has a wrong offset!");

}

