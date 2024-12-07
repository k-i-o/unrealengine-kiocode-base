#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_ServerList_Entry

#include "Basic.hpp"

#include "ITM_ServerList_Entry_classes.hpp"
#include "ITM_ServerList_Entry_parameters.hpp"


namespace SDK
{

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.GetServerID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           ID                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UITM_ServerList_Entry_C::GetServerID(class FString* ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "GetServerID");

	Params::ITM_ServerList_Entry_C_GetServerID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = std::move(Parms.ID);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InHovered                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_ServerList_Entry_C::SetHovered(bool InHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "SetHovered");

	Params::ITM_ServerList_Entry_C_SetHovered Parms{};

	Parms.InHovered = InHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OpenProfile
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_ServerList_Entry_C::OpenProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "OpenProfile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetServername
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_ServerList_Entry_C::SetServername()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "SetServername");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UITM_ServerList_Entry_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "OnMouseButtonUp");

	Params::ITM_ServerList_Entry_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UITM_ServerList_Entry_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "OnKeyUp");

	Params::ITM_ServerList_Entry_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionNameWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Width                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ServerList_Entry_C::SetMissionNameWidth(float Width)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "SetMissionNameWidth");

	Params::ITM_ServerList_Entry_C_SetMissionNameWidth Parms{};

	Parms.Width = Width;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetVisibleElements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InShowComplexity                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InShowDifficulty                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InShowLength                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InShowTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InShowWarningsAndMutators                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_ServerList_Entry_C::SetVisibleElements(bool InShowComplexity, bool InShowDifficulty, bool InShowLength, bool InShowTime, bool InShowWarningsAndMutators)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "SetVisibleElements");

	Params::ITM_ServerList_Entry_C_SetVisibleElements Parms{};

	Parms.InShowComplexity = InShowComplexity;
	Parms.InShowDifficulty = InShowDifficulty;
	Parms.InShowLength = InShowLength;
	Parms.InShowTime = InShowTime;
	Parms.InShowWarningsAndMutators = InShowWarningsAndMutators;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.GetMissionToolTip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UITM_ServerList_Entry_C::GetMissionToolTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "GetMissionToolTip");

	Params::ITM_ServerList_Entry_C_GetMissionToolTip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetColumnWidths
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                           InWidths                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UITM_ServerList_Entry_C::SetColumnWidths(TArray<float>& InWidths)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "SetColumnWidths");

	Params::ITM_ServerList_Entry_C_SetColumnWidths Parms{};

	Parms.InWidths = std::move(InWidths);

	UObject::ProcessEvent(Func, &Parms);

	InWidths = std::move(Parms.InWidths);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ToggleMissionDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_ServerList_Entry_C::ToggleMissionDetails(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "ToggleMissionDetails");

	Params::ITM_ServerList_Entry_C_ToggleMissionDetails Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetNoMission
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_ServerList_Entry_C::SetNoMission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "SetNoMission");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetBiomeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBiome*                           Biome                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ServerList_Entry_C::SetBiomeIcon(class UBiome* Biome)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "SetBiomeIcon");

	Params::ITM_ServerList_Entry_C_SetBiomeIcon Parms{};

	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetupWarningsMutators
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission*                Mission                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ServerList_Entry_C::SetupWarningsMutators(class UGeneratedMission* Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "SetupWarningsMutators");

	Params::ITM_ServerList_Entry_C_SetupWarningsMutators Parms{};

	Parms.Mission = Mission;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.UpdateMissionTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_ServerList_Entry_C::UpdateMissionTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "UpdateMissionTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetSession
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult          Param_Session                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_ServerList_Entry_C::SetSession(const struct FBlueprintSessionResult& Param_Session)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "SetSession");

	Params::ITM_ServerList_Entry_C_SetSession Parms{};

	Parms.Param_Session = std::move(Param_Session);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_ServerList_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UITM_ServerList_Entry_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_ServerList_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "PreConstruct");

	Params::ITM_ServerList_Entry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ExecuteUbergraph_ITM_ServerList_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ServerList_Entry_C::ExecuteUbergraph_ITM_ServerList_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "ExecuteUbergraph_ITM_ServerList_Entry");

	Params::ITM_ServerList_Entry_C_ExecuteUbergraph_ITM_ServerList_Entry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_ServerList_Entry_C*          InEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ServerList_Entry_C::OnUnhovered__DelegateSignature(class UITM_ServerList_Entry_C* InEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "OnUnhovered__DelegateSignature");

	Params::ITM_ServerList_Entry_C_OnUnhovered__DelegateSignature Parms{};

	Parms.InEntry = InEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_ServerList_Entry_C*          InEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ServerList_Entry_C::OnHovered__DelegateSignature(class UITM_ServerList_Entry_C* InEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "OnHovered__DelegateSignature");

	Params::ITM_ServerList_Entry_C_OnHovered__DelegateSignature Parms{};

	Parms.InEntry = InEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.JoinServer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult          Param_Session                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_ServerList_Entry_C::JoinServer__DelegateSignature(const struct FBlueprintSessionResult& Param_Session)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ServerList_Entry_C", "JoinServer__DelegateSignature");

	Params::ITM_ServerList_Entry_C_JoinServer__DelegateSignature Parms{};

	Parms.Param_Session = std::move(Param_Session);

	UObject::ProcessEvent(Func, &Parms);
}

}

