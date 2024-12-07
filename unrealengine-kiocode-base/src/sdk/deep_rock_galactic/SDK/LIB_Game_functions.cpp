#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LIB_Game

#include "Basic.hpp"

#include "LIB_Game_classes.hpp"
#include "LIB_Game_parameters.hpp"


namespace SDK
{

// Function LIB_Game.LIB_Game_C.IsKickReason
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EDisconnectReason                       DisconnectReason                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Kicked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULIB_Game_C::IsKickReason(EDisconnectReason DisconnectReason, class UObject* __WorldContext, bool* Kicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LIB_Game_C", "IsKickReason");

	Params::LIB_Game_C_IsKickReason Parms{};

	Parms.DisconnectReason = DisconnectReason;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Kicked != nullptr)
		*Kicked = Parms.Kicked;
}


// Function LIB_Game.LIB_Game_C.SelectVisibility
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        FLASE                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        TURR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsVisible                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    VisibilityChanged                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        New_Visibility                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULIB_Game_C::SelectVisibility(class UWidget* Widget, ESlateVisibility FLASE, ESlateVisibility TURR, bool Param_Index, class UObject* __WorldContext, bool* IsVisible, bool* VisibilityChanged, ESlateVisibility* New_Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LIB_Game_C", "SelectVisibility");

	Params::LIB_Game_C_SelectVisibility Parms{};

	Parms.Widget = Widget;
	Parms.FLASE = FLASE;
	Parms.TURR = TURR;
	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;

	if (VisibilityChanged != nullptr)
		*VisibilityChanged = Parms.VisibilityChanged;

	if (New_Visibility != nullptr)
		*New_Visibility = Parms.New_Visibility;
}


// Function LIB_Game.LIB_Game_C.LoadMission
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoftObjectPath                  NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULIB_Game_C::LoadMission(const struct FSoftObjectPath& NewParam, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LIB_Game_C", "LoadMission");

	Params::LIB_Game_C_LoadMission Parms{};

	Parms.NewParam = std::move(NewParam);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function LIB_Game.LIB_Game_C.SetVisibilityIf
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Visibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsVisible                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULIB_Game_C::SetVisibilityIf(class UWidget* Widget, ESlateVisibility Visibility, bool Condition, class UObject* __WorldContext, bool* IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LIB_Game_C", "SetVisibilityIf");

	Params::LIB_Game_C_SetVisibilityIf Parms{};

	Parms.Widget = Widget;
	Parms.Visibility = Visibility;
	Parms.Condition = Condition;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;
}


// Function LIB_Game.LIB_Game_C.UpdateBool
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Variable                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                                    InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ValueChanged                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULIB_Game_C::UpdateBool(bool& Variable, bool InValue, class UObject* __WorldContext, bool* ValueChanged, bool* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LIB_Game_C", "UpdateBool");

	Params::LIB_Game_C_UpdateBool Parms{};

	Parms.Variable = Variable;
	Parms.InValue = InValue;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Variable = Parms.Variable;

	if (ValueChanged != nullptr)
		*ValueChanged = Parms.ValueChanged;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function LIB_Game.LIB_Game_C.SetTextureAndTint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bMatchSize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     Tint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULIB_Game_C::SetTextureAndTint(class UImage* Target, class UTexture2D* Texture, bool bMatchSize, const struct FLinearColor& Tint, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LIB_Game_C", "SetTextureAndTint");

	Params::LIB_Game_C_SetTextureAndTint Parms{};

	Parms.Target = Target;
	Parms.Texture = Texture;
	Parms.bMatchSize = bMatchSize;
	Parms.Tint = std::move(Tint);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function LIB_Game.LIB_Game_C.SetSoftTextureAndTint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    bMatchSize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     Tint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULIB_Game_C::SetSoftTextureAndTint(class UImage* Target, TSoftObjectPtr<class UTexture2D> Texture, bool bMatchSize, const struct FLinearColor& Tint, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LIB_Game_C", "SetSoftTextureAndTint");

	Params::LIB_Game_C_SetSoftTextureAndTint Parms{};

	Parms.Target = Target;
	Parms.Texture = Texture;
	Parms.bMatchSize = bMatchSize;
	Parms.Tint = std::move(Tint);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function LIB_Game.LIB_Game_C.IsFlaggedVisible
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsFlaggedVisible                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULIB_Game_C::IsFlaggedVisible(class UWidget* InWidget, class UObject* __WorldContext, bool* Param_IsFlaggedVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LIB_Game_C", "IsFlaggedVisible");

	Params::LIB_Game_C_IsFlaggedVisible Parms{};

	Parms.InWidget = InWidget;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param_IsFlaggedVisible != nullptr)
		*Param_IsFlaggedVisible = Parms.Param_IsFlaggedVisible;
}


// Function LIB_Game.LIB_Game_C.SetTextureAndColor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bMatchSize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULIB_Game_C::SetTextureAndColor(class UImage* Target, class UTexture2D* Texture, bool bMatchSize, const struct FLinearColor& InColorAndOpacity, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LIB_Game_C", "SetTextureAndColor");

	Params::LIB_Game_C_SetTextureAndColor Parms{};

	Parms.Target = Target;
	Parms.Texture = Texture;
	Parms.bMatchSize = bMatchSize;
	Parms.InColorAndOpacity = std::move(InColorAndOpacity);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function LIB_Game.LIB_Game_C.IsOnSpaceRig
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OnSpaceRig                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULIB_Game_C::IsOnSpaceRig(class UObject* __WorldContext, bool* OnSpaceRig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LIB_Game_C", "IsOnSpaceRig");

	Params::LIB_Game_C_IsOnSpaceRig Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OnSpaceRig != nullptr)
		*OnSpaceRig = Parms.OnSpaceRig;
}

}

