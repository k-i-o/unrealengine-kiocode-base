#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OBJ_1st_Refinery

#include "Basic.hpp"

#include "OBJ_1st_Refinery_classes.hpp"
#include "OBJ_1st_Refinery_parameters.hpp"


namespace SDK
{

// Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.ExecuteUbergraph_OBJ_1st_Refinery
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOBJ_1st_Refinery_C::ExecuteUbergraph_OBJ_1st_Refinery(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_1st_Refinery_C", "ExecuteUbergraph_OBJ_1st_Refinery");

	Params::OBJ_1st_Refinery_C_ExecuteUbergraph_OBJ_1st_Refinery Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.OnRefineryStateChangedBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERefineryState                          InRefineryState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOBJ_1st_Refinery_C::OnRefineryStateChangedBP(ERefineryState InRefineryState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_1st_Refinery_C", "OnRefineryStateChangedBP");

	Params::OBJ_1st_Refinery_C_OnRefineryStateChangedBP Parms{};

	Parms.InRefineryState = InRefineryState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.ReceiveRefinerySpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFSDRefinery*                     InRefinery                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOBJ_1st_Refinery_C::ReceiveRefinerySpawned(class AFSDRefinery* InRefinery)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_1st_Refinery_C", "ReceiveRefinerySpawned");

	Params::OBJ_1st_Refinery_C_ReceiveRefinerySpawned Parms{};

	Parms.InRefinery = InRefinery;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetObjectiveDescription
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   MissionLength                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UOBJ_1st_Refinery_C::GetObjectiveDescription(float MissionLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_1st_Refinery_C", "GetObjectiveDescription");

	Params::OBJ_1st_Refinery_C_GetObjectiveDescription Parms{};

	Parms.MissionLength = MissionLength;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetObjectiveIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UOBJ_1st_Refinery_C::GetObjectiveIcon() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_1st_Refinery_C", "GetObjectiveIcon");

	Params::OBJ_1st_Refinery_C_GetObjectiveIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetInMissionText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UOBJ_1st_Refinery_C::GetInMissionText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_1st_Refinery_C", "GetInMissionText");

	Params::OBJ_1st_Refinery_C_GetInMissionText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetObjectiveAmount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   MissionLength                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UOBJ_1st_Refinery_C::GetObjectiveAmount(float MissionLength) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OBJ_1st_Refinery_C", "GetObjectiveAmount");

	Params::OBJ_1st_Refinery_C_GetObjectiveAmount Parms{};

	Parms.MissionLength = MissionLength;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
