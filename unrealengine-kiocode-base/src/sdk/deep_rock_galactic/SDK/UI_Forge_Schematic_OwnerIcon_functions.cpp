#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Forge_Schematic_OwnerIcon

#include "Basic.hpp"

#include "UI_Forge_Schematic_OwnerIcon_classes.hpp"
#include "UI_Forge_Schematic_OwnerIcon_parameters.hpp"


namespace SDK
{

// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_Schematic_OwnerIcon_C::ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Schematic_OwnerIcon_C", "ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon");

	Params::UI_Forge_Schematic_OwnerIcon_C_ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Forge_Schematic_OwnerIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Schematic_OwnerIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Forge_Schematic_OwnerIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Schematic_OwnerIcon_C", "PreConstruct");

	Params::UI_Forge_Schematic_OwnerIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetMaxSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWidth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_Schematic_OwnerIcon_C::SetMaxSize(int32 InWidth, int32 InHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Schematic_OwnerIcon_C", "SetMaxSize");

	Params::UI_Forge_Schematic_OwnerIcon_C_SetMaxSize Parms{};

	Parms.InWidth = InWidth;
	Parms.InHeight = InHeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromSchematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic*                       InSchematic                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_Schematic_OwnerIcon_C::FromSchematic(class USchematic* InSchematic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Schematic_OwnerIcon_C", "FromSchematic");

	Params::UI_Forge_Schematic_OwnerIcon_C_FromSchematic Parms{};

	Parms.InSchematic = InSchematic;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetIconAndVisibility
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_Schematic_OwnerIcon_C::SetIconAndVisibility(class UTexture2D* Texture, const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Schematic_OwnerIcon_C", "SetIconAndVisibility");

	Params::UI_Forge_Schematic_OwnerIcon_C_SetIconAndVisibility Parms{};

	Parms.Texture = Texture;
	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromItemID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemID*                          ItemID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_Schematic_OwnerIcon_C::FromItemID(class UItemID* ItemID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Schematic_OwnerIcon_C", "FromItemID");

	Params::UI_Forge_Schematic_OwnerIcon_C_FromItemID Parms{};

	Parms.ItemID = ItemID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromActorClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemData*                        ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Forge_Schematic_OwnerIcon_C::FromActorClass(class UItemData* ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Forge_Schematic_OwnerIcon_C", "FromActorClass");

	Params::UI_Forge_Schematic_OwnerIcon_C_FromActorClass Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);
}

}

