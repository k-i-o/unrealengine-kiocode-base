#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Wardrobe_ClassSelector

#include "Basic.hpp"

#include "ITM_Wardrobe_ClassSelector_classes.hpp"
#include "ITM_Wardrobe_ClassSelector_parameters.hpp"


namespace SDK
{

// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.HandleKeyInput
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// bool                                    Handled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UITM_Wardrobe_ClassSelector_C::HandleKeyInput(struct FKeyEvent& InKeyEvent, bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "HandleKeyInput");

	Params::ITM_Wardrobe_ClassSelector_C_HandleKeyInput Parms{};

	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	InKeyEvent = std::move(Parms.InKeyEvent);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

	return Parms.ReturnValue;
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetSwitchButtonState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_Wardrobe_ClassSelector_C::SetSwitchButtonState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "SetSwitchButtonState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetPrevCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPlayerCharacterID*               Character                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ClassSelector_C::GetPrevCharacter(class UPlayerCharacterID** Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "GetPrevCharacter");

	Params::ITM_Wardrobe_ClassSelector_C_GetPrevCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetNextCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPlayerCharacterID*               Character                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ClassSelector_C::GetNextCharacter(class UPlayerCharacterID** Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "GetNextCharacter");

	Params::ITM_Wardrobe_ClassSelector_C_GetNextCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetBPGameState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_GameState_C*                  GameState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ClassSelector_C::GetBPGameState(class ABP_GameState_C** GameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "GetBPGameState");

	Params::ITM_Wardrobe_ClassSelector_C_GetBPGameState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GameState != nullptr)
		*GameState = Parms.GameState;
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetCharacterInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerCharacterID*               CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ClassSelector_C::SetCharacterInfo(class UPlayerCharacterID* CharacterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "SetCharacterInfo");

	Params::ITM_Wardrobe_ClassSelector_C_SetCharacterInfo Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Wardrobe_ClassSelector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "PreConstruct");

	Params::ITM_Wardrobe_ClassSelector_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerCharacterID*               Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param_CategoryID                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ClassSelector_C::SetData(class UPlayerCharacterID* Character, class UObject* Param_CategoryID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "SetData");

	Params::ITM_Wardrobe_ClassSelector_C_SetData Parms{};

	Parms.Character = Character;
	Parms.Param_CategoryID = Param_CategoryID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_Wardrobe_ClassSelector_C::BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_Wardrobe_ClassSelector_C::BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SelectPrev
// (BlueprintCallable, BlueprintEvent)

void UITM_Wardrobe_ClassSelector_C::SelectPrev()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "SelectPrev");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SelectNext
// (BlueprintCallable, BlueprintEvent)

void UITM_Wardrobe_ClassSelector_C::SelectNext()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "SelectNext");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SwitchToCharacter
// (BlueprintCallable, BlueprintEvent)

void UITM_Wardrobe_ClassSelector_C::SwitchToCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "SwitchToCharacter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Wardrobe_ClassSelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.CharacterChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class APlayerCharacter>     NewCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UITM_Wardrobe_ClassSelector_C::CharacterChanged(TSubclassOf<class APlayerCharacter> NewCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "CharacterChanged");

	Params::ITM_Wardrobe_ClassSelector_C_CharacterChanged Parms{};

	Parms.NewCharacter = NewCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_Wardrobe_ClassSelector_C::BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.UpdateNotification
// (BlueprintCallable, BlueprintEvent)

void UITM_Wardrobe_ClassSelector_C::UpdateNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "UpdateNotification");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.ExecuteUbergraph_ITM_Wardrobe_ClassSelector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ClassSelector_C::ExecuteUbergraph_ITM_Wardrobe_ClassSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "ExecuteUbergraph_ITM_Wardrobe_ClassSelector");

	Params::ITM_Wardrobe_ClassSelector_C_ExecuteUbergraph_ITM_Wardrobe_ClassSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.OnCharacterChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Wardrobe_ClassSelector_C::OnCharacterChanged__DelegateSignature(class UClass* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Wardrobe_ClassSelector_C", "OnCharacterChanged__DelegateSignature");

	Params::ITM_Wardrobe_ClassSelector_C_OnCharacterChanged__DelegateSignature Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}

}
