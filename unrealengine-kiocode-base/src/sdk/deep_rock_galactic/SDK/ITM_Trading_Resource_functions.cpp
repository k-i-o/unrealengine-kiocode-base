#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Trading_Resource

#include "Basic.hpp"

#include "ITM_Trading_Resource_classes.hpp"
#include "ITM_Trading_Resource_parameters.hpp"


namespace SDK
{

// Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateChangeAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IncrementAmount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DidUpdate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Trading_Resource_C::UpdateChangeAmount(int32 IncrementAmount, bool* DidUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "UpdateChangeAmount");

	Params::ITM_Trading_Resource_C_UpdateChangeAmount Parms{};

	Parms.IncrementAmount = IncrementAmount;

	UObject::ProcessEvent(Func, &Parms);

	if (DidUpdate != nullptr)
		*DidUpdate = Parms.DidUpdate;
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Trading_Resource_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "PreConstruct");

	Params::ITM_Trading_Resource_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData*                    Param_Resource                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UITM_Trading_BasketItem_C*        Param_TradeBasket                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Trading_Resource_C::SetData(class UResourceData* Param_Resource, class UITM_Trading_BasketItem_C* Param_TradeBasket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "SetData");

	Params::ITM_Trading_Resource_C_SetData Parms{};

	Parms.Param_Resource = Param_Resource;
	Parms.Param_TradeBasket = Param_TradeBasket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateNumber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_DoClearAnim                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_DoTradeAnim                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   InitialDelay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Trading_Resource_C::UpdateNumber(bool Param_DoClearAnim, bool Param_DoTradeAnim, float InitialDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "UpdateNumber");

	Params::ITM_Trading_Resource_C_UpdateNumber Parms{};

	Parms.Param_DoClearAnim = Param_DoClearAnim;
	Parms.Param_DoTradeAnim = Param_DoTradeAnim;
	Parms.InitialDelay = InitialDelay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.SetAvailableBalance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_CreditsLeft                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Trading_Resource_C::SetAvailableBalance(int32 Param_CreditsLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "SetAvailableBalance");

	Params::ITM_Trading_Resource_C_SetAvailableBalance Parms{};

	Parms.Param_CreditsLeft = Param_CreditsLeft;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.ClearAmount
// (BlueprintCallable, BlueprintEvent)

void UITM_Trading_Resource_C::ClearAmount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "ClearAmount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateAmountOwned
// (BlueprintCallable, BlueprintEvent)

void UITM_Trading_Resource_C::UpdateAmountOwned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "UpdateAmountOwned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.FadeFinished
// (BlueprintCallable, BlueprintEvent)

void UITM_Trading_Resource_C::FadeFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "FadeFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Trading_Resource_C::BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Trading_Resource_C::BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Trading_Resource_C::BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Trading_Resource_C::BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Trading_Resource_C::BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Trading_Resource_C::BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.IncrementAmount
// (BlueprintCallable, BlueprintEvent)

void UITM_Trading_Resource_C::IncrementAmount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "IncrementAmount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Trading_Resource_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.ResourceUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData*                    Param_Resource                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CurrentAmount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Trading_Resource_C::ResourceUpdated(class UResourceData* Param_Resource, float CurrentAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "ResourceUpdated");

	Params::ITM_Trading_Resource_C_ResourceUpdated Parms{};

	Parms.Param_Resource = Param_Resource;
	Parms.CurrentAmount = CurrentAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.ExecuteUbergraph_ITM_Trading_Resource
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Trading_Resource_C::ExecuteUbergraph_ITM_Trading_Resource(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "ExecuteUbergraph_ITM_Trading_Resource");

	Params::ITM_Trading_Resource_C_ExecuteUbergraph_ITM_Trading_Resource Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Trading_Resource.ITM_Trading_Resource_C.AmoutUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_DoClearAnim                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_DoTradeAnim                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Trading_Resource_C::AmoutUpdated__DelegateSignature(bool Param_DoClearAnim, bool Param_DoTradeAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Trading_Resource_C", "AmoutUpdated__DelegateSignature");

	Params::ITM_Trading_Resource_C_AmoutUpdated__DelegateSignature Parms{};

	Parms.Param_DoClearAnim = Param_DoClearAnim;
	Parms.Param_DoTradeAnim = Param_DoTradeAnim;

	UObject::ProcessEvent(Func, &Parms);
}

}

