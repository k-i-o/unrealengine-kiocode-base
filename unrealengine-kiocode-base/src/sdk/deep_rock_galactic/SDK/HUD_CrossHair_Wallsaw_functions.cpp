#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_CrossHair_Wallsaw

#include "Basic.hpp"

#include "HUD_CrossHair_Wallsaw_classes.hpp"
#include "HUD_CrossHair_Wallsaw_parameters.hpp"


namespace SDK
{

// Function HUD_CrossHair_Wallsaw.HUD_CrossHair_Wallsaw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_CrossHair_Wallsaw_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_CrossHair_Wallsaw_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_CrossHair_Wallsaw.HUD_CrossHair_Wallsaw_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_CrossHair_Wallsaw_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_CrossHair_Wallsaw_C", "PreConstruct");

	Params::HUD_CrossHair_Wallsaw_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_CrossHair_Wallsaw.HUD_CrossHair_Wallsaw_C.OnDamagedEnemy_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IHealth>         EnemyHealth                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DamageModifier                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HealthRemaining                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsWeakPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsRadial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_CrossHair_Wallsaw_C::OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_CrossHair_Wallsaw_C", "OnDamagedEnemy_Event");

	Params::HUD_CrossHair_Wallsaw_C_OnDamagedEnemy_Event Parms{};

	Parms.EnemyHealth = EnemyHealth;
	Parms.Damage = Damage;
	Parms.DamageModifier = DamageModifier;
	Parms.HealthRemaining = HealthRemaining;
	Parms.IsWeakPoint = IsWeakPoint;
	Parms.IsRadial = IsRadial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_CrossHair_Wallsaw.HUD_CrossHair_Wallsaw_C.ExecuteUbergraph_HUD_CrossHair_Wallsaw
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_CrossHair_Wallsaw_C::ExecuteUbergraph_HUD_CrossHair_Wallsaw(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_CrossHair_Wallsaw_C", "ExecuteUbergraph_HUD_CrossHair_Wallsaw");

	Params::HUD_CrossHair_Wallsaw_C_ExecuteUbergraph_HUD_CrossHair_Wallsaw Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
