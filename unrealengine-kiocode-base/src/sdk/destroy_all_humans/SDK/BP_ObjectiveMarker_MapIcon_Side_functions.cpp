#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ObjectiveMarker_MapIcon_Side

#include "Basic.hpp"

#include "BP_ObjectiveMarker_MapIcon_Side_classes.hpp"
#include "BP_ObjectiveMarker_MapIcon_Side_parameters.hpp"


namespace SDK
{

// Function BP_ObjectiveMarker_MapIcon_Side.BP_ObjectiveMarker_MapIcon_Side_C.ExecuteUbergraph_BP_ObjectiveMarker_MapIcon_Side
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectiveMarker_MapIcon_Side_C::ExecuteUbergraph_BP_ObjectiveMarker_MapIcon_Side(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_MapIcon_Side_C", "ExecuteUbergraph_BP_ObjectiveMarker_MapIcon_Side");

	Params::BP_ObjectiveMarker_MapIcon_Side_C_ExecuteUbergraph_BP_ObjectiveMarker_MapIcon_Side Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectiveMarker_MapIcon_Side.BP_ObjectiveMarker_MapIcon_Side_C.HideMarker
// (Event, Protected, BlueprintEvent)

void ABP_ObjectiveMarker_MapIcon_Side_C::HideMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_MapIcon_Side_C", "HideMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectiveMarker_MapIcon_Side.BP_ObjectiveMarker_MapIcon_Side_C.RequestRemoveMarker
// (Event, Public, BlueprintEvent)

void ABP_ObjectiveMarker_MapIcon_Side_C::RequestRemoveMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_MapIcon_Side_C", "RequestRemoveMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectiveMarker_MapIcon_Side.BP_ObjectiveMarker_MapIcon_Side_C.ShowMarker
// (Event, Protected, BlueprintEvent)

void ABP_ObjectiveMarker_MapIcon_Side_C::ShowMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectiveMarker_MapIcon_Side_C", "ShowMarker");

	UObject::ProcessEvent(Func, nullptr);
}

}
