#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_Menu_ColorBarVertical

#include "Basic.hpp"

#include "Basic_Menu_ColorBarVertical_classes.hpp"
#include "Basic_Menu_ColorBarVertical_parameters.hpp"


namespace SDK
{

// Function Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C.ExecuteUbergraph_Basic_Menu_ColorBarVertical
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_Menu_ColorBarVertical_C::ExecuteUbergraph_Basic_Menu_ColorBarVertical(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_Menu_ColorBarVertical_C", "ExecuteUbergraph_Basic_Menu_ColorBarVertical");

	Params::Basic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_Menu_ColorBarVertical_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_Menu_ColorBarVertical_C", "PreConstruct");

	Params::Basic_Menu_ColorBarVertical_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

