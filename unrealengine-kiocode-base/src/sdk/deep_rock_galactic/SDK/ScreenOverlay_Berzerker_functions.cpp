#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScreenOverlay_Berzerker

#include "Basic.hpp"

#include "ScreenOverlay_Berzerker_classes.hpp"
#include "ScreenOverlay_Berzerker_parameters.hpp"


namespace SDK
{

// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Play Fade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EUMGSequencePlayMode                    PlayMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScreenOverlay_Berzerker_C::Play_Fade(EUMGSequencePlayMode PlayMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenOverlay_Berzerker_C", "Play Fade");

	Params::ScreenOverlay_Berzerker_C_Play_Fade Parms{};

	Parms.PlayMode = PlayMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.OnAnimFadingFinished
// (BlueprintCallable, BlueprintEvent)

void UScreenOverlay_Berzerker_C::OnAnimFadingFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenOverlay_Berzerker_C", "OnAnimFadingFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveBeginOverlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                       InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     InTint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScreenOverlay_Berzerker_C::ReceiveBeginOverlay(class UTexture2D* InTexture, const struct FLinearColor& InTint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenOverlay_Berzerker_C", "ReceiveBeginOverlay");

	Params::ScreenOverlay_Berzerker_C_ReceiveBeginOverlay Parms{};

	Parms.InTexture = InTexture;
	Parms.InTint = std::move(InTint);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScreenOverlay_Berzerker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenOverlay_Berzerker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveEndOverlay
// (Event, Protected, BlueprintEvent)

void UScreenOverlay_Berzerker_C::ReceiveEndOverlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenOverlay_Berzerker_C", "ReceiveEndOverlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ExecuteUbergraph_ScreenOverlay_Berzerker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScreenOverlay_Berzerker_C::ExecuteUbergraph_ScreenOverlay_Berzerker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenOverlay_Berzerker_C", "ExecuteUbergraph_ScreenOverlay_Berzerker");

	Params::ScreenOverlay_Berzerker_C_ExecuteUbergraph_ScreenOverlay_Berzerker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
