#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnScreenIndicator_UsableItem_Simple

#include "Basic.hpp"

#include "OnScreenIndicator_UsableItem_Simple_classes.hpp"
#include "OnScreenIndicator_UsableItem_Simple_parameters.hpp"


namespace SDK
{

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOnScreenIndicator_UsableItem_Simple_C::ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnScreenIndicator_UsableItem_Simple_C", "ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple");

	Params::OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.VisChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOnScreenIndicator_UsableItem_Simple_C::VisChanged(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnScreenIndicator_UsableItem_Simple_C", "VisChanged");

	Params::OnScreenIndicator_UsableItem_Simple_C_VisChanged Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOnScreenIndicator_UsableItem_Simple_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnScreenIndicator_UsableItem_Simple_C", "PreConstruct");

	Params::OnScreenIndicator_UsableItem_Simple_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnItemEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                            Param_Item                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOnScreenIndicator_UsableItem_Simple_C::OnItemEquipped(class AItem* Param_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnScreenIndicator_UsableItem_Simple_C", "OnItemEquipped");

	Params::OnScreenIndicator_UsableItem_Simple_C_OnItemEquipped Parms{};

	Parms.Param_Item = Param_Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOnScreenIndicator_UsableItem_Simple_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnScreenIndicator_UsableItem_Simple_C", "Tick");

	Params::OnScreenIndicator_UsableItem_Simple_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOnScreenIndicator_UsableItem_Simple_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnScreenIndicator_UsableItem_Simple_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
