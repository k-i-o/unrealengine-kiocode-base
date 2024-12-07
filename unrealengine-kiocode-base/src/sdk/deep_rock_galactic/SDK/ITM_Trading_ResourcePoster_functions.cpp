#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Trading_ResourcePoster

#include "Basic.hpp"

#include "ITM_Trading_ResourcePoster_classes.hpp"
#include "ITM_Trading_ResourcePoster_parameters.hpp"


namespace SDK
{

// Function ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Trading_ResourcePoster_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_ResourcePoster_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Trading_ResourcePoster_C::SetData(class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_ResourcePoster_C", "SetData");

	Params::ITM_Trading_ResourcePoster_C_SetData Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C.ExecuteUbergraph_ITM_Trading_ResourcePoster
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Trading_ResourcePoster_C::ExecuteUbergraph_ITM_Trading_ResourcePoster(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_ResourcePoster_C", "ExecuteUbergraph_ITM_Trading_ResourcePoster");

	Params::ITM_Trading_ResourcePoster_C_ExecuteUbergraph_ITM_Trading_ResourcePoster Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

