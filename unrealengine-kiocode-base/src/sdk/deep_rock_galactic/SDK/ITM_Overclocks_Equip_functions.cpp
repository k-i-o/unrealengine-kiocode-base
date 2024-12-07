#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Overclocks_Equip

#include "Basic.hpp"

#include "ITM_Overclocks_Equip_classes.hpp"
#include "ITM_Overclocks_Equip_parameters.hpp"


namespace SDK
{

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ExecuteUbergraph_ITM_Overclocks_Equip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Overclocks_Equip_C::ExecuteUbergraph_ITM_Overclocks_Equip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "ExecuteUbergraph_ITM_Overclocks_Equip");

	Params::ITM_Overclocks_Equip_C_ExecuteUbergraph_ITM_Overclocks_Equip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Overclocks_Equip_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Overclocks_Equip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UITM_Overclocks_Equip_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "OnMouseEnter");

	Params::ITM_Overclocks_Equip_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UITM_Overclocks_Equip_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "OnMouseLeave");

	Params::ITM_Overclocks_Equip_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.CloseMenuNicely
// (BlueprintCallable, BlueprintEvent)

void UITM_Overclocks_Equip_C::CloseMenuNicely()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "CloseMenuNicely");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Overclocks_Equip_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Overclocks_Equip_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Overclocks_Equip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "PreConstruct");

	Params::ITM_Overclocks_Equip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopUpFinished
// (BlueprintCallable, BlueprintEvent)

void UITM_Overclocks_Equip_C::OnPopUpFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "OnPopUpFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUpgradeCrafted_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgrade*                     Upgrade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Overclocks_Equip_C::OnItemUpgradeCrafted_Event(class UItemUpgrade* Upgrade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "OnItemUpgradeCrafted_Event");

	Params::ITM_Overclocks_Equip_C_OnItemUpgradeCrafted_Event Parms{};

	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopupStarted
// (BlueprintCallable, BlueprintEvent)

void UITM_Overclocks_Equip_C::OnPopupStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "OnPopupStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetBackgroundTint
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Tint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Overclocks_Equip_C::SetBackgroundTint(const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "SetBackgroundTint");

	Params::ITM_Overclocks_Equip_C_SetBackgroundTint Parms{};

	Parms.Tint = std::move(Tint);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           InCharacterClass                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           InItemClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Overclocks_Equip_C::SetData(class UClass* InCharacterClass, class UClass* InItemClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "SetData");

	Params::ITM_Overclocks_Equip_C_SetData Parms{};

	Parms.InCharacterClass = InCharacterClass;
	Parms.InItemClass = InItemClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_Overclocks_Equip_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Overclocks_Equip_Item_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Overclocks_Equip_C::OnItemClicked(class UITM_Overclocks_Equip_Item_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "OnItemClicked");

	Params::ITM_Overclocks_Equip_C_OnItemClicked Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Overclocks_Equip_Item_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Overclocks_Equip_C::OnItemHovered(class UITM_Overclocks_Equip_Item_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "OnItemHovered");

	Params::ITM_Overclocks_Equip_C_OnItemHovered Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUnhovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Overclocks_Equip_Item_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Overclocks_Equip_C::OnItemUnhovered(class UITM_Overclocks_Equip_Item_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "OnItemUnhovered");

	Params::ITM_Overclocks_Equip_C_OnItemUnhovered Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetSelectionVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Overclocks_Equip_C::SetSelectionVisible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "SetSelectionVisible");

	Params::ITM_Overclocks_Equip_C_SetSelectionVisible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ShowOverclock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgrade*                     Overclock                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Overclocks_Equip_C::ShowOverclock(class UItemUpgrade* Overclock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "ShowOverclock");

	Params::ITM_Overclocks_Equip_C_ShowOverclock Parms{};

	Parms.Overclock = Overclock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Inactive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ActiveChanged                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Overclocks_Equip_C::SetMenuActive(bool Inactive, bool* ActiveChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "SetMenuActive");

	Params::ITM_Overclocks_Equip_C_SetMenuActive Parms{};

	Parms.Inactive = Inactive;

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveChanged != nullptr)
		*ActiveChanged = Parms.ActiveChanged;
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuLocked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InLocked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InRequirementMet                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OverclockEquipped                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UITM_Overclocks_Equip_C::SetMenuLocked(bool InLocked, bool InRequirementMet, bool OverclockEquipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "SetMenuLocked");

	Params::ITM_Overclocks_Equip_C_SetMenuLocked Parms{};

	Parms.InLocked = InLocked;
	Parms.InRequirementMet = InRequirementMet;
	Parms.OverclockEquipped = OverclockEquipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnRefreshItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasCreated                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ActiveIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Overclocks_Equip_C::OnRefreshItem(bool WasCreated, class UUserWidget* Widget, int32 ActiveIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "OnRefreshItem");

	Params::ITM_Overclocks_Equip_C_OnRefreshItem Parms{};

	Parms.WasCreated = WasCreated;
	Parms.Widget = Widget;
	Parms.ActiveIndex = ActiveIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.TryToggleSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Overclocks_Equip_C::TryToggleSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "TryToggleSelection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetCompactModeProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_Overclocks_Equip_C::SetCompactModeProgress(float InProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_Overclocks_Equip_C", "SetCompactModeProgress");

	Params::ITM_Overclocks_Equip_C_SetCompactModeProgress Parms{};

	Parms.InProgress = InProgress;

	UObject::ProcessEvent(Func, &Parms);
}

}

