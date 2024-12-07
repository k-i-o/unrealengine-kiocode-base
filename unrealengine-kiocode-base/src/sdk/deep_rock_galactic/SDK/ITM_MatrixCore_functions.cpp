#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MatrixCore

#include "Basic.hpp"

#include "ITM_MatrixCore_classes.hpp"
#include "ITM_MatrixCore_parameters.hpp"


namespace SDK
{

// Function ITM_MatrixCore.ITM_MatrixCore_C.ExecuteUbergraph_ITM_MatrixCore
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MatrixCore_C::ExecuteUbergraph_ITM_MatrixCore(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MatrixCore_C", "ExecuteUbergraph_ITM_MatrixCore");

	Params::ITM_MatrixCore_C_ExecuteUbergraph_ITM_MatrixCore Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MatrixCore.ITM_MatrixCore_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_MatrixCore_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MatrixCore_C", "PreConstruct");

	Params::ITM_MatrixCore_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MatrixCore.ITM_MatrixCore_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_IconSize                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MatrixCore_C::SetIconSize(float Param_IconSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MatrixCore_C", "SetIconSize");

	Params::ITM_MatrixCore_C_SetIconSize Parms{};

	Parms.Param_IconSize = Param_IconSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MatrixCore.ITM_MatrixCore_C.FromDeepDiveStage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StageIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MatrixCore_C::FromDeepDiveStage(int32 StageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MatrixCore_C", "FromDeepDiveStage");

	Params::ITM_MatrixCore_C_FromDeepDiveStage Parms{};

	Parms.StageIndex = StageIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MatrixCore.ITM_MatrixCore_C.FromReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic*                       InReward                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESchematicType                          InRewardType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_MatrixCore_C::FromReward(class USchematic* InReward, ESchematicType InRewardType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MatrixCore_C", "FromReward");

	Params::ITM_MatrixCore_C_FromReward Parms{};

	Parms.InReward = InReward;
	Parms.InRewardType = InRewardType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_MatrixCore.ITM_MatrixCore_C.GetMatrixCoreToolTip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UITM_MatrixCore_C::GetMatrixCoreToolTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_MatrixCore_C", "GetMatrixCoreToolTip");

	Params::ITM_MatrixCore_C_GetMatrixCoreToolTip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

