#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_BG_CutCorner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Basic_BG_CutCorner.Basic_BG_CutCorner_C
// 0x0048 (0x02A8 - 0x0260)
class UBasic_BG_CutCorner_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_1;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_100;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_107;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Corner;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Border;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         CornerSize;                                        // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_326D[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DynBackgroundMaterial;                             // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Basic_BG_CutCorner(int32 EntryPoint);
	void SetBorderColor(const struct FLinearColor& InputPin);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Basic_BG_CutCorner_C">();
	}
	static class UBasic_BG_CutCorner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasic_BG_CutCorner_C>();
	}
};
static_assert(alignof(UBasic_BG_CutCorner_C) == 0x000008, "Wrong alignment on UBasic_BG_CutCorner_C");
static_assert(sizeof(UBasic_BG_CutCorner_C) == 0x0002A8, "Wrong size on UBasic_BG_CutCorner_C");
static_assert(offsetof(UBasic_BG_CutCorner_C, UberGraphFrame) == 0x000260, "Member 'UBasic_BG_CutCorner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasic_BG_CutCorner_C, Border_1) == 0x000268, "Member 'UBasic_BG_CutCorner_C::Border_1' has a wrong offset!");
static_assert(offsetof(UBasic_BG_CutCorner_C, Border_100) == 0x000270, "Member 'UBasic_BG_CutCorner_C::Border_100' has a wrong offset!");
static_assert(offsetof(UBasic_BG_CutCorner_C, Border_107) == 0x000278, "Member 'UBasic_BG_CutCorner_C::Border_107' has a wrong offset!");
static_assert(offsetof(UBasic_BG_CutCorner_C, Corner) == 0x000280, "Member 'UBasic_BG_CutCorner_C::Corner' has a wrong offset!");
static_assert(offsetof(UBasic_BG_CutCorner_C, HorizontalBox_Border) == 0x000288, "Member 'UBasic_BG_CutCorner_C::HorizontalBox_Border' has a wrong offset!");
static_assert(offsetof(UBasic_BG_CutCorner_C, SizeBox_0) == 0x000290, "Member 'UBasic_BG_CutCorner_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UBasic_BG_CutCorner_C, CornerSize) == 0x000298, "Member 'UBasic_BG_CutCorner_C::CornerSize' has a wrong offset!");
static_assert(offsetof(UBasic_BG_CutCorner_C, DynBackgroundMaterial) == 0x0002A0, "Member 'UBasic_BG_CutCorner_C::DynBackgroundMaterial' has a wrong offset!");

}

