#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MisSel_MissionIconBasic_Locked

#include "Basic.hpp"

#include "ITM_MisSel_MissionIconBasic_Locked_classes.hpp"
#include "ITM_MisSel_MissionIconBasic_Locked_parameters.hpp"


namespace SDK
{

// Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_MisSel_MissionIconBasic_Locked_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisSel_MissionIconBasic_Locked_C", "PreConstruct");

	Params::ITM_MisSel_MissionIconBasic_Locked_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MisSel_MissionIconBasic_Locked_C::ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MisSel_MissionIconBasic_Locked_C", "ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked");

	Params::ITM_MisSel_MissionIconBasic_Locked_C_ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
