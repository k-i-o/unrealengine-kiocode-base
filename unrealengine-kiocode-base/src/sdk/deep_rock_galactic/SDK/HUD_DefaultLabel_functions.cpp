#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_DefaultLabel

#include "Basic.hpp"

#include "HUD_DefaultLabel_classes.hpp"
#include "HUD_DefaultLabel_parameters.hpp"


namespace SDK
{

// Function HUD_DefaultLabel.HUD_DefaultLabel_C.ExecuteUbergraph_HUD_DefaultLabel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_DefaultLabel_C::ExecuteUbergraph_HUD_DefaultLabel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_DefaultLabel_C", "ExecuteUbergraph_HUD_DefaultLabel");

	Params::HUD_DefaultLabel_C_ExecuteUbergraph_HUD_DefaultLabel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_DefaultLabel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_DefaultLabel_C", "PreConstruct");

	Params::HUD_DefaultLabel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NewText                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_DefaultLabel_C::SetText(const class FText& NewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_DefaultLabel_C", "SetText");

	Params::HUD_DefaultLabel_C_SetText Parms{};

	Parms.NewText = std::move(NewText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InFontSize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_DefaultLabel_C::SetFontSize(int32 InFontSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_DefaultLabel_C", "SetFontSize");

	Params::HUD_DefaultLabel_C_SetFontSize Parms{};

	Parms.InFontSize = InFontSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTypeFace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENUM_AcuminCondensedTypeface            Param_Typeface                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_DefaultLabel_C::SetTypeFace(ENUM_AcuminCondensedTypeface Param_Typeface)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_DefaultLabel_C", "SetTypeFace");

	Params::HUD_DefaultLabel_C_SetTypeFace Parms{};

	Parms.Param_Typeface = Param_Typeface;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETextJustify                            InJustification                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_DefaultLabel_C::SetJustification(ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_DefaultLabel_C", "SetJustification");

	Params::HUD_DefaultLabel_C_SetJustification Parms{};

	Parms.InJustification = InJustification;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetOutlineSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFontOutlineSettings             InFontInfo_OutlineSettings                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UHUD_DefaultLabel_C::SetOutlineSettings(const struct FFontOutlineSettings& InFontInfo_OutlineSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_DefaultLabel_C", "SetOutlineSettings");

	Params::HUD_DefaultLabel_C_SetOutlineSettings Parms{};

	Parms.InFontInfo_OutlineSettings = std::move(InFontInfo_OutlineSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENUM_MenuColors                         ColorSelector                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_DefaultLabel_C::SetTextColor(ENUM_MenuColors ColorSelector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_DefaultLabel_C", "SetTextColor");

	Params::HUD_DefaultLabel_C_SetTextColor Parms{};

	Parms.ColorSelector = ColorSelector;

	UObject::ProcessEvent(Func, &Parms);
}

}
