#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_MicroMissile_Cluster

#include "Basic.hpp"

#include "PRJ_MicroMissile_Cluster_classes.hpp"
#include "PRJ_MicroMissile_Cluster_parameters.hpp"


namespace SDK
{

// Function PRJ_MicroMissile_Cluster.PRJ_MicroMissile_Cluster_C.OnInitialized
// (Event, Public, BlueprintEvent)

void APRJ_MicroMissile_Cluster_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Cluster_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PRJ_MicroMissile_Cluster.PRJ_MicroMissile_Cluster_C.CalculateClusterTrajectory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   RealDeltaTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ProjectileSpeed                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ClusterHitCenter                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APRJ_MicroMissile_Cluster_C::CalculateClusterTrajectory(float RealDeltaTime, float ProjectileSpeed, struct FVector* ClusterHitCenter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Cluster_C", "CalculateClusterTrajectory");

	Params::PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory Parms{};

	Parms.RealDeltaTime = RealDeltaTime;
	Parms.ProjectileSpeed = ProjectileSpeed;

	UObject::ProcessEvent(Func, &Parms);

	if (ClusterHitCenter != nullptr)
		*ClusterHitCenter = std::move(Parms.ClusterHitCenter);
}


// Function PRJ_MicroMissile_Cluster.PRJ_MicroMissile_Cluster_C.SpawnClusters
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InVector                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ClusterDelay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APRJ_MicroMissile_Cluster_C::SpawnClusters(const struct FVector& InVector, float ClusterDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Cluster_C", "SpawnClusters");

	Params::PRJ_MicroMissile_Cluster_C_SpawnClusters Parms{};

	Parms.InVector = std::move(InVector);
	Parms.ClusterDelay = ClusterDelay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PRJ_MicroMissile_Cluster.PRJ_MicroMissile_Cluster_C.CalculateIndicatorPos
// (BlueprintCallable, BlueprintEvent)

void APRJ_MicroMissile_Cluster_C::CalculateIndicatorPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Cluster_C", "CalculateIndicatorPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PRJ_MicroMissile_Cluster.PRJ_MicroMissile_Cluster_C.OnImpacted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                                    PredictedImpact                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APRJ_MicroMissile_Cluster_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Cluster_C", "OnImpacted");

	Params::PRJ_MicroMissile_Cluster_C_OnImpacted Parms{};

	Parms.PredictedImpact = PredictedImpact;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PRJ_MicroMissile_Cluster.PRJ_MicroMissile_Cluster_C.Cleanup
// (BlueprintCallable, BlueprintEvent)

void APRJ_MicroMissile_Cluster_C::Cleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Cluster_C", "Cleanup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PRJ_MicroMissile_Cluster.PRJ_MicroMissile_Cluster_C.ExecuteUbergraph_PRJ_MicroMissile_Cluster
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APRJ_MicroMissile_Cluster_C::ExecuteUbergraph_PRJ_MicroMissile_Cluster(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PRJ_MicroMissile_Cluster_C", "ExecuteUbergraph_PRJ_MicroMissile_Cluster");

	Params::PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
