#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntimeInterface

#include "Basic.hpp"

#include "ClothingSystemRuntimeInterface_classes.hpp"
#include "ClothingSystemRuntimeInterface_parameters.hpp"


namespace SDK
{

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
// (Native, Public, BlueprintCallable)

void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "ClothConfigUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
// (Native, Public, BlueprintCallable)

void UClothingSimulationInteractor::DisableGravityOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "DisableGravityOverride");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                          InVector                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractor::EnableGravityOverride(const struct FVector& InVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "EnableGravityOverride");

	Params::ClothingSimulationInteractor_EnableGravityOverride Parms{};

	Parms.InVector = std::move(InVector);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
// (Native, Public, BlueprintCallable)

void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "PhysicsAssetUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   InStiffness                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetAnimDriveSpringStiffness");

	Params::ClothingSimulationInteractor_SetAnimDriveSpringStiffness Parms{};

	Parms.InStiffness = InStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
