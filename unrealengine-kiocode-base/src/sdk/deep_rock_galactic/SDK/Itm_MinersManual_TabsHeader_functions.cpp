#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Itm_MinersManual_TabsHeader

#include "Basic.hpp"

#include "Itm_MinersManual_TabsHeader_classes.hpp"
#include "Itm_MinersManual_TabsHeader_parameters.hpp"


namespace SDK
{

// Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.ExecuteUbergraph_Itm_MinersManual_TabsHeader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItm_MinersManual_TabsHeader_C::ExecuteUbergraph_Itm_MinersManual_TabsHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Itm_MinersManual_TabsHeader_C", "ExecuteUbergraph_Itm_MinersManual_TabsHeader");

	Params::Itm_MinersManual_TabsHeader_C_ExecuteUbergraph_Itm_MinersManual_TabsHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class U_MENU_MinersManual_C*            Param__Menu_Lore                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItm_MinersManual_TabsHeader_C::SetData(class U_MENU_MinersManual_C* Param__Menu_Lore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Itm_MinersManual_TabsHeader_C", "SetData");

	Params::Itm_MinersManual_TabsHeader_C_SetData Parms{};

	Parms.Param__Menu_Lore = Param__Menu_Lore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.BndEvt__Itm_HeaderCategory2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UItm_MinersManual_TabsHeader_C::BndEvt__Itm_HeaderCategory2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Itm_MinersManual_TabsHeader_C", "BndEvt__Itm_HeaderCategory2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.BndEvt__Itm_HeaderCategory1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UItm_MinersManual_TabsHeader_C::BndEvt__Itm_HeaderCategory1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Itm_MinersManual_TabsHeader_C", "BndEvt__Itm_HeaderCategory1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItm_MinersManual_TabsHeader_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Itm_MinersManual_TabsHeader_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             HeaderText                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UItm_MinersManual_TabsHeader_C::SetSelected(int32 Param_Index, const class FText& HeaderText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Itm_MinersManual_TabsHeader_C", "SetSelected");

	Params::Itm_MinersManual_TabsHeader_C_SetSelected Parms{};

	Parms.Param_Index = Param_Index;
	Parms.HeaderText = std::move(HeaderText);

	UObject::ProcessEvent(Func, &Parms);
}

}
