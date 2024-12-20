#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquippedInventorySlot

#include "Basic.hpp"

#include "EquippedInventorySlot_classes.hpp"
#include "EquippedInventorySlot_parameters.hpp"


namespace SDK
{

// Function EquippedInventorySlot.EquippedInventorySlot_C.ExecuteUbergraph_EquippedInventorySlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquippedInventorySlot_C::ExecuteUbergraph_EquippedInventorySlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "ExecuteUbergraph_EquippedInventorySlot");

	Params::EquippedInventorySlot_C_ExecuteUbergraph_EquippedInventorySlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.CancelDrag
// (Public, BlueprintCallable, BlueprintEvent)

void UEquippedInventorySlot_C::CancelDrag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "CancelDrag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.DragItemFromCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EShopItemCategory                       Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquippedInventorySlot_C::DragItemFromCategory(EShopItemCategory Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "DragItemFromCategory");

	Params::EquippedInventorySlot_C_DragItemFromCategory Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.SetNewItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquippedInventorySlot_C::SetNewItem(class UClass* ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "SetNewItem");

	Params::EquippedInventorySlot_C_SetNewItem Parms{};

	Parms.ItemInfo = ItemInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.UpdateItem
// (BlueprintCallable, BlueprintEvent)

void UEquippedInventorySlot_C::UpdateItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "UpdateItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.ResetBrush
// (BlueprintCallable, BlueprintEvent)

void UEquippedInventorySlot_C::ResetBrush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "ResetBrush");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEquippedInventorySlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.PreviewItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SalePrice                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquippedInventorySlot_C::PreviewItem(class UClass* ItemInfo, int32 SalePrice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "PreviewItem");

	Params::EquippedInventorySlot_C_PreviewItem Parms{};

	Parms.ItemInfo = ItemInfo;
	Parms.SalePrice = SalePrice;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.ChangeCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EShopItemCategory                       Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquippedInventorySlot_C::ChangeCategory(EShopItemCategory Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "ChangeCategory");

	Params::EquippedInventorySlot_C_ChangeCategory Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.RemoveloadoutCategory
// (Public, BlueprintCallable, BlueprintEvent)

void UEquippedInventorySlot_C::RemoveloadoutCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "RemoveloadoutCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.RefreshInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UEquippedInventorySlot_C::RefreshInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "RefreshInventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)

void UEquippedInventorySlot_C::Remove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "Remove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.OnDragOver
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEquippedInventorySlot_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "OnDragOver");

	Params::EquippedInventorySlot_C_OnDragOver Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEquippedInventorySlot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "OnDrop");

	Params::EquippedInventorySlot_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.UpdateItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEquippedInventorySlot_C::UpdateItemInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "UpdateItemInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.GetBrush_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UEquippedInventorySlot_C::GetBrush_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "GetBrush_0");

	Params::EquippedInventorySlot_C_GetBrush_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function EquippedInventorySlot.EquippedInventorySlot_C.Get_Rarity_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UEquippedInventorySlot_C::Get_Rarity_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquippedInventorySlot_C", "Get_Rarity_ColorAndOpacity_0");

	Params::EquippedInventorySlot_C_Get_Rarity_ColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

