#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MoreOptions

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MoreOptions.MoreOptions_C
// 0x0040 (0x02A0 - 0x0260)
class UMoreOptions_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                HeistCoins;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Invite;                                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             InviteText;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             InviteText_1;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Jointext;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                TutorialsButton;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ViewProfile;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MoreOptions(int32 EntryPoint);
	void BndEvt__MoreOptions_TutorialsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MoreOptions_JoinGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MoreOptions_ViewProfile_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MoreOptions_Invite_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseCaptureLost();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MoreOptions_C">();
	}
	static class UMoreOptions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoreOptions_C>();
	}
};
static_assert(alignof(UMoreOptions_C) == 0x000008, "Wrong alignment on UMoreOptions_C");
static_assert(sizeof(UMoreOptions_C) == 0x0002A0, "Wrong size on UMoreOptions_C");
static_assert(offsetof(UMoreOptions_C, UberGraphFrame) == 0x000260, "Member 'UMoreOptions_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMoreOptions_C, HeistCoins) == 0x000268, "Member 'UMoreOptions_C::HeistCoins' has a wrong offset!");
static_assert(offsetof(UMoreOptions_C, Invite) == 0x000270, "Member 'UMoreOptions_C::Invite' has a wrong offset!");
static_assert(offsetof(UMoreOptions_C, InviteText) == 0x000278, "Member 'UMoreOptions_C::InviteText' has a wrong offset!");
static_assert(offsetof(UMoreOptions_C, InviteText_1) == 0x000280, "Member 'UMoreOptions_C::InviteText_1' has a wrong offset!");
static_assert(offsetof(UMoreOptions_C, Jointext) == 0x000288, "Member 'UMoreOptions_C::Jointext' has a wrong offset!");
static_assert(offsetof(UMoreOptions_C, TutorialsButton) == 0x000290, "Member 'UMoreOptions_C::TutorialsButton' has a wrong offset!");
static_assert(offsetof(UMoreOptions_C, ViewProfile) == 0x000298, "Member 'UMoreOptions_C::ViewProfile' has a wrong offset!");

}
