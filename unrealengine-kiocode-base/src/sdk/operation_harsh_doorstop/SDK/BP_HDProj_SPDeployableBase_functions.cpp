#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HDProj_SPDeployableBase

#include "Basic.hpp"

#include "BP_HDProj_SPDeployableBase_classes.hpp"
#include "BP_HDProj_SPDeployableBase_parameters.hpp"


namespace SDK
{

// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.OnSpawnPointActivationChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HDProj_SPDeployableBase_C*    Deployable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSpawnPointEnabled                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HDProj_SPDeployableBase_C::OnSpawnPointActivationChanged__DelegateSignature(class ABP_HDProj_SPDeployableBase_C* Deployable, bool bSpawnPointEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "OnSpawnPointActivationChanged__DelegateSignature");

	Params::BP_HDProj_SPDeployableBase_C_OnSpawnPointActivationChanged__DelegateSignature Parms{};

	Parms.Deployable = Deployable;
	Parms.bSpawnPointEnabled = bSpawnPointEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.ExecuteUbergraph_BP_HDProj_SPDeployableBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HDProj_SPDeployableBase_C::ExecuteUbergraph_BP_HDProj_SPDeployableBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "ExecuteUbergraph_BP_HDProj_SPDeployableBase");

	Params::BP_HDProj_SPDeployableBase_C_ExecuteUbergraph_BP_HDProj_SPDeployableBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.MemberPreUnregisteredFromOwnerSquad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHDSquadState*                    Squad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDPlayerState*                   MemberPS                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HDProj_SPDeployableBase_C::MemberPreUnregisteredFromOwnerSquad(class AHDSquadState* Squad, class AHDPlayerState* MemberPS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "MemberPreUnregisteredFromOwnerSquad");

	Params::BP_HDProj_SPDeployableBase_C_MemberPreUnregisteredFromOwnerSquad Parms{};

	Parms.Squad = Squad;
	Parms.MemberPS = MemberPS;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                      DamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HDProj_SPDeployableBase_C::ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "ReceiveAnyDamage");

	Params::BP_HDProj_SPDeployableBase_C_ReceiveAnyDamage Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.OverlappingPawnTeamNumUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   LastTeamNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   NewTeamNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HDProj_SPDeployableBase_C::OverlappingPawnTeamNumUpdated(uint8 LastTeamNum, uint8 NewTeamNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "OverlappingPawnTeamNumUpdated");

	Params::BP_HDProj_SPDeployableBase_C_OverlappingPawnTeamNumUpdated Parms{};

	Parms.LastTeamNum = LastTeamNum;
	Parms.NewTeamNum = NewTeamNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HDProj_SPDeployableBase_C::BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_HDProj_SPDeployableBase_C_BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_HDProj_SPDeployableBase_C::BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_HDProj_SPDeployableBase_C_BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.ReceivePayloadActivated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       ImpactHitResult                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_HDProj_SPDeployableBase_C::ReceivePayloadActivated(const struct FHitResult& ImpactHitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "ReceivePayloadActivated");

	Params::BP_HDProj_SPDeployableBase_C_ReceivePayloadActivated Parms{};

	Parms.ImpactHitResult = std::move(ImpactHitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.HasServerAuthority
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bAuthority                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HDProj_SPDeployableBase_C::HasServerAuthority(bool* bAuthority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "HasServerAuthority");

	Params::BP_HDProj_SPDeployableBase_C_HasServerAuthority Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bAuthority != nullptr)
		*bAuthority = Parms.bAuthority;
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.IsEnemyChar
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ADFBaseCharacter*                 Char                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnemyChar                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HDProj_SPDeployableBase_C::IsEnemyChar(class ADFBaseCharacter* Char, bool* bEnemyChar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "IsEnemyChar");

	Params::BP_HDProj_SPDeployableBase_C_IsEnemyChar Parms{};

	Parms.Char = Char;

	UObject::ProcessEvent(Func, &Parms);

	if (bEnemyChar != nullptr)
		*bEnemyChar = Parms.bEnemyChar;
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.IsSpawnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bSpawnPointEnabled                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HDProj_SPDeployableBase_C::IsSpawnable(bool* bSpawnPointEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "IsSpawnable");

	Params::BP_HDProj_SPDeployableBase_C_IsSpawnable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSpawnPointEnabled != nullptr)
		*bSpawnPointEnabled = Parms.bSpawnPointEnabled;
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.SetIsSpawnable
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HDProj_SPDeployableBase_C::SetIsSpawnable(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "SetIsSpawnable");

	Params::BP_HDProj_SPDeployableBase_C_SetIsSpawnable Parms{};

	Parms.bNewEnabled = bNewEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CheckForEnemyChars
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HDProj_SPDeployableBase_C::CheckForEnemyChars()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "CheckForEnemyChars");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GenerateSpawnPointList
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HDProj_SPDeployableBase_C::GenerateSpawnPointList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "GenerateSpawnPointList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.HandleTakeDamageFromProjectile
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADFBaseProjectile*                InProjectile                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InDamage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HDProj_SPDeployableBase_C::HandleTakeDamageFromProjectile(class ADFBaseProjectile* InProjectile, float InDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "HandleTakeDamageFromProjectile");

	Params::BP_HDProj_SPDeployableBase_C_HandleTakeDamageFromProjectile Parms{};

	Parms.InProjectile = InProjectile;
	Parms.InDamage = InDamage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CheckEnemyOverrun
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HDProj_SPDeployableBase_C::CheckEnemyOverrun()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "CheckEnemyOverrun");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.InitDeployable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HDProj_SPDeployableBase_C::InitDeployable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "InitDeployable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetSpawnPoint
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bMeshZOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   SpawnPointIdx                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnPointDef                   SpawnPoint                                             (Parm, OutParm, NoDestructor)

