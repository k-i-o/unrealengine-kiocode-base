#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lore_Container_Text_W_Image

#include "Basic.hpp"

#include "Lore_Container_Text_W_Image_classes.hpp"
#include "Lore_Container_Text_W_Image_parameters.hpp"


namespace SDK
{

// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.ExecuteUbergraph_Lore_Container_Text_W_Image
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_Container_Text_W_Image_C::ExecuteUbergraph_Lore_Container_Text_W_Image(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_Container_Text_W_Image_C", "ExecuteUbergraph_Lore_Container_Text_W_Image");

	Params::Lore_Container_Text_W_Image_C_ExecuteUbergraph_Lore_Container_Text_W_Image Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void ULore_Container_Text_W_Image_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_Container_Text_W_Image_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMinersManualData*                Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_Container_Text_W_Image_C::SetData(class UMinersManualData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_Container_Text_W_Image_C", "SetData");

	Params::Lore_Container_Text_W_Image_C_SetData Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.AddItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Content                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EHorizontalAlignment                    InHorizontalAlignment                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EVerticalAlignment                      InVerticalAlignment                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                          InPadding                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateSizeRule                          Size_Rule                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULore_Container_Text_W_Image_C::AddItem(class UWidget* Content, EHorizontalAlignment InHorizontalAlignment, EVerticalAlignment InVerticalAlignment, const struct FMargin& InPadding, ESlateSizeRule Size_Rule)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_Container_Text_W_Image_C", "AddItem");

	Params::Lore_Container_Text_W_Image_C_AddItem Parms{};

	Parms.Content = Content;
	Parms.InHorizontalAlignment = InHorizontalAlignment;
	Parms.InVerticalAlignment = InVerticalAlignment;
	Parms.InPadding = std::move(InPadding);
	Parms.Size_Rule = Size_Rule;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULore_Container_Text_W_Image_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lore_Container_Text_W_Image_C", "PreConstruct");

	Params::Lore_Container_Text_W_Image_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
