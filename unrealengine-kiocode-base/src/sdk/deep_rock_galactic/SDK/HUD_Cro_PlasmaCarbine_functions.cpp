#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Cro_PlasmaCarbine

#include "Basic.hpp"

#include "HUD_Cro_PlasmaCarbine_classes.hpp"
#include "HUD_Cro_PlasmaCarbine_parameters.hpp"


namespace SDK
{

// Function HUD_Cro_PlasmaCarbine.HUD_Cro_PlasmaCarbine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Cro_PlasmaCarbine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Cro_PlasmaCarbine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Cro_PlasmaCarbine.HUD_Cro_PlasmaCarbine_C.SetData
// (Event, Public, BlueprintEvent)
// Parameters:
// class AItem*                            Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Cro_PlasmaCarbine_C::SetData(class AItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Cro_PlasmaCarbine_C", "SetData");

	Params::HUD_Cro_PlasmaCarbine_C_SetData Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Cro_PlasmaCarbine.HUD_Cro_PlasmaCarbine_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Cro_PlasmaCarbine_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Cro_PlasmaCarbine_C", "PreConstruct");

	Params::HUD_Cro_PlasmaCarbine_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Cro_PlasmaCarbine.HUD_Cro_PlasmaCarbine_C.OnDamagedEnemy_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IHealth>         EnemyHealth                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DamageModifier                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HealthRemaining                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsWeakPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsRadial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Cro_PlasmaCarbine_C::OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Cro_PlasmaCarbine_C", "OnDamagedEnemy_Event");

	Params::HUD_Cro_PlasmaCarbine_C_OnDamagedEnemy_Event Parms{};

	Parms.EnemyHealth = EnemyHealth;
	Parms.Damage = Damage;
	Parms.DamageModifier = DamageModifier;
	Parms.HealthRemaining = HealthRemaining;
	Parms.IsWeakPoint = IsWeakPoint;
	Parms.IsRadial = IsRadial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Cro_PlasmaCarbine.HUD_Cro_PlasmaCarbine_C.ExecuteUbergraph_HUD_Cro_PlasmaCarbine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Cro_PlasmaCarbine_C::ExecuteUbergraph_HUD_Cro_PlasmaCarbine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Cro_PlasmaCarbine_C", "ExecuteUbergraph_HUD_Cro_PlasmaCarbine");

	Params::HUD_Cro_PlasmaCarbine_C_ExecuteUbergraph_HUD_Cro_PlasmaCarbine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
