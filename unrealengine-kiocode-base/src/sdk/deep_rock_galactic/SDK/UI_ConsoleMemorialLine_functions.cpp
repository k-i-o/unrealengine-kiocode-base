#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ConsoleMemorialLine

#include "Basic.hpp"

#include "UI_ConsoleMemorialLine_classes.hpp"
#include "UI_ConsoleMemorialLine_parameters.hpp"


namespace SDK
{

// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.ExecuteUbergraph_UI_ConsoleMemorialLine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConsoleMemorialLine_C::ExecuteUbergraph_UI_ConsoleMemorialLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsoleMemorialLine_C", "ExecuteUbergraph_UI_ConsoleMemorialLine");

	Params::UI_ConsoleMemorialLine_C_ExecuteUbergraph_UI_ConsoleMemorialLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.OnMoveFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_ConsoleMemorialLine_C::OnMoveFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsoleMemorialLine_C", "OnMoveFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ConsoleMemorialLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsoleMemorialLine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ConsoleMemorialLine_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsoleMemorialLine_C", "SetText");

	Params::UI_ConsoleMemorialLine_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConsoleMemorialLine_C::SetSpeed(float Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsoleMemorialLine_C", "SetSpeed");

	Params::UI_ConsoleMemorialLine_C_SetSpeed Parms{};

	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.AddBoard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConsoleScreenMemorialWall_C*     NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConsoleMemorialLine_C::AddBoard(class UConsoleScreenMemorialWall_C* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsoleMemorialLine_C", "AddBoard");

	Params::UI_ConsoleMemorialLine_C_AddBoard Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}

}
