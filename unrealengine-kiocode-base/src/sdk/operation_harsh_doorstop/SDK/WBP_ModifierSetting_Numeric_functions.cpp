#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModifierSetting_Numeric

#include "Basic.hpp"

#include "WBP_ModifierSetting_Numeric_classes.hpp"
#include "WBP_ModifierSetting_Numeric_parameters.hpp"


namespace SDK
{

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSetting_Numeric_C::OnValueChanged__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "OnValueChanged__DelegateSignature");

	Params::WBP_ModifierSetting_Numeric_C_OnValueChanged__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.OnValueCommitted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSetting_Numeric_C::OnValueCommitted__DelegateSignature(float InValue, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "OnValueCommitted__DelegateSignature");

	Params::WBP_ModifierSetting_Numeric_C_OnValueCommitted__DelegateSignature Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.ExecuteUbergraph_WBP_ModifierSetting_Numeric
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSetting_Numeric_C::ExecuteUbergraph_WBP_ModifierSetting_Numeric(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "ExecuteUbergraph_WBP_ModifierSetting_Numeric");

	Params::WBP_ModifierSetting_Numeric_C_ExecuteUbergraph_WBP_ModifierSetting_Numeric Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSetting_Numeric_C::BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::WBP_ModifierSetting_Numeric_C_BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSetting_Numeric_C::BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::WBP_ModifierSetting_Numeric_C_BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ModifierSetting_Numeric_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "PreConstruct");

	Params::WBP_ModifierSetting_Numeric_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetSettingText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InSettingText                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ModifierSetting_Numeric_C::SetSettingText(const class FText& InSettingText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "SetSettingText");

	Params::WBP_ModifierSetting_Numeric_C_SetSettingText Parms{};

	Parms.InSettingText = std::move(InSettingText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetSettingText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Param_SettingText                                      (Parm, OutParm)

void UWBP_ModifierSetting_Numeric_C::GetSettingText(class FText* Param_SettingText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "GetSettingText");

	Params::WBP_ModifierSetting_Numeric_C_GetSettingText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SettingText != nullptr)
		*Param_SettingText = std::move(Parms.Param_SettingText);
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetMagicValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMagicValueText                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ModifierSetting_Numeric_C::SetMagicValueText(const class FText& InMagicValueText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "SetMagicValueText");

	Params::WBP_ModifierSetting_Numeric_C_SetMagicValueText Parms{};

	Parms.InMagicValueText = std::move(InMagicValueText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetMagicValueText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Param_MagicValueText                                   (Parm, OutParm)

void UWBP_ModifierSetting_Numeric_C::GetMagicValueText(class FText* Param_MagicValueText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "GetMagicValueText");

	Params::WBP_ModifierSetting_Numeric_C_GetMagicValueText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_MagicValueText != nullptr)
		*Param_MagicValueText = std::move(Parms.Param_MagicValueText);
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSetting_Numeric_C::SetValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "SetValue");

	Params::WBP_ModifierSetting_Numeric_C_SetValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSetting_Numeric_C::GetValue(float* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "GetValue");

	Params::WBP_ModifierSetting_Numeric_C_GetValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetValueSnapDelta
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDelta                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSetting_Numeric_C::SetValueSnapDelta(float InDelta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "SetValueSnapDelta");

	Params::WBP_ModifierSetting_Numeric_C_SetValueSnapDelta Parms{};

	Parms.InDelta = InDelta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetValueSnapDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Delta                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSetting_Numeric_C::GetValueSnapDelta(float* Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "GetValueSnapDelta");

	Params::WBP_ModifierSetting_Numeric_C_GetValueSnapDelta Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Delta != nullptr)
		*Delta = Parms.Delta;
}


// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.UpdateMagicValueState
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ModifierSetting_Numeric_C::UpdateMagicValueState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_Numeric_C", "UpdateMagicValueState");

	UObject::ProcessEvent(Func, nullptr);
}

}
