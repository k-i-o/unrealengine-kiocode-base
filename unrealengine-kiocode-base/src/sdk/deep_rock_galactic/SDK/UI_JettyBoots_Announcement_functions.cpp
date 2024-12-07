#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_JettyBoots_Announcement

#include "Basic.hpp"

#include "UI_JettyBoots_Announcement_classes.hpp"
#include "UI_JettyBoots_Announcement_parameters.hpp"


namespace SDK
{

// Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.ExecuteUbergraph_UI_JettyBoots_Announcement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Announcement_C::ExecuteUbergraph_UI_JettyBoots_Announcement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Announcement_C", "ExecuteUbergraph_UI_JettyBoots_Announcement");

	Params::UI_JettyBoots_Announcement_C_ExecuteUbergraph_UI_JettyBoots_Announcement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Game Over
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InNewHighScore                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_JettyBoots_Announcement_C::Game_Over(int32 InScore, bool InNewHighScore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Announcement_C", "Game Over");

	Params::UI_JettyBoots_Announcement_C_Game_Over Parms{};

	Parms.InScore = InScore;
	Parms.InNewHighScore = InNewHighScore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_JettyBoots_Announcement_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Announcement_C", "PreConstruct");

	Params::UI_JettyBoots_Announcement_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Level Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InNewLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Announcement_C::Level_Up(int32 InNewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Announcement_C", "Level Up");

	Params::UI_JettyBoots_Announcement_C_Level_Up Parms{};

	Parms.InNewLevel = InNewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_JettyBoots_Announcement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Announcement_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.StartAnnouncement
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// ENUM_MenuColors                         InTextColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InNewHighScore                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   InDelayBeforeFadeOut                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_JettyBoots_Announcement_C::StartAnnouncement(const class FText& InText, ENUM_MenuColors InTextColor, int32 InScore, bool InNewHighScore, float InDelayBeforeFadeOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Announcement_C", "StartAnnouncement");

	Params::UI_JettyBoots_Announcement_C_StartAnnouncement Parms{};

	Parms.InText = std::move(InText);
	Parms.InTextColor = InTextColor;
	Parms.InScore = InScore;
	Parms.InNewHighScore = InNewHighScore;
	Parms.InDelayBeforeFadeOut = InDelayBeforeFadeOut;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.BeginFadeOut
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_Announcement_C::BeginFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Announcement_C", "BeginFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.EndFadeOut
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_Announcement_C::EndFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Announcement_C", "EndFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_JettyBoots_Announcement_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_JettyBoots_Announcement_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}

}

