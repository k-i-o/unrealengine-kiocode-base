#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_FlatButton

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Basic_FlatButton.Basic_FlatButton_C
// 0x00D8 (0x0338 - 0x0260)
class UBasic_FlatButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                             ButtonContent;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ButtonSizeBox;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonText;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ButtonWidget;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0288(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          UpperCase;                                         // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          AutoWrapText;                                      // 0x02A1(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3A6B[0x2];                                     // 0x02A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FontSize;                                          // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateFontInfo                         Font;                                              // 0x02B8(0x0058)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, HasGetValueTypeHash)
	ENUM_MenuColors                               Color_Base;                                        // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               Color_Hover;                                       // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               Font_Color;                                        // 0x0312(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               Font_Hover_Color;                                  // 0x0313(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSizeBoxSettings                       SizeSettings;                                      // 0x0314(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)

public:
	void OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button);
	void ExecuteUbergraph_Basic_FlatButton(int32 EntryPoint);
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Set_Font_Size(int32 Param_FontSize);
	void Set_Text(const class FText& Param_Text, bool Param_UpperCase);
	void PreConstruct(bool IsDesignTime);
	void CreateMenuStyle(ENUM_MenuColors ColorSelector, struct FSlateBrush* SlateBrush);
	void SetStyle(ENUM_MenuColors InBaseColor, ENUM_MenuColors InHoverColor, ENUM_MenuColors InTextColor, ENUM_MenuColors InTextHoverColor);

	bool IsInteractable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Basic_FlatButton_C">();
	}
	static class UBasic_FlatButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasic_FlatButton_C>();
	}
};
static_assert(alignof(UBasic_FlatButton_C) == 0x000008, "Wrong alignment on UBasic_FlatButton_C");
static_assert(sizeof(UBasic_FlatButton_C) == 0x000338, "Wrong size on UBasic_FlatButton_C");
static_assert(offsetof(UBasic_FlatButton_C, UberGraphFrame) == 0x000260, "Member 'UBasic_FlatButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, ButtonContent) == 0x000268, "Member 'UBasic_FlatButton_C::ButtonContent' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, ButtonSizeBox) == 0x000270, "Member 'UBasic_FlatButton_C::ButtonSizeBox' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, ButtonText) == 0x000278, "Member 'UBasic_FlatButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, ButtonWidget) == 0x000280, "Member 'UBasic_FlatButton_C::ButtonWidget' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, Text) == 0x000288, "Member 'UBasic_FlatButton_C::Text' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, UpperCase) == 0x0002A0, "Member 'UBasic_FlatButton_C::UpperCase' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, AutoWrapText) == 0x0002A1, "Member 'UBasic_FlatButton_C::AutoWrapText' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, FontSize) == 0x0002A4, "Member 'UBasic_FlatButton_C::FontSize' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, OnClicked) == 0x0002A8, "Member 'UBasic_FlatButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, Font) == 0x0002B8, "Member 'UBasic_FlatButton_C::Font' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, Color_Base) == 0x000310, "Member 'UBasic_FlatButton_C::Color_Base' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, Color_Hover) == 0x000311, "Member 'UBasic_FlatButton_C::Color_Hover' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, Font_Color) == 0x000312, "Member 'UBasic_FlatButton_C::Font_Color' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, Font_Hover_Color) == 0x000313, "Member 'UBasic_FlatButton_C::Font_Hover_Color' has a wrong offset!");
static_assert(offsetof(UBasic_FlatButton_C, SizeSettings) == 0x000314, "Member 'UBasic_FlatButton_C::SizeSettings' has a wrong offset!");

}
