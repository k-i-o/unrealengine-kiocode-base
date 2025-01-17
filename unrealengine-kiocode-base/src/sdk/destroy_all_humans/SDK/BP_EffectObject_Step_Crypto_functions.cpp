#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EffectObject_Step_Crypto

#include "Basic.hpp"

#include "BP_EffectObject_Step_Crypto_classes.hpp"
#include "BP_EffectObject_Step_Crypto_parameters.hpp"


namespace SDK
{

// Function BP_EffectObject_Step_Crypto.BP_EffectObject_Step_Crypto_C.PlaySound
// (Native, Public, BlueprintCallable)

void UBP_EffectObject_Step_Crypto_C::PlaySound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectObject_Step_Crypto_C", "PlaySound");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_EffectObject_Step_Crypto.BP_EffectObject_Step_Crypto_C.SpawnDecal
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   bpp__decalSize__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBP_EffectObject_Step_Crypto_C::SpawnDecal(float bpp__decalSize__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectObject_Step_Crypto_C", "SpawnDecal");

	Params::BP_EffectObject_Step_Crypto_C_SpawnDecal Parms{};

	Parms.bpp__decalSize__pf = bpp__decalSize__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_EffectObject_Step_Crypto.BP_EffectObject_Step_Crypto_C.SpawnEmitter
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   bpp__particleScale__pf                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBP_EffectObject_Step_Crypto_C::SpawnEmitter(float bpp__particleScale__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectObject_Step_Crypto_C", "SpawnEmitter");

	Params::BP_EffectObject_Step_Crypto_C_SpawnEmitter Parms{};

	Parms.bpp__particleScale__pf = bpp__particleScale__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_EffectObject_Step_Crypto.BP_EffectObject_Step_Crypto_C.UpdateDirtOnCharacter
// (Native, Public, BlueprintCallable)

void UBP_EffectObject_Step_Crypto_C::UpdateDirtOnCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectObject_Step_Crypto_C", "UpdateDirtOnCharacter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

