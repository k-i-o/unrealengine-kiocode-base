#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModioEx

#include "Basic.hpp"

#include "ModioEx_classes.hpp"
#include "ModioEx_parameters.hpp"


namespace SDK
{

// Function ModioEx.ModioSubmissionExtensionLibrary.K2_LoadModFileToMemory
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UModioSubsystem*                  Target                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioModID                      ModId                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           ModData                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioSubmissionExtensionLibrary::K2_LoadModFileToMemory(class UModioSubsystem* Target, const struct FModioModID& ModId, TArray<uint8>* ModData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ModioSubmissionExtensionLibrary", "K2_LoadModFileToMemory");

	Params::ModioSubmissionExtensionLibrary_K2_LoadModFileToMemory Parms{};

	Parms.Target = Target;
	Parms.ModId = std::move(ModId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ModData != nullptr)
		*ModData = std::move(Parms.ModData);

	return Parms.ReturnValue;
}


// Function ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitNewModFileForModFromMemory
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UModioSubsystem*                  Target                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioModID                      Mod                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioCreateModFileMemoryParams  Params_0                                               (Parm, NativeAccessSpecifierPublic)

void UModioSubmissionExtensionLibrary::K2_SubmitNewModFileForModFromMemory(class UModioSubsystem* Target, const struct FModioModID& Mod, const struct FModioCreateModFileMemoryParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ModioSubmissionExtensionLibrary", "K2_SubmitNewModFileForModFromMemory");

	Params::ModioSubmissionExtensionLibrary_K2_SubmitNewModFileForModFromMemory Parms{};

	Parms.Target = Target;
	Parms.Mod = std::move(Mod);
	Parms.Params_0 = std::move(Params_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
