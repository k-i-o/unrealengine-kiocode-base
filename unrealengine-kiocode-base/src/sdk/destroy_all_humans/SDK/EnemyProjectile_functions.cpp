#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnemyProjectile

#include "Basic.hpp"

#include "EnemyProjectile_classes.hpp"
#include "EnemyProjectile_parameters.hpp"


namespace SDK
{

// Function EnemyProjectile.EnemyProjectile_C.ExecuteUbergraph_EnemyProjectile
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyProjectile_C::ExecuteUbergraph_EnemyProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyProjectile_C", "ExecuteUbergraph_EnemyProjectile");

	Params::EnemyProjectile_C_ExecuteUbergraph_EnemyProjectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyProjectile.EnemyProjectile_C.Launch
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyProjectile_C::Launch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyProjectile_C", "Launch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyProjectile.EnemyProjectile_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AEnemyProjectile_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyProjectile_C", "ReceiveActorBeginOverlap");

	Params::EnemyProjectile_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}

}
