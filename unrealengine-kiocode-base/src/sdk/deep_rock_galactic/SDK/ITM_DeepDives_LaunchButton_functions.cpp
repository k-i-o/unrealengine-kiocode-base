#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DeepDives_LaunchButton

#include "Basic.hpp"

#include "ITM_DeepDives_LaunchButton_classes.hpp"
#include "ITM_DeepDives_LaunchButton_parameters.hpp"


namespace SDK
{

// Function ITM_DeepDives_LaunchButton.ITM_DeepDives_LaunchButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_LaunchButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_LaunchButton_C", "PreConstruct");

	Params::ITM_DeepDives_LaunchButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_LaunchButton.ITM_DeepDives_LaunchButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_LaunchButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_LaunchButton_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_LaunchButton.ITM_DeepDives_LaunchButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_LaunchButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_LaunchButton_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_LaunchButton.ITM_DeepDives_LaunchButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_LaunchButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_LaunchButton_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_LaunchButton.ITM_DeepDives_LaunchButton_C.Click
// (BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_LaunchButton_C::Click()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_LaunchButton_C", "Click");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_LaunchButton.ITM_DeepDives_LaunchButton_C.ExecuteUbergraph_ITM_DeepDives_LaunchButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_LaunchButton_C::ExecuteUbergraph_ITM_DeepDives_LaunchButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_LaunchButton_C", "ExecuteUbergraph_ITM_DeepDives_LaunchButton");

	Params::ITM_DeepDives_LaunchButton_C_ExecuteUbergraph_ITM_DeepDives_LaunchButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_LaunchButton.ITM_DeepDives_LaunchButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_LaunchButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_LaunchButton_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}
