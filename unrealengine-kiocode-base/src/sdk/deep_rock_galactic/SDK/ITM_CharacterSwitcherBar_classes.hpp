#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_CharacterSwitcherBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C
// 0x00A0 (0x0300 - 0x0260)
class UITM_CharacterSwitcherBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar;                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar_0;                             // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_Switch;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_CharacterLevel;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_ClassName;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                HeaderBG;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_ItemUnlockedIcon_C*                ITM_ItemUnlockedIcon;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ScrollArrow_C*                   ScrollLeft;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ScrollArrow_C*                   ScrollRight;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AdvancedLabel_C*                    UI_AdvancedLabel;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AdvancedLabel_C*                    UI_AdvancedLabel_164;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   HeaderText;                                        // 0x02C8(0x0018)(Edit, BlueprintVisible)
	class UPlayerCharacterID*                     CurrentCharacter;                                  // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCharacterChanged;                                // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ECharselectionCameraLocation                  SelectionType;                                     // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCharacterChanged__DelegateSignature(class UClass* Character);
	void ExecuteUbergraph_ITM_CharacterSwitcherBar(int32 EntryPoint);
	void UpdateNotification();
	void BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void CharacterChanged(TSubclassOf<class APlayerCharacter> NewCharacter);
	void Construct();
	void SwitchToCharacter();
	void SelectNext();
	void SelectPrev();
	void BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void SetData(class UPlayerCharacterID* Character);
	void PreConstruct(bool IsDesignTime);
	void SetCharacterInfo(class UPlayerCharacterID* PlayerClass);
	void GetNextCharacter(class UPlayerCharacterID** Character);
	void GetPrevCharacter(class UPlayerCharacterID** Character);
	void SetSwitchButtonState();
	void GotoNext(bool Next, bool Param_PlaySound);
	void CheckArmorUnlocks();
	struct FEventReply Handle_Key_Input(const struct FKeyEvent& InKeyEvent, bool* Handled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_CharacterSwitcherBar_C">();
	}
	static class UITM_CharacterSwitcherBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_CharacterSwitcherBar_C>();
	}
};
static_assert(alignof(UITM_CharacterSwitcherBar_C) == 0x000008, "Wrong alignment on UITM_CharacterSwitcherBar_C");
static_assert(sizeof(UITM_CharacterSwitcherBar_C) == 0x000300, "Wrong size on UITM_CharacterSwitcherBar_C");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, UberGraphFrame) == 0x000260, "Member 'UITM_CharacterSwitcherBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, Basic_Menu_ColorBar) == 0x000268, "Member 'UITM_CharacterSwitcherBar_C::Basic_Menu_ColorBar' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, Basic_Menu_ColorBar_0) == 0x000270, "Member 'UITM_CharacterSwitcherBar_C::Basic_Menu_ColorBar_0' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, BTN_Switch) == 0x000278, "Member 'UITM_CharacterSwitcherBar_C::BTN_Switch' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, DATA_CharacterLevel) == 0x000280, "Member 'UITM_CharacterSwitcherBar_C::DATA_CharacterLevel' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, DATA_ClassName) == 0x000288, "Member 'UITM_CharacterSwitcherBar_C::DATA_ClassName' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, HeaderBG) == 0x000290, "Member 'UITM_CharacterSwitcherBar_C::HeaderBG' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, Image_3) == 0x000298, "Member 'UITM_CharacterSwitcherBar_C::Image_3' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, ITM_ItemUnlockedIcon) == 0x0002A0, "Member 'UITM_CharacterSwitcherBar_C::ITM_ItemUnlockedIcon' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, ScrollLeft) == 0x0002A8, "Member 'UITM_CharacterSwitcherBar_C::ScrollLeft' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, ScrollRight) == 0x0002B0, "Member 'UITM_CharacterSwitcherBar_C::ScrollRight' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, UI_AdvancedLabel) == 0x0002B8, "Member 'UITM_CharacterSwitcherBar_C::UI_AdvancedLabel' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, UI_AdvancedLabel_164) == 0x0002C0, "Member 'UITM_CharacterSwitcherBar_C::UI_AdvancedLabel_164' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, HeaderText) == 0x0002C8, "Member 'UITM_CharacterSwitcherBar_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, CurrentCharacter) == 0x0002E0, "Member 'UITM_CharacterSwitcherBar_C::CurrentCharacter' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, OnCharacterChanged) == 0x0002E8, "Member 'UITM_CharacterSwitcherBar_C::OnCharacterChanged' has a wrong offset!");
static_assert(offsetof(UITM_CharacterSwitcherBar_C, SelectionType) == 0x0002F8, "Member 'UITM_CharacterSwitcherBar_C::SelectionType' has a wrong offset!");

}

