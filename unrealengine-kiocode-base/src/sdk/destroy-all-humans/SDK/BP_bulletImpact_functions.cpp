#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_bulletImpact

#include "Basic.hpp"

#include "BP_bulletImpact_classes.hpp"
#include "BP_bulletImpact_parameters.hpp"


namespace SDK
{

// Function BP_bulletImpact.BP_Bulletimpact_C.ExecuteUbergraph_BP_Bulletimpact
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Bulletimpact_C::ExecuteUbergraph_BP_Bulletimpact(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Bulletimpact_C", "ExecuteUbergraph_BP_Bulletimpact");

	Params::BP_Bulletimpact_C_ExecuteUbergraph_BP_Bulletimpact Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_bulletImpact.BP_Bulletimpact_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Bulletimpact_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Bulletimpact_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_bulletImpact.BP_Bulletimpact_C.OnTriggerEffect
// (Event, Protected, BlueprintEvent)

void ABP_Bulletimpact_C::OnTriggerEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Bulletimpact_C", "OnTriggerEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_bulletImpact.BP_Bulletimpact_C.Decal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Decal_Size                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Spawn_Location                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Decal_Material                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Bulletimpact_C::Decal(const struct FVector& Decal_Size, const struct FVector& Spawn_Location, class UMaterialInterface* Decal_Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Bulletimpact_C", "Decal");

	Params::BP_Bulletimpact_C_Decal Parms{};

	Parms.Decal_Size = std::move(Decal_Size);
	Parms.Spawn_Location = std::move(Spawn_Location);
	Parms.Decal_Material = Decal_Material;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_bulletImpact.BP_Bulletimpact_C.VFX_Impact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*                  PFX_Template                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               DecalMaterial                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Scale_PFX                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Bulletimpact_C::VFX_Impact(class UParticleSystem* PFX_Template, class UMaterialInterface* DecalMaterial, float Scale_PFX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Bulletimpact_C", "VFX_Impact");

	Params::BP_Bulletimpact_C_VFX_Impact Parms{};

	Parms.PFX_Template = PFX_Template;
	Parms.DecalMaterial = DecalMaterial;
	Parms.Scale_PFX = Scale_PFX;

	UObject::ProcessEvent(Func, &Parms);
}

}
