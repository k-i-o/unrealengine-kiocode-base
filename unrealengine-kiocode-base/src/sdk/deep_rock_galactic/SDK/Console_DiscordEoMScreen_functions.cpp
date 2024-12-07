#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Console_DiscordEoMScreen

#include "Basic.hpp"

#include "Console_DiscordEoMScreen_classes.hpp"
#include "Console_DiscordEoMScreen_parameters.hpp"


namespace SDK
{

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ClearText
// (Public, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::ClearText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "ClearText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnFail_D5557812434CB42B270037821C78EAB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConsole_DiscordEoMScreen_C::OnFail_D5557812434CB42B270037821C78EAB5(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "OnFail_D5557812434CB42B270037821C78EAB5");

	Params::Console_DiscordEoMScreen_C_OnFail_D5557812434CB42B270037821C78EAB5 Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnSuccess_D5557812434CB42B270037821C78EAB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConsole_DiscordEoMScreen_C::OnSuccess_D5557812434CB42B270037821C78EAB5(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "OnSuccess_D5557812434CB42B270037821C78EAB5");

	Params::Console_DiscordEoMScreen_C_OnSuccess_D5557812434CB42B270037821C78EAB5 Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConsole_DiscordEoMScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "Tick");

	Params::Console_DiscordEoMScreen_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.UpdateUI
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscordServerData               DiscordServerCount                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UConsole_DiscordEoMScreen_C::UpdateUI(const struct FDiscordServerData& DiscordServerCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "UpdateUI");

	Params::Console_DiscordEoMScreen_C_UpdateUI Parms{};

	Parms.DiscordServerCount = std::move(DiscordServerCount);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Do Running Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConsole_DiscordEoMScreen_C::Do_Running_Text(const class FText& Text, int32 Param_Index, class UTextBlock* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "Do Running Text");

	Params::Console_DiscordEoMScreen_C_Do_Running_Text Parms{};

	Parms.Text = std::move(Text);
	Parms.Param_Index = Param_Index;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConsole_DiscordEoMScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "PreConstruct");

	Params::Console_DiscordEoMScreen_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.On EoM Data Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HasEoM                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConsole_DiscordEoMScreen_C::On_EoM_Data_Received(bool HasEoM)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "On EoM Data Received");

	Params::Console_DiscordEoMScreen_C_On_EoM_Data_Received Parms{};

	Parms.HasEoM = HasEoM;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OpenDescriptions
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::OpenDescriptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "OpenDescriptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Name Running Effect
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::Player_Name_Running_Effect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "Player Name Running Effect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Flavor Text Running Effect
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::Player_Flavor_Text_Running_Effect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "Player Flavor Text Running Effect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ExecuteUbergraph_Console_DiscordEoMScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConsole_DiscordEoMScreen_C::ExecuteUbergraph_Console_DiscordEoMScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "ExecuteUbergraph_Console_DiscordEoMScreen");

	Params::Console_DiscordEoMScreen_C_ExecuteUbergraph_Console_DiscordEoMScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ScreenChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::ScreenChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Console_DiscordEoMScreen_C", "ScreenChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

