#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DeepDiveHeader

#include "Basic.hpp"

#include "ITM_DeepDiveHeader_classes.hpp"
#include "ITM_DeepDiveHeader_parameters.hpp"


namespace SDK
{

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.ExecuteUbergraph_ITM_DeepDiveHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDiveHeader_C::ExecuteUbergraph_ITM_DeepDiveHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDiveHeader_C", "ExecuteUbergraph_ITM_DeepDiveHeader");

	Params::ITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDiveHeader_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDiveHeader_C", "PreConstruct");

	Params::ITM_DeepDiveHeader_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetHeaderContents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Header_Contents                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDiveHeader_C::SetHeaderContents(const class FText& Param_Header_Contents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDiveHeader_C", "SetHeaderContents");

	Params::ITM_DeepDiveHeader_C_SetHeaderContents Parms{};

	Parms.Param_Header_Contents = std::move(Param_Header_Contents);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetEliteActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_EliteActive                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDiveHeader_C::SetEliteActive(bool Param_EliteActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDiveHeader_C", "SetEliteActive");

	Params::ITM_DeepDiveHeader_C_SetEliteActive Parms{};

	Parms.Param_EliteActive = Param_EliteActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromDeepDive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDeepDive*                        InDeepDive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDiveHeader_C::FromDeepDive(class UDeepDive* InDeepDive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDiveHeader_C", "FromDeepDive");

	Params::ITM_DeepDiveHeader_C_FromDeepDive Parms{};

	Parms.InDeepDive = InDeepDive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromActiveDeepDive
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_DeepDiveHeader_C::FromActiveDeepDive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDiveHeader_C", "FromActiveDeepDive");

	UObject::ProcessEvent(Func, nullptr);
}

}
