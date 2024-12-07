#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TIpJar_Base_Blueprint

#include "Basic.hpp"

#include "BP_TIpJar_Base_Blueprint_classes.hpp"
#include "BP_TIpJar_Base_Blueprint_parameters.hpp"


namespace SDK
{

// Function BP_TIpJar_Base_Blueprint.BP_TipJar_Base_Blueprint_C.All_PlayTip
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TipJar_Base_Blueprint_C::All_PlayTip(class APlayerCharacter* User, int32 AnimIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TipJar_Base_Blueprint_C", "All_PlayTip");

	Params::BP_TipJar_Base_Blueprint_C_All_PlayTip Parms{};

	Parms.User = User;
	Parms.AnimIndex = AnimIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TIpJar_Base_Blueprint.BP_TipJar_Base_Blueprint_C.BndEvt__BP_TipJarUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputKeys                              Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TipJar_Base_Blueprint_C::BndEvt__BP_TipJarUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TipJar_Base_Blueprint_C", "BndEvt__BP_TipJarUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature");

	Params::BP_TipJar_Base_Blueprint_C_BndEvt__BP_TipJarUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature Parms{};

	Parms.User = User;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TIpJar_Base_Blueprint.BP_TipJar_Base_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TipJar_Base_Blueprint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TipJar_Base_Blueprint_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TIpJar_Base_Blueprint.BP_TipJar_Base_Blueprint_C.ExecuteUbergraph_BP_TipJar_Base_Blueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TipJar_Base_Blueprint_C::ExecuteUbergraph_BP_TipJar_Base_Blueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TipJar_Base_Blueprint_C", "ExecuteUbergraph_BP_TipJar_Base_Blueprint");

	Params::BP_TipJar_Base_Blueprint_C_ExecuteUbergraph_BP_TipJar_Base_Blueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

