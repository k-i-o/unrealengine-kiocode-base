#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Special_ButtonCutCorner

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C
// 0x0140 (0x03A0 - 0x0260)
class UITM_Special_ButtonCutCorner_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Background;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_LeftIcon;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Outline;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftIcon;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Icon;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Outer;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RootHorizontalBox;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Icon;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Sizer;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AdvancedLabel_C*                    UI_AdvancedLabel;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x02C0(0x0018)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   ControllerOverrideText;                            // 0x02E8(0x0018)(Edit, BlueprintVisible)
	struct FSlateFontInfo                         Font;                                              // 0x0300(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Font_Size;                                         // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Width__minimum_;                                   // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Height;                                            // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F94[0x4];                                     // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReleased;                                        // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSelected;                                        // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F95[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Icon;                                              // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               NormalColor;                                       // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               SelectedColor;                                     // 0x0399(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               IconColor;                                         // 0x039A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FlipHorizontally;                                  // 0x039B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         FrameOpacity;                                      // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnReleased__DelegateSignature();
	void ExecuteUbergraph_ITM_Special_ButtonCutCorner(int32 EntryPoint);
	void Click();
	void Update_Look();
	void SetSelected(bool Param_IsSelected);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetFontSize(int32 FontSize);
	void SetButtonText(const class FText& Text, const class FText& OverrideControllerText);
	void IsPressed(bool* Param_IsPressed);
	void SetFlipHorizontally(bool FlipButton);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_Special_ButtonCutCorner_C">();
	}
	static class UITM_Special_ButtonCutCorner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_Special_ButtonCutCorner_C>();
	}
};
static_assert(alignof(UITM_Special_ButtonCutCorner_C) == 0x000008, "Wrong alignment on UITM_Special_ButtonCutCorner_C");
static_assert(sizeof(UITM_Special_ButtonCutCorner_C) == 0x0003A0, "Wrong size on UITM_Special_ButtonCutCorner_C");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, UberGraphFrame) == 0x000260, "Member 'UITM_Special_ButtonCutCorner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, Background) == 0x000268, "Member 'UITM_Special_ButtonCutCorner_C::Background' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, Border_LeftIcon) == 0x000270, "Member 'UITM_Special_ButtonCutCorner_C::Border_LeftIcon' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, Button_0) == 0x000278, "Member 'UITM_Special_ButtonCutCorner_C::Button_0' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, Image_Outline) == 0x000280, "Member 'UITM_Special_ButtonCutCorner_C::Image_Outline' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, LeftIcon) == 0x000288, "Member 'UITM_Special_ButtonCutCorner_C::LeftIcon' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, Overlay_Icon) == 0x000290, "Member 'UITM_Special_ButtonCutCorner_C::Overlay_Icon' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, Overlay_Outer) == 0x000298, "Member 'UITM_Special_ButtonCutCorner_C::Overlay_Outer' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, RootHorizontalBox) == 0x0002A0, "Member 'UITM_Special_ButtonCutCorner_C::RootHorizontalBox' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, SizeBox_Icon) == 0x0002A8, "Member 'UITM_Special_ButtonCutCorner_C::SizeBox_Icon' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, Sizer) == 0x0002B0, "Member 'UITM_Special_ButtonCutCorner_C::Sizer' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, UI_AdvancedLabel) == 0x0002B8, "Member 'UITM_Special_ButtonCutCorner_C::UI_AdvancedLabel' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, ButtonText) == 0x0002C0, "Member 'UITM_Special_ButtonCutCorner_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, OnClicked) == 0x0002D8, "Member 'UITM_Special_ButtonCutCorner_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, ControllerOverrideText) == 0x0002E8, "Member 'UITM_Special_ButtonCutCorner_C::ControllerOverrideText' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, Font) == 0x000300, "Member 'UITM_Special_ButtonCutCorner_C::Font' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, Font_Size) == 0x000358, "Member 'UITM_Special_ButtonCutCorner_C::Font_Size' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, Width__minimum_) == 0x00035C, "Member 'UITM_Special_ButtonCutCorner_C::Width__minimum_' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, Height) == 0x000360, "Member 'UITM_Special_ButtonCutCorner_C::Height' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, OnPressed) == 0x000368, "Member 'UITM_Special_ButtonCutCorner_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, OnReleased) == 0x000378, "Member 'UITM_Special_ButtonCutCorner_C::OnReleased' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, IsSelected) == 0x000388, "Member 'UITM_Special_ButtonCutCorner_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, Icon) == 0x000390, "Member 'UITM_Special_ButtonCutCorner_C::Icon' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, NormalColor) == 0x000398, "Member 'UITM_Special_ButtonCutCorner_C::NormalColor' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, SelectedColor) == 0x000399, "Member 'UITM_Special_ButtonCutCorner_C::SelectedColor' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, IconColor) == 0x00039A, "Member 'UITM_Special_ButtonCutCorner_C::IconColor' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, FlipHorizontally) == 0x00039B, "Member 'UITM_Special_ButtonCutCorner_C::FlipHorizontally' has a wrong offset!");
static_assert(offsetof(UITM_Special_ButtonCutCorner_C, FrameOpacity) == 0x00039C, "Member 'UITM_Special_ButtonCutCorner_C::FrameOpacity' has a wrong offset!");

}
