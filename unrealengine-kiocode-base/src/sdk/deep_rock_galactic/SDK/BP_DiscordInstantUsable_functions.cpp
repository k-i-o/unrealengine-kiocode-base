#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DiscordInstantUsable

#include "Basic.hpp"

#include "BP_DiscordInstantUsable_classes.hpp"
#include "BP_DiscordInstantUsable_parameters.hpp"


namespace SDK
{

// Function BP_DiscordInstantUsable.BP_DiscordInstantUsable_C.BPCanUse
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  UseCollider                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_DiscordInstantUsable_C::BPCanUse(class APlayerCharacter* User, class USceneComponent* UseCollider) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DiscordInstantUsable_C", "BPCanUse");

	Params::BP_DiscordInstantUsable_C_BPCanUse Parms{};

	Parms.User = User;
	Parms.UseCollider = UseCollider;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

