#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Challenge_InfoBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C
// 0x0080 (0x02E0 - 0x0260)
class UITM_Challenge_InfoBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ClickAnim;                                         // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Solid;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BTN_Info;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Arrow;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             Grid_Challenges;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               InfoOverlay;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_ChallengeIcon;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Challenges;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SBOX_ButtonGFX;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsOpen;                                            // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C7A[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChallengeHovered;                                // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnChallengeHovered__DelegateSignature(TArray<class UObject*>& AssetReferences, bool InHovered, class USeasonChallenge* Challenge);
	void ExecuteUbergraph_ITM_Challenge_InfoBox(int32 EntryPoint);
	void Click();
	void Construct();
	void OnChallengeHover(bool Param_IsHovered, int32 Param_Index);
	void BndEvt__Button_Arrow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void RefreshChallenges();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetOpen(bool InIsOpen);
	void AddChallengeToGrid(const struct FChallengeInfo& ChallengeInfo, int32 Column, class UItm_SeasonChallenge_Small_C** W_Challenge);
	void OnNewChallenge();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_Challenge_InfoBox_C">();
	}
	static class UITM_Challenge_InfoBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_Challenge_InfoBox_C>();
	}
};
static_assert(alignof(UITM_Challenge_InfoBox_C) == 0x000008, "Wrong alignment on UITM_Challenge_InfoBox_C");
static_assert(sizeof(UITM_Challenge_InfoBox_C) == 0x0002E0, "Wrong size on UITM_Challenge_InfoBox_C");
static_assert(offsetof(UITM_Challenge_InfoBox_C, UberGraphFrame) == 0x000260, "Member 'UITM_Challenge_InfoBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, HoverAnim) == 0x000268, "Member 'UITM_Challenge_InfoBox_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, ClickAnim) == 0x000270, "Member 'UITM_Challenge_InfoBox_C::ClickAnim' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, Basic_Menu_ColorBar) == 0x000278, "Member 'UITM_Challenge_InfoBox_C::Basic_Menu_ColorBar' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, BG_Solid) == 0x000280, "Member 'UITM_Challenge_InfoBox_C::BG_Solid' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, BTN_Info) == 0x000288, "Member 'UITM_Challenge_InfoBox_C::BTN_Info' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, Button_Arrow) == 0x000290, "Member 'UITM_Challenge_InfoBox_C::Button_Arrow' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, Grid_Challenges) == 0x000298, "Member 'UITM_Challenge_InfoBox_C::Grid_Challenges' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, Image_BG) == 0x0002A0, "Member 'UITM_Challenge_InfoBox_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, InfoOverlay) == 0x0002A8, "Member 'UITM_Challenge_InfoBox_C::InfoOverlay' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, Overlay_ChallengeIcon) == 0x0002B0, "Member 'UITM_Challenge_InfoBox_C::Overlay_ChallengeIcon' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, Overlay_Challenges) == 0x0002B8, "Member 'UITM_Challenge_InfoBox_C::Overlay_Challenges' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, SBOX_ButtonGFX) == 0x0002C0, "Member 'UITM_Challenge_InfoBox_C::SBOX_ButtonGFX' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, IsOpen) == 0x0002C8, "Member 'UITM_Challenge_InfoBox_C::IsOpen' has a wrong offset!");
static_assert(offsetof(UITM_Challenge_InfoBox_C, OnChallengeHovered) == 0x0002D0, "Member 'UITM_Challenge_InfoBox_C::OnChallengeHovered' has a wrong offset!");

}

