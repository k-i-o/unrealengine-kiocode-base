#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerOverviewChild

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerOverviewChild.PlayerOverviewChild_C
// 0x0030 (0x0290 - 0x0260)
class UPlayerOverviewChild_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_76;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_90;                                      // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerState*                           PlayerState;                                       // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerOverviewChild(int32 EntryPoint);
	void BndEvt__PlayerOverviewChild_Button_76_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayerOverviewChild_Button_76_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerOverviewChild_Button_76_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	class FText GetText_0();
	class FText GetText_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerOverviewChild_C">();
	}
	static class UPlayerOverviewChild_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerOverviewChild_C>();
	}
};
static_assert(alignof(UPlayerOverviewChild_C) == 0x000008, "Wrong alignment on UPlayerOverviewChild_C");
static_assert(sizeof(UPlayerOverviewChild_C) == 0x000290, "Wrong size on UPlayerOverviewChild_C");
static_assert(offsetof(UPlayerOverviewChild_C, UberGraphFrame) == 0x000260, "Member 'UPlayerOverviewChild_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerOverviewChild_C, HoverAnim) == 0x000268, "Member 'UPlayerOverviewChild_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UPlayerOverviewChild_C, Button_76) == 0x000270, "Member 'UPlayerOverviewChild_C::Button_76' has a wrong offset!");
static_assert(offsetof(UPlayerOverviewChild_C, TextBlock) == 0x000278, "Member 'UPlayerOverviewChild_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UPlayerOverviewChild_C, TextBlock_90) == 0x000280, "Member 'UPlayerOverviewChild_C::TextBlock_90' has a wrong offset!");
static_assert(offsetof(UPlayerOverviewChild_C, PlayerState) == 0x000288, "Member 'UPlayerOverviewChild_C::PlayerState' has a wrong offset!");

}
