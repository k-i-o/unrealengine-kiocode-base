#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Bar_OrderMenu_Item

#include "Basic.hpp"

#include "UI_Bar_OrderMenu_Item_classes.hpp"
#include "UI_Bar_OrderMenu_Item_parameters.hpp"


namespace SDK
{

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinksPurchased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*              Param_Drink                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Item_C::OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset* Param_Drink)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "OnDrinksPurchased__DelegateSignature");

	Params::UI_Bar_OrderMenu_Item_C_OnDrinksPurchased__DelegateSignature Parms{};

	Parms.Param_Drink = Param_Drink;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*             OrderItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Item_C::OnHover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "OnHover__DelegateSignature");

	Params::UI_Bar_OrderMenu_Item_C_OnHover__DelegateSignature Parms{};

	Parms.OrderItem = OrderItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*             OrderItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Item_C::OnUnhover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "OnUnhover__DelegateSignature");

	Params::UI_Bar_OrderMenu_Item_C_OnUnhover__DelegateSignature Parms{};

	Parms.OrderItem = OrderItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPurchaseDenied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::OnPurchaseDenied__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "OnPurchaseDenied__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Item_C::OnSelected__DelegateSignature(class USpaceRigBarMenuItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "OnSelected__DelegateSignature");

	Params::UI_Bar_OrderMenu_Item_C_OnSelected__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinkUnlocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*              Param_Drink                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Item_C::OnDrinkUnlocked__DelegateSignature(class UDrinkableDataAsset* Param_Drink)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "OnDrinkUnlocked__DelegateSignature");

	Params::UI_Bar_OrderMenu_Item_C_OnDrinkUnlocked__DelegateSignature Parms{};

	Parms.Param_Drink = Param_Drink;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinkableTypeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::OnDrinkableTypeChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "OnDrinkableTypeChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.ExecuteUbergraph_UI_Bar_OrderMenu_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Item_C::ExecuteUbergraph_UI_Bar_OrderMenu_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "ExecuteUbergraph_UI_Bar_OrderMenu_Item");

	Params::UI_Bar_OrderMenu_Item_C_ExecuteUbergraph_UI_Bar_OrderMenu_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Set Drinkable Visuals
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::Set_Drinkable_Visuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "Set Drinkable Visuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Bar_OrderMenu_Item_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "PreConstruct");

	Params::UI_Bar_OrderMenu_Item_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__UI_Bar_OrderMenu_Item_OrderSpecialEdition_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Bar_OrderMenu_Item_C::BndEvt__UI_Bar_OrderMenu_Item_OrderSpecialEdition_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "BndEvt__UI_Bar_OrderMenu_Item_OrderSpecialEdition_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UI_Bar_OrderMenu_Item_C_BndEvt__UI_Bar_OrderMenu_Item_OrderSpecialEdition_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnCreditsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Credits                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Item_C::OnCreditsChanged(int32 Credits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "OnCreditsChanged");

	Params::UI_Bar_OrderMenu_Item_C_OnCreditsChanged Parms{};

	Parms.Credits = Credits;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnlockAnimFinished_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::OnUnlockAnimFinished_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "OnUnlockAnimFinished_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.TryUnlock
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::TryUnlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "TryUnlock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BuyFailed
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::BuyFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "BuyFailed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHoverFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::OnHoverFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "OnHoverFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Unselect
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::Unselect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "Unselect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Select
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::Select()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "Select");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPlayerProgressChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Stars                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Item_C::OnPlayerProgressChanged(int32 Rank, int32 Stars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "OnPlayerProgressChanged");

	Params::UI_Bar_OrderMenu_Item_C_OnPlayerProgressChanged Parms{};

	Parms.Rank = Rank;
	Parms.Stars = Stars;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Yes_0F2CD82B4BA6006B33BED8B78B16B74B
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::Yes_0F2CD82B4BA6006B33BED8B78B16B74B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "Yes_0F2CD82B4BA6006B33BED8B78B16B74B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.No_0F2CD82B4BA6006B33BED8B78B16B74B
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::No_0F2CD82B4BA6006B33BED8B78B16B74B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "No_0F2CD82B4BA6006B33BED8B78B16B74B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetBorderColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     OutputColor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Item_C::GetBorderColor(struct FLinearColor* OutputColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "GetBorderColor");

	Params::UI_Bar_OrderMenu_Item_C_GetBorderColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutputColor != nullptr)
		*OutputColor = std::move(Parms.OutputColor);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.UpdateItem
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::UpdateItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "UpdateItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetTemporaryBuf
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTemporaryBuff*                   buff                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bar_OrderMenu_Item_C::GetTemporaryBuf(class UTemporaryBuff** buff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "GetTemporaryBuf");

	Params::UI_Bar_OrderMenu_Item_C_GetTemporaryBuf Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (buff != nullptr)
		*buff = Parms.buff;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.HasPlayerRank
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUI_Bar_OrderMenu_Item_C::HasPlayerRank()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "HasPlayerRank");

	Params::UI_Bar_OrderMenu_Item_C_HasPlayerRank Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.AreBeersFreee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUI_Bar_OrderMenu_Item_C::AreBeersFreee()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "AreBeersFreee");

	Params::UI_Bar_OrderMenu_Item_C_AreBeersFreee Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetSelectedDrinkableType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDrinkableDataAsset*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UDrinkableDataAsset* UUI_Bar_OrderMenu_Item_C::GetSelectedDrinkableType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "GetSelectedDrinkableType");

	Params::UI_Bar_OrderMenu_Item_C_GetSelectedDrinkableType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUI_Bar_OrderMenu_Item_C::IsInteractable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bar_OrderMenu_Item_C", "IsInteractable");

	Params::UI_Bar_OrderMenu_Item_C_IsInteractable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
