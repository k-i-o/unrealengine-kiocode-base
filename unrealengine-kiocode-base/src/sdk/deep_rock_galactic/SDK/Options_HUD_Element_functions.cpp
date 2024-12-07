#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_HUD_Element

#include "Basic.hpp"

#include "Options_HUD_Element_classes.hpp"
#include "Options_HUD_Element_parameters.hpp"


namespace SDK
{

// Function Options_HUD_Element.Options_HUD_Element_C.ExecuteUbergraph_Options_HUD_Element
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_HUD_Element_C::ExecuteUbergraph_Options_HUD_Element(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_HUD_Element_C", "ExecuteUbergraph_Options_HUD_Element");

	Params::Options_HUD_Element_C_ExecuteUbergraph_Options_HUD_Element Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_HUD_Element.Options_HUD_Element_C.OnModeChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUDVisibilityGroup*              Group                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EHUDVisibilityMode                      Mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_HUD_Element_C::OnModeChanged_Event(class UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_HUD_Element_C", "OnModeChanged_Event");

	Params::Options_HUD_Element_C_OnModeChanged_Event Parms{};

	Parms.Group = Group;
	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_HUD_Element.Options_HUD_Element_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_HUD_Element_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_HUD_Element_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature
// (BlueprintEvent)

void UOptions_HUD_Element_C::BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_HUD_Element_C", "BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature
// (BlueprintEvent)

void UOptions_HUD_Element_C::BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_HUD_Element_C", "BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_HUD_Element_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FText& Value, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_HUD_Element_C", "BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	Params::Options_HUD_Element_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature Parms{};

	Parms.Value = std::move(Value);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_HUD_Element.Options_HUD_Element_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_HUD_Element_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_HUD_Element_C", "PreConstruct");

	Params::Options_HUD_Element_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_HUD_Element.Options_HUD_Element_C.SetupOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptions_HUD_Element_C::SetupOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_HUD_Element_C", "SetupOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_HUD_Element.Options_HUD_Element_C.UpdateDots
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_HUD_Element_C::UpdateDots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_HUD_Element_C", "UpdateDots");

	UObject::ProcessEvent(Func, nullptr);
}

}

