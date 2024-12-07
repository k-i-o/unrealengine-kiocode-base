#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MisSel_ObjectiveSecondary

#include "Basic.hpp"

#include "ITM_MisSel_ObjectiveSecondary_classes.hpp"
#include "ITM_MisSel_ObjectiveSecondary_parameters.hpp"


namespace SDK
{

// Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MissionLength                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HazardBonus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MisSel_ObjectiveSecondary_C::SetData(class UClass* Objective, float MissionLength, float HazardBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisSel_ObjectiveSecondary_C", "SetData");

	Params::ITM_MisSel_ObjectiveSecondary_C_SetData Parms{};

	Parms.Objective = Objective;
	Parms.MissionLength = MissionLength;
	Parms.HazardBonus = HazardBonus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_MisSel_ObjectiveSecondary_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisSel_ObjectiveSecondary_C", "PreConstruct");

	Params::ITM_MisSel_ObjectiveSecondary_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C.ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MisSel_ObjectiveSecondary_C::ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisSel_ObjectiveSecondary_C", "ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary");

	Params::ITM_MisSel_ObjectiveSecondary_C_ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

