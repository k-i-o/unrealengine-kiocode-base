#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_OptionMenu

#include "Basic.hpp"

#include "BPI_OptionMenu_classes.hpp"
#include "BPI_OptionMenu_parameters.hpp"


namespace SDK
{

// Function BPI_OptionMenu.BPI_OptionMenu_C.HasSubMenus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSubMenuOptions                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_OptionMenu_C::HasSubMenus(bool* bSubMenuOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_OptionMenu_C", "HasSubMenus");

	Params::BPI_OptionMenu_C_HasSubMenus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSubMenuOptions != nullptr)
		*bSubMenuOptions = Parms.bSubMenuOptions;
}


// Function BPI_OptionMenu.BPI_OptionMenu_C.SetActiveSubMenuByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubMenuIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_OptionMenu_C::SetActiveSubMenuByIndex(int32 SubMenuIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_OptionMenu_C", "SetActiveSubMenuByIndex");

	Params::BPI_OptionMenu_C_SetActiveSubMenuByIndex Parms{};

	Parms.SubMenuIndex = SubMenuIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_OptionMenu.BPI_OptionMenu_C.GetSubMenuOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFSubMenuOption>          SubOptions                                             (Parm, OutParm, HasGetValueTypeHash)

void IBPI_OptionMenu_C::GetSubMenuOptions(TArray<struct FFSubMenuOption>* SubOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_OptionMenu_C", "GetSubMenuOptions");

	Params::BPI_OptionMenu_C_GetSubMenuOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SubOptions != nullptr)
		*SubOptions = std::move(Parms.SubOptions);
}


// Function BPI_OptionMenu.BPI_OptionMenu_C.GetDesiredHorizontalAlignment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHorizontalAlignment                    Alignment                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_OptionMenu_C::GetDesiredHorizontalAlignment(EHorizontalAlignment* Alignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_OptionMenu_C", "GetDesiredHorizontalAlignment");

	Params::BPI_OptionMenu_C_GetDesiredHorizontalAlignment Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Alignment != nullptr)
		*Alignment = Parms.Alignment;
}


// Function BPI_OptionMenu.BPI_OptionMenu_C.GetDesiredVerticalAlignment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVerticalAlignment                      Alignment                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_OptionMenu_C::GetDesiredVerticalAlignment(EVerticalAlignment* Alignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_OptionMenu_C", "GetDesiredVerticalAlignment");

	Params::BPI_OptionMenu_C_GetDesiredVerticalAlignment Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Alignment != nullptr)
		*Alignment = Parms.Alignment;
}

}
