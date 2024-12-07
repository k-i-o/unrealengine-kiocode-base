#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DeepDive_StageIcon

#include "Basic.hpp"

#include "ITM_DeepDive_StageIcon_classes.hpp"
#include "ITM_DeepDive_StageIcon_parameters.hpp"


namespace SDK
{

// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetClaimStatusActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDive_StageIcon_C::SetClaimStatusActive(bool Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDive_StageIcon_C", "SetClaimStatusActive");

	Params::ITM_DeepDive_StageIcon_C_SetClaimStatusActive Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDive_StageIcon_C::SetText(const class FText& Param_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDive_StageIcon_C", "SetText");

	Params::ITM_DeepDive_StageIcon_C_SetText Parms{};

	Parms.Param_Text = std::move(Param_Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDive_StageIcon_C::SetActive(bool Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDive_StageIcon_C", "SetActive");

	Params::ITM_DeepDive_StageIcon_C_SetActive Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDive_StageIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDive_StageIcon_C", "PreConstruct");

	Params::ITM_DeepDive_StageIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.ExecuteUbergraph_ITM_DeepDive_StageIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDive_StageIcon_C::ExecuteUbergraph_ITM_DeepDive_StageIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDive_StageIcon_C", "ExecuteUbergraph_ITM_DeepDive_StageIcon");

	Params::ITM_DeepDive_StageIcon_C_ExecuteUbergraph_ITM_DeepDive_StageIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

