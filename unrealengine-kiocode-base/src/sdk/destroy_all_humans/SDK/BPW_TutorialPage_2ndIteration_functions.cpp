#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_TutorialPage_2ndIteration

#include "Basic.hpp"

#include "BPW_TutorialPage_2ndIteration_classes.hpp"
#include "BPW_TutorialPage_2ndIteration_parameters.hpp"


namespace SDK
{

// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.ExecuteUbergraph_BPW_TutorialPage_2ndIteration
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::ExecuteUbergraph_BPW_TutorialPage_2ndIteration(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "ExecuteUbergraph_BPW_TutorialPage_2ndIteration");

	Params::BPW_TutorialPage_2ndIteration_C_ExecuteUbergraph_BPW_TutorialPage_2ndIteration Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.UpdateShortTitle
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             _strTitle                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPW_TutorialPage_2ndIteration_C::UpdateShortTitle(const class FText& _strTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "UpdateShortTitle");

	Params::BPW_TutorialPage_2ndIteration_C_UpdateShortTitle Parms{};

	Parms._strTitle = std::move(_strTitle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingBegin_Main
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingBegin_Main(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingBegin_Main");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingBegin_Main Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingBegin_Frame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingBegin_Frame(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingBegin_Frame");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingBegin_Frame Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingBegin_Hint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingBegin_Hint(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingBegin_Hint");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingBegin_Hint Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingBegin_Title
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingBegin_Title(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingBegin_Title");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingBegin_Title Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingBegin_Details
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingBegin_Details(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingBegin_Details");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingBegin_Details Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingBegin_Description
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingBegin_Description(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingBegin_Description");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingBegin_Description Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingBegin_DescriptionShort
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingBegin_DescriptionShort(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingBegin_DescriptionShort");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingBegin_DescriptionShort Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.EnableDetailedHint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    _bEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPW_TutorialPage_2ndIteration_C::EnableDetailedHint(bool _bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "EnableDetailedHint");

	Params::BPW_TutorialPage_2ndIteration_C_EnableDetailedHint Parms{};

	Parms._bEnabled = _bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.EnableDismissHint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    _bEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPW_TutorialPage_2ndIteration_C::EnableDismissHint(bool _bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "EnableDismissHint");

	Params::BPW_TutorialPage_2ndIteration_C_EnableDismissHint Parms{};

	Parms._bEnabled = _bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.UpdateShortDescriptionText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             _strText                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPW_TutorialPage_2ndIteration_C::UpdateShortDescriptionText(const class FText& _strText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "UpdateShortDescriptionText");

	Params::BPW_TutorialPage_2ndIteration_C_UpdateShortDescriptionText Parms{};

	Parms._strText = std::move(_strText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingEnd_DescriptionShort
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingEnd_DescriptionShort(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingEnd_DescriptionShort");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingEnd_DescriptionShort Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.UpdateLongTitle
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             _strTitle                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPW_TutorialPage_2ndIteration_C::UpdateLongTitle(const class FText& _strTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "UpdateLongTitle");

	Params::BPW_TutorialPage_2ndIteration_C_UpdateLongTitle Parms{};

	Parms._strTitle = std::move(_strTitle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.UpdateDetailText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             _strText                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             _strQuote                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPW_TutorialPage_2ndIteration_C::UpdateDetailText(const class FText& _strText, const class FText& _strQuote)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "UpdateDetailText");

	Params::BPW_TutorialPage_2ndIteration_C_UpdateDetailText Parms{};

	Parms._strText = std::move(_strText);
	Parms._strQuote = std::move(_strQuote);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.ChangeStyleHinted
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    _bForce                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPW_TutorialPage_2ndIteration_C::ChangeStyleHinted(bool _bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "ChangeStyleHinted");

	Params::BPW_TutorialPage_2ndIteration_C_ChangeStyleHinted Parms{};

	Parms._bForce = _bForce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingEnd_Frame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingEnd_Frame(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingEnd_Frame");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingEnd_Frame Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.SetInputActions
// (Event, Public, BlueprintEvent)
// Parameters:
// class UOverlay*                         _pOverlayInputActions                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::SetInputActions(class UOverlay* _pOverlayInputActions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "SetInputActions");

	Params::BPW_TutorialPage_2ndIteration_C_SetInputActions Parms{};

	Parms._pOverlayInputActions = _pOverlayInputActions;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.UpdateDescriptionText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             _strText                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPW_TutorialPage_2ndIteration_C::UpdateDescriptionText(const class FText& _strText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "UpdateDescriptionText");

	Params::BPW_TutorialPage_2ndIteration_C_UpdateDescriptionText Parms{};

	Parms._strText = std::move(_strText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.EnableFrameVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    _bValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPW_TutorialPage_2ndIteration_C::EnableFrameVisibility(bool _bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "EnableFrameVisibility");

	Params::BPW_TutorialPage_2ndIteration_C_EnableFrameVisibility Parms{};

	Parms._bValue = _bValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.UpdateIconBrush
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      _iconBrush                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPW_TutorialPage_2ndIteration_C::UpdateIconBrush(const struct FSlateBrush& _iconBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "UpdateIconBrush");

	Params::BPW_TutorialPage_2ndIteration_C_UpdateIconBrush Parms{};

	Parms._iconBrush = std::move(_iconBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.RebuildLayout
// (Event, Public, BlueprintEvent)

void UBPW_TutorialPage_2ndIteration_C::RebuildLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "RebuildLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.CustomInit
// (Event, Public, BlueprintEvent)

void UBPW_TutorialPage_2ndIteration_C::CustomInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "CustomInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.UpdateMedia
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMediaSource*                     _pMediaSource                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::UpdateMedia(class UMediaSource* _pMediaSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "UpdateMedia");

	Params::BPW_TutorialPage_2ndIteration_C_UpdateMedia Parms{};

	Parms._pMediaSource = _pMediaSource;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingEnd_Main
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingEnd_Main(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingEnd_Main");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingEnd_Main Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingEnd_Hint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingEnd_Hint(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingEnd_Hint");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingEnd_Hint Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingEnd_Title
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingEnd_Title(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingEnd_Title");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingEnd_Title Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingEnd_Description
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingEnd_Description(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingEnd_Description");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingEnd_Description Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.OnFadingEnd_Details
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBFGWidgetAnimationState*         InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBFGWidgetAnimationSubState             InSubState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPW_TutorialPage_2ndIteration_C::OnFadingEnd_Details(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "OnFadingEnd_Details");

	Params::BPW_TutorialPage_2ndIteration_C_OnFadingEnd_Details Parms{};

	Parms.InState = InState;
	Parms.InSubState = InSubState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.ChangeStyleDetailed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    _bForce                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPW_TutorialPage_2ndIteration_C::ChangeStyleDetailed(bool _bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "ChangeStyleDetailed");

	Params::BPW_TutorialPage_2ndIteration_C_ChangeStyleDetailed Parms{};

	Parms._bForce = _bForce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.ChangeStyleCompact
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    _bForce                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPW_TutorialPage_2ndIteration_C::ChangeStyleCompact(bool _bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "ChangeStyleCompact");

	Params::BPW_TutorialPage_2ndIteration_C_ChangeStyleCompact Parms{};

	Parms._bForce = _bForce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.ChangeStyleCollapsed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    _bForce                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPW_TutorialPage_2ndIteration_C::ChangeStyleCollapsed(bool _bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "ChangeStyleCollapsed");

	Params::BPW_TutorialPage_2ndIteration_C_ChangeStyleCollapsed Parms{};

	Parms._bForce = _bForce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.ChangeStyleNormal
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    _bForce                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPW_TutorialPage_2ndIteration_C::ChangeStyleNormal(bool _bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "ChangeStyleNormal");

	Params::BPW_TutorialPage_2ndIteration_C_ChangeStyleNormal Parms{};

	Parms._bForce = _bForce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.InitFadingStates
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_TutorialPage_2ndIteration_C::InitFadingStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "InitFadingStates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.GetInputActionUseTypeText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBFGInputActionWidgetType               _eType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   _holdTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBPW_TutorialPage_2ndIteration_C::GetInputActionUseTypeText(EBFGInputActionWidgetType _eType, float _holdTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "GetInputActionUseTypeText");

	Params::BPW_TutorialPage_2ndIteration_C_GetInputActionUseTypeText Parms{};

	Parms._eType = _eType;
	Parms._holdTime = _holdTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.SetNormalFadingState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InForce                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPW_TutorialPage_2ndIteration_C::SetNormalFadingState(bool InForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "SetNormalFadingState");

	Params::BPW_TutorialPage_2ndIteration_C_SetNormalFadingState Parms{};

	Parms.InForce = InForce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C.ComputeAbsoluteIconPosition
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UBPW_TutorialPage_2ndIteration_C::ComputeAbsoluteIconPosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_TutorialPage_2ndIteration_C", "ComputeAbsoluteIconPosition");

	Params::BPW_TutorialPage_2ndIteration_C_ComputeAbsoluteIconPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

