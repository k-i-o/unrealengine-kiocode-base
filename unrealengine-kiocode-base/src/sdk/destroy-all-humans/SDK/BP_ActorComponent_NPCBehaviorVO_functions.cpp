#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorComponent_NPCBehaviorVO

#include "Basic.hpp"

#include "BP_ActorComponent_NPCBehaviorVO_classes.hpp"
#include "BP_ActorComponent_NPCBehaviorVO_parameters.hpp"


namespace SDK
{

// Function BP_ActorComponent_NPCBehaviorVO.BP_ActorComponent_NPCBehaviorVO_C.ExecuteUbergraph_BP_ActorComponent_NPCBehaviorVO
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActorComponent_NPCBehaviorVO_C::ExecuteUbergraph_BP_ActorComponent_NPCBehaviorVO(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorComponent_NPCBehaviorVO_C", "ExecuteUbergraph_BP_ActorComponent_NPCBehaviorVO");

	Params::BP_ActorComponent_NPCBehaviorVO_C_ExecuteUbergraph_BP_ActorComponent_NPCBehaviorVO Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorComponent_NPCBehaviorVO.BP_ActorComponent_NPCBehaviorVO_C.OnRanInFireline
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           _pFirelineActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActorComponent_NPCBehaviorVO_C::OnRanInFireline(class AActor* _pFirelineActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorComponent_NPCBehaviorVO_C", "OnRanInFireline");

	Params::BP_ActorComponent_NPCBehaviorVO_C_OnRanInFireline Parms{};

	Parms._pFirelineActor = _pFirelineActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorComponent_NPCBehaviorVO.BP_ActorComponent_NPCBehaviorVO_C.OnPlayerBumped
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                          _vHitDirection                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   _fVelocity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           _pHitByActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActorComponent_NPCBehaviorVO_C::OnPlayerBumped(const struct FVector& _vHitDirection, float _fVelocity, class AActor* _pHitByActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorComponent_NPCBehaviorVO_C", "OnPlayerBumped");

	Params::BP_ActorComponent_NPCBehaviorVO_C_OnPlayerBumped Parms{};

	Parms._vHitDirection = std::move(_vHitDirection);
	Parms._fVelocity = _fVelocity;
	Parms._pHitByActor = _pHitByActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorComponent_NPCBehaviorVO.BP_ActorComponent_NPCBehaviorVO_C.OnHealthDamage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   _fDamage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           _pDamageCauser                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBFGDamageType*                   _pDamageType                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          _rShotDirection                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       _oHitResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    _bWasFriendlyFire                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActorComponent_NPCBehaviorVO_C::OnHealthDamage(float _fDamage, class AActor* _pDamageCauser, const class UBFGDamageType* _pDamageType, const struct FVector& _rShotDirection, const struct FHitResult& _oHitResult, bool _bWasFriendlyFire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorComponent_NPCBehaviorVO_C", "OnHealthDamage");

	Params::BP_ActorComponent_NPCBehaviorVO_C_OnHealthDamage Parms{};

	Parms._fDamage = _fDamage;
	Parms._pDamageCauser = _pDamageCauser;
	Parms._pDamageType = _pDamageType;
	Parms._rShotDirection = std::move(_rShotDirection);
	Parms._oHitResult = std::move(_oHitResult);
	Parms._bWasFriendlyFire = _bWasFriendlyFire;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorComponent_NPCBehaviorVO.BP_ActorComponent_NPCBehaviorVO_C.OnGameplayEffectTagInactive
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     _rTag                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_ActorComponent_NPCBehaviorVO_C::OnGameplayEffectTagInactive(const struct FGameplayTag& _rTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorComponent_NPCBehaviorVO_C", "OnGameplayEffectTagInactive");

	Params::BP_ActorComponent_NPCBehaviorVO_C_OnGameplayEffectTagInactive Parms{};

	Parms._rTag = std::move(_rTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorComponent_NPCBehaviorVO.BP_ActorComponent_NPCBehaviorVO_C.OnGameplayEffectTagActive
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     _rTag                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_ActorComponent_NPCBehaviorVO_C::OnGameplayEffectTagActive(const struct FGameplayTag& _rTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorComponent_NPCBehaviorVO_C", "OnGameplayEffectTagActive");

	Params::BP_ActorComponent_NPCBehaviorVO_C_OnGameplayEffectTagActive Parms{};

	Parms._rTag = std::move(_rTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorComponent_NPCBehaviorVO.BP_ActorComponent_NPCBehaviorVO_C.OnAIStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EBFGBehaviourState_NPC                  _previousState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGBehaviourState_NPC                  _newState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGCuriosityReason_NPC                 _curiosityReason                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActorComponent_NPCBehaviorVO_C::OnAIStateChanged(EBFGBehaviourState_NPC _previousState, EBFGBehaviourState_NPC _newState, EBFGCuriosityReason_NPC _curiosityReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorComponent_NPCBehaviorVO_C", "OnAIStateChanged");

	Params::BP_ActorComponent_NPCBehaviorVO_C_OnAIStateChanged Parms{};

	Parms._previousState = _previousState;
	Parms._newState = _newState;
	Parms._curiosityReason = _curiosityReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorComponent_NPCBehaviorVO.BP_ActorComponent_NPCBehaviorVO_C.Poke_BehaviourVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// Enum_WhichBehaviorSound                 WhichSituation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActorComponent_NPCBehaviorVO_C::Poke_BehaviourVO(Enum_WhichBehaviorSound WhichSituation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorComponent_NPCBehaviorVO_C", "Poke_BehaviourVO");

	Params::BP_ActorComponent_NPCBehaviorVO_C_Poke_BehaviourVO Parms{};

	Parms.WhichSituation = WhichSituation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorComponent_NPCBehaviorVO.BP_ActorComponent_NPCBehaviorVO_C.Stop_BehaviourVO
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActorComponent_NPCBehaviorVO_C::Stop_BehaviourVO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorComponent_NPCBehaviorVO_C", "Stop_BehaviourVO");

	UObject::ProcessEvent(Func, nullptr);
}

}
