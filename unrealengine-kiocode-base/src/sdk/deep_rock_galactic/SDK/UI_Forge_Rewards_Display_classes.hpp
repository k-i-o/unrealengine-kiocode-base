#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Forge_Rewards_Display

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C
// 0x0038 (0x0298 - 0x0260)
class UUI_Forge_Rewards_Display_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIntro;                                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UITM_BigButton_C*                       ContinueButton;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoiseImage;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Forge_Details_C*                    UI_Forge_Details;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFinished;                                        // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Construct();
	void OnIntroStarted();
	void OnIntroFinished();
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ClickContinue();
	void ExecuteUbergraph_UI_Forge_Rewards_Display(int32 EntryPoint);
	void OnFinished__DelegateSignature();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Show(class USchematic* InSchematic);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Forge_Rewards_Display_C">();
	}
	static class UUI_Forge_Rewards_Display_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Forge_Rewards_Display_C>();
	}
};
static_assert(alignof(UUI_Forge_Rewards_Display_C) == 0x000008, "Wrong alignment on UUI_Forge_Rewards_Display_C");
static_assert(sizeof(UUI_Forge_Rewards_Display_C) == 0x000298, "Wrong size on UUI_Forge_Rewards_Display_C");
static_assert(offsetof(UUI_Forge_Rewards_Display_C, UberGraphFrame) == 0x000260, "Member 'UUI_Forge_Rewards_Display_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Forge_Rewards_Display_C, AnimIntro) == 0x000268, "Member 'UUI_Forge_Rewards_Display_C::AnimIntro' has a wrong offset!");
static_assert(offsetof(UUI_Forge_Rewards_Display_C, ContinueButton) == 0x000270, "Member 'UUI_Forge_Rewards_Display_C::ContinueButton' has a wrong offset!");
static_assert(offsetof(UUI_Forge_Rewards_Display_C, NoiseImage) == 0x000278, "Member 'UUI_Forge_Rewards_Display_C::NoiseImage' has a wrong offset!");
static_assert(offsetof(UUI_Forge_Rewards_Display_C, UI_Forge_Details) == 0x000280, "Member 'UUI_Forge_Rewards_Display_C::UI_Forge_Details' has a wrong offset!");
static_assert(offsetof(UUI_Forge_Rewards_Display_C, OnFinished) == 0x000288, "Member 'UUI_Forge_Rewards_Display_C::OnFinished' has a wrong offset!");

}
