#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scope_RedDot

#include "Basic.hpp"

#include "Attachment_scope_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Scope_RedDot.Scope_RedDot_C
// 0x0008 (0x0278 - 0x0270)
class AScope_RedDot_C final : public AAttachment_scope_base_C
{
public:
	class UStaticMeshComponent*                   Plane;                                             // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Scope_RedDot_C">();
	}
	static class AScope_RedDot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AScope_RedDot_C>();
	}
};
static_assert(alignof(AScope_RedDot_C) == 0x000008, "Wrong alignment on AScope_RedDot_C");
static_assert(sizeof(AScope_RedDot_C) == 0x000278, "Wrong size on AScope_RedDot_C");
static_assert(offsetof(AScope_RedDot_C, Plane) == 0x000270, "Member 'AScope_RedDot_C::Plane' has a wrong offset!");

}

