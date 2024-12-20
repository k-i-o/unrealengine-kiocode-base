#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CryptoWeapnHitEffectsComponent

#include "Basic.hpp"

#include "BP_CryptoWeapnHitEffectsComponent_classes.hpp"
#include "BP_CryptoWeapnHitEffectsComponent_parameters.hpp"


namespace SDK
{

// Function BP_CryptoWeapnHitEffectsComponent.BP_CryptoWeapnHitEffectsComponent_C.SetupZappedMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Skeleton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CryptoWeapnHitEffectsComponent_C::SetupZappedMaterials(class UMeshComponent* Mesh, class UMeshComponent* Skeleton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CryptoWeapnHitEffectsComponent_C", "SetupZappedMaterials");

	Params::BP_CryptoWeapnHitEffectsComponent_C_SetupZappedMaterials Parms{};

	Parms.Mesh = Mesh;
	Parms.Skeleton = Skeleton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CryptoWeapnHitEffectsComponent.BP_CryptoWeapnHitEffectsComponent_C.SwapZappedMaterials
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*>       MeshMaterials                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UMaterialInterface*>       SkeletonMaterials                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Skeleton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CryptoWeapnHitEffectsComponent_C::SwapZappedMaterials(TArray<class UMaterialInterface*>& MeshMaterials, TArray<class UMaterialInterface*>& SkeletonMaterials, class UMeshComponent* Mesh, class UMeshComponent* Skeleton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CryptoWeapnHitEffectsComponent_C", "SwapZappedMaterials");

	Params::BP_CryptoWeapnHitEffectsComponent_C_SwapZappedMaterials Parms{};

	Parms.MeshMaterials = std::move(MeshMaterials);
	Parms.SkeletonMaterials = std::move(SkeletonMaterials);
	Parms.Mesh = Mesh;
	Parms.Skeleton = Skeleton;

	UObject::ProcessEvent(Func, &Parms);

	MeshMaterials = std::move(Parms.MeshMaterials);
	SkeletonMaterials = std::move(Parms.SkeletonMaterials);
}


// Function BP_CryptoWeapnHitEffectsComponent.BP_CryptoWeapnHitEffectsComponent_C.UpdateZappingEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Skeleton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CryptoWeapnHitEffectsComponent_C::UpdateZappingEffect(float DeltaTime, class UMeshComponent* Mesh, class UMeshComponent* Skeleton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CryptoWeapnHitEffectsComponent_C", "UpdateZappingEffect");

	Params::BP_CryptoWeapnHitEffectsComponent_C_UpdateZappingEffect Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Mesh = Mesh;
	Parms.Skeleton = Skeleton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CryptoWeapnHitEffectsComponent.BP_CryptoWeapnHitEffectsComponent_C.SetupIonDetonation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGActorComponent_Effect*        MPEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Skeleton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CryptoWeapnHitEffectsComponent_C::SetupIonDetonation(class UBFGActorComponent_Effect* MPEffectComponent, class UMeshComponent* Mesh, class UMeshComponent* Skeleton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CryptoWeapnHitEffectsComponent_C", "SetupIonDetonation");

	Params::BP_CryptoWeapnHitEffectsComponent_C_SetupIonDetonation Parms{};

	Parms.MPEffectComponent = MPEffectComponent;
	Parms.Mesh = Mesh;
	Parms.Skeleton = Skeleton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CryptoWeapnHitEffectsComponent.BP_CryptoWeapnHitEffectsComponent_C.UpdateDisintegratorEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Skeleton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBFGActorComponent_Effect*        MPEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBFGActorComponent_GameplayEffectTags*MPGameplayEffectTagsComponent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CryptoWeapnHitEffectsComponent_C::UpdateDisintegratorEffect(float DeltaTime, class UMeshComponent* Mesh, class UMeshComponent* Skeleton, class UBFGActorComponent_Effect* MPEffectComponent, class UBFGActorComponent_GameplayEffectTags* MPGameplayEffectTagsComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CryptoWeapnHitEffectsComponent_C", "UpdateDisintegratorEffect");

	Params::BP_CryptoWeapnHitEffectsComponent_C_UpdateDisintegratorEffect Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Mesh = Mesh;
	Parms.Skeleton = Skeleton;
	Parms.MPEffectComponent = MPEffectComponent;
	Parms.MPGameplayEffectTagsComponent = MPGameplayEffectTagsComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CryptoWeapnHitEffectsComponent.BP_CryptoWeapnHitEffectsComponent_C.SetupDisintegration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGActorComponent_Effect*        MPEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Skeleton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CryptoWeapnHitEffectsComponent_C::SetupDisintegration(class UBFGActorComponent_Effect* MPEffectComponent, class UMeshComponent* Mesh, class UMeshComponent* Skeleton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CryptoWeapnHitEffectsComponent_C", "SetupDisintegration");

	Params::BP_CryptoWeapnHitEffectsComponent_C_SetupDisintegration Parms{};

	Parms.MPEffectComponent = MPEffectComponent;
	Parms.Mesh = Mesh;
	Parms.Skeleton = Skeleton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CryptoWeapnHitEffectsComponent.BP_CryptoWeapnHitEffectsComponent_C.UpdateIondetonatorEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Skeleton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBFGActorComponent_Effect*        MPEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBFGActorComponent_GameplayEffectTags*MPGameplayEffectTagsComponent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CryptoWeapnHitEffectsComponent_C::UpdateIondetonatorEffect(float DeltaTime, class UMeshComponent* Skeleton, class UBFGActorComponent_Effect* MPEffectComponent, class UBFGActorComponent_GameplayEffectTags* MPGameplayEffectTagsComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CryptoWeapnHitEffectsComponent_C", "UpdateIondetonatorEffect");

	Params::BP_CryptoWeapnHitEffectsComponent_C_UpdateIondetonatorEffect Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Skeleton = Skeleton;
	Parms.MPEffectComponent = MPEffectComponent;
	Parms.MPGameplayEffectTagsComponent = MPGameplayEffectTagsComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CryptoWeapnHitEffectsComponent.BP_CryptoWeapnHitEffectsComponent_C.UpdateBlackboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGActorComponent_Effect*        MPEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Mesh                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CryptoWeapnHitEffectsComponent_C::UpdateBlackboard(class UBFGActorComponent_Effect* MPEffectComponent, const class UMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CryptoWeapnHitEffectsComponent_C", "UpdateBlackboard");

	Params::BP_CryptoWeapnHitEffectsComponent_C_UpdateBlackboard Parms{};

	Parms.MPEffectComponent = MPEffectComponent;
	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}

}

