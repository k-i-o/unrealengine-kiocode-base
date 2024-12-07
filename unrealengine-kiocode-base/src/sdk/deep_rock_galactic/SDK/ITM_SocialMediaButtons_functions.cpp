#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_SocialMediaButtons

#include "Basic.hpp"

#include "ITM_SocialMediaButtons_classes.hpp"
#include "ITM_SocialMediaButtons_parameters.hpp"


namespace SDK
{

// Function ITM_SocialMediaButtons.ITM_SocialMediaButtons_C.ExecuteUbergraph_ITM_SocialMediaButtons
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_SocialMediaButtons_C::ExecuteUbergraph_ITM_SocialMediaButtons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SocialMediaButtons_C", "ExecuteUbergraph_ITM_SocialMediaButtons");

	Params::ITM_SocialMediaButtons_C_ExecuteUbergraph_ITM_SocialMediaButtons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_SocialMediaButtons.ITM_SocialMediaButtons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_SocialMediaButtons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_SocialMediaButtons_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

