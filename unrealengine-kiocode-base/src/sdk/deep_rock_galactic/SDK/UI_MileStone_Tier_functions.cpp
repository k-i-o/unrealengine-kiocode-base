#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MileStone_Tier

#include "Basic.hpp"

#include "UI_MileStone_Tier_classes.hpp"
#include "UI_MileStone_Tier_parameters.hpp"


namespace SDK
{

// Function UI_MileStone_Tier.UI_Milestone_Tier_C.ExecuteUbergraph_UI_Milestone_Tier
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Milestone_Tier_C::ExecuteUbergraph_UI_Milestone_Tier(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Milestone_Tier_C", "ExecuteUbergraph_UI_Milestone_Tier");

	Params::UI_Milestone_Tier_C_ExecuteUbergraph_UI_Milestone_Tier Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MileStone_Tier.UI_Milestone_Tier_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Milestone_Tier_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Milestone_Tier_C", "PreConstruct");

	Params::UI_Milestone_Tier_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MileStone_Tier.UI_Milestone_Tier_C.Set Tier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Milestone_Tier_C::Set_Tier(int32 Tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Milestone_Tier_C", "Set Tier");

	Params::UI_Milestone_Tier_C_Set_Tier Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MileStone_Tier.UI_Milestone_Tier_C.InitTierImage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Milestone_Tier_C::InitTierImage(class UImage* Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Milestone_Tier_C", "InitTierImage");

	Params::UI_Milestone_Tier_C_InitTierImage Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);
}

}

