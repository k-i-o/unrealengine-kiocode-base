#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_Enemy_Cop_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Character_Enemy_Base_classes.hpp"
#include "Enum_WhichBehaviorSound_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Character_Enemy_Cop_Base.BP_Character_Enemy_Cop_Base_C
// 0x0000 (0x0D60 - 0x0D60)
class ABP_Character_Enemy_Cop_Base_C : public ABP_Character_Enemy_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Character_Enemy_Cop_Base_C;      // 0x0D58(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Character_Enemy_Cop_Base(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Character_Enemy_Cop_Base_C">();
	}
	static class ABP_Character_Enemy_Cop_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Character_Enemy_Cop_Base_C>();
	}
};
static_assert(alignof(ABP_Character_Enemy_Cop_Base_C) == 0x000010, "Wrong alignment on ABP_Character_Enemy_Cop_Base_C");
static_assert(sizeof(ABP_Character_Enemy_Cop_Base_C) == 0x000D60, "Wrong size on ABP_Character_Enemy_Cop_Base_C");
static_assert(offsetof(ABP_Character_Enemy_Cop_Base_C, UberGraphFrame_BP_Character_Enemy_Cop_Base_C) == 0x000D58, "Member 'ABP_Character_Enemy_Cop_Base_C::UberGraphFrame_BP_Character_Enemy_Cop_Base_C' has a wrong offset!");

}

