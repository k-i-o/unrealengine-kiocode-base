#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1

#include "Basic.hpp"

#include "BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_classes.hpp"
#include "BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_parameters.hpp"


namespace SDK
{

// Function BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1.BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_C.GetImageOffscreenPointer
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UImage* UBPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_C::GetImageOffscreenPointer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_C", "GetImageOffscreenPointer");

	Params::BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_C_GetImageOffscreenPointer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1.BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_C.GetImageIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UImage* UBPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_C::GetImageIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_C", "GetImageIcon");

	Params::BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_C_GetImageIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1.BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_C.GetContainerOffscreenPointer
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_C::GetContainerOffscreenPointer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_C", "GetContainerOffscreenPointer");

	Params::BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_C_GetContainerOffscreenPointer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

