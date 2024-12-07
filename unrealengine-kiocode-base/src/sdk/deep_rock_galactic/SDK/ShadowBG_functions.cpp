#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShadowBG

#include "Basic.hpp"

#include "ShadowBG_classes.hpp"
#include "ShadowBG_parameters.hpp"


namespace SDK
{

// Function ShadowBG.ShadowBG_C.ExecuteUbergraph_ShadowBG
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShadowBG_C::ExecuteUbergraph_ShadowBG(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShadowBG_C", "ExecuteUbergraph_ShadowBG");

	Params::ShadowBG_C_ExecuteUbergraph_ShadowBG Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShadowBG.ShadowBG_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShadowBG_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShadowBG_C", "PreConstruct");

	Params::ShadowBG_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShadowBG.ShadowBG_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Param_Color                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShadowBG_C::SetColor(const struct FLinearColor& Param_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShadowBG_C", "SetColor");

	Params::ShadowBG_C_SetColor Parms{};

	Parms.Param_Color = std::move(Param_Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShadowBG.ShadowBG_C.SetEdgeSharpness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   EdgeSharpness1                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShadowBG_C::SetEdgeSharpness(float EdgeSharpness1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShadowBG_C", "SetEdgeSharpness");

	Params::ShadowBG_C_SetEdgeSharpness Parms{};

	Parms.EdgeSharpness1 = EdgeSharpness1;

	UObject::ProcessEvent(Func, &Parms);
}

}

