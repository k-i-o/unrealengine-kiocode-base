#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WindAbilityBP

#include "Basic.hpp"

#include "WindAbilityBP_classes.hpp"
#include "WindAbilityBP_parameters.hpp"


namespace SDK
{

// Function WindAbilityBP.WindAbilityBP_C.ContinueAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWindAbilityBP_C::ContinueAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindAbilityBP_C", "ContinueAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WindAbilityBP.WindAbilityBP_C.ExecuteUbergraph_WindAbilityBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWindAbilityBP_C::ExecuteUbergraph_WindAbilityBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindAbilityBP_C", "ExecuteUbergraph_WindAbilityBP");

	Params::WindAbilityBP_C_ExecuteUbergraph_WindAbilityBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WindAbilityBP.WindAbilityBP_C.MoveEntities
// (Public, BlueprintCallable, BlueprintEvent)

void UWindAbilityBP_C::MoveEntities()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindAbilityBP_C", "MoveEntities");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WindAbilityBP.WindAbilityBP_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWindAbilityBP_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindAbilityBP_C", "NewFunction_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WindAbilityBP.WindAbilityBP_C.OnAbilitySelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWindAbilityBP_C::OnAbilitySelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindAbilityBP_C", "OnAbilitySelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WindAbilityBP.WindAbilityBP_C.OnEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UWindAbilityBP_C::OnEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindAbilityBP_C", "OnEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WindAbilityBP.WindAbilityBP_C.PreDisplayTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWindAbilityBP_C::PreDisplayTarget(const struct FVector& Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindAbilityBP_C", "PreDisplayTarget");

	Params::WindAbilityBP_C_PreDisplayTarget Parms{};

	Parms.Target = std::move(Target);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WindAbilityBP.WindAbilityBP_C.PushEnemies
// (Public, BlueprintCallable, BlueprintEvent)

void UWindAbilityBP_C::PushEnemies()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindAbilityBP_C", "PushEnemies");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WindAbilityBP.WindAbilityBP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UWindAbilityBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindAbilityBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WindAbilityBP.WindAbilityBP_C.Use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          AbilityTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWindAbilityBP_C::Use(const struct FVector& AbilityTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindAbilityBP_C", "Use");

	Params::WindAbilityBP_C_Use Parms{};

	Parms.AbilityTarget = std::move(AbilityTarget);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WindAbilityBP.WindAbilityBP_C.ValidateTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWindAbilityBP_C::ValidateTarget(const struct FVector& Target, bool* Valid_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindAbilityBP_C", "ValidateTarget");

	Params::WindAbilityBP_C_ValidateTarget Parms{};

	Parms.Target = std::move(Target);

	UObject::ProcessEvent(Func, &Parms);

	if (Valid_ != nullptr)
		*Valid_ = Parms.Valid_;
}

}
