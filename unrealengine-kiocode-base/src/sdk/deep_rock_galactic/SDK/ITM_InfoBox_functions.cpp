#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_InfoBox

#include "Basic.hpp"

#include "ITM_InfoBox_classes.hpp"
#include "ITM_InfoBox_parameters.hpp"


namespace SDK
{

// Function ITM_InfoBox.ITM_InfoBox_C.SetOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOpen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_InfoBox_C::SetOpen(bool IsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_InfoBox_C", "SetOpen");

	Params::ITM_InfoBox_C_SetOpen Parms{};

	Parms.IsOpen = IsOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_InfoBox.ITM_InfoBox_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// ENU_TextCase                            InText_Case                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_InfoBox_C::SetText(const class FText& InText, ENU_TextCase InText_Case)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_InfoBox_C", "SetText");

	Params::ITM_InfoBox_C_SetText Parms{};

	Parms.InText = std::move(InText);
	Parms.InText_Case = InText_Case;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_InfoBox.ITM_InfoBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_InfoBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_InfoBox_C", "PreConstruct");

	Params::ITM_InfoBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_InfoBox.ITM_InfoBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_InfoBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_InfoBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_InfoBox_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_InfoBox_C", "BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_InfoBox_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_InfoBox_C", "BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_InfoBox_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_InfoBox_C", "BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_InfoBox.ITM_InfoBox_C.ExecuteUbergraph_ITM_InfoBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_InfoBox_C::ExecuteUbergraph_ITM_InfoBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_InfoBox_C", "ExecuteUbergraph_ITM_InfoBox");

	Params::ITM_InfoBox_C_ExecuteUbergraph_ITM_InfoBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
