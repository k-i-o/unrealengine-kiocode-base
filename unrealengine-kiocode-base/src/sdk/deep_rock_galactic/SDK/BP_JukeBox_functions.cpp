#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JukeBox

#include "Basic.hpp"

#include "BP_JukeBox_classes.hpp"
#include "BP_JukeBox_parameters.hpp"


namespace SDK
{

// Function BP_JukeBox.BP_JukeBox_C.ExecuteUbergraph_BP_JukeBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JukeBox_C::ExecuteUbergraph_BP_JukeBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "ExecuteUbergraph_BP_JukeBox");

	Params::BP_JukeBox_C_ExecuteUbergraph_BP_JukeBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JukeBox.BP_JukeBox_C.OnSaluteEvent_Event_0
// (BlueprintCallable, BlueprintEvent)

void ABP_JukeBox_C::OnSaluteEvent_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "OnSaluteEvent_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JukeBox.BP_JukeBox_C.OnStreamerModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_JukeBox_C::OnStreamerModeChanged(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "OnStreamerModeChanged");

	Params::BP_JukeBox_C_OnStreamerModeChanged Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JukeBox.BP_JukeBox_C.SetupDisableJukeboxMusic
// (BlueprintCallable, BlueprintEvent)

void ABP_JukeBox_C::SetupDisableJukeboxMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "SetupDisableJukeboxMusic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JukeBox.BP_JukeBox_C.StopJukebox
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_JukeBox_C::StopJukebox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "StopJukebox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JukeBox.BP_JukeBox_C.Stop Juke Box
// (BlueprintCallable, BlueprintEvent)

void ABP_JukeBox_C::Stop_Juke_Box()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "Stop Juke Box");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JukeBox.BP_JukeBox_C.LoadAndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class USoundBase>        Music                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_JukeBox_C::LoadAndPlay(TSoftObjectPtr<class USoundBase> Music)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "LoadAndPlay");

	Params::BP_JukeBox_C_LoadAndPlay Parms{};

	Parms.Music = Music;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JukeBox_C::BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_JukeBox_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_JukeBox_C::BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_JukeBox_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JukeBox.BP_JukeBox_C.ToggleSpeakerRocking
// (BlueprintCallable, BlueprintEvent)

void ABP_JukeBox_C::ToggleSpeakerRocking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "ToggleSpeakerRocking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JukeBox.BP_JukeBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_JukeBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JukeBox.BP_JukeBox_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputKeys                              Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JukeBox_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	Params::BP_JukeBox_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature Parms{};

	Parms.User = User;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JukeBox.BP_JukeBox_C.OnLoaded_C15A19DC4718016F57823CA232EE5860
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JukeBox_C::OnLoaded_C15A19DC4718016F57823CA232EE5860(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "OnLoaded_C15A19DC4718016F57823CA232EE5860");

	Params::BP_JukeBox_C_OnLoaded_C15A19DC4718016F57823CA232EE5860 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JukeBox.BP_JukeBox_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_JukeBox_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JukeBox.BP_JukeBox_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_JukeBox_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JukeBox.BP_JukeBox_C.OnRep_MusicIndex
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_JukeBox_C::OnRep_MusicIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "OnRep_MusicIndex");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JukeBox.BP_JukeBox_C.PayCredits
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Purchased                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_JukeBox_C::PayCredits(class APlayerCharacter* User, int32 Amount, bool* Purchased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "PayCredits");

	Params::BP_JukeBox_C_PayCredits Parms{};

	Parms.User = User;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (Purchased != nullptr)
		*Purchased = Parms.Purchased;
}


// Function BP_JukeBox.BP_JukeBox_C.GetAvailableMusic
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<TSoftObjectPtr<class USoundBase>>OutMusicList                                           (Parm, OutParm)

void ABP_JukeBox_C::GetAvailableMusic(TArray<TSoftObjectPtr<class USoundBase>>* OutMusicList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "GetAvailableMusic");

	Params::BP_JukeBox_C_GetAvailableMusic Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMusicList != nullptr)
		*OutMusicList = std::move(Parms.OutMusicList);
}


// Function BP_JukeBox.BP_JukeBox_C.UpdateCurrentMusic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_JukeBox_C::UpdateCurrentMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JukeBox_C", "UpdateCurrentMusic");

	UObject::ProcessEvent(Func, nullptr);
}

}
