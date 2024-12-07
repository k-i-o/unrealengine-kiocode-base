#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnemyControlState

#include "Basic.hpp"

#include "BP_EnemyControlState_classes.hpp"
#include "BP_EnemyControlState_parameters.hpp"


namespace SDK
{

// Function BP_EnemyControlState.BP_EnemyControlState_C.ExecuteUbergraph_BP_EnemyControlState
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyControlState_C::ExecuteUbergraph_BP_EnemyControlState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyControlState_C", "ExecuteUbergraph_BP_EnemyControlState");

	Params::BP_EnemyControlState_C_ExecuteUbergraph_BP_EnemyControlState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyControlState.BP_EnemyControlState_C.OnControllingEnemyAttached
// (Event, Protected, BlueprintEvent)

void UBP_EnemyControlState_C::OnControllingEnemyAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyControlState_C", "OnControllingEnemyAttached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyControlState.BP_EnemyControlState_C.OnControllingEnemy
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsControlling                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EnemyControlState_C::OnControllingEnemy(bool IsControlling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyControlState_C", "OnControllingEnemy");

	Params::BP_EnemyControlState_C_OnControllingEnemy Parms{};

	Parms.IsControlling = IsControlling;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyControlState.BP_EnemyControlState_C.OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyControlState_C::OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyControlState_C", "OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24");

	Params::BP_EnemyControlState_C_OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyControlState.BP_EnemyControlState_C.OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyControlState_C::OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyControlState_C", "OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24");

	Params::BP_EnemyControlState_C_OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyControlState.BP_EnemyControlState_C.OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyControlState_C::OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyControlState_C", "OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24");

	Params::BP_EnemyControlState_C_OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyControlState.BP_EnemyControlState_C.OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyControlState_C::OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyControlState_C", "OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24");

	Params::BP_EnemyControlState_C_OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyControlState.BP_EnemyControlState_C.OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyControlState_C::OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyControlState_C", "OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24");

	Params::BP_EnemyControlState_C_OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}

}

