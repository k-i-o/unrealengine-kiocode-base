#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_Jelly_Passive_Mother

#include "Basic.hpp"

#include "AIC_Jelly_Passive_Mother_classes.hpp"
#include "AIC_Jelly_Passive_Mother_parameters.hpp"


namespace SDK
{

// Function AIC_Jelly_Passive_Mother.AIC_Jelly_Passive_Mother_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAIC_Jelly_Passive_Mother_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Jelly_Passive_Mother_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Jelly_Passive_Mother.AIC_Jelly_Passive_Mother_C.ExecuteUbergraph_AIC_Jelly_Passive_Mother
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Jelly_Passive_Mother_C::ExecuteUbergraph_AIC_Jelly_Passive_Mother(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Jelly_Passive_Mother_C", "ExecuteUbergraph_AIC_Jelly_Passive_Mother");

	Params::AIC_Jelly_Passive_Mother_C_ExecuteUbergraph_AIC_Jelly_Passive_Mother Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

