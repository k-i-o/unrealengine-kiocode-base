#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDRadialMenuBase

#include "Basic.hpp"

#include "WBP_HDRadialMenuBase_classes.hpp"
#include "WBP_HDRadialMenuBase_parameters.hpp"


namespace SDK
{

// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.SubmenuCommit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SubItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDRadialMenuBase_C::SubmenuCommit__DelegateSignature(class FName Category, class FName SubItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenuBase_C", "SubmenuCommit__DelegateSignature");

	Params::WBP_HDRadialMenuBase_C_SubmenuCommit__DelegateSignature Parms{};

	Parms.Category = Category;
	Parms.SubItem = SubItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.Cancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_HDRadialMenuBase_C::Cancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenuBase_C", "Cancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.ExecuteUbergraph_WBP_HDRadialMenuBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDRadialMenuBase_C::ExecuteUbergraph_WBP_HDRadialMenuBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenuBase_C", "ExecuteUbergraph_WBP_HDRadialMenuBase");

	Params::WBP_HDRadialMenuBase_C_ExecuteUbergraph_WBP_HDRadialMenuBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.GoBack
// (BlueprintCallable, BlueprintEvent)

void UWBP_HDRadialMenuBase_C::GoBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenuBase_C", "GoBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.Submit
// (BlueprintCallable, BlueprintEvent)

void UWBP_HDRadialMenuBase_C::Submit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenuBase_C", "Submit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HDRadialMenuBase_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenuBase_C", "OnMouseButtonDown");

	Params::WBP_HDRadialMenuBase_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HDRadialMenuBase_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenuBase_C", "OnKeyDown");

	Params::WBP_HDRadialMenuBase_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        InMyGeometry                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InMouseEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HDRadialMenuBase_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDRadialMenuBase_C", "OnMouseButtonDoubleClick");

	Params::WBP_HDRadialMenuBase_C_OnMouseButtonDoubleClick Parms{};

	Parms.InMyGeometry = std::move(InMyGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
