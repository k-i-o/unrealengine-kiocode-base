#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Wardrobe_ItemSlot_Vanity

#include "Basic.hpp"

#include "ITM_Wardrobe_ItemSlot_Vanity_classes.hpp"
#include "ITM_Wardrobe_ItemSlot_Vanity_parameters.hpp"


namespace SDK
{

// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveShowShuffleOptions
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutShowOptions                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveShowShuffleOptions(bool* OutShowOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "ReceiveShowShuffleOptions");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_ReceiveShowShuffleOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutShowOptions != nullptr)
		*OutShowOptions = Parms.OutShowOptions;
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceivePreviewItem
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutSuccess                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Wardrobe_ItemSlot_Vanity_C::ReceivePreviewItem(int32 Param_Index, bool Show, bool* OutSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "ReceivePreviewItem");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_ReceivePreviewItem Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSuccess != nullptr)
		*OutSuccess = Parms.OutSuccess;
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveEquipItem
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutSuccess                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveEquipItem(int32 InIndex, bool* OutSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "ReceiveEquipItem");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_ReceiveEquipItem Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSuccess != nullptr)
		*OutSuccess = Parms.OutSuccess;
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveGetSelectedIndex
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveGetSelectedIndex(int32* OutIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "ReceiveGetSelectedIndex");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_ReceiveGetSelectedIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIndex != nullptr)
		*OutIndex = Parms.OutIndex;
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveInitializeEntries
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_Wardrobe_Entry>   InEntries                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveInitializeEntries(TArray<struct FStruct_Wardrobe_Entry>& InEntries)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "ReceiveInitializeEntries");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_ReceiveInitializeEntries Parms{};

	Parms.InEntries = std::move(InEntries);

	UObject::ProcessEvent(Func, &Parms);

	InEntries = std::move(Parms.InEntries);
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveCreateEntryWidget
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          InReuseWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSlotWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                          OutWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveCreateEntryWidget(class UObject* InObject, int32 InIndex, class UWidget* InReuseWidget, bool IsSlotWidget, class UWidget** OutWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "ReceiveCreateEntryWidget");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_ReceiveCreateEntryWidget Parms{};

	Parms.InObject = InObject;
	Parms.InIndex = InIndex;
	Parms.InReuseWidget = InReuseWidget;
	Parms.IsSlotWidget = IsSlotWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (OutWidget != nullptr)
		*OutWidget = Parms.OutWidget;
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveReleaseResource
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveReleaseResource(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "ReceiveReleaseResource");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_ReceiveReleaseResource Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceivePreConstruct
// (Protected, BlueprintCallable, BlueprintEvent)

void UITM_Wardrobe_ItemSlot_Vanity_C::ReceivePreConstruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "ReceivePreConstruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.PostInitilization
// (BlueprintCallable, BlueprintEvent)

void UITM_Wardrobe_ItemSlot_Vanity_C::PostInitilization()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "PostInitilization");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.GetDefaultItem
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVanityItem*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UVanityItem* UITM_Wardrobe_ItemSlot_Vanity_C::GetDefaultItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "GetDefaultItem");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_GetDefaultItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.GetVanityDLC
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVanityItem*                      InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDLCBase*                         Required_DLC                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ItemSlot_Vanity_C::GetVanityDLC(class UVanityItem* InItem, class UDLCBase** Required_DLC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "GetVanityDLC");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_GetVanityDLC Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);

	if (Required_DLC != nullptr)
		*Required_DLC = Parms.Required_DLC;
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.GetVanityName
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVanityItem*                      InVanityItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText                       ReturnValue                                            (ConstParm, Parm, OutParm, ReturnParm)

const class FText UITM_Wardrobe_ItemSlot_Vanity_C::GetVanityName(class UVanityItem* InVanityItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "GetVanityName");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_GetVanityName Parms{};

	Parms.InVanityItem = InVanityItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.UpdateItemWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_GeneratedIcon_Item_C*        InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVanityItem*                      InVanityItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    In_Show_Tool_Tip                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             In_Cancel_Group                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ItemSlot_Vanity_C::UpdateItemWidget(class UITM_GeneratedIcon_Item_C* InWidget, class UVanityItem* InVanityItem, bool In_Show_Tool_Tip, class FName In_Cancel_Group)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "UpdateItemWidget");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_UpdateItemWidget Parms{};

	Parms.InWidget = InWidget;
	Parms.InVanityItem = InVanityItem;
	Parms.In_Show_Tool_Tip = In_Show_Tool_Tip;
	Parms.In_Cancel_Group = In_Cancel_Group;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.CreateItemWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InBackgroundVisible                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InShowToolTip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UITM_GeneratedIcon_Item_C*        OutItemWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ItemSlot_Vanity_C::CreateItemWidget(bool InBackgroundVisible, bool InShowToolTip, class UITM_GeneratedIcon_Item_C** OutItemWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "CreateItemWidget");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_CreateItemWidget Parms{};

	Parms.InBackgroundVisible = InBackgroundVisible;
	Parms.InShowToolTip = InShowToolTip;

	UObject::ProcessEvent(Func, &Parms);

	if (OutItemWidget != nullptr)
		*OutItemWidget = Parms.OutItemWidget;
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.SetSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVanityItem*                      Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ItemSlot_Vanity_C::SetSelectedItem(class UVanityItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "SetSelectedItem");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_SetSelectedItem Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ItemSlot_Vanity_C::ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ItemSlot_Vanity_C", "ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity");

	Params::ITM_Wardrobe_ItemSlot_Vanity_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

