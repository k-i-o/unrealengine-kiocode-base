#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITEM_SpaceRig_ClassLevel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C
// 0x0040 (0x02A0 - 0x0260)
class UITEM_SpaceRig_ClassLevel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_3;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_0;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         IconSize;                                          // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FontSize;                                          // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideIcon;                                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ITEM_SpaceRig_ClassLevel(int32 EntryPoint);
	void SetLevel(int32 Level);
	void PreConstruct(bool IsDesignTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITEM_SpaceRig_ClassLevel_C">();
	}
	static class UITEM_SpaceRig_ClassLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITEM_SpaceRig_ClassLevel_C>();
	}
};
static_assert(alignof(UITEM_SpaceRig_ClassLevel_C) == 0x000008, "Wrong alignment on UITEM_SpaceRig_ClassLevel_C");
static_assert(sizeof(UITEM_SpaceRig_ClassLevel_C) == 0x0002A0, "Wrong size on UITEM_SpaceRig_ClassLevel_C");
static_assert(offsetof(UITEM_SpaceRig_ClassLevel_C, UberGraphFrame) == 0x000260, "Member 'UITEM_SpaceRig_ClassLevel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_ClassLevel_C, Image_0) == 0x000268, "Member 'UITEM_SpaceRig_ClassLevel_C::Image_0' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_ClassLevel_C, InvalidationBox_0) == 0x000270, "Member 'UITEM_SpaceRig_ClassLevel_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_ClassLevel_C, SizeBox_3) == 0x000278, "Member 'UITEM_SpaceRig_ClassLevel_C::SizeBox_3' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_ClassLevel_C, Spacer_0) == 0x000280, "Member 'UITEM_SpaceRig_ClassLevel_C::Spacer_0' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_ClassLevel_C, TextBlock_0) == 0x000288, "Member 'UITEM_SpaceRig_ClassLevel_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_ClassLevel_C, IconSize) == 0x000290, "Member 'UITEM_SpaceRig_ClassLevel_C::IconSize' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_ClassLevel_C, FontSize) == 0x000294, "Member 'UITEM_SpaceRig_ClassLevel_C::FontSize' has a wrong offset!");
static_assert(offsetof(UITEM_SpaceRig_ClassLevel_C, HideIcon) == 0x000298, "Member 'UITEM_SpaceRig_ClassLevel_C::HideIcon' has a wrong offset!");

}
