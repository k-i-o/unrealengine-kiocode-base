#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_JoinServerFiltersPanel

#include "Basic.hpp"

#include "WBP_JoinServerFiltersPanel_classes.hpp"
#include "WBP_JoinServerFiltersPanel_parameters.hpp"


namespace SDK
{

// Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.OnServerFiltersChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UClass*, struct FHDFilterRuleParams>ActiveFilters                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_JoinServerFiltersPanel_C::OnServerFiltersChanged__DelegateSignature(const TMap<class UClass*, struct FHDFilterRuleParams>& ActiveFilters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JoinServerFiltersPanel_C", "OnServerFiltersChanged__DelegateSignature");

	Params::WBP_JoinServerFiltersPanel_C_OnServerFiltersChanged__DelegateSignature Parms{};

	Parms.ActiveFilters = std::move(ActiveFilters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.ExecuteUbergraph_WBP_JoinServerFiltersPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinServerFiltersPanel_C::ExecuteUbergraph_WBP_JoinServerFiltersPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JoinServerFiltersPanel_C", "ExecuteUbergraph_WBP_JoinServerFiltersPanel");

	Params::WBP_JoinServerFiltersPanel_C_ExecuteUbergraph_WBP_JoinServerFiltersPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.FilterSettingsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UClass*, struct FHDFilterRuleParams>ActiveFilters                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_JoinServerFiltersPanel_C::FilterSettingsChanged(const TMap<class UClass*, struct FHDFilterRuleParams>& ActiveFilters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JoinServerFiltersPanel_C", "FilterSettingsChanged");

	Params::WBP_JoinServerFiltersPanel_C_FilterSettingsChanged Parms{};

	Parms.ActiveFilters = std::move(ActiveFilters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_JoinServerFiltersPanel_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JoinServerFiltersPanel_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.GetFilterRules
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    bActiveOnly                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class UClass*, struct FHDFilterRuleParams>FilterRules                                            (Parm, OutParm)

void UWBP_JoinServerFiltersPanel_C::GetFilterRules(bool bActiveOnly, TMap<class UClass*, struct FHDFilterRuleParams>* FilterRules) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JoinServerFiltersPanel_C", "GetFilterRules");

	Params::WBP_JoinServerFiltersPanel_C_GetFilterRules Parms{};

	Parms.bActiveOnly = bActiveOnly;

	UObject::ProcessEvent(Func, &Parms);

	if (FilterRules != nullptr)
		*FilterRules = std::move(Parms.FilterRules);
}

}
