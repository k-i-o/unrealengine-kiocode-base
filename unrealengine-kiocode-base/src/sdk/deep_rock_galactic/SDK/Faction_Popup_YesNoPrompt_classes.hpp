#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Faction_Popup_YesNoPrompt

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Faction_Popup_YesNoPrompt.Faction_Popup_YesNoPrompt_C
// 0x0060 (0x0318 - 0x02B8)
class UFaction_Popup_YesNoPrompt_C final : public UYesNoPromptWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_MinimalWindow_C*            BasicWindow_Minimal;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBlurBackground_C*                      BlurBackground;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_No;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_Yes;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_Content;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_Header;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DiscordMoreInfo;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_3;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalResourceBar_C*            UI_HorizontalResourceBar;                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Faction_Popup_YesNoPrompt(int32 EntryPoint);
	void SetResources(const TArray<struct FCraftingCost>& Resources);
	void Add_Resource(class UResourceData* InResource, float InAmount);
	void Clear_Resources();
	void No();
	void Yes();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnShow(const class FText& Title, const class FText& Message);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Faction_Popup_YesNoPrompt_C">();
	}
	static class UFaction_Popup_YesNoPrompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFaction_Popup_YesNoPrompt_C>();
	}
};
static_assert(alignof(UFaction_Popup_YesNoPrompt_C) == 0x000008, "Wrong alignment on UFaction_Popup_YesNoPrompt_C");
static_assert(sizeof(UFaction_Popup_YesNoPrompt_C) == 0x000318, "Wrong size on UFaction_Popup_YesNoPrompt_C");
static_assert(offsetof(UFaction_Popup_YesNoPrompt_C, UberGraphFrame) == 0x0002B8, "Member 'UFaction_Popup_YesNoPrompt_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFaction_Popup_YesNoPrompt_C, BasicWindow_Minimal) == 0x0002C0, "Member 'UFaction_Popup_YesNoPrompt_C::BasicWindow_Minimal' has a wrong offset!");
static_assert(offsetof(UFaction_Popup_YesNoPrompt_C, BlurBackground) == 0x0002C8, "Member 'UFaction_Popup_YesNoPrompt_C::BlurBackground' has a wrong offset!");
static_assert(offsetof(UFaction_Popup_YesNoPrompt_C, BTN_No) == 0x0002D0, "Member 'UFaction_Popup_YesNoPrompt_C::BTN_No' has a wrong offset!");
static_assert(offsetof(UFaction_Popup_YesNoPrompt_C, BTN_Yes) == 0x0002D8, "Member 'UFaction_Popup_YesNoPrompt_C::BTN_Yes' has a wrong offset!");
static_assert(offsetof(UFaction_Popup_YesNoPrompt_C, DATA_Content) == 0x0002E0, "Member 'UFaction_Popup_YesNoPrompt_C::DATA_Content' has a wrong offset!");
static_assert(offsetof(UFaction_Popup_YesNoPrompt_C, DATA_Header) == 0x0002E8, "Member 'UFaction_Popup_YesNoPrompt_C::DATA_Header' has a wrong offset!");
static_assert(offsetof(UFaction_Popup_YesNoPrompt_C, DiscordMoreInfo) == 0x0002F0, "Member 'UFaction_Popup_YesNoPrompt_C::DiscordMoreInfo' has a wrong offset!");
static_assert(offsetof(UFaction_Popup_YesNoPrompt_C, TextBlock_1) == 0x0002F8, "Member 'UFaction_Popup_YesNoPrompt_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UFaction_Popup_YesNoPrompt_C, TextBlock_2) == 0x000300, "Member 'UFaction_Popup_YesNoPrompt_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UFaction_Popup_YesNoPrompt_C, TextBlock_3) == 0x000308, "Member 'UFaction_Popup_YesNoPrompt_C::TextBlock_3' has a wrong offset!");
static_assert(offsetof(UFaction_Popup_YesNoPrompt_C, UI_HorizontalResourceBar) == 0x000310, "Member 'UFaction_Popup_YesNoPrompt_C::UI_HorizontalResourceBar' has a wrong offset!");

}
