#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_Trading_Resources

#include "Basic.hpp"

#include "WND_Trading_Resources_classes.hpp"
#include "WND_Trading_Resources_parameters.hpp"


namespace SDK
{

// Function WND_Trading_Resources.WND_Trading_Resources_C.UpdateAmountAfterDeal
// (Public, BlueprintCallable, BlueprintEvent)

void UWND_Trading_Resources_C::UpdateAmountAfterDeal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_Trading_Resources_C", "UpdateAmountAfterDeal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_Trading_Resources.WND_Trading_Resources_C.CountTradeResources
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UResourceData*, int32>       Map                                                    (ConstParm, Parm, OutParm)
// bool                                    IsBuyingMinerals                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWND_Trading_Resources_C::CountTradeResources(const TMap<class UResourceData*, int32>* Map, bool* IsBuyingMinerals)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_Trading_Resources_C", "CountTradeResources");

	Params::WND_Trading_Resources_C_CountTradeResources Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Map != nullptr)
		*Map = std::move(Parms.Map);

	if (IsBuyingMinerals != nullptr)
		*IsBuyingMinerals = Parms.IsBuyingMinerals;
}


// Function WND_Trading_Resources.WND_Trading_Resources_C.OnAmoutUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DoClearAnim                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    DoTradeAnim                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWND_Trading_Resources_C::OnAmoutUpdated(bool DoClearAnim, bool DoTradeAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_Trading_Resources_C", "OnAmoutUpdated");

	Params::WND_Trading_Resources_C_OnAmoutUpdated Parms{};

	Parms.DoClearAnim = DoClearAnim;
	Parms.DoTradeAnim = DoTradeAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_Trading_Resources.WND_Trading_Resources_C.No_678F03CB47E4D126FB4FF99BC3F43B71
// (BlueprintCallable, BlueprintEvent)

void UWND_Trading_Resources_C::No_678F03CB47E4D126FB4FF99BC3F43B71()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_Trading_Resources_C", "No_678F03CB47E4D126FB4FF99BC3F43B71");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_Trading_Resources.WND_Trading_Resources_C.Yes_678F03CB47E4D126FB4FF99BC3F43B71
// (BlueprintCallable, BlueprintEvent)

void UWND_Trading_Resources_C::Yes_678F03CB47E4D126FB4FF99BC3F43B71()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_Trading_Resources_C", "Yes_678F03CB47E4D126FB4FF99BC3F43B71");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_Trading_Resources.WND_Trading_Resources_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWND_Trading_Resources_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_Trading_Resources_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_Trading_Resources.WND_Trading_Resources_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWND_Trading_Resources_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_Trading_Resources_C", "PreConstruct");

	Params::WND_Trading_Resources_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_Trading_Resources.WND_Trading_Resources_C.BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBasic_ButtonCutCorner_C*         Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_Trading_Resources_C::BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_Trading_Resources_C", "BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::WND_Trading_Resources_C_BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_Trading_Resources.WND_Trading_Resources_C.BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBasic_ButtonCutCorner_C*         Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_Trading_Resources_C::BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_Trading_Resources_C", "BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::WND_Trading_Resources_C_BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_Trading_Resources.WND_Trading_Resources_C.ClearAll
// (BlueprintCallable, BlueprintEvent)

void UWND_Trading_Resources_C::ClearAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_Trading_Resources_C", "ClearAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_Trading_Resources.WND_Trading_Resources_C.OnCreditsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Credits                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_Trading_Resources_C::OnCreditsChanged(int32 Credits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_Trading_Resources_C", "OnCreditsChanged");

	Params::WND_Trading_Resources_C_OnCreditsChanged Parms{};

	Parms.Credits = Credits;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_Trading_Resources.WND_Trading_Resources_C.ExecuteUbergraph_WND_Trading_Resources
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_Trading_Resources_C::ExecuteUbergraph_WND_Trading_Resources(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_Trading_Resources_C", "ExecuteUbergraph_WND_Trading_Resources");

	Params::WND_Trading_Resources_C_ExecuteUbergraph_WND_Trading_Resources Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

