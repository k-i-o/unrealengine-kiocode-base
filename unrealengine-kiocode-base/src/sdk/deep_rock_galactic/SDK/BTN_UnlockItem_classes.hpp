#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTN_UnlockItem

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BTN_UnlockItem.BTN_UnlockItem_C
// 0x0070 (0x02D0 - 0x0260)
class UBTN_UnlockItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBlurBackground_C*                      BlurBackground;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_Rank;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Padlock;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ICON_Rank;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_106;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RankLock;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x0298(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ShowInput;                                         // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E60[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Tint_Base;                                         // 0x02B4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Tint_Hover;                                        // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               TextColor;                                         // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetData(TScriptInterface<class ICraftable> Item, class UClass* Character);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BTN_UnlockItem(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTN_UnlockItem_C">();
	}
	static class UBTN_UnlockItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTN_UnlockItem_C>();
	}
};
static_assert(alignof(UBTN_UnlockItem_C) == 0x000008, "Wrong alignment on UBTN_UnlockItem_C");
static_assert(sizeof(UBTN_UnlockItem_C) == 0x0002D0, "Wrong size on UBTN_UnlockItem_C");
static_assert(offsetof(UBTN_UnlockItem_C, UberGraphFrame) == 0x000260, "Member 'UBTN_UnlockItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTN_UnlockItem_C, BlurBackground) == 0x000268, "Member 'UBTN_UnlockItem_C::BlurBackground' has a wrong offset!");
static_assert(offsetof(UBTN_UnlockItem_C, DATA_Rank) == 0x000270, "Member 'UBTN_UnlockItem_C::DATA_Rank' has a wrong offset!");
static_assert(offsetof(UBTN_UnlockItem_C, Icon_Padlock) == 0x000278, "Member 'UBTN_UnlockItem_C::Icon_Padlock' has a wrong offset!");
static_assert(offsetof(UBTN_UnlockItem_C, ICON_Rank) == 0x000280, "Member 'UBTN_UnlockItem_C::ICON_Rank' has a wrong offset!");
static_assert(offsetof(UBTN_UnlockItem_C, Image_106) == 0x000288, "Member 'UBTN_UnlockItem_C::Image_106' has a wrong offset!");
static_assert(offsetof(UBTN_UnlockItem_C, RankLock) == 0x000290, "Member 'UBTN_UnlockItem_C::RankLock' has a wrong offset!");
static_assert(offsetof(UBTN_UnlockItem_C, ButtonText) == 0x000298, "Member 'UBTN_UnlockItem_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UBTN_UnlockItem_C, ShowInput) == 0x0002B0, "Member 'UBTN_UnlockItem_C::ShowInput' has a wrong offset!");
static_assert(offsetof(UBTN_UnlockItem_C, Tint_Base) == 0x0002B4, "Member 'UBTN_UnlockItem_C::Tint_Base' has a wrong offset!");
static_assert(offsetof(UBTN_UnlockItem_C, Tint_Hover) == 0x0002C4, "Member 'UBTN_UnlockItem_C::Tint_Hover' has a wrong offset!");
static_assert(offsetof(UBTN_UnlockItem_C, TextColor) == 0x0002C8, "Member 'UBTN_UnlockItem_C::TextColor' has a wrong offset!");

}
