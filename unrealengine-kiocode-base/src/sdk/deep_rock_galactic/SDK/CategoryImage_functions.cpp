#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CategoryImage

#include "Basic.hpp"

#include "CategoryImage_classes.hpp"
#include "CategoryImage_parameters.hpp"


namespace SDK
{

// Function CategoryImage.CategoryImage_C.ExecuteUbergraph_CategoryImage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryImage_C::ExecuteUbergraph_CategoryImage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryImage_C", "ExecuteUbergraph_CategoryImage");

	Params::CategoryImage_C_ExecuteUbergraph_CategoryImage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryImage.CategoryImage_C.SetStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MM_ButtonStyle                        IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryImage_C::SetStyle(E_MM_ButtonStyle IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryImage_C", "SetStyle");

	Params::CategoryImage_C_SetStyle Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryImage.CategoryImage_C.SetMissionIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FObjectiveMissionIcon            MissionIcon                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCategoryImage_C::SetMissionIcon(const struct FObjectiveMissionIcon& MissionIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryImage_C", "SetMissionIcon");

	Params::CategoryImage_C_SetMissionIcon Parms{};

	Parms.MissionIcon = std::move(MissionIcon);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryImage.CategoryImage_C.SetOutlineColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryImage_C::SetOutlineColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryImage_C", "SetOutlineColor");

	Params::CategoryImage_C_SetOutlineColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryImage.CategoryImage_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     BackgroundColor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       OptionalMaskedImage                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryImage_C::SetImage(class UTexture2D* Image, const struct FLinearColor& BackgroundColor, class UTexture2D* OptionalMaskedImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryImage_C", "SetImage");

	Params::CategoryImage_C_SetImage Parms{};

	Parms.Image = Image;
	Parms.BackgroundColor = std::move(BackgroundColor);
	Parms.OptionalMaskedImage = OptionalMaskedImage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryImage.CategoryImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryImage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryImage_C", "PreConstruct");

	Params::CategoryImage_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

