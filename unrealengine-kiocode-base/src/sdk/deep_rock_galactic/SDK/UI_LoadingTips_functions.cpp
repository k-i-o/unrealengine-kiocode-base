#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LoadingTips

#include "Basic.hpp"

#include "UI_LoadingTips_classes.hpp"
#include "UI_LoadingTips_parameters.hpp"


namespace SDK
{

// Function UI_LoadingTips.UI_LoadingTips_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LoadingTips_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LoadingTips_C", "PreConstruct");

	Params::UI_LoadingTips_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LoadingTips.UI_LoadingTips_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_LoadingTips_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LoadingTips_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LoadingTips.UI_LoadingTips_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LoadingTips_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LoadingTips_C", "Tick");

	Params::UI_LoadingTips_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LoadingTips.UI_LoadingTips_C.Show Hint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LoadingTips_C::Show_Hint(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LoadingTips_C", "Show Hint");

	Params::UI_LoadingTips_C_Show_Hint Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LoadingTips.UI_LoadingTips_C.OnFadeInFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_LoadingTips_C::OnFadeInFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LoadingTips_C", "OnFadeInFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LoadingTips.UI_LoadingTips_C.OnFadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_LoadingTips_C::OnFadeOutFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LoadingTips_C", "OnFadeOutFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LoadingTips.UI_LoadingTips_C.ExecuteUbergraph_UI_LoadingTips
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LoadingTips_C::ExecuteUbergraph_UI_LoadingTips(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LoadingTips_C", "ExecuteUbergraph_UI_LoadingTips");

	Params::UI_LoadingTips_C_ExecuteUbergraph_UI_LoadingTips Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
