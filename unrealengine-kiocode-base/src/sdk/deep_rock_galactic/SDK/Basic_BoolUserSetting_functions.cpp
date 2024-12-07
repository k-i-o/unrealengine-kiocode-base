#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_BoolUserSetting

#include "Basic.hpp"

#include "Basic_BoolUserSetting_classes.hpp"
#include "Basic_BoolUserSetting_parameters.hpp"


namespace SDK
{

// Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.ExecuteUbergraph_Basic_BoolUserSetting
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_BoolUserSetting_C::ExecuteUbergraph_Basic_BoolUserSetting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BoolUserSetting_C", "ExecuteUbergraph_Basic_BoolUserSetting");

	Params::Basic_BoolUserSetting_C_ExecuteUbergraph_Basic_BoolUserSetting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UBasic_BoolUserSetting_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BoolUserSetting_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_BoolUserSetting_C::OnClicked(bool InChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BoolUserSetting_C", "OnClicked");

	Params::Basic_BoolUserSetting_C_OnClicked Parms{};

	Parms.InChecked = InChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBasic_BoolUserSetting_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BoolUserSetting_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_BoolUserSetting_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BoolUserSetting_C", "PreConstruct");

	Params::Basic_BoolUserSetting_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.SetBoolUserSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBoolUserSettingAsset*            InSetting                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_BoolUserSetting_C::SetBoolUserSetting(class UBoolUserSettingAsset* InSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BoolUserSetting_C", "SetBoolUserSetting");

	Params::Basic_BoolUserSetting_C_SetBoolUserSetting Parms{};

	Parms.InSetting = InSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.GetValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBasic_BoolUserSetting_C::GetValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BoolUserSetting_C", "GetValue");

	Params::Basic_BoolUserSetting_C_GetValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_BoolUserSetting_C::SetValue(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BoolUserSetting_C", "SetValue");

	Params::Basic_BoolUserSetting_C_SetValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

