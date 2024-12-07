#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Forge_Rewards_Display

#include "Basic.hpp"

#include "UI_Forge_Rewards_Display_classes.hpp"
#include "UI_Forge_Rewards_Display_parameters.hpp"


namespace SDK
{

// Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Forge_Rewards_Display_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Rewards_Display_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.OnIntroStarted
// (BlueprintCallable, BlueprintEvent)

void UUI_Forge_Rewards_Display_C::OnIntroStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Rewards_Display_C", "OnIntroStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.OnIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_Forge_Rewards_Display_C::OnIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Rewards_Display_C", "OnIntroFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Forge_Rewards_Display_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Rewards_Display_C", "BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.ClickContinue
// (BlueprintCallable, BlueprintEvent)

void UUI_Forge_Rewards_Display_C::ClickContinue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Rewards_Display_C", "ClickContinue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.ExecuteUbergraph_UI_Forge_Rewards_Display
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_Rewards_Display_C::ExecuteUbergraph_UI_Forge_Rewards_Display(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Rewards_Display_C", "ExecuteUbergraph_UI_Forge_Rewards_Display");

	Params::UI_Forge_Rewards_Display_C_ExecuteUbergraph_UI_Forge_Rewards_Display Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.OnFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Forge_Rewards_Display_C::OnFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Rewards_Display_C", "OnFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Forge_Rewards_Display_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Rewards_Display_C", "OnKeyUp");

	Params::UI_Forge_Rewards_Display_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic*                       InSchematic                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_Rewards_Display_C::Show(class USchematic* InSchematic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Rewards_Display_C", "Show");

	Params::UI_Forge_Rewards_Display_C_Show Parms{};

	Parms.InSchematic = InSchematic;

	UObject::ProcessEvent(Func, &Parms);
}

}

