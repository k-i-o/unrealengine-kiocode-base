#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Bar_OrderMenu_Preview

#include "Basic.hpp"

#include "UI_Bar_OrderMenu_Preview_classes.hpp"
#include "UI_Bar_OrderMenu_Preview_parameters.hpp"


namespace SDK
{

// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.OnPreviewItemChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*             Previous_Item                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpaceRigBarMenuItem*             New_Item                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Preview_C::OnPreviewItemChanged__DelegateSignature(class USpaceRigBarMenuItem* Previous_Item, class USpaceRigBarMenuItem* New_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Preview_C", "OnPreviewItemChanged__DelegateSignature");

	Params::UI_Bar_OrderMenu_Preview_C_OnPreviewItemChanged__DelegateSignature Parms{};

	Parms.Previous_Item = Previous_Item;
	Parms.New_Item = New_Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.ExecuteUbergraph_UI_Bar_OrderMenu_Preview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Preview_C::ExecuteUbergraph_UI_Bar_OrderMenu_Preview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Preview_C", "ExecuteUbergraph_UI_Bar_OrderMenu_Preview");

	Params::UI_Bar_OrderMenu_Preview_C_ExecuteUbergraph_UI_Bar_OrderMenu_Preview Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Refresh Visuals
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::Refresh_Visuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Preview_C", "Refresh Visuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.FadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::FadeOutFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Preview_C", "FadeOutFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade Out
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::Fade_Out()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Preview_C", "Fade Out");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade In
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::Fade_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Preview_C", "Fade In");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Preview_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Set Preview Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*             CurrentItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Preview_C::Set_Preview_Item(class USpaceRigBarMenuItem* CurrentItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Preview_C", "Set Preview Item");

	Params::UI_Bar_OrderMenu_Preview_C_Set_Preview_Item Parms{};

	Parms.CurrentItem = CurrentItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Bar_OrderMenu_Preview_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Preview_C", "PreConstruct");

	Params::UI_Bar_OrderMenu_Preview_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

