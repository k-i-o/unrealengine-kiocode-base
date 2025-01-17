#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MK47Scope_PrecisionReddot

#include "Basic.hpp"

#include "Attachment_scope_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MK47Scope_PrecisionReddot.MK47Scope_PrecisionReddot_C
// 0x0010 (0x0280 - 0x0270)
class AMK47Scope_PrecisionReddot_C final : public AAttachment_scope_base_C
{
public:
	class UStaticMeshComponent*                   SM_Wep_Mod_B_Rail_01;                              // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane;                                             // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MK47Scope_PrecisionReddot_C">();
	}
	static class AMK47Scope_PrecisionReddot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMK47Scope_PrecisionReddot_C>();
	}
};
static_assert(alignof(AMK47Scope_PrecisionReddot_C) == 0x000008, "Wrong alignment on AMK47Scope_PrecisionReddot_C");
static_assert(sizeof(AMK47Scope_PrecisionReddot_C) == 0x000280, "Wrong size on AMK47Scope_PrecisionReddot_C");
static_assert(offsetof(AMK47Scope_PrecisionReddot_C, SM_Wep_Mod_B_Rail_01) == 0x000270, "Member 'AMK47Scope_PrecisionReddot_C::SM_Wep_Mod_B_Rail_01' has a wrong offset!");
static_assert(offsetof(AMK47Scope_PrecisionReddot_C, Plane) == 0x000278, "Member 'AMK47Scope_PrecisionReddot_C::Plane' has a wrong offset!");

}

