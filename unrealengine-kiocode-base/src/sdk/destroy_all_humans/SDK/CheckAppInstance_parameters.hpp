#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckAppInstance

#include "Basic.hpp"


namespace SDK::Params
{

// Function CheckAppInstance.CheckAppInstanceBPLibrary.CheckAnotherAppInstance
// 0x0001 (0x0001 - 0x0000)
struct CheckAppInstanceBPLibrary_CheckAnotherAppInstance final
{
public:
	bool                                          IsEnabled;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CheckAppInstanceBPLibrary_CheckAnotherAppInstance) == 0x000001, "Wrong alignment on CheckAppInstanceBPLibrary_CheckAnotherAppInstance");
static_assert(sizeof(CheckAppInstanceBPLibrary_CheckAnotherAppInstance) == 0x000001, "Wrong size on CheckAppInstanceBPLibrary_CheckAnotherAppInstance");
static_assert(offsetof(CheckAppInstanceBPLibrary_CheckAnotherAppInstance, IsEnabled) == 0x000000, "Member 'CheckAppInstanceBPLibrary_CheckAnotherAppInstance::IsEnabled' has a wrong offset!");

}

