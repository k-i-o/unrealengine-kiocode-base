#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Gear_Bar

#include "Basic.hpp"

#include "ITM_Gear_Bar_classes.hpp"
#include "ITM_Gear_Bar_parameters.hpp"


namespace SDK
{

// Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetStageStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_DeepDive_StageIcon_C*        Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Claimed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Gear_Bar_C::SetStageStatus(class UITM_DeepDive_StageIcon_C* Target, bool Claimed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Gear_Bar_C", "SetStageStatus");

	Params::ITM_Gear_Bar_C_SetStageStatus Parms{};

	Parms.Target = Target;
	Parms.Claimed = Claimed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetDeepDiveProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDeepDive*                        Deep_Dive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Gear_Bar_C::SetDeepDiveProgress(class UDeepDive* Deep_Dive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Gear_Bar_C", "SetDeepDiveProgress");

	Params::ITM_Gear_Bar_C_SetDeepDiveProgress Parms{};

	Parms.Deep_Dive = Deep_Dive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetActiveProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Gear_Bar_C::SetActiveProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Gear_Bar_C", "SetActiveProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetCustomProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Stage1Complete                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Stage2Complete                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Stage3Complete                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Gear_Bar_C::SetCustomProgress(bool Stage1Complete, bool Stage2Complete, bool Stage3Complete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Gear_Bar_C", "SetCustomProgress");

	Params::ITM_Gear_Bar_C_SetCustomProgress Parms{};

	Parms.Stage1Complete = Stage1Complete;
	Parms.Stage2Complete = Stage2Complete;
	Parms.Stage3Complete = Stage3Complete;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Gear_Bar.ITM_Gear_Bar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Gear_Bar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Gear_Bar_C", "PreConstruct");

	Params::ITM_Gear_Bar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Gear_Bar.ITM_Gear_Bar_C.ExecuteUbergraph_ITM_Gear_Bar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Gear_Bar_C::ExecuteUbergraph_ITM_Gear_Bar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Gear_Bar_C", "ExecuteUbergraph_ITM_Gear_Bar");

	Params::ITM_Gear_Bar_C_ExecuteUbergraph_ITM_Gear_Bar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

