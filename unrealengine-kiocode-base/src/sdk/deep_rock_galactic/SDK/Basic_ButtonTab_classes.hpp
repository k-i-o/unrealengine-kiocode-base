#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_ButtonTab

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Basic_ButtonTab.Basic_ButtonTab_C
// 0x00F8 (0x0358 - 0x0260)
class UBasic_ButtonTab_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Background;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_headerText;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconRight;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Outline;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   HeaderText;                                        // 0x0290(0x0018)(Edit, BlueprintVisible)
	bool                                          Clicked;                                           // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A5B[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Toggled;                                           // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A5C[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            IconRightBrush;                                    // 0x02C8(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          IconRightVisible;                                  // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnClicked__DelegateSignature();
	void ExecuteUbergraph_Basic_ButtonTab(int32 EntryPoint);
	void SilentToggle(bool On);
	void UpdateLook();
	void Toggle(bool On);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetIconRight(const struct FSlateBrush& Brush);
	void SetIconRightVisible(bool Param_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Basic_ButtonTab_C">();
	}
	static class UBasic_ButtonTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasic_ButtonTab_C>();
	}
};
static_assert(alignof(UBasic_ButtonTab_C) == 0x000008, "Wrong alignment on UBasic_ButtonTab_C");
static_assert(sizeof(UBasic_ButtonTab_C) == 0x000358, "Wrong size on UBasic_ButtonTab_C");
static_assert(offsetof(UBasic_ButtonTab_C, UberGraphFrame) == 0x000260, "Member 'UBasic_ButtonTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonTab_C, Background) == 0x000268, "Member 'UBasic_ButtonTab_C::Background' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonTab_C, Button_0) == 0x000270, "Member 'UBasic_ButtonTab_C::Button_0' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonTab_C, DATA_headerText) == 0x000278, "Member 'UBasic_ButtonTab_C::DATA_headerText' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonTab_C, IconRight) == 0x000280, "Member 'UBasic_ButtonTab_C::IconRight' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonTab_C, Image_Outline) == 0x000288, "Member 'UBasic_ButtonTab_C::Image_Outline' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonTab_C, HeaderText) == 0x000290, "Member 'UBasic_ButtonTab_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonTab_C, Clicked) == 0x0002A8, "Member 'UBasic_ButtonTab_C::Clicked' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonTab_C, OnClicked) == 0x0002B0, "Member 'UBasic_ButtonTab_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonTab_C, Toggled) == 0x0002C0, "Member 'UBasic_ButtonTab_C::Toggled' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonTab_C, IconRightBrush) == 0x0002C8, "Member 'UBasic_ButtonTab_C::IconRightBrush' has a wrong offset!");
static_assert(offsetof(UBasic_ButtonTab_C, IconRightVisible) == 0x000350, "Member 'UBasic_ButtonTab_C::IconRightVisible' has a wrong offset!");

}

