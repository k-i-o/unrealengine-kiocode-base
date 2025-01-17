#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChainReactionInterface

#include "Basic.hpp"

#include "BP_ChainReactionInterface_classes.hpp"
#include "BP_ChainReactionInterface_parameters.hpp"


namespace SDK
{

// Function BP_ChainReactionInterface.BP_ChainReactionInterface_C.InterfaceTriggerChainReaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Component_ChainReaction_C*    SourceComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ChainReactionInterface_C::InterfaceTriggerChainReaction(class UBP_Component_ChainReaction_C* SourceComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChainReactionInterface_C", "InterfaceTriggerChainReaction");

	Params::BP_ChainReactionInterface_C_InterfaceTriggerChainReaction Parms{};

	Parms.SourceComponent = SourceComponent;

	UObject::ProcessEvent(Func, &Parms);
}

}

