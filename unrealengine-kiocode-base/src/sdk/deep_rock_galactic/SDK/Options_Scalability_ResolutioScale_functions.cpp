#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_Scalability_ResolutioScale

#include "Basic.hpp"

#include "Options_Scalability_ResolutioScale_classes.hpp"
#include "Options_Scalability_ResolutioScale_parameters.hpp"


namespace SDK
{

// Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.ExecuteUbergraph_Options_Scalability_ResolutioScale
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_Scalability_ResolutioScale_C::ExecuteUbergraph_Options_Scalability_ResolutioScale(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Scalability_ResolutioScale_C", "ExecuteUbergraph_Options_Scalability_ResolutioScale");

	Params::Options_Scalability_ResolutioScale_C_ExecuteUbergraph_Options_Scalability_ResolutioScale Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_Scalability_ResolutioScale_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Scalability_ResolutioScale_C", "BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature");

	Params::Options_Scalability_ResolutioScale_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.ShowUI
// (BlueprintCallable, BlueprintEvent)

void UOptions_Scalability_ResolutioScale_C::ShowUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Scalability_ResolutioScale_C", "ShowUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_Scalability_ResolutioScale_C::UINeedsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Scalability_ResolutioScale_C", "UINeedsUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_Scalability_ResolutioScale.Options_Scalability_ResolutioScale_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Scalability_ResolutioScale_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_Scalability_ResolutioScale_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
