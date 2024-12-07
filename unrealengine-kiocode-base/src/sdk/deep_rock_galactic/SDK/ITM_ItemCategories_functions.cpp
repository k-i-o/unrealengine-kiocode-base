#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_ItemCategories

#include "Basic.hpp"

#include "ITM_ItemCategories_classes.hpp"
#include "ITM_ItemCategories_parameters.hpp"


namespace SDK
{

// Function ITM_ItemCategories.ITM_ItemCategories_C.GetButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVanitySlot                             Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBTN_ItemCategory_C*              Button                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ItemCategories_C::GetButton(EVanitySlot Param_Slot, class UBTN_ItemCategory_C** Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "GetButton");

	Params::ITM_ItemCategories_C_GetButton Parms{};

	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerCharacterID*               CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ItemCategories_C::SetData(class UPlayerCharacterID* CharacterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "SetData");

	Params::ITM_ItemCategories_C_SetData Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.OnClosed
// (BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "OnClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.ExecuteUbergraph_ITM_ItemCategories
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UITM_ItemCategories_C::ExecuteUbergraph_ITM_ItemCategories(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "ExecuteUbergraph_ITM_ItemCategories");

	Params::ITM_ItemCategories_C_ExecuteUbergraph_ITM_ItemCategories Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_HairColorClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_HairColorClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BTN_HairColorClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_MoustacheClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_MoustacheClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BTN_MoustacheClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_SideburnsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_SideburnsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BTN_SideburnsClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_HeadwearClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_HeadwearClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BTN_HeadwearClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_SkinColorClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_SkinColorClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BTN_SkinColorClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_EyebrowsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_EyebrowsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BTN_EyebrowsClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_BeardClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_BeardClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BTN_BeardClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_ArmorClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ItemCategories_C::BTN_ArmorClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ITM_ItemCategories_C", "BTN_ArmorClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

