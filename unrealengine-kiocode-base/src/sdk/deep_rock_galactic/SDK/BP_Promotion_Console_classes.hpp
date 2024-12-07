#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Promotion_Console

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BaseSpaceRigConsole_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Promotion_Console.BP_Promotion_Console_C
// 0x0010 (0x0300 - 0x02F0)
class ABP_Promotion_Console_C final : public ABP_BaseSpaceRigConsole_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Promotion_Console_C;             // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void OnOpenConsole(class ABP_PlayerController_SpaceRig_C* InPlayerController);
	void ExecuteUbergraph_BP_Promotion_Console(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Promotion_Console_C">();
	}
	static class ABP_Promotion_Console_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Promotion_Console_C>();
	}
};
static_assert(alignof(ABP_Promotion_Console_C) == 0x000008, "Wrong alignment on ABP_Promotion_Console_C");
static_assert(sizeof(ABP_Promotion_Console_C) == 0x000300, "Wrong size on ABP_Promotion_Console_C");
static_assert(offsetof(ABP_Promotion_Console_C, UberGraphFrame_BP_Promotion_Console_C) == 0x0002F0, "Member 'ABP_Promotion_Console_C::UberGraphFrame_BP_Promotion_Console_C' has a wrong offset!");
static_assert(offsetof(ABP_Promotion_Console_C, Audio) == 0x0002F8, "Member 'ABP_Promotion_Console_C::Audio' has a wrong offset!");

}

