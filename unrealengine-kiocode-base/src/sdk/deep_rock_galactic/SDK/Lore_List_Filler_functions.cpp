#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lore_List_Filler

#include "Basic.hpp"

#include "Lore_List_Filler_classes.hpp"
#include "Lore_List_Filler_parameters.hpp"


namespace SDK
{

// Function Lore_List_Filler.Lore_List_Filler_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_List_Filler_C::OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_List_Filler_C", "OnClicked__DelegateSignature");

	Params::Lore_List_Filler_C_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_List_Filler.Lore_List_Filler_C.ExecuteUbergraph_Lore_List_Filler
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_List_Filler_C::ExecuteUbergraph_Lore_List_Filler(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_List_Filler_C", "ExecuteUbergraph_Lore_List_Filler");

	Params::Lore_List_Filler_C_ExecuteUbergraph_Lore_List_Filler Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_List_Filler.Lore_List_Filler_C.DecrementSize
// (BlueprintCallable, BlueprintEvent)

void ULore_List_Filler_C::DecrementSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_List_Filler_C", "DecrementSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lore_List_Filler.Lore_List_Filler_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number_Of_Buttons                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_List_Filler_C::SetSize(int32 Number_Of_Buttons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_List_Filler_C", "SetSize");

	Params::Lore_List_Filler_C_SetSize Parms{};

	Parms.Number_Of_Buttons = Number_Of_Buttons;

	UObject::ProcessEvent(Func, &Parms);
}

}

