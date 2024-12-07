#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_KPI

#include "Basic.hpp"

#include "WND_KPI_classes.hpp"
#include "WND_KPI_parameters.hpp"


namespace SDK
{

// Function WND_KPI.WND_KPI_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWND_KPI_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "OnKeyDown");

	Params::WND_KPI_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WND_KPI.WND_KPI_C.SelectNextTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_KPI_C::SelectNextTab(int32 Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "SelectNextTab");

	Params::WND_KPI_C_SelectNextTab Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_KPI.WND_KPI_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWND_KPI_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "OnKeyUp");

	Params::WND_KPI_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WND_KPI.WND_KPI_C.SelectTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasic_ButtonTab_C*               Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_KPI_Tab_C*                    Content                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_KPI_C::SelectTab(class UBasic_ButtonTab_C* Button, class UUI_KPI_Tab_C* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "SelectTab");

	Params::WND_KPI_C_SelectTab Parms{};

	Parms.Button = Button;
	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_KPI.WND_KPI_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_KPI_C::BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_KPI.WND_KPI_C.BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_KPI_C::BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_KPI.WND_KPI_C.BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_KPI_C::BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_KPI.WND_KPI_C.SelectStatistics
// (BlueprintCallable, BlueprintEvent)

void UWND_KPI_C::SelectStatistics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "SelectStatistics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_KPI.WND_KPI_C.BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    HasClaimable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWND_KPI_C::BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature(bool HasClaimable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature");

	Params::WND_KPI_C_BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature Parms{};

	Parms.HasClaimable = HasClaimable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_KPI.WND_KPI_C.Close Window
// (BlueprintCallable, BlueprintEvent)

void UWND_KPI_C::Close_Window()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "Close Window");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_KPI.WND_KPI_C.OnShown
// (Event, Protected, BlueprintEvent)

void UWND_KPI_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "OnShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_KPI.WND_KPI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWND_KPI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "PreConstruct");

	Params::WND_KPI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WND_KPI.WND_KPI_C.selectperks
// (BlueprintCallable, BlueprintEvent)

void UWND_KPI_C::Selectperks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "selectperks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WND_KPI.WND_KPI_C.ExecuteUbergraph_WND_KPI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWND_KPI_C::ExecuteUbergraph_WND_KPI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WND_KPI_C", "ExecuteUbergraph_WND_KPI");

	Params::WND_KPI_C_ExecuteUbergraph_WND_KPI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

