#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OBJ_Elimination_Base

#include "Basic.hpp"

#include "OBJ_Elimination_Base_classes.hpp"
#include "OBJ_Elimination_Base_parameters.hpp"


namespace SDK
{

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ExecuteUbergraph_OBJ_Elimination_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOBJ_Elimination_Base_C::ExecuteUbergraph_OBJ_Elimination_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_Elimination_Base_C", "ExecuteUbergraph_OBJ_Elimination_Base");

	Params::OBJ_Elimination_Base_C_ExecuteUbergraph_OBJ_Elimination_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetSpawned
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UOBJ_Elimination_Base_C::ReceiveTargetSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_Elimination_Base_C", "ReceiveTargetSpawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetKilled
// (Event, Protected, BlueprintEvent)

void UOBJ_Elimination_Base_C::ReceiveTargetKilled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_Elimination_Base_C", "ReceiveTargetKilled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   MissionLength                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UOBJ_Elimination_Base_C::GetObjectiveDescription(float MissionLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_Elimination_Base_C", "GetObjectiveDescription");

	Params::OBJ_Elimination_Base_C_GetObjectiveDescription Parms{};

	Parms.MissionLength = MissionLength;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UOBJ_Elimination_Base_C::GetInMissionText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_Elimination_Base_C", "GetInMissionText");

	Params::OBJ_Elimination_Base_C_GetInMissionText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveAmount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   MissionLength                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UOBJ_Elimination_Base_C::GetObjectiveAmount(float MissionLength) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_Elimination_Base_C", "GetObjectiveAmount");

	Params::OBJ_Elimination_Base_C_GetObjectiveAmount Parms{};

	Parms.MissionLength = MissionLength;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UOBJ_Elimination_Base_C::GetObjectiveIcon() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_Elimination_Base_C", "GetObjectiveIcon");

	Params::OBJ_Elimination_Base_C_GetObjectiveIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UOBJ_Elimination_Base_C::GetInMissionCounterText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_Elimination_Base_C", "GetInMissionCounterText");

	Params::OBJ_Elimination_Base_C_GetInMissionCounterText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UOBJ_Elimination_Base_C::GetInMissionCounterIcon() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_Elimination_Base_C", "GetInMissionCounterIcon");

	Params::OBJ_Elimination_Base_C_GetInMissionCounterIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
