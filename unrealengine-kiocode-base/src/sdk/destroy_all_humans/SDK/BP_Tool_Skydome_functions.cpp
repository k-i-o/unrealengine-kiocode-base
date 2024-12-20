#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tool_Skydome

#include "Basic.hpp"

#include "BP_Tool_Skydome_classes.hpp"
#include "BP_Tool_Skydome_parameters.hpp"


namespace SDK
{

// Function BP_Tool_Skydome.BP_Tool_Skydome_C.ExecuteUbergraph_BP_Tool_Skydome
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tool_Skydome_C::ExecuteUbergraph_BP_Tool_Skydome(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "ExecuteUbergraph_BP_Tool_Skydome");

	Params::BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tool_Skydome.BP_Tool_Skydome_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tool_Skydome_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "ReceiveEndPlay");

	Params::BP_Tool_Skydome_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tool_Skydome.BP_Tool_Skydome_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Tool_Skydome_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tool_Skydome.BP_Tool_Skydome_C.MoodTransitionning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bImmediateSwitch                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bForward                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Tool_Skydome_C::MoodTransitionning(bool bImmediateSwitch, bool bForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "MoodTransitionning");

	Params::BP_Tool_Skydome_C_MoodTransitionning Parms{};

	Parms.bImmediateSwitch = bImmediateSwitch;
	Parms.bForward = bForward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tool_Skydome.BP_Tool_Skydome_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Tool_Skydome_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tool_Skydome.BP_Tool_Skydome_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Tool_Skydome_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tool_Skydome.BP_Tool_Skydome_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Tool_Skydome_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tool_Skydome.BP_Tool_Skydome_C.SaveProfile_Outdoor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tool_Skydome_C::SaveProfile_Outdoor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "SaveProfile_Outdoor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tool_Skydome.BP_Tool_Skydome_C.SaveProfile_IndoorA
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tool_Skydome_C::SaveProfile_IndoorA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "SaveProfile_IndoorA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tool_Skydome.BP_Tool_Skydome_C.LoadProfile_Outdoor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tool_Skydome_C::LoadProfile_Outdoor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "LoadProfile_Outdoor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tool_Skydome.BP_Tool_Skydome_C.LoadProfile_IndoorA
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tool_Skydome_C::LoadProfile_IndoorA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "LoadProfile_IndoorA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tool_Skydome.BP_Tool_Skydome_C.BlendProfiles
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   WeightIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBP_Struct_Skylight_params       BlendedParameters                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void ABP_Tool_Skydome_C::BlendProfiles(float WeightIn, struct FBP_Struct_Skylight_params* BlendedParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "BlendProfiles");

	Params::BP_Tool_Skydome_C_BlendProfiles Parms{};

	Parms.WeightIn = WeightIn;

	UObject::ProcessEvent(Func, &Parms);

	if (BlendedParameters != nullptr)
		*BlendedParameters = std::move(Parms.BlendedParameters);
}


// Function BP_Tool_Skydome.BP_Tool_Skydome_C.SetProfile_Blended
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_Struct_Skylight_params       SkylightParams                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Tool_Skydome_C::SetProfile_Blended(const struct FBP_Struct_Skylight_params& SkylightParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tool_Skydome_C", "SetProfile_Blended");

	Params::BP_Tool_Skydome_C_SetProfile_Blended Parms{};

	Parms.SkylightParams = std::move(SkylightParams);

	UObject::ProcessEvent(Func, &Parms);
}

}

