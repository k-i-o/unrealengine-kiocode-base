#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToolTip_WithKeyIcon

#include "Basic.hpp"

#include "ToolTip_WithKeyIcon_classes.hpp"
#include "ToolTip_WithKeyIcon_parameters.hpp"


namespace SDK
{

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.ExecuteUbergraph_ToolTip_WithKeyIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToolTip_WithKeyIcon_C::ExecuteUbergraph_ToolTip_WithKeyIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolTip_WithKeyIcon_C", "ExecuteUbergraph_ToolTip_WithKeyIcon");

	Params::ToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.Set Tool Tip Owner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToolTip_WithKeyIcon_C::Set_Tool_Tip_Owner(class UWidget* Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolTip_WithKeyIcon_C", "Set Tool Tip Owner");

	Params::ToolTip_WithKeyIcon_C_Set_Tool_Tip_Owner Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UToolTip_WithKeyIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolTip_WithKeyIcon_C", "PreConstruct");

	Params::ToolTip_WithKeyIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Target_Widget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToolTip_WithKeyIcon_C::SetTarget(class UWidget* Target_Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolTip_WithKeyIcon_C", "SetTarget");

	Params::ToolTip_WithKeyIcon_C_SetTarget Parms{};

	Parms.Target_Widget = Target_Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Headline                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Param_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActionIconMapping               Param_Icon                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UToolTip_WithKeyIcon_C::SetData(const class FText& Param_Headline, const class FText& Param_Text, const struct FActionIconMapping& Param_Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolTip_WithKeyIcon_C", "SetData");

	Params::ToolTip_WithKeyIcon_C_SetData Parms{};

	Parms.Param_Headline = std::move(Param_Headline);
	Parms.Param_Text = std::move(Param_Text);
	Parms.Param_Icon = std::move(Param_Icon);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetPostionAndAlignment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InAlignment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToolTip_WithKeyIcon_C::SetPostionAndAlignment(const struct FVector2D& InPosition, const struct FVector2D& InAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolTip_WithKeyIcon_C", "SetPostionAndAlignment");

	Params::ToolTip_WithKeyIcon_C_SetPostionAndAlignment Parms{};

	Parms.InPosition = std::move(InPosition);
	Parms.InAlignment = std::move(InAlignment);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMinWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   MinWidth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToolTip_WithKeyIcon_C::SetMinWidth(float MinWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolTip_WithKeyIcon_C", "SetMinWidth");

	Params::ToolTip_WithKeyIcon_C_SetMinWidth Parms{};

	Parms.MinWidth = MinWidth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMaxWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   MaxWidth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToolTip_WithKeyIcon_C::SetMaxWidth(float MaxWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolTip_WithKeyIcon_C", "SetMaxWidth");

	Params::ToolTip_WithKeyIcon_C_SetMaxWidth Parms{};

	Parms.MaxWidth = MaxWidth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InWidthOverride                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToolTip_WithKeyIcon_C::SetWidth(float InWidthOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolTip_WithKeyIcon_C", "SetWidth");

	Params::ToolTip_WithKeyIcon_C_SetWidth Parms{};

	Parms.InWidthOverride = InWidthOverride;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToolTip_WithKeyIcon_C::FadeIn(float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolTip_WithKeyIcon_C", "FadeIn");

	Params::ToolTip_WithKeyIcon_C_FadeIn Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}

}
