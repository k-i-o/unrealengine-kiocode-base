#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_JoinFailed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WND_JoinFailed.WND_JoinFailed_C
// 0x0038 (0x02D8 - 0x02A0)
class UWND_JoinFailed_C final : public UWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_MinimalWindow_C*            BasicWindow_Minimal;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBlurBackground_C*                      BlurBackground;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_Cancel;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DisconnectReasonText;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ErrorCode;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_128;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WND_JoinFailed(int32 EntryPoint);
	void OnShown();
	void Cancel();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnSuccess_EF9B242446B45E709293BAB20166BCB2();
	void OnFailure_EF9B242446B45E709293BAB20166BCB2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WND_JoinFailed_C">();
	}
	static class UWND_JoinFailed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWND_JoinFailed_C>();
	}
};
static_assert(alignof(UWND_JoinFailed_C) == 0x000008, "Wrong alignment on UWND_JoinFailed_C");
static_assert(sizeof(UWND_JoinFailed_C) == 0x0002D8, "Wrong size on UWND_JoinFailed_C");
static_assert(offsetof(UWND_JoinFailed_C, UberGraphFrame) == 0x0002A0, "Member 'UWND_JoinFailed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWND_JoinFailed_C, BasicWindow_Minimal) == 0x0002A8, "Member 'UWND_JoinFailed_C::BasicWindow_Minimal' has a wrong offset!");
static_assert(offsetof(UWND_JoinFailed_C, BlurBackground) == 0x0002B0, "Member 'UWND_JoinFailed_C::BlurBackground' has a wrong offset!");
static_assert(offsetof(UWND_JoinFailed_C, BTN_Cancel) == 0x0002B8, "Member 'UWND_JoinFailed_C::BTN_Cancel' has a wrong offset!");
static_assert(offsetof(UWND_JoinFailed_C, DisconnectReasonText) == 0x0002C0, "Member 'UWND_JoinFailed_C::DisconnectReasonText' has a wrong offset!");
static_assert(offsetof(UWND_JoinFailed_C, ErrorCode) == 0x0002C8, "Member 'UWND_JoinFailed_C::ErrorCode' has a wrong offset!");
static_assert(offsetof(UWND_JoinFailed_C, TextBlock_128) == 0x0002D0, "Member 'UWND_JoinFailed_C::TextBlock_128' has a wrong offset!");

}
