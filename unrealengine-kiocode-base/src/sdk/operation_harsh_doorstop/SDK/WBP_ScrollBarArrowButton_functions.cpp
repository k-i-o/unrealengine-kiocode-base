#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ScrollBarArrowButton

#include "Basic.hpp"

#include "WBP_ScrollBarArrowButton_classes.hpp"
#include "WBP_ScrollBarArrowButton_parameters.hpp"


namespace SDK
{

// Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.ExecuteUbergraph_WBP_ScrollBarArrowButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScrollBarArrowButton_C::ExecuteUbergraph_WBP_ScrollBarArrowButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScrollBarArrowButton_C", "ExecuteUbergraph_WBP_ScrollBarArrowButton");

	Params::WBP_ScrollBarArrowButton_C_ExecuteUbergraph_WBP_ScrollBarArrowButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ScrollBarArrowButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScrollBarArrowButton_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ScrollBarArrowButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScrollBarArrowButton_C", "PreConstruct");

	Params::WBP_ScrollBarArrowButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.BndEvt__ArrowBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ScrollBarArrowButton_C::BndEvt__ArrowBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScrollBarArrowButton_C", "BndEvt__ArrowBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.SetScrollBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                       ScrollBoxToUse                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScrollBarArrowButton_C::SetScrollBox(class UScrollBox* ScrollBoxToUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScrollBarArrowButton_C", "SetScrollBox");

	Params::WBP_ScrollBarArrowButton_C_SetScrollBox Parms{};

	Parms.ScrollBoxToUse = ScrollBoxToUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.IsInitialized
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bInitialized                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ScrollBarArrowButton_C::IsInitialized(bool* bInitialized)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScrollBarArrowButton_C", "IsInitialized");

	Params::WBP_ScrollBarArrowButton_C_IsInitialized Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bInitialized != nullptr)
		*bInitialized = Parms.bInitialized;
}


// Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.GetMaxScrollOffset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   MaxOffset                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScrollBarArrowButton_C::GetMaxScrollOffset(float* MaxOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScrollBarArrowButton_C", "GetMaxScrollOffset");

	Params::WBP_ScrollBarArrowButton_C_GetMaxScrollOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaxOffset != nullptr)
		*MaxOffset = Parms.MaxOffset;
}

}

