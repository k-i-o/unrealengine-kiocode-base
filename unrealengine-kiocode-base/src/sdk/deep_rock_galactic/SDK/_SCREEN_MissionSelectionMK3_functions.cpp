#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: _SCREEN_MissionSelectionMK3

#include "Basic.hpp"

#include "_SCREEN_MissionSelectionMK3_classes.hpp"
#include "_SCREEN_MissionSelectionMK3_parameters.hpp"


namespace SDK
{

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.SelectRandomMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::SelectRandomMission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "SelectRandomMission");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableMissions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UGeneratedMission*>        ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class UGeneratedMission*> U_SCREEN_MissionSelectionMK3_C::GetAvailableMissions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "GetAvailableMissions");

	Params::_SCREEN_MissionSelectionMK3_C_GetAvailableMissions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HighlightChallenges
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>                  AssetReferences                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ShouldHighlight                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USeasonChallenge*                 Challenge                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::HighlightChallenges(const TArray<class UObject*>& AssetReferences, bool ShouldHighlight, class USeasonChallenge* Challenge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "HighlightChallenges");

	Params::_SCREEN_MissionSelectionMK3_C_HighlightChallenges Parms{};

	Parms.AssetReferences = std::move(AssetReferences);
	Parms.ShouldHighlight = ShouldHighlight;
	Parms.Challenge = Challenge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ClearServerListMissionRestrictions
// (Public, BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::ClearServerListMissionRestrictions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "ClearServerListMissionRestrictions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply U_SCREEN_MissionSelectionMK3_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "OnMouseButtonUp");

	Params::_SCREEN_MissionSelectionMK3_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.UpdateMapPan
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SnapToMouse                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void U_SCREEN_MissionSelectionMK3_C::UpdateMapPan(bool SnapToMouse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "UpdateMapPan");

	Params::_SCREEN_MissionSelectionMK3_C_UpdateMapPan Parms{};

	Parms.SnapToMouse = SnapToMouse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CheckForNewZones
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::CheckForNewZones()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "CheckForNewZones");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableBiomes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UITM_MisSel_Biome_C*>      AvailableBiomes1                                       (Parm, OutParm, ContainsInstancedReference)

void U_SCREEN_MissionSelectionMK3_C::GetAvailableBiomes(TArray<class UITM_MisSel_Biome_C*>* AvailableBiomes1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "GetAvailableBiomes");

	Params::_SCREEN_MissionSelectionMK3_C_GetAvailableBiomes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AvailableBiomes1 != nullptr)
		*AvailableBiomes1 = std::move(Parms.AvailableBiomes1);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EMissionSelection_Mode                  Mode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::GetMode(EMissionSelection_Mode* Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "GetMode");

	Params::_SCREEN_MissionSelectionMK3_C_GetMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mode != nullptr)
		*Mode = Parms.Mode;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShouldEnableQuickJoin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Show                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void U_SCREEN_MissionSelectionMK3_C::ShouldEnableQuickJoin(bool* Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "ShouldEnableQuickJoin");

	Params::_SCREEN_MissionSelectionMK3_C_ShouldEnableQuickJoin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HandleButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::HandleButtonVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "HandleButtonVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission_CheckBiome
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGeneratedMission*                Mission                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::GetMission_CheckBiome(class UGeneratedMission** Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "GetMission_CheckBiome");

	Params::_SCREEN_MissionSelectionMK3_C_GetMission_CheckBiome Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mission != nullptr)
		*Mission = Parms.Mission;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply U_SCREEN_MissionSelectionMK3_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "OnKeyUp");

	Params::_SCREEN_MissionSelectionMK3_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGeneratedMission*                Mission                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::GetMission(class UGeneratedMission** Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "GetMission");

	Params::_SCREEN_MissionSelectionMK3_C_GetMission Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mission != nullptr)
		*Mission = Parms.Mission;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.IsMissionLocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGeneratedMission*                Mission                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool U_SCREEN_MissionSelectionMK3_C::IsMissionLocked(class UGeneratedMission* Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "IsMissionLocked");

	Params::_SCREEN_MissionSelectionMK3_C_IsMissionLocked Parms{};

	Parms.Mission = Mission;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetActiveSelectionMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionSelection_Mode                  NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::GetActiveSelectionMode(EMissionSelection_Mode* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "GetActiveSelectionMode");

	Params::_SCREEN_MissionSelectionMK3_C_GetActiveSelectionMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerController_SpaceRig_C*  AsBP_Player_Controller_Space_Rig                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::GetController(class ABP_PlayerController_SpaceRig_C** AsBP_Player_Controller_Space_Rig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "GetController");

	Params::_SCREEN_MissionSelectionMK3_C_GetController Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Player_Controller_Space_Rig != nullptr)
		*AsBP_Player_Controller_Space_Rig = Parms.AsBP_Player_Controller_Space_Rig;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMissionBiome
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBiome*                           Biome                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UITM_MisSel_Biome_C*              Array_Element                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::GetMissionBiome(class UBiome* Biome, class UITM_MisSel_Biome_C** Array_Element)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "GetMissionBiome");

	Params::_SCREEN_MissionSelectionMK3_C_GetMissionBiome Parms{};

	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

	if (Array_Element != nullptr)
		*Array_Element = Parms.Array_Element;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnFailure_ED6FBDF64F71976389535788275C482E
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnFailure_ED6FBDF64F71976389535788275C482E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "OnFailure_ED6FBDF64F71976389535788275C482E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnSuccess_ED6FBDF64F71976389535788275C482E
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnSuccess_ED6FBDF64F71976389535788275C482E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "OnSuccess_ED6FBDF64F71976389535788275C482E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void U_SCREEN_MissionSelectionMK3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "PreConstruct");

	Params::_SCREEN_MissionSelectionMK3_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_MisSel_Biome_C*              Biome                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::BiomeHovered(class UITM_MisSel_Biome_C* Biome)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "BiomeHovered");

	Params::_SCREEN_MissionSelectionMK3_C_BiomeHovered Parms{};

	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_MisSel_Biome_C*              Biome                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::BiomeSelected(class UITM_MisSel_Biome_C* Biome)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "BiomeSelected");

	Params::_SCREEN_MissionSelectionMK3_C_BiomeSelected Parms{};

	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMission
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::ShowMission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "ShowMission");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowPlanet
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::ShowPlanet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "ShowPlanet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission*                Mission                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHovering                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void U_SCREEN_MissionSelectionMK3_C::MissionHover(class UGeneratedMission* Mission, bool IsHovering)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "MissionHover");

	Params::_SCREEN_MissionSelectionMK3_C_MissionHover Parms{};

	Parms.Mission = Mission;
	Parms.IsHovering = IsHovering;

	UObject::ProcessEvent(Func, &Parms);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartMission
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::StartMission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "StartMission");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartMission_Event_0
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnStartMission_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "OnStartMission_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionSelection_Mode                  Mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::ShowMode(EMissionSelection_Mode Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "ShowMode");

	Params::_SCREEN_MissionSelectionMK3_C_ShowMode Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Back
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::Back()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "Back");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowServerBrowser
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::ShowServerBrowser()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "ShowServerBrowser");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.InputSourceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFSDInputSource                         InputSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::InputSourceChanged(EFSDInputSource InputSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "InputSourceChanged");

	Params::_SCREEN_MissionSelectionMK3_C_InputSourceChanged Parms{};

	Parms.InputSource = InputSource;

	UObject::ProcessEvent(Func, &Parms);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnShown
