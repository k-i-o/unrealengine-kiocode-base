#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MENU_LockedTemplate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MENU_LockedTemplate.MENU_LockedTemplate_C
// 0x0070 (0x02D0 - 0x0260)
class UMENU_LockedTemplate_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLock;                                          // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNamedSlot*                             BodySlot;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         BodyText;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               CloseButton;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeaderText;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLock;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_MenuBackground_C*                  ITM_MenuBackground;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobby_BarTop_Countdown_C*              Lobby_BarTop_Countdown;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Locked;                                            // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BAD[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Message;                                           // 0x02B0(0x0018)(Edit, BlueprintVisible)
	class UTexture2D*                             LockIcon;                                          // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetIsUnlocked(bool* Param_Locked);
	void GetIsLocked(bool* Param_Locked);
	void RequireOnePromotedCharacter(bool* Param_Locked);
	void SetLockIcon(class UTexture2D* Texture);
	void SetMessaqe(const class FText& InText);
	void SetMenuLocked(bool IsLocked, bool* Param_Locked);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Close();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void LockAnimFinished();
	void ExecuteUbergraph_MENU_LockedTemplate(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MENU_LockedTemplate_C">();
	}
	static class UMENU_LockedTemplate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMENU_LockedTemplate_C>();
	}
};
static_assert(alignof(UMENU_LockedTemplate_C) == 0x000008, "Wrong alignment on UMENU_LockedTemplate_C");
static_assert(sizeof(UMENU_LockedTemplate_C) == 0x0002D0, "Wrong size on UMENU_LockedTemplate_C");
static_assert(offsetof(UMENU_LockedTemplate_C, UberGraphFrame) == 0x000260, "Member 'UMENU_LockedTemplate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMENU_LockedTemplate_C, AnimLock) == 0x000268, "Member 'UMENU_LockedTemplate_C::AnimLock' has a wrong offset!");
static_assert(offsetof(UMENU_LockedTemplate_C, BodySlot) == 0x000270, "Member 'UMENU_LockedTemplate_C::BodySlot' has a wrong offset!");
static_assert(offsetof(UMENU_LockedTemplate_C, BodyText) == 0x000278, "Member 'UMENU_LockedTemplate_C::BodyText' has a wrong offset!");
static_assert(offsetof(UMENU_LockedTemplate_C, CloseButton) == 0x000280, "Member 'UMENU_LockedTemplate_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UMENU_LockedTemplate_C, HeaderText) == 0x000288, "Member 'UMENU_LockedTemplate_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UMENU_LockedTemplate_C, ImageLock) == 0x000290, "Member 'UMENU_LockedTemplate_C::ImageLock' has a wrong offset!");
static_assert(offsetof(UMENU_LockedTemplate_C, ITM_MenuBackground) == 0x000298, "Member 'UMENU_LockedTemplate_C::ITM_MenuBackground' has a wrong offset!");
static_assert(offsetof(UMENU_LockedTemplate_C, Lobby_BarTop_Countdown) == 0x0002A0, "Member 'UMENU_LockedTemplate_C::Lobby_BarTop_Countdown' has a wrong offset!");
static_assert(offsetof(UMENU_LockedTemplate_C, Locked) == 0x0002A8, "Member 'UMENU_LockedTemplate_C::Locked' has a wrong offset!");
static_assert(offsetof(UMENU_LockedTemplate_C, Message) == 0x0002B0, "Member 'UMENU_LockedTemplate_C::Message' has a wrong offset!");
static_assert(offsetof(UMENU_LockedTemplate_C, LockIcon) == 0x0002C8, "Member 'UMENU_LockedTemplate_C::LockIcon' has a wrong offset!");

}