void ABP_HDProj_SPDeployableBase_C::GetSpawnPoint(bool bMeshZOffset, int32 SpawnPointIdx, struct FSpawnPointDef* SpawnPoint) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "GetSpawnPoint");

	Params::BP_HDProj_SPDeployableBase_C_GetSpawnPoint Parms{};

	Parms.bMeshZOffset = bMeshZOffset;
	Parms.SpawnPointIdx = SpawnPointIdx;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnPoint != nullptr)
		*SpawnPoint = std::move(Parms.SpawnPoint);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.AreSpawnPointsEqual
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSpawnPointDef                   SpawnPointOne                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSpawnPointDef                   SpawnPointTwo                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bEqual                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HDProj_SPDeployableBase_C::AreSpawnPointsEqual(struct FSpawnPointDef& SpawnPointOne, struct FSpawnPointDef& SpawnPointTwo, bool* bEqual) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "AreSpawnPointsEqual");

	Params::BP_HDProj_SPDeployableBase_C_AreSpawnPointsEqual Parms{};

	Parms.SpawnPointOne = std::move(SpawnPointOne);
	Parms.SpawnPointTwo = std::move(SpawnPointTwo);

	UObject::ProcessEvent(Func, &Parms);

	SpawnPointOne = std::move(Parms.SpawnPointOne);
	SpawnPointTwo = std::move(Parms.SpawnPointTwo);

	if (bEqual != nullptr)
		*bEqual = Parms.bEqual;
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetActorTransformOffsetByMeshZBounds
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                       OffsetActorWorldXForm                                  (Parm, OutParm, IsPlainOldData, NoDestructor)

void ABP_HDProj_SPDeployableBase_C::GetActorTransformOffsetByMeshZBounds(struct FTransform* OffsetActorWorldXForm) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "GetActorTransformOffsetByMeshZBounds");

	Params::BP_HDProj_SPDeployableBase_C_GetActorTransformOffsetByMeshZBounds Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OffsetActorWorldXForm != nullptr)
		*OffsetActorWorldXForm = std::move(Parms.OffsetActorWorldXForm);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetTransformOffsetBySpawnIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   SpawnIdx                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FTransform                       NewTransform                                           (Parm, OutParm, IsPlainOldData, NoDestructor)