// (Event, Protected, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "OnShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "Tick");

	Params::_SCREEN_MissionSelectionMK3_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_MisSel_MissionMapIcon_C*     Mission                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::MissionSelected(class UITM_MisSel_MissionMapIcon_C* Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "MissionSelected");

	Params::_SCREEN_MissionSelectionMK3_C_MissionSelected Parms{};

	Parms.Mission = Mission;

	UObject::ProcessEvent(Func, &Parms);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartSoloMission
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::StartSoloMission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "StartSoloMission");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnClosed
// (Event, Protected, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "OnClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartupCameraPan
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::StartupCameraPan()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "StartupCameraPan");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartSoloMission
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnStartSoloMission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "OnStartSoloMission");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__ITM_Challenge_InfoBox_K2Node_ComponentBoundEvent_1_OnChallengeHovered__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UObject*>                  AssetReferences                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InHovered                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USeasonChallenge*                 Challenge                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__ITM_Challenge_InfoBox_K2Node_ComponentBoundEvent_1_OnChallengeHovered__DelegateSignature(TArray<class UObject*>& AssetReferences, bool InHovered, class USeasonChallenge* Challenge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "BndEvt__ITM_Challenge_InfoBox_K2Node_ComponentBoundEvent_1_OnChallengeHovered__DelegateSignature");

	Params::_SCREEN_MissionSelectionMK3_C_BndEvt__ITM_Challenge_InfoBox_K2Node_ComponentBoundEvent_1_OnChallengeHovered__DelegateSignature Parms{};

	Parms.AssetReferences = std::move(AssetReferences);
	Parms.InHovered = InHovered;
	Parms.Challenge = Challenge;

	UObject::ProcessEvent(Func, &Parms);

	AssetReferences = std::move(Parms.AssetReferences);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnDifficultyChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameDifficulty                  NewDifficulty                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UGeneratedMission*                Mission                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::OnDifficultyChanged(const struct FGameDifficulty& NewDifficulty, class UGeneratedMission* Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "OnDifficultyChanged");

	Params::_SCREEN_MissionSelectionMK3_C_OnDifficultyChanged Parms{};

	Parms.NewDifficulty = std::move(NewDifficulty);
	Parms.Mission = Mission;

	UObject::ProcessEvent(Func, &Parms);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt___SCREEN_MissionSelectionMK3_Button_Dice_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt___SCREEN_MissionSelectionMK3_Button_Dice_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "BndEvt___SCREEN_MissionSelectionMK3_Button_Dice_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt___SCREEN_MissionSelectionMK3_Button_Dice_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt___SCREEN_MissionSelectionMK3_Button_Dice_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "BndEvt___SCREEN_MissionSelectionMK3_Button_Dice_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt___SCREEN_MissionSelectionMK3_Button_Dice_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt___SCREEN_MissionSelectionMK3_Button_Dice_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "BndEvt___SCREEN_MissionSelectionMK3_Button_Dice_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ExecuteUbergraph__SCREEN_MissionSelectionMK3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_SCREEN_MissionSelectionMK3_C::ExecuteUbergraph__SCREEN_MissionSelectionMK3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("_SCREEN_MissionSelectionMK3_C", "ExecuteUbergraph__SCREEN_MissionSelectionMK3");

	Params::_SCREEN_MissionSelectionMK3_C_ExecuteUbergraph__SCREEN_MissionSelectionMK3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
