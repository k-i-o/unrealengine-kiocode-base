#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_HDUI

#include "Basic.hpp"

#include "BPFL_HDUI_classes.hpp"
#include "BPFL_HDUI_parameters.hpp"


namespace SDK
{

// Function BPFL_HDUI.BPFL_HDUI_C.GetHealthColorByRatio
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Health                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ColorToUse                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDUI_C::GetHealthColorByRatio(float Health, float MaxHealth, class UObject* __WorldContext, struct FLinearColor* ColorToUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDUI_C", "GetHealthColorByRatio");

	Params::BPFL_HDUI_C_GetHealthColorByRatio Parms{};

	Parms.Health = Health;
	Parms.MaxHealth = MaxHealth;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ColorToUse != nullptr)
		*ColorToUse = std::move(Parms.ColorToUse);
}


// Function BPFL_HDUI.BPFL_HDUI_C.GetNormHealthColorByRatio
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   HealthValueNorm                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ColorToUse                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDUI_C::GetNormHealthColorByRatio(float HealthValueNorm, class UObject* __WorldContext, struct FLinearColor* ColorToUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDUI_C", "GetNormHealthColorByRatio");

	Params::BPFL_HDUI_C_GetNormHealthColorByRatio Parms{};

	Parms.HealthValueNorm = HealthValueNorm;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ColorToUse != nullptr)
		*ColorToUse = std::move(Parms.ColorToUse);
}


// Function BPFL_HDUI.BPFL_HDUI_C.GetIconTextureForStanceState
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EHDUICharacterStanceState               State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       IconTex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDUI_C::GetIconTextureForStanceState(EHDUICharacterStanceState State, class UObject* __WorldContext, class UTexture2D** IconTex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDUI_C", "GetIconTextureForStanceState");

	Params::BPFL_HDUI_C_GetIconTextureForStanceState Parms{};

	Parms.State = State;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IconTex != nullptr)
		*IconTex = Parms.IconTex;
}


// Function BPFL_HDUI.BPFL_HDUI_C.GetIconBrushForStanceState
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EHDUICharacterStanceState               State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      IconBrush                                              (Parm, OutParm)

void UBPFL_HDUI_C::GetIconBrushForStanceState(EHDUICharacterStanceState State, class UObject* __WorldContext, struct FSlateBrush* IconBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDUI_C", "GetIconBrushForStanceState");

	Params::BPFL_HDUI_C_GetIconBrushForStanceState Parms{};

	Parms.State = State;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IconBrush != nullptr)
		*IconBrush = std::move(Parms.IconBrush);
}


// Function BPFL_HDUI.BPFL_HDUI_C.ParseServerBadgesFromTable
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       BadgeTable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFServerBadgeUIDefinition>SortedBadgeDefs                                        (Parm, OutParm, HasGetValueTypeHash)

void UBPFL_HDUI_C::ParseServerBadgesFromTable(class UDataTable* BadgeTable, class UObject* __WorldContext, TArray<struct FFServerBadgeUIDefinition>* SortedBadgeDefs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDUI_C", "ParseServerBadgesFromTable");

	Params::BPFL_HDUI_C_ParseServerBadgesFromTable Parms{};

	Parms.BadgeTable = BadgeTable;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortedBadgeDefs != nullptr)
		*SortedBadgeDefs = std::move(Parms.SortedBadgeDefs);
}

}

