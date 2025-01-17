#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ObjectiveMarker_Beam

#include "Basic.hpp"

#include "BP_ObjectiveMarker_Beam_classes.hpp"
#include "BP_ObjectiveMarker_Beam_parameters.hpp"


namespace SDK
{

// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.ExecuteUbergraph_BP_ObjectiveMarker_Beam
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectiveMarker_Beam_C::ExecuteUbergraph_BP_ObjectiveMarker_Beam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "ExecuteUbergraph_BP_ObjectiveMarker_Beam");

	Params::BP_ObjectiveMarker_Beam_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectiveMarker_Beam_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "ReceiveTick");

	Params::BP_ObjectiveMarker_Beam_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.HideMarker
// (Event, Protected, BlueprintEvent)

void ABP_ObjectiveMarker_Beam_C::HideMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "HideMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.InpActEvt_I_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ObjectiveMarker_Beam_C::InpActEvt_I_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "InpActEvt_I_K2Node_InputKeyEvent_1");

	Params::BP_ObjectiveMarker_Beam_C_InpActEvt_I_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.InpActEvt_K_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ObjectiveMarker_Beam_C::InpActEvt_K_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "InpActEvt_K_K2Node_InputKeyEvent_0");

	Params::BP_ObjectiveMarker_Beam_C_InpActEvt_K_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.Marker_Transition_IN__FinishedFunc
// (BlueprintEvent)

void ABP_ObjectiveMarker_Beam_C::Marker_Transition_IN__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "Marker_Transition_IN__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.Marker_Transition_IN__UpdateFunc
// (BlueprintEvent)

void ABP_ObjectiveMarker_Beam_C::Marker_Transition_IN__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "Marker_Transition_IN__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.Marker_Transition_OUT__FinishedFunc
// (BlueprintEvent)

void ABP_ObjectiveMarker_Beam_C::Marker_Transition_OUT__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "Marker_Transition_OUT__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.Marker_Transition_OUT__UpdateFunc
// (BlueprintEvent)

void ABP_ObjectiveMarker_Beam_C::Marker_Transition_OUT__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "Marker_Transition_OUT__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.Marker_Transition_OUT_kill__FinishedFunc
// (BlueprintEvent)

void ABP_ObjectiveMarker_Beam_C::Marker_Transition_OUT_kill__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "Marker_Transition_OUT_kill__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.Marker_Transition_OUT_kill__UpdateFunc
// (BlueprintEvent)

void ABP_ObjectiveMarker_Beam_C::Marker_Transition_OUT_kill__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "Marker_Transition_OUT_kill__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.RequestRemoveMarker
// (Event, Public, BlueprintEvent)

void ABP_ObjectiveMarker_Beam_C::RequestRemoveMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "RequestRemoveMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.ShowMarker
// (Event, Protected, BlueprintEvent)

void ABP_ObjectiveMarker_Beam_C::ShowMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "ShowMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ObjectiveMarker_Beam_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_Beam_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

