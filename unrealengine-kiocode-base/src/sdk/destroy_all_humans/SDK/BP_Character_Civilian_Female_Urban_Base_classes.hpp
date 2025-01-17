#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_Civilian_Female_Urban_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Character_Civilian_Female_Base_classes.hpp"
#include "Enum_WhichBehaviorSound_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Character_Civilian_Female_Urban_Base.BP_Character_Civilian_Female_Urban_Base_C
// 0x0010 (0x0D00 - 0x0CF0)
class ABP_Character_Civilian_Female_Urban_Base_C final : public ABP_Character_Civilian_Female_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Character_Civilian_Female_Urban_Base_C; // 0x0CF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Character_Civilian_Female_Urban_Base(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Character_Civilian_Female_Urban_Base_C">();
	}
	static class ABP_Character_Civilian_Female_Urban_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Character_Civilian_Female_Urban_Base_C>();
	}
};
static_assert(alignof(ABP_Character_Civilian_Female_Urban_Base_C) == 0x000010, "Wrong alignment on ABP_Character_Civilian_Female_Urban_Base_C");
static_assert(sizeof(ABP_Character_Civilian_Female_Urban_Base_C) == 0x000D00, "Wrong size on ABP_Character_Civilian_Female_Urban_Base_C");
static_assert(offsetof(ABP_Character_Civilian_Female_Urban_Base_C, UberGraphFrame_BP_Character_Civilian_Female_Urban_Base_C) == 0x000CF0, "Member 'ABP_Character_Civilian_Female_Urban_Base_C::UberGraphFrame_BP_Character_Civilian_Female_Urban_Base_C' has a wrong offset!");

}

