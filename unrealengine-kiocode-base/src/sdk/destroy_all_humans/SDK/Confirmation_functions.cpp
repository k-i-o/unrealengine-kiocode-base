#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Confirmation

#include "Basic.hpp"

#include "Confirmation_classes.hpp"
#include "Confirmation_parameters.hpp"


namespace SDK
{

// Function Confirmation.Confirmation_C.BndEvt__Confirmation_NoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmation_C::BndEvt__Confirmation_NoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Confirmation_C", "BndEvt__Confirmation_NoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Confirmation.Confirmation_C.BndEvt__Confirmation_NoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmation_C::BndEvt__Confirmation_NoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Confirmation_C", "BndEvt__Confirmation_NoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Confirmation.Confirmation_C.BndEvt__Confirmation_YesButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmation_C::BndEvt__Confirmation_YesButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Confirmation_C", "BndEvt__Confirmation_YesButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Confirmation.Confirmation_C.BndEvt__Confirmation_YesButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmation_C::BndEvt__Confirmation_YesButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Confirmation_C", "BndEvt__Confirmation_YesButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Confirmation.Confirmation_C.ExecuteUbergraph_Confirmation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfirmation_C::ExecuteUbergraph_Confirmation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Confirmation_C", "ExecuteUbergraph_Confirmation");

	Params::Confirmation_C_ExecuteUbergraph_Confirmation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Confirmation.Confirmation_C.TranslateThis
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALanguageManager_C*               LanManager                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UConfirmation_C::TranslateThis(class ALanguageManager_C* LanManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Confirmation_C", "TranslateThis");

	Params::Confirmation_C_TranslateThis Parms{};

	Parms.LanManager = LanManager;

	UObject::ProcessEvent(Func, &Parms);
}

}