void ABP_HDProj_SPDeployableBase_C::GetTransformOffsetBySpawnIndex(int32& SpawnIdx, const struct FTransform& Transform, struct FTransform* NewTransform) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "GetTransformOffsetBySpawnIndex");

	Params::BP_HDProj_SPDeployableBase_C_GetTransformOffsetBySpawnIndex Parms{};

	Parms.SpawnIdx = SpawnIdx;
	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);

	SpawnIdx = Parms.SpawnIdx;

	if (NewTransform != nullptr)
		*NewTransform = std::move(Parms.NewTransform);
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CanPlayerSpawnHere
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*                      InPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPlayerCanSpawn                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HDProj_SPDeployableBase_C::CanPlayerSpawnHere(class AController* InPlayer, bool* bPlayerCanSpawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "CanPlayerSpawnHere");

	Params::BP_HDProj_SPDeployableBase_C_CanPlayerSpawnHere Parms{};

	Parms.InPlayer = InPlayer;

	UObject::ProcessEvent(Func, &Parms);

	if (bPlayerCanSpawn != nullptr)
		*bPlayerCanSpawn = Parms.bPlayerCanSpawn;
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetAllSpawnPointsBP
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FSpawnPointDef>           SpawnPoints                                            (Parm, OutParm, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_HDProj_SPDeployableBase_C::GetAllSpawnPointsBP(TArray<struct FSpawnPointDef>* SpawnPoints) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "GetAllSpawnPointsBP");

	Params::BP_HDProj_SPDeployableBase_C_GetAllSpawnPointsBP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnPoints != nullptr)
		*SpawnPoints = std::move(Parms.SpawnPoints);

	return Parms.ReturnValue;
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.FindSpawnPointBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                                   SpawnPointID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnPointDef                   FoundSpawnPoint                                        (Parm, OutParm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_HDProj_SPDeployableBase_C::FindSpawnPointBP(int32 SpawnPointID, struct FSpawnPointDef* FoundSpawnPoint) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "FindSpawnPointBP");

	Params::BP_HDProj_SPDeployableBase_C_FindSpawnPointBP Parms{};

	Parms.SpawnPointID = SpawnPointID;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundSpawnPoint != nullptr)
		*FoundSpawnPoint = std::move(Parms.FoundSpawnPoint);

	return Parms.ReturnValue;
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CanSpawnActorFromSpawnPointBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FSpawnPointDef                   SpawnPoint                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TSubclassOf<class AActor>               SpawnActorClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_HDProj_SPDeployableBase_C::CanSpawnActorFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, TSubclassOf<class AActor> SpawnActorClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "CanSpawnActorFromSpawnPointBP");

	Params::BP_HDProj_SPDeployableBase_C_CanSpawnActorFromSpawnPointBP Parms{};

	Parms.SpawnPoint = std::move(SpawnPoint);
	Parms.SpawnActorClass = SpawnActorClass;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CanRestartPlayerFromSpawnPointBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FSpawnPointDef                   SpawnPoint                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class AController*                      Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class APawn>                PlayerPawnClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_HDProj_SPDeployableBase_C::CanRestartPlayerFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, class AController* Player, TSubclassOf<class APawn> PlayerPawnClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "CanRestartPlayerFromSpawnPointBP");

	Params::BP_HDProj_SPDeployableBase_C_CanRestartPlayerFromSpawnPointBP Parms{};

	Parms.SpawnPoint = std::move(SpawnPoint);
	Parms.Player = Player;
	Parms.PlayerPawnClass = PlayerPawnClass;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetSpawnPointCollisionHandlingOverrideBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FSpawnPointDef                   SpawnPoint                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// ESpawnActorCollisionHandlingMethod      OutSpawnCollisionMethod                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_HDProj_SPDeployableBase_C::GetSpawnPointCollisionHandlingOverrideBP(const struct FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod* OutSpawnCollisionMethod) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDProj_SPDeployableBase_C", "GetSpawnPointCollisionHandlingOverrideBP");

	Params::BP_HDProj_SPDeployableBase_C_GetSpawnPointCollisionHandlingOverrideBP Parms{};

	Parms.SpawnPoint = std::move(SpawnPoint);

	UObject::ProcessEvent(Func, &Parms);

	if (OutSpawnCollisionMethod != nullptr)
		*OutSpawnCollisionMethod = Parms.OutSpawnCollisionMethod;

	return Parms.ReturnValue;
}

}
