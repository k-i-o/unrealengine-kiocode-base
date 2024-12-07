#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MisSel_ObjectivePrimary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C
// 0x0020 (0x0280 - 0x0260)
class UITM_MisSel_ObjectivePrimary_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             DATAPrimaryObjective;                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATAReward_PrimaryObjective;                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetData(class UClass* Objective, float MissionScale, float HazardBonus);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MisSel_ObjectivePrimary(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_MisSel_ObjectivePrimary_C">();
	}
	static class UITM_MisSel_ObjectivePrimary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_MisSel_ObjectivePrimary_C>();
	}
};
static_assert(alignof(UITM_MisSel_ObjectivePrimary_C) == 0x000008, "Wrong alignment on UITM_MisSel_ObjectivePrimary_C");
static_assert(sizeof(UITM_MisSel_ObjectivePrimary_C) == 0x000280, "Wrong size on UITM_MisSel_ObjectivePrimary_C");
static_assert(offsetof(UITM_MisSel_ObjectivePrimary_C, UberGraphFrame) == 0x000260, "Member 'UITM_MisSel_ObjectivePrimary_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_ObjectivePrimary_C, DATAPrimaryObjective) == 0x000268, "Member 'UITM_MisSel_ObjectivePrimary_C::DATAPrimaryObjective' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_ObjectivePrimary_C, DATAReward_PrimaryObjective) == 0x000270, "Member 'UITM_MisSel_ObjectivePrimary_C::DATAReward_PrimaryObjective' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_ObjectivePrimary_C, Image_0) == 0x000278, "Member 'UITM_MisSel_ObjectivePrimary_C::Image_0' has a wrong offset!");

}

