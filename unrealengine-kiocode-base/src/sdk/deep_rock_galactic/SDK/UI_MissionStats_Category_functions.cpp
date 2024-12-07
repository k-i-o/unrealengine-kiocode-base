#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionStats_Category

#include "Basic.hpp"

#include "UI_MissionStats_Category_classes.hpp"
#include "UI_MissionStats_Category_parameters.hpp"


namespace SDK
{

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.On Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Category_C*      CategoryWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Selected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MissionStats_Category_C::On_Clicked__DelegateSignature(class UUI_MissionStats_Category_C* CategoryWidget, bool Is_Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "On Clicked__DelegateSignature");

	Params::UI_MissionStats_Category_C_On_Clicked__DelegateSignature Parms{};

	Parms.CategoryWidget = CategoryWidget;
	Parms.Is_Selected = Is_Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Click
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MissionStats_Category_C::Click()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "Click");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.GetCategoryIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                       Param_CategoryIcon                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MissionStats_Category_C::GetCategoryIcon(class UTexture2D** Param_CategoryIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "GetCategoryIcon");

	Params::UI_MissionStats_Category_C_GetCategoryIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CategoryIcon != nullptr)
		*Param_CategoryIcon = Parms.Param_CategoryIcon;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_MissionStats_Category_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "OnMouseButtonUp");

	Params::UI_MissionStats_Category_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_CategorySelected                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MissionStats_Category_C::IsSelected(bool* Param_CategorySelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "IsSelected");

	Params::UI_MissionStats_Category_C_IsSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CategorySelected != nullptr)
		*Param_CategorySelected = Parms.Param_CategorySelected;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MissionStats_Category_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "PreConstruct");

	Params::UI_MissionStats_Category_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_CategorySelected                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MissionStats_Category_C::Set_Selected(bool Param_CategorySelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "Set Selected");

	Params::UI_MissionStats_Category_C_Set_Selected Parms{};

	Parms.Param_CategorySelected = Param_CategorySelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MissionStats_Category_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_MissionStats_Category_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "OnMouseEnter");

	Params::UI_MissionStats_Category_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_MissionStats_Category_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "OnMouseLeave");

	Params::UI_MissionStats_Category_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsHovered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MissionStats_Category_C::Set_Hovered(bool Param_IsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "Set Hovered");

	Params::UI_MissionStats_Category_C_Set_Hovered Parms{};

	Parms.Param_IsHovered = Param_IsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.ExecuteUbergraph_UI_MissionStats_Category
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MissionStats_Category_C::ExecuteUbergraph_UI_MissionStats_Category(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "ExecuteUbergraph_UI_MissionStats_Category");

	Params::UI_MissionStats_Category_C_ExecuteUbergraph_UI_MissionStats_Category Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUI_MissionStats_Category_C::IsInteractable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionStats_Category_C", "IsInteractable");

	Params::UI_MissionStats_Category_C_IsInteractable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

