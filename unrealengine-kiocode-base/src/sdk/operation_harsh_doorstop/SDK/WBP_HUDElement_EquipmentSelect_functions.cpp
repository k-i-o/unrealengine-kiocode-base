#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUDElement_EquipmentSelect

#include "Basic.hpp"

#include "WBP_HUDElement_EquipmentSelect_classes.hpp"
#include "WBP_HUDElement_EquipmentSelect_parameters.hpp"


namespace SDK
{

// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.ExecuteUbergraph_WBP_HUDElement_EquipmentSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_EquipmentSelect_C::ExecuteUbergraph_WBP_HUDElement_EquipmentSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "ExecuteUbergraph_WBP_HUDElement_EquipmentSelect");

	Params::WBP_HUDElement_EquipmentSelect_C_ExecuteUbergraph_WBP_HUDElement_EquipmentSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.OnEquipmentListModified
// (BlueprintCallable, BlueprintEvent)

void UWBP_HUDElement_EquipmentSelect_C::OnEquipmentListModified()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "OnEquipmentListModified");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.LoadEquipmentAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        IconToLoad                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   SlotNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDBaseWeapon*                    EqpItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_EquipmentSelect_C::LoadEquipmentAsset(TSoftObjectPtr<class UTexture2D> IconToLoad, int32 SlotNum, class AHDBaseWeapon* EqpItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "LoadEquipmentAsset");

	Params::WBP_HUDElement_EquipmentSelect_C_LoadEquipmentAsset Parms{};

	Parms.IconToLoad = IconToLoad;
	Parms.SlotNum = SlotNum;
	Parms.EqpItem = EqpItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUDElement_EquipmentSelect_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "PreConstruct");

	Params::WBP_HUDElement_EquipmentSelect_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_EquipmentSelect_C::OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64");

	Params::WBP_HUDElement_EquipmentSelect_C_OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectNextItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HUDElement_EquipmentSelect_C::SelectNextItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "SelectNextItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectPrevItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HUDElement_EquipmentSelect_C::SelectPrevItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "SelectPrevItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewSlotIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_EquipmentSelect_C::SelectItem(int32 NewSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "SelectItem");

	Params::WBP_HUDElement_EquipmentSelect_C_SelectItem Parms{};

	Parms.NewSlotIndex = NewSlotIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.AddEquipment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHDItemEntry                     EqpInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class AHDBaseWeapon*                    EqpItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_EquipmentSelect_C::AddEquipment(struct FHDItemEntry& EqpInfo, class AHDBaseWeapon* EqpItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "AddEquipment");

	Params::WBP_HUDElement_EquipmentSelect_C_AddEquipment Parms{};

	Parms.EqpInfo = std::move(EqpInfo);
	Parms.EqpItem = EqpItem;

	UObject::ProcessEvent(Func, &Parms);

	EqpInfo = std::move(Parms.EqpInfo);
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.RebuildEquipmentList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HUDElement_EquipmentSelect_C::RebuildEquipmentList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "RebuildEquipmentList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.RemoveEquipmentAtSlotNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bRemoved                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUDElement_EquipmentSelect_C::RemoveEquipmentAtSlotNum(int32 SlotNum, bool* bRemoved)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "RemoveEquipmentAtSlotNum");

	Params::WBP_HUDElement_EquipmentSelect_C_RemoveEquipmentAtSlotNum Parms{};

	Parms.SlotNum = SlotNum;

	UObject::ProcessEvent(Func, &Parms);

	if (bRemoved != nullptr)
		*bRemoved = Parms.bRemoved;
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.ClearEquipmentList
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HUDElement_EquipmentSelect_C::ClearEquipmentList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "ClearEquipmentList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.CreateAndAddEquipmentWidget
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SlotNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHDBaseWeapon*                    EqpItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_EquipmentSelect_C::CreateAndAddEquipmentWidget(class UTexture2D* Icon, int32 SlotNum, bool bEnabled, class AHDBaseWeapon* EqpItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "CreateAndAddEquipmentWidget");

	Params::WBP_HUDElement_EquipmentSelect_C_CreateAndAddEquipmentWidget Parms{};

	Parms.Icon = Icon;
	Parms.SlotNum = SlotNum;
	Parms.bEnabled = bEnabled;
	Parms.EqpItem = EqpItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.GetMinSlotIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FFEqpSlotData>            SlotDataArray                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                                   MinSlotIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_EquipmentSelect_C::GetMinSlotIndex(TArray<struct FFEqpSlotData>& SlotDataArray, int32* MinSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "GetMinSlotIndex");

	Params::WBP_HUDElement_EquipmentSelect_C_GetMinSlotIndex Parms{};

	Parms.SlotDataArray = std::move(SlotDataArray);

	UObject::ProcessEvent(Func, &Parms);

	SlotDataArray = std::move(Parms.SlotDataArray);

	if (MinSlotIndex != nullptr)
		*MinSlotIndex = Parms.MinSlotIndex;
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.GetSelectedItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFEqpSlotData                    OutSlotData                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                                    bFoundItem                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUDElement_EquipmentSelect_C::GetSelectedItem(struct FFEqpSlotData* OutSlotData, bool* bFoundItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "GetSelectedItem");

	Params::WBP_HUDElement_EquipmentSelect_C_GetSelectedItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotData != nullptr)
		*OutSlotData = std::move(Parms.OutSlotData);

	if (bFoundItem != nullptr)
		*bFoundItem = Parms.bFoundItem;
}


// Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectItemBySlotNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_EquipmentSelect_C::SelectItemBySlotNum(int32 SlotNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_EquipmentSelect_C", "SelectItemBySlotNum");

	Params::WBP_HUDElement_EquipmentSelect_C_SelectItemBySlotNum Parms{};

	Parms.SlotNum = SlotNum;

	UObject::ProcessEvent(Func, &Parms);
}

}
