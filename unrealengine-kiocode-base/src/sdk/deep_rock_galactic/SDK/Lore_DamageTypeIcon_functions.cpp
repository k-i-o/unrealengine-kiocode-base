#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lore_DamageTypeIcon

#include "Basic.hpp"

#include "Lore_DamageTypeIcon_classes.hpp"
#include "Lore_DamageTypeIcon_parameters.hpp"


namespace SDK
{

// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.ExecuteUbergraph_Lore_DamageTypeIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_DamageTypeIcon_C::ExecuteUbergraph_Lore_DamageTypeIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_DamageTypeIcon_C", "ExecuteUbergraph_Lore_DamageTypeIcon");

	Params::Lore_DamageTypeIcon_C_ExecuteUbergraph_Lore_DamageTypeIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_DamageTypeIcon_C::PlayIntro(float Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_DamageTypeIcon_C", "PlayIntro");

	Params::Lore_DamageTypeIcon_C_PlayIntro Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageTypeDescription           Param_DamageType                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ULore_DamageTypeIcon_C::SetData(const struct FDamageTypeDescription& Param_DamageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_DamageTypeIcon_C", "SetData");

	Params::Lore_DamageTypeIcon_C_SetData Parms{};

	Parms.Param_DamageType = std::move(Param_DamageType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULore_DamageTypeIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_DamageTypeIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* ULore_DamageTypeIcon_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_DamageTypeIcon_C", "GetToolTipWidget_0");

	Params::Lore_DamageTypeIcon_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

