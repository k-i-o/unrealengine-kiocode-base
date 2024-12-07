#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MisSel_MissionIconSmall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C
// 0x0018 (0x0278 - 0x0260)
class UITM_MisSel_MissionIconSmall_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UITM_MisSel_MissionIconBasic_C*         ITEM_MissionSelection_MissionIconBasic;            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MisSel_MissionIconBasic_Locked_C*  ITM_MisSel_MissionIconBasic_Locked;                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetData(class UGeneratedMission* Mission);
	void ExecuteUbergraph_ITM_MisSel_MissionIconSmall(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_MisSel_MissionIconSmall_C">();
	}
	static class UITM_MisSel_MissionIconSmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_MisSel_MissionIconSmall_C>();
	}
};
static_assert(alignof(UITM_MisSel_MissionIconSmall_C) == 0x000008, "Wrong alignment on UITM_MisSel_MissionIconSmall_C");
static_assert(sizeof(UITM_MisSel_MissionIconSmall_C) == 0x000278, "Wrong size on UITM_MisSel_MissionIconSmall_C");
static_assert(offsetof(UITM_MisSel_MissionIconSmall_C, UberGraphFrame) == 0x000260, "Member 'UITM_MisSel_MissionIconSmall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconSmall_C, ITEM_MissionSelection_MissionIconBasic) == 0x000268, "Member 'UITM_MisSel_MissionIconSmall_C::ITEM_MissionSelection_MissionIconBasic' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_MissionIconSmall_C, ITM_MisSel_MissionIconBasic_Locked) == 0x000270, "Member 'UITM_MisSel_MissionIconSmall_C::ITM_MisSel_MissionIconBasic_Locked' has a wrong offset!");

}

