#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MENU_SpaceRigTemplate

#include "Basic.hpp"

#include "MENU_SpaceRigTemplate_classes.hpp"
#include "MENU_SpaceRigTemplate_parameters.hpp"


namespace SDK
{

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnClosedClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::OnClosedClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "OnClosedClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnBackClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::OnBackClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "OnBackClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.ExecuteUbergraph_MENU_SpaceRigTemplate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_SpaceRigTemplate_C::ExecuteUbergraph_MENU_SpaceRigTemplate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "ExecuteUbergraph_MENU_SpaceRigTemplate");

	Params::MENU_SpaceRigTemplate_C_ExecuteUbergraph_MENU_SpaceRigTemplate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.AnimateTopBarVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_SpaceRigTemplate_C::AnimateTopBarVisible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "AnimateTopBarVisible");

	Params::MENU_SpaceRigTemplate_C_AnimateTopBarVisible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PlayFadeIn
// (BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::PlayFadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "PlayFadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Click Close Button
// (BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::Click_Close_Button()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "Click Close Button");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class APlayerCharacter>     NewCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UMENU_SpaceRigTemplate_C::OnSelectedCharacterChanged(TSubclassOf<class APlayerCharacter> NewCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "OnSelectedCharacterChanged");

	Params::MENU_SpaceRigTemplate_C_OnSelectedCharacterChanged Parms{};

	Parms.NewCharacter = NewCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Setup Player Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     NewPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_SpaceRigTemplate_C::Setup_Player_Events(class APlayerState* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "Setup Player Events");

	Params::MENU_SpaceRigTemplate_C_Setup_Player_Events Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class APlayerCharacter>     NewCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UMENU_SpaceRigTemplate_C::OnSelectedCharacterChanged_Event(TSubclassOf<class APlayerCharacter> NewCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "OnSelectedCharacterChanged_Event");

	Params::MENU_SpaceRigTemplate_C_OnSelectedCharacterChanged_Event Parms{};

	Parms.NewCharacter = NewCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerLeave_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState*                  Param_PlayerState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_SpaceRigTemplate_C::OnPlayerLeave_Event(class AFSDPlayerState* Param_PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "OnPlayerLeave_Event");

	Params::MENU_SpaceRigTemplate_C_OnPlayerLeave_Event Parms{};

	Parms.Param_PlayerState = Param_PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState*                  Param_PlayerState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_SpaceRigTemplate_C::OnPlayerJoined_Event(class AFSDPlayerState* Param_PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "OnPlayerJoined_Event");

	Params::MENU_SpaceRigTemplate_C_OnPlayerJoined_Event Parms{};

	Parms.Param_PlayerState = Param_PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnCreditsChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Credits                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMENU_SpaceRigTemplate_C::OnCreditsChanged_Event(int32 Credits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "OnCreditsChanged_Event");

	Params::MENU_SpaceRigTemplate_C_OnCreditsChanged_Event Parms{};

	Parms.Credits = Credits;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_SpaceRigTemplate_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_SpaceRigTemplate_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "PreConstruct");

	Params::MENU_SpaceRigTemplate_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Finished_ED75AEDE411AF062E427D788A257F78D
// (BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::Finished_ED75AEDE411AF062E427D788A257F78D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "Finished_ED75AEDE411AF062E427D788A257F78D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetCloseButtonVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_ShowCloseButton                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_SpaceRigTemplate_C::SetCloseButtonVisible(bool Param_ShowCloseButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "SetCloseButtonVisible");

	Params::MENU_SpaceRigTemplate_C_SetCloseButtonVisible Parms{};

	Parms.Param_ShowCloseButton = Param_ShowCloseButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.UpdatePlayerCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::UpdatePlayerCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "UpdatePlayerCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetBackMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Close_Is_Back                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_SpaceRigTemplate_C::SetBackMode(bool Close_Is_Back)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "SetBackMode");

	Params::MENU_SpaceRigTemplate_C_SetBackMode Parms{};

	Parms.Close_Is_Back = Close_Is_Back;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.IsCloseButtonVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMENU_SpaceRigTemplate_C::IsCloseButtonVisible(bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MENU_SpaceRigTemplate_C", "IsCloseButtonVisible");

	Params::MENU_SpaceRigTemplate_C_IsCloseButtonVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}

}

