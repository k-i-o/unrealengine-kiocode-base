#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_BarGlass_Item_PropHunt

#include "Basic.hpp"

#include "ITM_BarGlass_Item_PropHunt_classes.hpp"
#include "ITM_BarGlass_Item_PropHunt_parameters.hpp"


namespace SDK
{

// Function ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C.ExecuteUbergraph_ITM_BarGlass_Item_PropHunt
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AITM_BarGlass_Item_PropHunt_C::ExecuteUbergraph_ITM_BarGlass_Item_PropHunt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_BarGlass_Item_PropHunt_C", "ExecuteUbergraph_ITM_BarGlass_Item_PropHunt");

	Params::ITM_BarGlass_Item_PropHunt_C_ExecuteUbergraph_ITM_BarGlass_Item_PropHunt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C.ReceiveConsumed
// (Event, Protected, BlueprintEvent)

void AITM_BarGlass_Item_PropHunt_C::ReceiveConsumed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_BarGlass_Item_PropHunt_C", "ReceiveConsumed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AITM_BarGlass_Item_PropHunt_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_BarGlass_Item_PropHunt_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void AITM_BarGlass_Item_PropHunt_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_BarGlass_Item_PropHunt_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

}
