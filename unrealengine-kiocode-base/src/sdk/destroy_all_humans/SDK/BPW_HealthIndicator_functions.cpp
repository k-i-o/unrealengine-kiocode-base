#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_HealthIndicator

#include "Basic.hpp"

#include "BPW_HealthIndicator_classes.hpp"
#include "BPW_HealthIndicator_parameters.hpp"


namespace SDK
{

// Function BPW_HealthIndicator.BPW_HealthIndicator_C.Get_Bar_NPCHP_Percent_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBPW_HealthIndicator_C::Get_Bar_NPCHP_Percent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_HealthIndicator_C", "Get_Bar_NPCHP_Percent_0");

	Params::BPW_HealthIndicator_C_Get_Bar_NPCHP_Percent_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPW_HealthIndicator.BPW_HealthIndicator_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_HealthIndicator_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_HealthIndicator_C", "FadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_HealthIndicator.BPW_HealthIndicator_C.HideWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_HealthIndicator_C::HideWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_HealthIndicator_C", "HideWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_HealthIndicator.BPW_HealthIndicator_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_HealthIndicator_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_HealthIndicator_C", "FadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_HealthIndicator.BPW_HealthIndicator_C.ShowWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_HealthIndicator_C::ShowWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_HealthIndicator_C", "ShowWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}
