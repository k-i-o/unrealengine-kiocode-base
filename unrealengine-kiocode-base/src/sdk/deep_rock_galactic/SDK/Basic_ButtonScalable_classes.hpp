#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_ButtonScalable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Basic_ButtonScalable.Basic_ButtonScalable_C
// 0x00B0 (0x0310 - 0x0260)
class UBasic_ButtonScalable_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               Bar_Left_Sizer;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Bar_Right_Sizer;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                BaseLeft;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                BaseMid;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                BaseRight;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Sizer;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_0;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_1;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_ButtonText;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x02B8(0x0018)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Font_Size;                                         // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Width__minimum_;                                   // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Height;                                            // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Thick_Bars;                                        // 0x02EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FB9[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReleased;                                        // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnReleased__DelegateSignature();
	void ExecuteUbergraph_Basic_ButtonScalable(int32 EntryPoint);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetFontSize(int32 FontSize);
	void SetButtonText(const class FText& Text);
	void IsPressed(bool* Param_IsPressed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Basic_ButtonScalable_C">();
	}
	static class UBasic_ButtonScalable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasic_ButtonScalable_C>();
	}
};
static_assert(alignof(UBasic_ButtonScalable_C) == 0x000008, "Wrong alignment on UBasic_ButtonScalable_C");
static_assert(sizeof(UBasic_ButtonScalable_C) == 0x000310, "Wrong size on UBasic_ButtonScalable_C");
static_assert(offsetof(UBasic_ButtonScalable_C, UberGraphFrame) == 0x000260, "Member 'UBasic_ButtonScalable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, Bar_Left_Sizer) == 0x000268, "Member 'UBasic_ButtonScalable_C::Bar_Left_Sizer' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, Bar_Right_Sizer) == 0x000270, "Member 'UBasic_ButtonScalable_C::Bar_Right_Sizer' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, BaseLeft) == 0x000278, "Member 'UBasic_ButtonScalable_C::BaseLeft' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, BaseMid) == 0x000280, "Member 'UBasic_ButtonScalable_C::BaseMid' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, BaseRight) == 0x000288, "Member 'UBasic_ButtonScalable_C::BaseRight' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, Button_0) == 0x000290, "Member 'UBasic_ButtonScalable_C::Button_0' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, Sizer) == 0x000298, "Member 'UBasic_ButtonScalable_C::Sizer' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, Spacer_0) == 0x0002A0, "Member 'UBasic_ButtonScalable_C::Spacer_0' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, Spacer_1) == 0x0002A8, "Member 'UBasic_ButtonScalable_C::Spacer_1' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, TXT_ButtonText) == 0x0002B0, "Member 'UBasic_ButtonScalable_C::TXT_ButtonText' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, ButtonText) == 0x0002B8, "Member 'UBasic_ButtonScalable_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, OnClicked) == 0x0002D0, "Member 'UBasic_ButtonScalable_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, Font_Size) == 0x0002E0, "Member 'UBasic_ButtonScalable_C::Font_Size' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, Width__minimum_) == 0x0002E4, "Member 'UBasic_ButtonScalable_C::Width__minimum_' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, Height) == 0x0002E8, "Member 'UBasic_ButtonScalable_C::Height' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, Thick_Bars) == 0x0002EC, "Member 'UBasic_ButtonScalable_C::Thick_Bars' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, OnPressed) == 0x0002F0, "Member 'UBasic_ButtonScalable_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonScalable_C, OnReleased) == 0x000300, "Member 'UBasic_ButtonScalable_C::OnReleased' has a wrong offset!");

}
