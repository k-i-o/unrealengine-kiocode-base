#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_PushToTalk

#include "Basic.hpp"

#include "Options_PushToTalk_classes.hpp"
#include "Options_PushToTalk_parameters.hpp"


namespace SDK
{

// Function Options_PushToTalk.Options_PushToTalk_C.ExecuteUbergraph_Options_PushToTalk
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptions_PushToTalk_C::ExecuteUbergraph_Options_PushToTalk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_PushToTalk_C", "ExecuteUbergraph_Options_PushToTalk");

	Params::Options_PushToTalk_C_ExecuteUbergraph_Options_PushToTalk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_PushToTalk.Options_PushToTalk_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_PushToTalk_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_PushToTalk_C", "PreConstruct");

	Params::Options_PushToTalk_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_PushToTalk.Options_PushToTalk_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptions_PushToTalk_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_PushToTalk_C", "BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature");

	Params::Options_PushToTalk_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Options_PushToTalk.Options_PushToTalk_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_PushToTalk_C::ShowOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_PushToTalk_C", "ShowOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_PushToTalk.Options_PushToTalk_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_PushToTalk_C::UINeedsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_PushToTalk_C", "UINeedsUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Options_PushToTalk.Options_PushToTalk_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_PushToTalk_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Options_PushToTalk_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
