#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Popup_ReconnectController

#include "Basic.hpp"

#include "Popup_ReconnectController_classes.hpp"
#include "Popup_ReconnectController_parameters.hpp"


namespace SDK
{

// Function Popup_ReconnectController.Popup_ReconnectController_C.ExecuteUbergraph_Popup_ReconnectController
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopup_ReconnectController_C::ExecuteUbergraph_Popup_ReconnectController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_ReconnectController_C", "ExecuteUbergraph_Popup_ReconnectController");

	Params::Popup_ReconnectController_C_ExecuteUbergraph_Popup_ReconnectController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Popup_ReconnectController.Popup_ReconnectController_C.Close
// (BlueprintCallable, BlueprintEvent)

void UPopup_ReconnectController_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_ReconnectController_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_ReconnectController.Popup_ReconnectController_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)

void UPopup_ReconnectController_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_ReconnectController_C", "BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_ReconnectController.Popup_ReconnectController_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UPopup_ReconnectController_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_ReconnectController_C", "OnKeyUp");

	Params::Popup_ReconnectController_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
