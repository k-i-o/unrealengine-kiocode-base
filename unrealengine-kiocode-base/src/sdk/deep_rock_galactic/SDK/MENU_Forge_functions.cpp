#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MENU_Forge

#include "Basic.hpp"

#include "MENU_Forge_classes.hpp"
#include "MENU_Forge_parameters.hpp"


namespace SDK
{

// Function MENU_Forge.MENU_Forge_C.SetCursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_Forge_C::SetCursorVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "SetCursorVisible");

	Params::MENU_Forge_C_SetCursorVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UMENU_Forge_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "OnMouseButtonUp");

	Params::MENU_Forge_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MENU_Forge.MENU_Forge_C.ToggleMasteryBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    AllowClaimButton                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_Forge_C::ToggleMasteryBar(bool Visible, bool AllowClaimButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "ToggleMasteryBar");

	Params::MENU_Forge_C_ToggleMasteryBar Parms{};

	Parms.Visible = Visible;
	Parms.AllowClaimButton = AllowClaimButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.Forge Schematic
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Forge_Schematic_C*            InSchematic                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_Forge_C::Forge_Schematic(class UUI_Forge_Schematic_C* InSchematic, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "Forge Schematic");

	Params::MENU_Forge_C_Forge_Schematic Parms{};

	Parms.InSchematic = InSchematic;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function MENU_Forge.MENU_Forge_C.ToggleSelectionList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_Forge_C::ToggleSelectionList(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "ToggleSelectionList");

	Params::MENU_Forge_C_ToggleSelectionList Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.IncreaseCraftingStat
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_Forge_C::IncreaseCraftingStat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "IncreaseCraftingStat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.SetHeader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UMENU_Forge_C::SetHeader(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "SetHeader");

	Params::MENU_Forge_C_SetHeader Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.ShowSkipButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_Forge_C::ShowSkipButton(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "ShowSkipButton");

	Params::MENU_Forge_C_ShowSkipButton Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UMENU_Forge_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "OnKeyUp");

	Params::MENU_Forge_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MENU_Forge.MENU_Forge_C.ShowList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    History                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Force_Rebuild                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_Forge_C::ShowList(bool History, bool Force_Rebuild)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "ShowList");

	Params::MENU_Forge_C_ShowList Parms{};

	Parms.History = History;
	Parms.Force_Rebuild = Force_Rebuild;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.ShowItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Forge_Schematic_C*            Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_Forge_C::ShowItem(class UUI_Forge_Schematic_C* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "ShowItem");

	Params::MENU_Forge_C_ShowItem Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.UpdateLevelProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Animate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_Forge_C::UpdateLevelProgress(bool Animate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "UpdateLevelProgress");

	Params::MENU_Forge_C_UpdateLevelProgress Parms{};

	Parms.Animate = Animate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Forge_Schematic_C*            Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_Forge_C::BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature(class UUI_Forge_Schematic_C* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature");

	Params::MENU_Forge_C_BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.OnShown
// (Event, Protected, BlueprintEvent)

void UMENU_Forge_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "OnShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.OnForgingXPChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   XP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_Forge_C::OnForgingXPChanged_Event(float XP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "OnForgingXPChanged_Event");

	Params::MENU_Forge_C_OnForgingXPChanged_Event Parms{};

	Parms.XP = XP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.ForgeDone
// (BlueprintCallable, BlueprintEvent)

void UMENU_Forge_C::ForgeDone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "ForgeDone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// uint8                                   Reward                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_Forge_C::BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature(uint8 Reward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature");

	Params::MENU_Forge_C_BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature Parms{};

	Parms.Reward = Reward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.Display Pending Mastery Reward
// (BlueprintCallable, BlueprintEvent)

void UMENU_Forge_C::Display_Pending_Mastery_Reward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "Display Pending Mastery Reward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMENU_Forge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_Forge_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "PreConstruct");

	Params::MENU_Forge_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.ShoutLocally
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDialogDataAsset*                 ShoutData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_Forge_C::ShoutLocally(float Delay, class UDialogDataAsset* ShoutData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "ShoutLocally");

	Params::MENU_Forge_C_ShoutLocally Parms{};

	Parms.Delay = Delay;
	Parms.ShoutData = ShoutData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.ShoutLocallySoftPtr
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UDialogDataAsset>  ShoutData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UMENU_Forge_C::ShoutLocallySoftPtr(float Delay, TSoftObjectPtr<class UDialogDataAsset> ShoutData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "ShoutLocallySoftPtr");

	Params::MENU_Forge_C_ShoutLocallySoftPtr Parms{};

	Parms.Delay = Delay;
	Parms.ShoutData = ShoutData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.OnClosed
// (Event, Protected, BlueprintEvent)

void UMENU_Forge_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "OnClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__ButtonSkip_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__ButtonSkip_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "BndEvt__ButtonSkip_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__MENU_Forge_Forge_Rewards_Selector_K2Node_ComponentBoundEvent_5_OnRewardSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USchematic*                       InReward                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_Forge_C::BndEvt__MENU_Forge_Forge_Rewards_Selector_K2Node_ComponentBoundEvent_5_OnRewardSelected__DelegateSignature(class USchematic* InReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "BndEvt__MENU_Forge_Forge_Rewards_Selector_K2Node_ComponentBoundEvent_5_OnRewardSelected__DelegateSignature");

	Params::MENU_Forge_C_BndEvt__MENU_Forge_Forge_Rewards_Selector_K2Node_ComponentBoundEvent_5_OnRewardSelected__DelegateSignature Parms{};

	Parms.InReward = InReward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.FinishMasteryReward
// (BlueprintCallable, BlueprintEvent)

void UMENU_Forge_C::FinishMasteryReward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "FinishMasteryReward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__MENU_Forge_UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_10_OnClaimClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_Forge_C::BndEvt__MENU_Forge_UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_10_OnClaimClicked__DelegateSignature(int32 InLevel, int32 InSeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "BndEvt__MENU_Forge_UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_10_OnClaimClicked__DelegateSignature");

	Params::MENU_Forge_C_BndEvt__MENU_Forge_UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_10_OnClaimClicked__DelegateSignature Parms{};

	Parms.InLevel = InLevel;
	Parms.InSeed = InSeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.ExecuteUbergraph_MENU_Forge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_Forge_C::ExecuteUbergraph_MENU_Forge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "ExecuteUbergraph_MENU_Forge");

	Params::MENU_Forge_C_ExecuteUbergraph_MENU_Forge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.ToggleItemPopUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_Forge_C::ToggleItemPopUp(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "ToggleItemPopUp");

	Params::MENU_Forge_C_ToggleItemPopUp Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_Forge.MENU_Forge_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_Forge_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_Forge_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

}

