#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_ComputerScience_Tier1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Skill_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_ComputerScience_Tier1.Skill_ComputerScience_Tier1_C
// 0x0010 (0x00E0 - 0x00D0)
class USkill_ComputerScience_Tier1_C : public USkill_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Skill_ComputerScience_Tier1_C;      // 0x00D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Added_Hacking_;                                    // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Skill_ComputerScience_Tier1(int32 EntryPoint);
	void SetupSkill();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_ComputerScience_Tier1_C">();
	}
	static class USkill_ComputerScience_Tier1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_ComputerScience_Tier1_C>();
	}
};
static_assert(alignof(USkill_ComputerScience_Tier1_C) == 0x000008, "Wrong alignment on USkill_ComputerScience_Tier1_C");
static_assert(sizeof(USkill_ComputerScience_Tier1_C) == 0x0000E0, "Wrong size on USkill_ComputerScience_Tier1_C");
static_assert(offsetof(USkill_ComputerScience_Tier1_C, UberGraphFrame_Skill_ComputerScience_Tier1_C) == 0x0000D0, "Member 'USkill_ComputerScience_Tier1_C::UberGraphFrame_Skill_ComputerScience_Tier1_C' has a wrong offset!");
static_assert(offsetof(USkill_ComputerScience_Tier1_C, Added_Hacking_) == 0x0000D8, "Member 'USkill_ComputerScience_Tier1_C::Added_Hacking_' has a wrong offset!");

}
