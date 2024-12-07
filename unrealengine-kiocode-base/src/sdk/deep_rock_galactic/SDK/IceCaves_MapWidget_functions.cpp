#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IceCaves_MapWidget

#include "Basic.hpp"

#include "IceCaves_MapWidget_classes.hpp"
#include "IceCaves_MapWidget_parameters.hpp"


namespace SDK
{

// Function IceCaves_MapWidget.IceCaves_MapWidget_C.GetBasePanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*                     Panel                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIceCaves_MapWidget_C::GetBasePanel(class UCanvasPanel** Panel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IceCaves_MapWidget_C", "GetBasePanel");

	Params::IceCaves_MapWidget_C_GetBasePanel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Panel != nullptr)
		*Panel = Parms.Panel;
}

}

