#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Loadout_GearStats

#include "Basic.hpp"

#include "ITM_Loadout_GearStats_classes.hpp"
#include "ITM_Loadout_GearStats_parameters.hpp"


namespace SDK
{

// Function ITM_Loadout_GearStats.ITM_Loadout_GearStats_C.ExecuteUbergraph_ITM_Loadout_GearStats
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Loadout_GearStats_C::ExecuteUbergraph_ITM_Loadout_GearStats(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Loadout_GearStats_C", "ExecuteUbergraph_ITM_Loadout_GearStats");

	Params::ITM_Loadout_GearStats_C_ExecuteUbergraph_ITM_Loadout_GearStats Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Loadout_GearStats.ITM_Loadout_GearStats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Loadout_GearStats_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Loadout_GearStats_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Loadout_GearStats.ITM_Loadout_GearStats_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Loadout_GearStats_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Loadout_GearStats_C", "PreConstruct");

	Params::ITM_Loadout_GearStats_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Loadout_GearStats.ITM_Loadout_GearStats_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Loadout_GearStats_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Loadout_GearStats_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Loadout_GearStats.ITM_Loadout_GearStats_C.Set Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUpgradableGearComponent*         InUpgradable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFSDPlayerState*                  InPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AActor>               InItemClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UITM_Loadout_GearStats_C::Set_Item(class UUpgradableGearComponent* InUpgradable, class AFSDPlayerState* InPlayerState, TSubclassOf<class AActor> InItemClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Loadout_GearStats_C", "Set Item");

	Params::ITM_Loadout_GearStats_C_Set_Item Parms{};

	Parms.InUpgradable = InUpgradable;
	Parms.InPlayerState = InPlayerState;
	Parms.InItemClass = InItemClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Loadout_GearStats.ITM_Loadout_GearStats_C.SetInnerPadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin                          InPadding                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Loadout_GearStats_C::SetInnerPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Loadout_GearStats_C", "SetInnerPadding");

	Params::ITM_Loadout_GearStats_C_SetInnerPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	UObject::ProcessEvent(Func, &Parms);
}

}

