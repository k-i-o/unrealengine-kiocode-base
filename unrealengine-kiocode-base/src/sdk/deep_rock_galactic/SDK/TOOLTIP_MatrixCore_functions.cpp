#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TOOLTIP_MatrixCore

#include "Basic.hpp"

#include "TOOLTIP_MatrixCore_classes.hpp"
#include "TOOLTIP_MatrixCore_parameters.hpp"


namespace SDK
{

// Function TOOLTIP_MatrixCore.TOOLTIP_MatrixCore_C.FromSchematic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic*                       InSchematic                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTOOLTIP_MatrixCore_C::FromSchematic(class USchematic* InSchematic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TOOLTIP_MatrixCore_C", "FromSchematic");

	Params::TOOLTIP_MatrixCore_C_FromSchematic Parms{};

	Parms.InSchematic = InSchematic;

	UObject::ProcessEvent(Func, &Parms);
}

}
