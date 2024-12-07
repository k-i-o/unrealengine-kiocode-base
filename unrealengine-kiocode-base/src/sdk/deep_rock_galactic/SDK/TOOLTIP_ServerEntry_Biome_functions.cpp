#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TOOLTIP_ServerEntry_Biome

#include "Basic.hpp"

#include "TOOLTIP_ServerEntry_Biome_classes.hpp"
#include "TOOLTIP_ServerEntry_Biome_parameters.hpp"


namespace SDK
{

// Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBiome*                           InBiome                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTOOLTIP_ServerEntry_Biome_C::SetData(class UBiome* InBiome)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TOOLTIP_ServerEntry_Biome_C", "SetData");

	Params::TOOLTIP_ServerEntry_Biome_C_SetData Parms{};

	Parms.InBiome = InBiome;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTOOLTIP_ServerEntry_Biome_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TOOLTIP_ServerEntry_Biome_C", "PreConstruct");

	Params::TOOLTIP_ServerEntry_Biome_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Biome
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTOOLTIP_ServerEntry_Biome_C::ExecuteUbergraph_TOOLTIP_ServerEntry_Biome(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TOOLTIP_ServerEntry_Biome_C", "ExecuteUbergraph_TOOLTIP_ServerEntry_Biome");

	Params::TOOLTIP_ServerEntry_Biome_C_ExecuteUbergraph_TOOLTIP_ServerEntry_Biome Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

