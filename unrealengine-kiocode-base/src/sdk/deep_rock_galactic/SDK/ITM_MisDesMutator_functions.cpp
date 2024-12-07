#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MisDesMutator

#include "Basic.hpp"

#include "ITM_MisDesMutator_classes.hpp"
#include "ITM_MisDesMutator_parameters.hpp"


namespace SDK
{

// Function ITM_MisDesMutator.ITM_MisDesMutator_C.ExecuteUbergraph_ITM_MisDesMutator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MisDesMutator_C::ExecuteUbergraph_ITM_MisDesMutator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisDesMutator_C", "ExecuteUbergraph_ITM_MisDesMutator");

	Params::ITM_MisDesMutator_C_ExecuteUbergraph_ITM_MisDesMutator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MisDesMutator.ITM_MisDesMutator_C.BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_MisDesMutator_C::BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisDesMutator_C", "BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_MisDesMutator.ITM_MisDesMutator_C.BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_MisDesMutator_C::BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisDesMutator_C", "BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_MisDesMutator.ITM_MisDesMutator_C.BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_MisDesMutator_C::BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisDesMutator_C", "BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_MisDesMutator.ITM_MisDesMutator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_MisDesMutator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisDesMutator_C", "PreConstruct");

	Params::ITM_MisDesMutator_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                       Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ENUM_MenuColors                         Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MisDesMutator_C::SetVisuals(const class FText& Title, class UTexture2D* Icon, ENUM_MenuColors Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisDesMutator_C", "SetVisuals");

	Params::ITM_MisDesMutator_C_SetVisuals Parms{};

	Parms.Title = std::move(Title);
	Parms.Icon = Icon;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetAnomaly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionMutator*                  Mutator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MisDesMutator_C::SetAnomaly(class UMissionMutator* Mutator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisDesMutator_C", "SetAnomaly");

	Params::ITM_MisDesMutator_C_SetAnomaly Parms{};

	Parms.Mutator = Mutator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionWarning*                  Warning                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MisDesMutator_C::SetWarning(class UMissionWarning* Warning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisDesMutator_C", "SetWarning");

	Params::ITM_MisDesMutator_C_SetWarning Parms{};

	Parms.Warning = Warning;

	UObject::ProcessEvent(Func, &Parms);
}

}

