#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SelectionListEntry_GameMode

#include "Basic.hpp"

#include "WBP_SelectionListEntry_GameMode_classes.hpp"
#include "WBP_SelectionListEntry_GameMode_parameters.hpp"


namespace SDK
{

// Function WBP_SelectionListEntry_GameMode.WBP_SelectionListEntry_GameMode_C.ExecuteUbergraph_WBP_SelectionListEntry_GameMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SelectionListEntry_GameMode_C::ExecuteUbergraph_WBP_SelectionListEntry_GameMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SelectionListEntry_GameMode_C", "ExecuteUbergraph_WBP_SelectionListEntry_GameMode");

	Params::WBP_SelectionListEntry_GameMode_C_ExecuteUbergraph_WBP_SelectionListEntry_GameMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SelectionListEntry_GameMode.WBP_SelectionListEntry_GameMode_C.BndEvt__SelectionItem_K2Node_ComponentBoundEvent_0_OnSelectionStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CreateGameSelectionListEntry_C*Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SelectionListEntry_GameMode_C::BndEvt__SelectionItem_K2Node_ComponentBoundEvent_0_OnSelectionStateChanged__DelegateSignature(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SelectionListEntry_GameMode_C", "BndEvt__SelectionItem_K2Node_ComponentBoundEvent_0_OnSelectionStateChanged__DelegateSignature");

	Params::WBP_SelectionListEntry_GameMode_C_BndEvt__SelectionItem_K2Node_ComponentBoundEvent_0_OnSelectionStateChanged__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SelectionListEntry_GameMode.WBP_SelectionListEntry_GameMode_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SelectionListEntry_GameMode_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SelectionListEntry_GameMode_C", "BP_OnItemSelectionChanged");

	Params::WBP_SelectionListEntry_GameMode_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SelectionListEntry_GameMode.WBP_SelectionListEntry_GameMode_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SelectionListEntry_GameMode_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SelectionListEntry_GameMode_C", "OnListItemObjectSet");

	Params::WBP_SelectionListEntry_GameMode_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SelectionListEntry_GameMode.WBP_SelectionListEntry_GameMode_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SelectionListEntry_GameMode_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SelectionListEntry_GameMode_C", "BP_OnItemExpansionChanged");

	Params::WBP_SelectionListEntry_GameMode_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SelectionListEntry_GameMode.WBP_SelectionListEntry_GameMode_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_SelectionListEntry_GameMode_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SelectionListEntry_GameMode_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

}

