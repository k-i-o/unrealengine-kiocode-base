#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DeepDives_Launcher

#include "Basic.hpp"

#include "ITM_DeepDives_Launcher_classes.hpp"
#include "ITM_DeepDives_Launcher_parameters.hpp"


namespace SDK
{

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnMovieLoaded
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_Launcher_C::OnMovieLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "OnMovieLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetBestTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_Launcher_C::SetBestTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "SetBestTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetPersonalBest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TotalSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_Launcher_C::SetPersonalBest(int32 TotalSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "SetPersonalBest");

	Params::ITM_DeepDives_Launcher_C_SetPersonalBest Parms{};

	Parms.TotalSeconds = TotalSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.UpdateBiomeQuote
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDeepDive*                        InDeepDive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_Launcher_C::UpdateBiomeQuote(class UDeepDive* InDeepDive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "UpdateBiomeQuote");

	Params::ITM_DeepDives_Launcher_C_UpdateBiomeQuote Parms{};

	Parms.InDeepDive = InDeepDive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetButtonsEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             DisabledExplanation                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDives_Launcher_C::SetButtonsEnabled(bool bInIsEnabled, const class FText& DisabledExplanation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "SetButtonsEnabled");

	Params::ITM_DeepDives_Launcher_C_SetButtonsEnabled Parms{};

	Parms.bInIsEnabled = bInIsEnabled;
	Parms.DisabledExplanation = std::move(DisabledExplanation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_Launcher_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.GetDeepDive
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDeepDive*                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UDeepDive* UITM_DeepDives_Launcher_C::GetDeepDive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "GetDeepDive");

	Params::ITM_DeepDives_Launcher_C_GetDeepDive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetMovie
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*                     InMovie                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_Launcher_C::SetMovie(class UMediaSource* InMovie)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "SetMovie");

	Params::ITM_DeepDives_Launcher_C_SetMovie Parms{};

	Parms.InMovie = InMovie;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Launcher_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "PreConstruct");

	Params::ITM_DeepDives_Launcher_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_DeepDives_Launcher_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_Launcher_C::BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_Launcher_C::BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InHovered                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Launcher_C::SetHovered(bool InHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "SetHovered");

	Params::ITM_DeepDives_Launcher_C_SetHovered Parms{};

	Parms.InHovered = InHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           OpenedUrl                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UITM_DeepDives_Launcher_C::BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature(const class FString& OpenedUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature");

	Params::ITM_DeepDives_Launcher_C_BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature Parms{};

	Parms.OpenedUrl = std::move(OpenedUrl);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_Launcher_C::BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_Launcher_C::BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UITM_DeepDives_Launcher_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "OnFocusLost");

	Params::ITM_DeepDives_Launcher_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.ExecuteUbergraph_ITM_DeepDives_Launcher
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_Launcher_C::ExecuteUbergraph_ITM_DeepDives_Launcher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "ExecuteUbergraph_ITM_DeepDives_Launcher");

	Params::ITM_DeepDives_Launcher_C_ExecuteUbergraph_ITM_DeepDives_Launcher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnRefresh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Launcher_C::OnRefresh__DelegateSignature(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "OnRefresh__DelegateSignature");

	Params::ITM_DeepDives_Launcher_C_OnRefresh__DelegateSignature Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnJoinMission__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EliteDeepDive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_DeepDives_Launcher_C::OnJoinMission__DelegateSignature(bool EliteDeepDive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "OnJoinMission__DelegateSignature");

	Params::ITM_DeepDives_Launcher_C_OnJoinMission__DelegateSignature Parms{};

	Parms.EliteDeepDive = EliteDeepDive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnStartMission__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDeepDive*                        DeepDive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_DeepDives_Launcher_C::OnStartMission__DelegateSignature(class UDeepDive* DeepDive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_DeepDives_Launcher_C", "OnStartMission__DelegateSignature");

	Params::ITM_DeepDives_Launcher_C_OnStartMission__DelegateSignature Parms{};

	Parms.DeepDive = DeepDive;

	UObject::ProcessEvent(Func, &Parms);
}

}

