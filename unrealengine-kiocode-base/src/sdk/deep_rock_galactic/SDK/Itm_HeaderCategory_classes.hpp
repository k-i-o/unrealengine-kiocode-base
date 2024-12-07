#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Itm_HeaderCategory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Itm_HeaderCategory.Itm_HeaderCategory_C
// 0x0078 (0x02D8 - 0x0260)
class UItm_HeaderCategory_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Main;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonText;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Filled_Left;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Filled_Middle;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Filled_Right;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Outline_Left;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Outline_Middle;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Outline_Right;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x02A8(0x0018)(Edit, BlueprintVisible)
	bool                                          IsSelected;                                        // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseFlatLeftside;                                   // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BC0[0x6];                                     // 0x02C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature();
	void ExecuteUbergraph_Itm_HeaderCategory(int32 EntryPoint);
	void SetText(const class FText& Param_Text);
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetColor(const struct FSlateColor& Filled, const struct FSlateColor& Outline, const struct FSlateColor& Param_Text);
	void SetSelected(bool Param_IsSelected);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Itm_HeaderCategory_C">();
	}
	static class UItm_HeaderCategory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItm_HeaderCategory_C>();
	}
};
static_assert(alignof(UItm_HeaderCategory_C) == 0x000008, "Wrong alignment on UItm_HeaderCategory_C");
static_assert(sizeof(UItm_HeaderCategory_C) == 0x0002D8, "Wrong size on UItm_HeaderCategory_C");
static_assert(offsetof(UItm_HeaderCategory_C, UberGraphFrame) == 0x000260, "Member 'UItm_HeaderCategory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItm_HeaderCategory_C, Button_Main) == 0x000268, "Member 'UItm_HeaderCategory_C::Button_Main' has a wrong offset!");
static_assert(offsetof(UItm_HeaderCategory_C, ButtonText) == 0x000270, "Member 'UItm_HeaderCategory_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UItm_HeaderCategory_C, Filled_Left) == 0x000278, "Member 'UItm_HeaderCategory_C::Filled_Left' has a wrong offset!");
static_assert(offsetof(UItm_HeaderCategory_C, Filled_Middle) == 0x000280, "Member 'UItm_HeaderCategory_C::Filled_Middle' has a wrong offset!");
static_assert(offsetof(UItm_HeaderCategory_C, Filled_Right) == 0x000288, "Member 'UItm_HeaderCategory_C::Filled_Right' has a wrong offset!");
static_assert(offsetof(UItm_HeaderCategory_C, Outline_Left) == 0x000290, "Member 'UItm_HeaderCategory_C::Outline_Left' has a wrong offset!");
static_assert(offsetof(UItm_HeaderCategory_C, Outline_Middle) == 0x000298, "Member 'UItm_HeaderCategory_C::Outline_Middle' has a wrong offset!");
static_assert(offsetof(UItm_HeaderCategory_C, Outline_Right) == 0x0002A0, "Member 'UItm_HeaderCategory_C::Outline_Right' has a wrong offset!");
static_assert(offsetof(UItm_HeaderCategory_C, Text) == 0x0002A8, "Member 'UItm_HeaderCategory_C::Text' has a wrong offset!");
static_assert(offsetof(UItm_HeaderCategory_C, IsSelected) == 0x0002C0, "Member 'UItm_HeaderCategory_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UItm_HeaderCategory_C, UseFlatLeftside) == 0x0002C1, "Member 'UItm_HeaderCategory_C::UseFlatLeftside' has a wrong offset!");
static_assert(offsetof(UItm_HeaderCategory_C, OnClicked) == 0x0002C8, "Member 'UItm_HeaderCategory_C::OnClicked' has a wrong offset!");

}

