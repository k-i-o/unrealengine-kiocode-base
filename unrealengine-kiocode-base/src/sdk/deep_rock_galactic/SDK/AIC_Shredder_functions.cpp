#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_Shredder

#include "Basic.hpp"

#include "AIC_Shredder_classes.hpp"
#include "AIC_Shredder_parameters.hpp"


namespace SDK
{

// Function AIC_Shredder.AIC_Shredder_C.FindNewMother
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AENE_Jelly_Passive_Mother_C*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AENE_Jelly_Passive_Mother_C* AAIC_Shredder_C::FindNewMother()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Shredder_C", "FindNewMother");

	Params::AIC_Shredder_C_FindNewMother Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AIC_Shredder.AIC_Shredder_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAIC_Shredder_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Shredder_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Shredder.AIC_Shredder_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHealthComponentBase*             HealthComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Shredder_C::OnDeath(class UHealthComponentBase* HealthComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Shredder_C", "OnDeath");

	Params::AIC_Shredder_C_OnDeath Parms{};

	Parms.HealthComponent = HealthComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Shredder.AIC_Shredder_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Shredder_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Shredder_C", "ReceivePossess");

	Params::AIC_Shredder_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Shredder.AIC_Shredder_C.Speed Changer
// (BlueprintCallable, BlueprintEvent)

void AAIC_Shredder_C::Speed_Changer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Shredder_C", "Speed Changer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Shredder.AIC_Shredder_C.StartSpeedModifier
// (BlueprintCallable, BlueprintEvent)

void AAIC_Shredder_C::StartSpeedModifier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Shredder_C", "StartSpeedModifier");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Shredder.AIC_Shredder_C.ExecuteUbergraph_AIC_Shredder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Shredder_C::ExecuteUbergraph_AIC_Shredder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Shredder_C", "ExecuteUbergraph_AIC_Shredder");

	Params::AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
