#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Chat

#include "Basic.hpp"

#include "HUD_Chat_classes.hpp"
#include "HUD_Chat_parameters.hpp"


namespace SDK
{

// Function HUD_Chat.HUD_Chat_C.ExecuteUbergraph_HUD_Chat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Chat_C::ExecuteUbergraph_HUD_Chat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "ExecuteUbergraph_HUD_Chat");

	Params::HUD_Chat_C_ExecuteUbergraph_HUD_Chat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Chat.HUD_Chat_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Chat_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Chat.HUD_Chat_C.ChatClosedCooldown
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::ChatClosedCooldown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "ChatClosedCooldown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Chat.HUD_Chat_C.ChatOpenCooldown
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::ChatOpenCooldown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "ChatOpenCooldown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Chat.HUD_Chat_C.PlatformDependentClose
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::PlatformDependentClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "PlatformDependentClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Chat.HUD_Chat_C.OnFontSizeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Chat_C::OnFontSizeChange(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "OnFontSizeChange");

	Params::HUD_Chat_C_OnFontSizeChange Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Chat.HUD_Chat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Chat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_Chat_C::BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::HUD_Chat_C_BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Chat.HUD_Chat_C.NewMesssage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFSDChatMessage                  Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_Chat_C::NewMesssage(const struct FFSDChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "NewMesssage");

	Params::HUD_Chat_C_NewMesssage Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Chat_C::BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::HUD_Chat_C_BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Chat.HUD_Chat_C.SendChatMessage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Chat_C::SendChatMessage(const class FText& InText, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "SendChatMessage");

	Params::HUD_Chat_C_SendChatMessage Parms{};

	Parms.InText = std::move(InText);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_Chat_C::BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::HUD_Chat_C_BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Chat_C::BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");

	Params::HUD_Chat_C_BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Chat.HUD_Chat_C.OnBackgroundFadeFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::OnBackgroundFadeFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "OnBackgroundFadeFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Chat.HUD_Chat_C.CloseChat
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::CloseChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "CloseChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Chat.HUD_Chat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Chat_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "PreConstruct");

	Params::HUD_Chat_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Chat.HUD_Chat_C.OnMessageHidden_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::OnMessageHidden_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "OnMessageHidden_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Chat.HUD_Chat_C.Add Chat Message
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFSDChatMessage                  Msg                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_Chat_C::Add_Chat_Message(const struct FFSDChatMessage& Msg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "Add Chat Message");

	Params::HUD_Chat_C_Add_Chat_Message Parms{};

	Parms.Msg = std::move(Msg);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Chat.HUD_Chat_C.Update Chat Background
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::Update_Chat_Background()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "Update Chat Background");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Chat.HUD_Chat_C.OnOpenChat
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::OnOpenChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "OnOpenChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Chat.HUD_Chat_C.BeginChat
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::BeginChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "BeginChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Chat.HUD_Chat_C.OpenChat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::OpenChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "OpenChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_Chat.HUD_Chat_C.GetSenderType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EChatSenderType                         Param_SenderType                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Chat_C::GetSenderType(EChatSenderType* Param_SenderType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "GetSenderType");

	Params::HUD_Chat_C_GetSenderType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SenderType != nullptr)
		*Param_SenderType = Parms.Param_SenderType;
}


// Function HUD_Chat.HUD_Chat_C.UpdateChatMessages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ResetAge                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Chat_C::UpdateChatMessages(bool ResetAge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "UpdateChatMessages");

	Params::HUD_Chat_C_UpdateChatMessages Parms{};

	Parms.ResetAge = ResetAge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Chat.HUD_Chat_C.SetMaxLinesFromFontSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FontSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Chat_C::SetMaxLinesFromFontSize(int32 FontSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "SetMaxLinesFromFontSize");

	Params::HUD_Chat_C_SetMaxLinesFromFontSize Parms{};

	Parms.FontSize = FontSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_Chat.HUD_Chat_C.FilterProfanityMessage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           MessageToFilter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           OutMessage                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UHUD_Chat_C::FilterProfanityMessage(const class FString& MessageToFilter, class FString* OutMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "FilterProfanityMessage");

	Params::HUD_Chat_C_FilterProfanityMessage Parms{};

	Parms.MessageToFilter = std::move(MessageToFilter);

	UObject::ProcessEvent(Func, &Parms);

	if (OutMessage != nullptr)
		*OutMessage = std::move(Parms.OutMessage);
}


// Function HUD_Chat.HUD_Chat_C.FilterMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFSDChatMessage                  InMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFSDChatMessage                  FilteredMessage                                        (Parm, OutParm)

void UHUD_Chat_C::FilterMessage(const struct FFSDChatMessage& InMessage, struct FFSDChatMessage* FilteredMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "FilterMessage");

	Params::HUD_Chat_C_FilterMessage Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);

	if (FilteredMessage != nullptr)
		*FilteredMessage = std::move(Parms.FilteredMessage);
}


// Function HUD_Chat.HUD_Chat_C.FilterBlockedUserMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFSDChatMessage                  InMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// EChatMessageType                        FilteredMessageType                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           FilteredMessage                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UHUD_Chat_C::FilterBlockedUserMessage(const struct FFSDChatMessage& InMessage, EChatMessageType* FilteredMessageType, class FString* FilteredMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "FilterBlockedUserMessage");

	Params::HUD_Chat_C_FilterBlockedUserMessage Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);

	if (FilteredMessageType != nullptr)
		*FilteredMessageType = Parms.FilteredMessageType;

	if (FilteredMessage != nullptr)
		*FilteredMessage = std::move(Parms.FilteredMessage);
}


// Function HUD_Chat.HUD_Chat_C.IsStringNotEmpty
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           String                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsEmpty                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Chat_C::IsStringNotEmpty(const class FString& String, bool* IsEmpty) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_Chat_C", "IsStringNotEmpty");

	Params::HUD_Chat_C_IsStringNotEmpty Parms{};

	Parms.String = std::move(String);

	UObject::ProcessEvent(Func, &Parms);

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;
}

}
