#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClickableInterface

#include "Basic.hpp"

#include "ClickableInterface_classes.hpp"


namespace SDK
{

// Function ClickableInterface.ClickableInterface_C.Get Clicked
// (Public, BlueprintCallable, BlueprintEvent)

void IClickableInterface_C::Get_Clicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClickableInterface_C", "Get Clicked");

	UObject::ProcessEvent(Func, nullptr);
}

}

