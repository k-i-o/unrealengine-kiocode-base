#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuSubNavSelectionListEntry

#include "Basic.hpp"

#include "WBP_MenuSubNavSelectionListEntry_classes.hpp"
#include "WBP_MenuSubNavSelectionListEntry_parameters.hpp"


namespace SDK
{

// Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MenuSubNavSelectionListEntry_C*ClickedBtn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuSubNavSelectionListEntry_C::ButtonClicked__DelegateSignature(class UWBP_MenuSubNavSelectionListEntry_C* ClickedBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuSubNavSelectionListEntry_C", "ButtonClicked__DelegateSignature");

	Params::WBP_MenuSubNavSelectionListEntry_C_ButtonClicked__DelegateSignature Parms{};

	Parms.ClickedBtn = ClickedBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuSubNavSelectionListEntry_C::ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuSubNavSelectionListEntry_C", "ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry");

	Params::WBP_MenuSubNavSelectionListEntry_C_ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CreateGameSelectionListEntry_C*Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuSubNavSelectionListEntry_C::BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuSubNavSelectionListEntry_C", "BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature");

	Params::WBP_MenuSubNavSelectionListEntry_C_BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.OnItemSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuSubNavSelectionListEntry_C::OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuSubNavSelectionListEntry_C", "OnItemSelectionChanged");

	Params::WBP_MenuSubNavSelectionListEntry_C_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuSubNavSelectionListEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuSubNavSelectionListEntry_C", "PreConstruct");

	Params::WBP_MenuSubNavSelectionListEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuSubNavSelectionListEntry.WBP_MenuSubNavSelectionListEntry_C.SetSubMenuIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Idx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuSubNavSelectionListEntry_C::SetSubMenuIndex(int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuSubNavSelectionListEntry_C", "SetSubMenuIndex");

	Params::WBP_MenuSubNavSelectionListEntry_C_SetSubMenuIndex Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);
}

}

