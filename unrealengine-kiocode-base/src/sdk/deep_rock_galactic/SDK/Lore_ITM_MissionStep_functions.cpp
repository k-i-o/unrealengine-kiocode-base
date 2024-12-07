#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lore_ITM_MissionStep

#include "Basic.hpp"

#include "Lore_ITM_MissionStep_classes.hpp"
#include "Lore_ITM_MissionStep_parameters.hpp"


namespace SDK
{

// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionStepDescription          Step                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   StepIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_StepsInRow                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_ITM_MissionStep_C::OnHovered__DelegateSignature(const struct FMissionStepDescription& Step, int32 StepIndex, int32 Param_StepsInRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_ITM_MissionStep_C", "OnHovered__DelegateSignature");

	Params::Lore_ITM_MissionStep_C_OnHovered__DelegateSignature Parms{};

	Parms.Step = std::move(Step);
	Parms.StepIndex = StepIndex;
	Parms.Param_StepsInRow = Param_StepsInRow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULore_ITM_MissionStep_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_ITM_MissionStep_C", "OnUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.ExecuteUbergraph_Lore_ITM_MissionStep
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_ITM_MissionStep_C::ExecuteUbergraph_Lore_ITM_MissionStep(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_ITM_MissionStep_C", "ExecuteUbergraph_Lore_ITM_MissionStep");

	Params::Lore_ITM_MissionStep_C_ExecuteUbergraph_Lore_ITM_MissionStep Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULore_ITM_MissionStep_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_ITM_MissionStep_C", "PreConstruct");

	Params::Lore_ITM_MissionStep_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionStepDescription          Step                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_StepNumber                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_StepsInRow                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_ITM_MissionStep_C::SetData(const struct FMissionStepDescription& Step, int32 Param_StepNumber, int32 Param_StepsInRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_ITM_MissionStep_C", "SetData");

	Params::Lore_ITM_MissionStep_C_SetData Parms{};

	Parms.Step = std::move(Step);
	Parms.Param_StepNumber = Param_StepNumber;
	Parms.Param_StepsInRow = Param_StepsInRow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULore_ITM_MissionStep_C::BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_ITM_MissionStep_C", "BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULore_ITM_MissionStep_C::BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_ITM_MissionStep_C", "BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

