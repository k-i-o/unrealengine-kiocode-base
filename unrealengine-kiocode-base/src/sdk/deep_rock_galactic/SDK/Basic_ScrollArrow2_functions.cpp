#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_ScrollArrow2

#include "Basic.hpp"

#include "Basic_ScrollArrow2_classes.hpp"
#include "Basic_ScrollArrow2_parameters.hpp"


namespace SDK
{

// Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_ScrollArrow2_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_ScrollArrow2_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.ExecuteUbergraph_Basic_ScrollArrow2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_ScrollArrow2_C::ExecuteUbergraph_Basic_ScrollArrow2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_ScrollArrow2_C", "ExecuteUbergraph_Basic_ScrollArrow2");

	Params::Basic_ScrollArrow2_C_ExecuteUbergraph_Basic_ScrollArrow2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_ScrollArrow2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_ScrollArrow2_C", "PreConstruct");

	Params::Basic_ScrollArrow2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.SetActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewVar_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBasic_ScrollArrow2_C::SetActive(bool NewVar_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_ScrollArrow2_C", "SetActive");

	Params::Basic_ScrollArrow2_C_SetActive Parms{};

	Parms.NewVar_0 = NewVar_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
