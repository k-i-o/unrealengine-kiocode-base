#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PSI_Link_Base2_In_and_Out

#include "Basic.hpp"

#include "BP_PSI_Link_Base2_In_and_Out_classes.hpp"
#include "BP_PSI_Link_Base2_In_and_Out_parameters.hpp"


namespace SDK
{

// Function BP_PSI_Link_Base2_In_and_Out.BP_PSI_Link_Base2_In_and_Out_C.ExecuteUbergraph_BP_PSI_Link_Base2_In_and_Out
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PSI_Link_Base2_In_and_Out_C::ExecuteUbergraph_BP_PSI_Link_Base2_In_and_Out(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PSI_Link_Base2_In_and_Out_C", "ExecuteUbergraph_BP_PSI_Link_Base2_In_and_Out");

	Params::BP_PSI_Link_Base2_In_and_Out_C_ExecuteUbergraph_BP_PSI_Link_Base2_In_and_Out Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PSI_Link_Base2_In_and_Out.BP_PSI_Link_Base2_In_and_Out_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PSI_Link_Base2_In_and_Out_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PSI_Link_Base2_In_and_Out_C", "ReceiveTick");

	Params::BP_PSI_Link_Base2_In_and_Out_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PSI_Link_Base2_In_and_Out.BP_PSI_Link_Base2_In_and_Out_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PSI_Link_Base2_In_and_Out_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PSI_Link_Base2_In_and_Out_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PSI_Link_Base2_In_and_Out.BP_PSI_Link_Base2_In_and_Out_C.UpdateBeamVFX
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Pivot_Offset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Target_normal                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Shot_progress                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PSI_Link_Base2_In_and_Out_C::UpdateBeamVFX(const struct FVector& Target, const struct FVector& Source, const struct FVector& Pivot_Offset, const struct FVector& Target_normal, float Shot_progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PSI_Link_Base2_In_and_Out_C", "UpdateBeamVFX");

	Params::BP_PSI_Link_Base2_In_and_Out_C_UpdateBeamVFX Parms{};

	Parms.Target = std::move(Target);
	Parms.Source = std::move(Source);
	Parms.Pivot_Offset = std::move(Pivot_Offset);
	Parms.Target_normal = std::move(Target_normal);
	Parms.Shot_progress = Shot_progress;

	UObject::ProcessEvent(Func, &Parms);
}

}

