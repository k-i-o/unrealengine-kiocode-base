#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDRadialMenu

#include "Basic.hpp"

#include "WBP_HDRadialMenu_classes.hpp"
#include "WBP_HDRadialMenu_parameters.hpp"


namespace SDK
{

// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.ExecuteUbergraph_WBP_HDRadialMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDRadialMenu_C::ExecuteUbergraph_WBP_HDRadialMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "ExecuteUbergraph_WBP_HDRadialMenu");

	Params::WBP_HDRadialMenu_C_ExecuteUbergraph_WBP_HDRadialMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.OnCancel
// (BlueprintCallable, BlueprintEvent)

void UWBP_HDRadialMenu_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "OnCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HDRadialMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDRadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "Tick");

	Params::WBP_HDRadialMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GoBack
// (BlueprintCallable, BlueprintEvent)

void UWBP_HDRadialMenu_C::GoBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "GoBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.Submit
// (BlueprintCallable, BlueprintEvent)

void UWBP_HDRadialMenu_C::Submit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "Submit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   NewSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OldSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDRadialMenu_C::BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature");

	Params::WBP_HDRadialMenu_C_BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature Parms{};

	Parms.NewSelection = NewSelection;
	Parms.OldSelection = OldSelection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetCategoryName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_HDRadialMenu_C::GetCategoryName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "GetCategoryName");

	Params::WBP_HDRadialMenu_C_GetCategoryName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetCategories
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     Categories                                             (Parm, OutParm, HasGetValueTypeHash)

void UWBP_HDRadialMenu_C::GetCategories(TArray<class FName>* Categories)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "GetCategories");

	Params::WBP_HDRadialMenu_C_GetCategories Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Categories != nullptr)
		*Categories = std::move(Parms.Categories);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetCategoryData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSHDRadialMenu_OptionData        Param_CategoryData                                     (Parm, OutParm, HasGetValueTypeHash)

void UWBP_HDRadialMenu_C::GetCategoryData(class FName Category, struct FSHDRadialMenu_OptionData* Param_CategoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "GetCategoryData");

	Params::WBP_HDRadialMenu_C_GetCategoryData Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CategoryData != nullptr)
		*Param_CategoryData = std::move(Parms.Param_CategoryData);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetItemNamesForSelectedOption
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     OutRowNames                                            (Parm, OutParm, HasGetValueTypeHash)

void UWBP_HDRadialMenu_C::GetItemNamesForSelectedOption(TArray<class FName>* OutRowNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "GetItemNamesForSelectedOption");

	Params::WBP_HDRadialMenu_C_GetItemNamesForSelectedOption Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutRowNames != nullptr)
		*OutRowNames = std::move(Parms.OutRowNames);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSHDRadialMenu_OptionData        ItemData                                               (Parm, OutParm, HasGetValueTypeHash)

void UWBP_HDRadialMenu_C::GetItemData(class FName RowName, struct FSHDRadialMenu_OptionData* ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "GetItemData");

	Params::WBP_HDRadialMenu_C_GetItemData Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemData != nullptr)
		*ItemData = std::move(Parms.ItemData);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.PopulateMenuOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       MenuOptions                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDRadialMenu_C::PopulateMenuOptions(class UDataTable* MenuOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "PopulateMenuOptions");

	Params::WBP_HDRadialMenu_C_PopulateMenuOptions Parms{};

	Parms.MenuOptions = MenuOptions;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.PopulateSubmenuOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HDRadialMenu_C::PopulateSubmenuOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "PopulateSubmenuOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.SelectSubmenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HDRadialMenu_C::SelectSubmenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "SelectSubmenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.MakeSpottingIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSHDRadialMenu_OptionData        OptionData                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_RadialMenuIconBase_C*        Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDRadialMenu_C::MakeSpottingIcon(const struct FSHDRadialMenu_OptionData& OptionData, class UWBP_RadialMenuIconBase_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "MakeSpottingIcon");

	Params::WBP_HDRadialMenu_C_MakeSpottingIcon Parms{};

	Parms.OptionData = std::move(OptionData);

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.MakeRallypointIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSHDRadialMenu_OptionData        OptionData                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_RadialMenuIconBase_C*        Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDRadialMenu_C::MakeRallypointIcon(const struct FSHDRadialMenu_OptionData& OptionData, class UWBP_RadialMenuIconBase_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "MakeRallypointIcon");

	Params::WBP_HDRadialMenu_C_MakeRallypointIcon Parms{};

	Parms.OptionData = std::move(OptionData);

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.MakeOutpostIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSHDRadialMenu_OptionData        OptionData                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_RadialMenuIconBase_C*        Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDRadialMenu_C::MakeOutpostIcon(const struct FSHDRadialMenu_OptionData& OptionData, class UWBP_RadialMenuIconBase_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "MakeOutpostIcon");

	Params::WBP_HDRadialMenu_C_MakeOutpostIcon Parms{};

	Parms.OptionData = std::move(OptionData);

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.OwnerPawnDeath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            VictimPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      VictimController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   KillingDamage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent                     DamageEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class APawn*                            InstigatingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDRadialMenu_C::OwnerPawnDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "OwnerPawnDeath");

	Params::WBP_HDRadialMenu_C_OwnerPawnDeath Parms{};

	Parms.VictimPawn = VictimPawn;
	Parms.VictimController = VictimController;
	Parms.KillingDamage = KillingDamage;
	Parms.DamageEvent = std::move(DamageEvent);
	Parms.InstigatingPawn = InstigatingPawn;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetRallypointTimeRemaining
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_HDPlayerCharacterBase_C*      OwnerPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             TimeRemaining                                          (Parm, OutParm)

void UWBP_HDRadialMenu_C::GetRallypointTimeRemaining(class ABP_HDPlayerCharacterBase_C* OwnerPawn, class FText* TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "GetRallypointTimeRemaining");

	Params::WBP_HDRadialMenu_C_GetRallypointTimeRemaining Parms{};

	Parms.OwnerPawn = OwnerPawn;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeRemaining != nullptr)
		*TimeRemaining = std::move(Parms.TimeRemaining);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetRallypointName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_HDRadialMenu_C::GetRallypointName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "GetRallypointName");

	Params::WBP_HDRadialMenu_C_GetRallypointName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetOutpostTimeRemaining
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_HDPlayerCharacterBase_C*      OwnerPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             TimeRemaining                                          (Parm, OutParm)

void UWBP_HDRadialMenu_C::GetOutpostTimeRemaining(class ABP_HDPlayerCharacterBase_C* OwnerPawn, class FText* TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "GetOutpostTimeRemaining");

	Params::WBP_HDRadialMenu_C_GetOutpostTimeRemaining Parms{};

	Parms.OwnerPawn = OwnerPawn;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeRemaining != nullptr)
		*TimeRemaining = std::move(Parms.TimeRemaining);
}


// Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetOutpostName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_HDRadialMenu_C::GetOutpostName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenu_C", "GetOutpostName");

	Params::WBP_HDRadialMenu_C_GetOutpostName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
