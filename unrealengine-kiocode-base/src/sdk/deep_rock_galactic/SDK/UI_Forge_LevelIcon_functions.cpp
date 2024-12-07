#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Forge_LevelIcon

#include "Basic.hpp"

#include "UI_Forge_LevelIcon_classes.hpp"
#include "UI_Forge_LevelIcon_parameters.hpp"


namespace SDK
{

// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.ExecuteUbergraph_UI_Forge_LevelIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_LevelIcon_C::ExecuteUbergraph_UI_Forge_LevelIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_LevelIcon_C", "ExecuteUbergraph_UI_Forge_LevelIcon");

	Params::UI_Forge_LevelIcon_C_ExecuteUbergraph_UI_Forge_LevelIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.GetLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Level                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_LevelIcon_C::GetLevel(int32* Param_Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_LevelIcon_C", "GetLevel");

	Params::UI_Forge_LevelIcon_C_GetLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Level != nullptr)
		*Param_Level = Parms.Param_Level;
}


// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevelFromSchematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic*                       Schematic                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_LevelIcon_C::SetLevelFromSchematic(class USchematic* Schematic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_LevelIcon_C", "SetLevelFromSchematic");

	Params::UI_Forge_LevelIcon_C_SetLevelFromSchematic Parms{};

	Parms.Schematic = Schematic;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_LevelIcon_C::SetLevel(int32 InLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_LevelIcon_C", "SetLevel");

	Params::UI_Forge_LevelIcon_C_SetLevel Parms{};

	Parms.InLevel = InLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetIconColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENUM_MenuColors                         InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_LevelIcon_C::SetIconColor(ENUM_MenuColors InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_LevelIcon_C", "SetIconColor");

	Params::UI_Forge_LevelIcon_C_SetIconColor Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_LevelIcon_C::SetSize(float InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_LevelIcon_C", "SetSize");

	Params::UI_Forge_LevelIcon_C_SetSize Parms{};

	Parms.InSize = InSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Forge_LevelIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_LevelIcon_C", "PreConstruct");

	Params::UI_Forge_LevelIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

