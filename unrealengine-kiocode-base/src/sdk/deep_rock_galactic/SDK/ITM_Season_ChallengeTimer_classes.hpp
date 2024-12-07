#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Season_ChallengeTimer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C
// 0x0060 (0x02C0 - 0x0260)
class UITM_Season_ChallengeTimer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       RotateHourGlass;                                   // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHover;                                           // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_Outer;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 I_Background;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 I_Outline;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Timeglass;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_TimeText_C*                        ITM_TimeText;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Outer;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ChallengeText;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ShouldGetNewChallenge;                             // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ShouldGetNewChallenge__DelegateSignature();
	void ExecuteUbergraph_ITM_Season_ChallengeTimer(int32 EntryPoint);
	void UpdateTime();
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_Season_ChallengeTimer_C">();
	}
	static class UITM_Season_ChallengeTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_Season_ChallengeTimer_C>();
	}
};
static_assert(alignof(UITM_Season_ChallengeTimer_C) == 0x000008, "Wrong alignment on UITM_Season_ChallengeTimer_C");
static_assert(sizeof(UITM_Season_ChallengeTimer_C) == 0x0002C0, "Wrong size on UITM_Season_ChallengeTimer_C");
static_assert(offsetof(UITM_Season_ChallengeTimer_C, UberGraphFrame) == 0x000260, "Member 'UITM_Season_ChallengeTimer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_Season_ChallengeTimer_C, RotateHourGlass) == 0x000268, "Member 'UITM_Season_ChallengeTimer_C::RotateHourGlass' has a wrong offset!");
static_assert(offsetof(UITM_Season_ChallengeTimer_C, OnHover) == 0x000270, "Member 'UITM_Season_ChallengeTimer_C::OnHover' has a wrong offset!");
static_assert(offsetof(UITM_Season_ChallengeTimer_C, Button_Outer) == 0x000278, "Member 'UITM_Season_ChallengeTimer_C::Button_Outer' has a wrong offset!");
static_assert(offsetof(UITM_Season_ChallengeTimer_C, I_Background) == 0x000280, "Member 'UITM_Season_ChallengeTimer_C::I_Background' has a wrong offset!");
static_assert(offsetof(UITM_Season_ChallengeTimer_C, I_Outline) == 0x000288, "Member 'UITM_Season_ChallengeTimer_C::I_Outline' has a wrong offset!");
static_assert(offsetof(UITM_Season_ChallengeTimer_C, Image_Timeglass) == 0x000290, "Member 'UITM_Season_ChallengeTimer_C::Image_Timeglass' has a wrong offset!");
static_assert(offsetof(UITM_Season_ChallengeTimer_C, ITM_TimeText) == 0x000298, "Member 'UITM_Season_ChallengeTimer_C::ITM_TimeText' has a wrong offset!");
static_assert(offsetof(UITM_Season_ChallengeTimer_C, Overlay_Outer) == 0x0002A0, "Member 'UITM_Season_ChallengeTimer_C::Overlay_Outer' has a wrong offset!");
static_assert(offsetof(UITM_Season_ChallengeTimer_C, TextBlock_ChallengeText) == 0x0002A8, "Member 'UITM_Season_ChallengeTimer_C::TextBlock_ChallengeText' has a wrong offset!");
static_assert(offsetof(UITM_Season_ChallengeTimer_C, ShouldGetNewChallenge) == 0x0002B0, "Member 'UITM_Season_ChallengeTimer_C::ShouldGetNewChallenge' has a wrong offset!");

}

