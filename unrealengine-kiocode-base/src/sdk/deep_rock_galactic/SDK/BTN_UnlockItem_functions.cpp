#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTN_UnlockItem

#include "Basic.hpp"

#include "BTN_UnlockItem_classes.hpp"
#include "BTN_UnlockItem_parameters.hpp"


namespace SDK
{

// Function BTN_UnlockItem.BTN_UnlockItem_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ICraftable>      Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTN_UnlockItem_C::SetData(TScriptInterface<class ICraftable> Item, class UClass* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_UnlockItem_C", "SetData");

	Params::BTN_UnlockItem_C_SetData Parms{};

	Parms.Item = Item;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTN_UnlockItem.BTN_UnlockItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTN_UnlockItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_UnlockItem_C", "PreConstruct");

	Params::BTN_UnlockItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTN_UnlockItem.BTN_UnlockItem_C.ExecuteUbergraph_BTN_UnlockItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTN_UnlockItem_C::ExecuteUbergraph_BTN_UnlockItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_UnlockItem_C", "ExecuteUbergraph_BTN_UnlockItem");

	Params::BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
