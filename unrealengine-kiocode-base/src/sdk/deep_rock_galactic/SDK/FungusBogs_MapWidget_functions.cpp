#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FungusBogs_MapWidget

#include "Basic.hpp"

#include "FungusBogs_MapWidget_classes.hpp"
#include "FungusBogs_MapWidget_parameters.hpp"


namespace SDK
{

// Function FungusBogs_MapWidget.FungusBogs_MapWidget_C.GetBasePanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*                     Panel                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFungusBogs_MapWidget_C::GetBasePanel(class UCanvasPanel** Panel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FungusBogs_MapWidget_C", "GetBasePanel");

	Params::FungusBogs_MapWidget_C_GetBasePanel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Panel != nullptr)
		*Panel = Parms.Panel;
}

}
