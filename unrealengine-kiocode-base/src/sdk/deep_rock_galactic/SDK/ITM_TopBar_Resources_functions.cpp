#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_TopBar_Resources

#include "Basic.hpp"

#include "ITM_TopBar_Resources_classes.hpp"
#include "ITM_TopBar_Resources_parameters.hpp"


namespace SDK
{

// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.ExecuteUbergraph_ITM_TopBar_Resources
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_TopBar_Resources_C::ExecuteUbergraph_ITM_TopBar_Resources(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_Resources_C", "ExecuteUbergraph_ITM_TopBar_Resources");

	Params::ITM_TopBar_Resources_C_ExecuteUbergraph_ITM_TopBar_Resources Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.UpdateResourceBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_HideWhenZero                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_DoCountAnim                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_TopBar_Resources_C::UpdateResourceBehavior(bool Param_HideWhenZero, bool Param_DoCountAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_Resources_C", "UpdateResourceBehavior");

	Params::ITM_TopBar_Resources_C_UpdateResourceBehavior Parms{};

	Parms.Param_HideWhenZero = Param_HideWhenZero;
	Parms.Param_DoCountAnim = Param_DoCountAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Param_IsDesignTime                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_TopBar_Resources_C::PreConstruct(bool Param_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_Resources_C", "PreConstruct");

	Params::ITM_TopBar_Resources_C_PreConstruct Parms{};

	Parms.Param_IsDesignTime = Param_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.SetResources
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UResourceData*>            InResources                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UITM_TopBar_Resources_C::SetResources(TArray<class UResourceData*>& InResources)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_Resources_C", "SetResources");

	Params::ITM_TopBar_Resources_C_SetResources Parms{};

	Parms.InResources = std::move(InResources);

	UObject::ProcessEvent(Func, &Parms);

	InResources = std::move(Parms.InResources);
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.AddResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData*                    InResource                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InHideWhenZero                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_TopBar_Resources_C::AddResource(class UResourceData* InResource, bool InHideWhenZero)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_Resources_C", "AddResource");

	Params::ITM_TopBar_Resources_C_AddResource Parms{};

	Parms.InResource = InResource;
	Parms.InHideWhenZero = InHideWhenZero;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.GetResourceAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UResourceData*                    Resource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Amount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_TopBar_Resources_C::GetResourceAmount(class UResourceData* Resource, float* Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_TopBar_Resources_C", "GetResourceAmount");

	Params::ITM_TopBar_Resources_C_GetResourceAmount Parms{};

	Parms.Resource = Resource;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;
}

}
