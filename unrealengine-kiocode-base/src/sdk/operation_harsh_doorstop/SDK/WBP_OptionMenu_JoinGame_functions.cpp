#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionMenu_JoinGame

#include "Basic.hpp"

#include "WBP_OptionMenu_JoinGame_classes.hpp"
#include "WBP_OptionMenu_JoinGame_parameters.hpp"


namespace SDK
{

// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ExecuteUbergraph_WBP_OptionMenu_JoinGame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::ExecuteUbergraph_WBP_OptionMenu_JoinGame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "ExecuteUbergraph_WBP_OptionMenu_JoinGame");

	Params::WBP_OptionMenu_JoinGame_C_ExecuteUbergraph_WBP_OptionMenu_JoinGame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ConfirmServerPasswordInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InputText                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_OptionMenu_JoinGame_C::ConfirmServerPasswordInput(const class FText& InputText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "ConfirmServerPasswordInput");

	Params::WBP_OptionMenu_JoinGame_C_ConfirmServerPasswordInput Parms{};

	Parms.InputText = std::move(InputText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.SortPreferenceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFServerSortPreference           SortPreference                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::SortPreferenceChanged(const struct FFServerSortPreference& SortPreference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "SortPreferenceChanged");

	Params::WBP_OptionMenu_JoinGame_C_SortPreferenceChanged Parms{};

	Parms.SortPreference = std::move(SortPreference);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TMap<class UClass*, struct FHDFilterRuleParams>ActiveFilters                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_OptionMenu_JoinGame_C::BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature(const TMap<class UClass*, struct FHDFilterRuleParams>& ActiveFilters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature");

	Params::WBP_OptionMenu_JoinGame_C_BndEvt__FiltersPanel_K2Node_ComponentBoundEvent_8_OnServerFiltersChanged__DelegateSignature Parms{};

	Parms.ActiveFilters = std::move(ActiveFilters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionMenu_JoinGame_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "PreConstruct");

	Params::WBP_OptionMenu_JoinGame_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature");

	Params::WBP_OptionMenu_JoinGame_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_OptionMenu_JoinGame_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__DetailsPanel_K2Node_ComponentBoundEvent_3_OnJoinServerBtnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_OptionMenu_JoinGame_C::BndEvt__DetailsPanel_K2Node_ComponentBoundEvent_3_OnJoinServerBtnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "BndEvt__DetailsPanel_K2Node_ComponentBoundEvent_3_OnJoinServerBtnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature");

	Params::WBP_OptionMenu_JoinGame_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature");

	Params::WBP_OptionMenu_JoinGame_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionMenu_JoinGame_C::BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::WBP_OptionMenu_JoinGame_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_OptionMenu_JoinGame_C::BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ReceiveOnRefreshComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bSortAscending                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EHDServerListSortBy                     SortBy                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::ReceiveOnRefreshComplete(bool bSortAscending, EHDServerListSortBy SortBy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "ReceiveOnRefreshComplete");

	Params::WBP_OptionMenu_JoinGame_C_ReceiveOnRefreshComplete Parms{};

	Parms.bSortAscending = bSortAscending;
	Parms.SortBy = SortBy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ReceiveOnRefreshStart
// (Event, Protected, BlueprintEvent)

void UWBP_OptionMenu_JoinGame_C::ReceiveOnRefreshStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "ReceiveOnRefreshStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.SetActiveSubMenuByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubMenuIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::SetActiveSubMenuByIndex(int32 SubMenuIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "SetActiveSubMenuByIndex");

	Params::WBP_OptionMenu_JoinGame_C_SetActiveSubMenuByIndex Parms{};

	Parms.SubMenuIndex = SubMenuIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ServerListItemSelectionUpdated
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHDServerListItemData*            InSelectedServerListItem                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::ServerListItemSelectionUpdated(class UHDServerListItemData* InSelectedServerListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "ServerListItemSelectionUpdated");

	Params::WBP_OptionMenu_JoinGame_C_ServerListItemSelectionUpdated Parms{};

	Parms.InSelectedServerListItem = InSelectedServerListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ServerListItemSelectionCleared
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_OptionMenu_JoinGame_C::ServerListItemSelectionCleared()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "ServerListItemSelectionCleared");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ClearServerListItemSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OptionMenu_JoinGame_C::ClearServerListItemSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "ClearServerListItemSelection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetSelectedServerListItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHDServerListItemData*            ServerItem                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::GetSelectedServerListItem(class UHDServerListItemData** ServerItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "GetSelectedServerListItem");

