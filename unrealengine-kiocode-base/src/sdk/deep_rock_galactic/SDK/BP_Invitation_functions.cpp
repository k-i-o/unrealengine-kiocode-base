#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Invitation

#include "Basic.hpp"

#include "BP_Invitation_classes.hpp"
#include "BP_Invitation_parameters.hpp"


namespace SDK
{

// Function BP_Invitation.BP_Invitation_C.ImageReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_Invitation_C::ImageReady__DelegateSignature(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "ImageReady__DelegateSignature");

	Params::BP_Invitation_C_ImageReady__DelegateSignature Parms{};

	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Invitation.BP_Invitation_C.ExecuteUbergraph_BP_Invitation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Invitation_C::ExecuteUbergraph_BP_Invitation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "ExecuteUbergraph_BP_Invitation");

	Params::BP_Invitation_C_ExecuteUbergraph_BP_Invitation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Invitation.BP_Invitation_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Invitation_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "PreConstruct");

	Params::BP_Invitation_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Invitation.BP_Invitation_C.HideUIDelayed
// (BlueprintCallable, BlueprintEvent)

void UBP_Invitation_C::HideUIDelayed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "HideUIDelayed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Invitation.BP_Invitation_C.BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_Invitation_C::BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_Invitation_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_Invitation_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Invitation.BP_Invitation_C.OnReadyImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_Invitation_C::OnReadyImage(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "OnReadyImage");

	Params::BP_Invitation_C_OnReadyImage Parms{};

	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Invitation.BP_Invitation_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Invitation_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "Tick");

	Params::BP_Invitation_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Invitation.BP_Invitation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Invitation_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Invitation.BP_Invitation_C.OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Invitation_C::OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4");

	Params::BP_Invitation_C_OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4 Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Invitation.BP_Invitation_C.OnFail_1E7B4EA94EB1E25E604B80A4114A24A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Invitation_C::OnFail_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "OnFail_1E7B4EA94EB1E25E604B80A4114A24A4");

	Params::BP_Invitation_C_OnFail_1E7B4EA94EB1E25E604B80A4114A24A4 Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Invitation.BP_Invitation_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBP_Invitation_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "OnKeyUp");

	Params::BP_Invitation_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Invitation.BP_Invitation_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscordUserDataSDK              User_Data                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   TimeElapsed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Invitation_C::Initialize(const struct FDiscordUserDataSDK& User_Data, float TimeElapsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "Initialize");

	Params::BP_Invitation_C_Initialize Parms{};

	Parms.User_Data = std::move(User_Data);
	Parms.TimeElapsed = TimeElapsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Invitation.BP_Invitation_C.ReplyInvite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Reply                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Invitation_C::ReplyInvite(int32 Reply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Invitation_C", "ReplyInvite");

	Params::BP_Invitation_C_ReplyInvite Parms{};

	Parms.Reply = Reply;

	UObject::ProcessEvent(Func, &Parms);
}

}
