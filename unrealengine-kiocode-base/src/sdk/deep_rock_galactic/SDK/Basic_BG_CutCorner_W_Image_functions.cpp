#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_BG_CutCorner_W_Image

#include "Basic.hpp"

#include "Basic_BG_CutCorner_W_Image_classes.hpp"
#include "Basic_BG_CutCorner_W_Image_parameters.hpp"


namespace SDK
{

// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.ExecuteUbergraph_Basic_BG_CutCorner_W_Image
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_BG_CutCorner_W_Image_C::ExecuteUbergraph_Basic_BG_CutCorner_W_Image(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BG_CutCorner_W_Image_C", "ExecuteUbergraph_Basic_BG_CutCorner_W_Image");

	Params::Basic_BG_CutCorner_W_Image_C_ExecuteUbergraph_Basic_BG_CutCorner_W_Image Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MM_ButtonStyle                        IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_BG_CutCorner_W_Image_C::SetStyle(E_MM_ButtonStyle IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BG_CutCorner_W_Image_C", "SetStyle");

	Params::Basic_BG_CutCorner_W_Image_C_SetStyle Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.UpdateCornorSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_BG_CutCorner_W_Image_C::UpdateCornorSize(float Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BG_CutCorner_W_Image_C", "UpdateCornorSize");

	Params::Basic_BG_CutCorner_W_Image_C_UpdateCornorSize Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetBackgroundColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_BG_CutCorner_W_Image_C::SetBackgroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BG_CutCorner_W_Image_C", "SetBackgroundColor");

	Params::Basic_BG_CutCorner_W_Image_C_SetBackgroundColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetOutlineColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_BG_CutCorner_W_Image_C::SetOutlineColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BG_CutCorner_W_Image_C", "SetOutlineColor");

	Params::Basic_BG_CutCorner_W_Image_C_SetOutlineColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       ImageBackground                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Param_BackgroundColor                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Front                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasic_BG_CutCorner_W_Image_C::SetImage(class UTexture2D* ImageBackground, const struct FLinearColor& Param_BackgroundColor, class UTexture2D* Front)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BG_CutCorner_W_Image_C", "SetImage");

	Params::Basic_BG_CutCorner_W_Image_C_SetImage Parms{};

	Parms.ImageBackground = ImageBackground;
	Parms.Param_BackgroundColor = std::move(Param_BackgroundColor);
	Parms.Front = Front;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasic_BG_CutCorner_W_Image_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Basic_BG_CutCorner_W_Image_C", "PreConstruct");

	Params::Basic_BG_CutCorner_W_Image_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
