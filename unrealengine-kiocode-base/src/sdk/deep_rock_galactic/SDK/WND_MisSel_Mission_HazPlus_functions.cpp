#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_MisSel_Mission_HazPlus

#include "Basic.hpp"

#include "WND_MisSel_Mission_HazPlus_classes.hpp"
#include "WND_MisSel_Mission_HazPlus_parameters.hpp"


namespace SDK
{

// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.IsHazPlusUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWND_MisSel_Mission_HazPlus_C::IsHazPlusUnlocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "IsHazPlusUnlocked");

	Params::WND_MisSel_Mission_HazPlus_C_IsHazPlusUnlocked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.HidePopup
// (Private, BlueprintCallable, BlueprintEvent)

void UWND_MisSel_Mission_HazPlus_C::HidePopup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "HidePopup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.Update Hovered Item
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_HazPlusItem_C*               InHovered                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_MisSel_Mission_HazPlus_C::Update_Hovered_Item(class UITM_HazPlusItem_C* InHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "Update Hovered Item");

	Params::WND_MisSel_Mission_HazPlus_C_Update_Hovered_Item Parms{};

	Parms.InHovered = InHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.Get Hovered Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UITM_HazPlusItem_C*               OutItem                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_MisSel_Mission_HazPlus_C::Get_Hovered_Item(class UITM_HazPlusItem_C** OutItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "Get Hovered Item");

	Params::WND_MisSel_Mission_HazPlus_C_Get_Hovered_Item Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutItem != nullptr)
		*OutItem = Parms.OutItem;
}


// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.GetDifficultyMutators
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDifficultyMutatorItem>   OutMutators                                            (Parm, OutParm)

void UWND_MisSel_Mission_HazPlus_C::GetDifficultyMutators(TArray<struct FDifficultyMutatorItem>* OutMutators)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "GetDifficultyMutators");

	Params::WND_MisSel_Mission_HazPlus_C_GetDifficultyMutators Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMutators != nullptr)
		*OutMutators = std::move(Parms.OutMutators);
}


// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.GetCurrentHazardBonus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDifficultySetting*               Difficulty                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutBonus                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_MisSel_Mission_HazPlus_C::GetCurrentHazardBonus(class UDifficultySetting* Difficulty, float* OutBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "GetCurrentHazardBonus");

	Params::WND_MisSel_Mission_HazPlus_C_GetCurrentHazardBonus Parms{};

	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);

	if (OutBonus != nullptr)
		*OutBonus = Parms.OutBonus;
}


// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWND_MisSel_Mission_HazPlus_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "PreConstruct");

	Params::WND_MisSel_Mission_HazPlus_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWND_MisSel_Mission_HazPlus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.OnConfigureClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDifficultyMutatorItem           Mutator                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWND_MisSel_Mission_HazPlus_C::OnConfigureClicked(const struct FDifficultyMutatorItem& Mutator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "OnConfigureClicked");

	Params::WND_MisSel_Mission_HazPlus_C_OnConfigureClicked Parms{};

	Parms.Mutator = std::move(Mutator);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.OnItemHoveredChanged
// (BlueprintCallable, BlueprintEvent)

void UWND_MisSel_Mission_HazPlus_C::OnItemHoveredChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "OnItemHoveredChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UWND_MisSel_Mission_HazPlus_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.ExecuteUbergraph_WND_MisSel_Mission_HazPlus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_MisSel_Mission_HazPlus_C::ExecuteUbergraph_WND_MisSel_Mission_HazPlus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "ExecuteUbergraph_WND_MisSel_Mission_HazPlus");

	Params::WND_MisSel_Mission_HazPlus_C_ExecuteUbergraph_WND_MisSel_Mission_HazPlus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_MisSel_Mission_HazPlus.WND_MisSel_Mission_HazPlus_C.OnChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWND_MisSel_Mission_HazPlus_C::OnChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_MisSel_Mission_HazPlus_C", "OnChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

