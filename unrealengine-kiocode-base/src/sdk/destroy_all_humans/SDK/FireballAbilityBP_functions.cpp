#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FireballAbilityBP

#include "Basic.hpp"

#include "FireballAbilityBP_classes.hpp"
#include "FireballAbilityBP_parameters.hpp"


namespace SDK
{

// Function FireballAbilityBP.FireballAbilityBP_C.ClearAttackRange
// (Public, BlueprintCallable, BlueprintEvent)

void UFireballAbilityBP_C::ClearAttackRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballAbilityBP_C", "ClearAttackRange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireballAbilityBP.FireballAbilityBP_C.ContinueAction
// (Public, BlueprintCallable, BlueprintEvent)

void UFireballAbilityBP_C::ContinueAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballAbilityBP_C", "ContinueAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireballAbilityBP.FireballAbilityBP_C.DrawAttackRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_Target                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Range                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*                Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFireballAbilityBP_C::DrawAttackRange(const struct FVector& Param_Target, int32 Param_Range, class UMaterialInstance* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballAbilityBP_C", "DrawAttackRange");

	Params::FireballAbilityBP_C_DrawAttackRange Parms{};

	Parms.Param_Target = std::move(Param_Target);
	Parms.Param_Range = Param_Range;
	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireballAbilityBP.FireballAbilityBP_C.ExecuteUbergraph_FireballAbilityBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireballAbilityBP_C::ExecuteUbergraph_FireballAbilityBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballAbilityBP_C", "ExecuteUbergraph_FireballAbilityBP");

	Params::FireballAbilityBP_C_ExecuteUbergraph_FireballAbilityBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireballAbilityBP.FireballAbilityBP_C.OnAbilitySelected
// (Public, BlueprintCallable, BlueprintEvent)

void UFireballAbilityBP_C::OnAbilitySelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballAbilityBP_C", "OnAbilitySelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireballAbilityBP.FireballAbilityBP_C.OnEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFireballAbilityBP_C::OnEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballAbilityBP_C", "OnEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireballAbilityBP.FireballAbilityBP_C.PreDisplayTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_Target                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireballAbilityBP_C::PreDisplayTarget(const struct FVector& Param_Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballAbilityBP_C", "PreDisplayTarget");

	Params::FireballAbilityBP_C_PreDisplayTarget Parms{};

	Parms.Param_Target = std::move(Param_Target);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireballAbilityBP.FireballAbilityBP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UFireballAbilityBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballAbilityBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireballAbilityBP.FireballAbilityBP_C.Use
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          AbilityTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireballAbilityBP_C::Use(const struct FVector& AbilityTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballAbilityBP_C", "Use");

	Params::FireballAbilityBP_C_Use Parms{};

	Parms.AbilityTarget = std::move(AbilityTarget);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireballAbilityBP.FireballAbilityBP_C.ValidateTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_Target                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireballAbilityBP_C::ValidateTarget(const struct FVector& Param_Target, bool* Valid_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireballAbilityBP_C", "ValidateTarget");

	Params::FireballAbilityBP_C_ValidateTarget Parms{};

	Parms.Param_Target = std::move(Param_Target);

	UObject::ProcessEvent(Func, &Parms);

	if (Valid_ != nullptr)
		*Valid_ = Parms.Valid_;
}

}