	Params::WBP_OptionMenu_JoinGame_C_GetSelectedServerListItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ServerItem != nullptr)
		*ServerItem = Parms.ServerItem;
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.IsValidServerListItemIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   IndexToTest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValidIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionMenu_JoinGame_C::IsValidServerListItemIndex(int32 IndexToTest, bool* bValidIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "IsValidServerListItemIndex");

	Params::WBP_OptionMenu_JoinGame_C_IsValidServerListItemIndex Parms{};

	Parms.IndexToTest = IndexToTest;

	UObject::ProcessEvent(Func, &Parms);

	if (bValidIndex != nullptr)
		*bValidIndex = Parms.bValidIndex;
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetServerListSortPreference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFServerSortPreference           SortPreference                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::GetServerListSortPreference(struct FFServerSortPreference* SortPreference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "GetServerListSortPreference");

	Params::WBP_OptionMenu_JoinGame_C_GetServerListSortPreference Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SortPreference != nullptr)
		*SortPreference = std::move(Parms.SortPreference);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ToggleServerDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShown                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionMenu_JoinGame_C::ToggleServerDetails(bool bShown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "ToggleServerDetails");

	Params::WBP_OptionMenu_JoinGame_C_ToggleServerDetails Parms{};

	Parms.bShown = bShown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.RefreshServerList
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OptionMenu_JoinGame_C::RefreshServerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "RefreshServerList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.ApplyActiveServerFilters
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OptionMenu_JoinGame_C::ApplyActiveServerFilters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "ApplyActiveServerFilters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.OpenPasswordPrompt
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OptionMenu_JoinGame_C::OpenPasswordPrompt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "OpenPasswordPrompt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetDesiredVerticalAlignment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVerticalAlignment                      Alignment                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::GetDesiredVerticalAlignment(EVerticalAlignment* Alignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "GetDesiredVerticalAlignment");

	Params::WBP_OptionMenu_JoinGame_C_GetDesiredVerticalAlignment Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Alignment != nullptr)
		*Alignment = Parms.Alignment;
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetDesiredHorizontalAlignment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHorizontalAlignment                    Alignment                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::GetDesiredHorizontalAlignment(EHorizontalAlignment* Alignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "GetDesiredHorizontalAlignment");

	Params::WBP_OptionMenu_JoinGame_C_GetDesiredHorizontalAlignment Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Alignment != nullptr)
		*Alignment = Parms.Alignment;
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.GetSubMenuOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFSubMenuOption>          SubOptions                                             (Parm, OutParm, HasGetValueTypeHash)

void UWBP_OptionMenu_JoinGame_C::GetSubMenuOptions(TArray<struct FFSubMenuOption>* SubOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "GetSubMenuOptions");

	Params::WBP_OptionMenu_JoinGame_C_GetSubMenuOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SubOptions != nullptr)
		*SubOptions = std::move(Parms.SubOptions);
}


// Function WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C.HasSubMenus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSubMenuOptions                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionMenu_JoinGame_C::HasSubMenus(bool* bSubMenuOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionMenu_JoinGame_C", "HasSubMenus");

	Params::WBP_OptionMenu_JoinGame_C_HasSubMenus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSubMenuOptions != nullptr)
		*bSubMenuOptions = Parms.bSubMenuOptions;
}

}
