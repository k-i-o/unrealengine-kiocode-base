#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DeepDives_Start

#include "Basic.hpp"

#include "ITM_DeepDives_Start_classes.hpp"
#include "ITM_DeepDives_Start_parameters.hpp"


namespace SDK
{

// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.HandleKeyDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    OutHandled                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                      OutReply                                               (Parm, OutParm)

void UITM_DeepDives_Start_C::HandleKeyDown(const struct FKeyEvent& KeyEvent, bool* OutHandled, struct FEventReply* OutReply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "HandleKeyDown");

	Params::ITM_DeepDives_Start_C_HandleKeyDown Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (OutHandled != nullptr)
		*OutHandled = Parms.OutHandled;

	if (OutReply != nullptr)
		*OutReply = std::move(Parms.OutReply);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UITM_DeepDives_Start_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "OnKeyDown");

	Params::ITM_DeepDives_Start_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.UpdateOptions
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_Start_C::UpdateOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "UpdateOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5
// (BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_Start_C::OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5
// (BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_Start_C::OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnFailure_14795847495E51F942775B86C1C4BCCF
// (BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_Start_C::OnFailure_14795847495E51F942775B86C1C4BCCF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "OnFailure_14795847495E51F942775B86C1C4BCCF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnSuccess_14795847495E51F942775B86C1C4BCCF
// (BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_Start_C::OnSuccess_14795847495E51F942775B86C1C4BCCF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "OnSuccess_14795847495E51F942775B86C1C4BCCF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Start_C::BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	Params::ITM_DeepDives_Start_C_BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Start_C::BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature");

	Params::ITM_DeepDives_Start_C_BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Start_C::BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature");

	Params::ITM_DeepDives_Start_C_BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.Start Mission
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDeepDive*                        Mission                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_Start_C::Start_Mission(class UDeepDive* Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "Start Mission");

	Params::ITM_DeepDives_Start_C_Start_Mission Parms{};

	Parms.Mission = Mission;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDeepDive*                        DeepDive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_Start_C::BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature(class UDeepDive* DeepDive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature");

	Params::ITM_DeepDives_Start_C_BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature Parms{};

	Parms.DeepDive = DeepDive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDeepDive*                        DeepDive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_Start_C::BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature(class UDeepDive* DeepDive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature");

	Params::ITM_DeepDives_Start_C_BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature Parms{};

	Parms.DeepDive = DeepDive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.Open
// (BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_Start_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    EliteDeepDive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Start_C::BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature(bool EliteDeepDive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature");

	Params::ITM_DeepDives_Start_C_BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature Parms{};

	Parms.EliteDeepDive = EliteDeepDive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    EliteDeepDive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Start_C::BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature(bool EliteDeepDive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature");

	Params::ITM_DeepDives_Start_C_BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature Parms{};

	Parms.EliteDeepDive = EliteDeepDive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_DeepDives_Start_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Start_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "PreConstruct");

	Params::ITM_DeepDives_Start_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Start_C::BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature");

	Params::ITM_DeepDives_Start_C_BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnTimeout
// (BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_Start_C::OnTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "OnTimeout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.RefreshTimeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Start_C::RefreshTimeout(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "RefreshTimeout");

	Params::ITM_DeepDives_Start_C_RefreshTimeout Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Start_C::BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature");

	Params::ITM_DeepDives_Start_C_BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__ITM_DeepDives_Start_PasswordField_K2Node_ComponentBoundEvent_9_OnTextCommitted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// uint8                                   CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_Start_C::BndEvt__ITM_DeepDives_Start_PasswordField_K2Node_ComponentBoundEvent_9_OnTextCommitted__DelegateSignature(const class FText& Text, uint8 CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "BndEvt__ITM_DeepDives_Start_PasswordField_K2Node_ComponentBoundEvent_9_OnTextCommitted__DelegateSignature");

	Params::ITM_DeepDives_Start_C_BndEvt__ITM_DeepDives_Start_PasswordField_K2Node_ComponentBoundEvent_9_OnTextCommitted__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.ExecuteUbergraph_ITM_DeepDives_Start
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_Start_C::ExecuteUbergraph_ITM_DeepDives_Start(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "ExecuteUbergraph_ITM_DeepDives_Start");

	Params::ITM_DeepDives_Start_C_ExecuteUbergraph_ITM_DeepDives_Start Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnJoinMission__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EliteDeepDive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Start_C::OnJoinMission__DelegateSignature(bool EliteDeepDive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Start_C", "OnJoinMission__DelegateSignature");

	Params::ITM_DeepDives_Start_C_OnJoinMission__DelegateSignature Parms{};

	Parms.EliteDeepDive = EliteDeepDive;

	UObject::ProcessEvent(Func, &Parms);
}

}

