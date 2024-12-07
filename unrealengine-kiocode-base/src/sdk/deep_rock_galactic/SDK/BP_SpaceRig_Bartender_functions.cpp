#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpaceRig_Bartender

#include "Basic.hpp"

#include "BP_SpaceRig_Bartender_classes.hpp"
#include "BP_SpaceRig_Bartender_parameters.hpp"


namespace SDK
{

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ExecuteUbergraph_BP_SpaceRig_Bartender
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::ExecuteUbergraph_BP_SpaceRig_Bartender(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "ExecuteUbergraph_BP_SpaceRig_Bartender");

	Params::BP_SpaceRig_Bartender_C_ExecuteUbergraph_BP_SpaceRig_Bartender Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayBartenderTip
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::PlayBartenderTip(class APlayerCharacter* User)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "PlayBartenderTip");

	Params::BP_SpaceRig_Bartender_C_PlayBartenderTip Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnUsableChanged_Mixer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SpaceRig_Bartender_C::OnUsableChanged_Mixer(bool CanUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "OnUsableChanged_Mixer");

	Params::BP_SpaceRig_Bartender_C_OnUsableChanged_Mixer Parms{};

	Parms.CanUse = CanUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.InitializeMixer
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::InitializeMixer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "InitializeMixer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Toggle Fireworks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SpaceRig_Bartender_C::Toggle_Fireworks(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "Toggle Fireworks");

	Params::BP_SpaceRig_Bartender_C_Toggle_Fireworks Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Init Background Menu
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::Init_Background_Menu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "Init Background Menu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Look Towards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::Look_Towards(class AActor* Actor, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "Look Towards");

	Params::BP_SpaceRig_Bartender_C_Look_Towards Parms{};

	Parms.Actor = Actor;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SpaceRig_Bartender_C::BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_SpaceRig_Bartender_C_BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Client Spawn Next Drink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C*                  DrinkBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::Client_Spawn_Next_Drink(class ABP_DrinksBox_C* DrinkBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "Client Spawn Next Drink");

	Params::BP_SpaceRig_Bartender_C_Client_Spawn_Next_Drink Parms{};

	Parms.DrinkBox = DrinkBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.All_BeginSpawnDrinks
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayFireworks                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SpaceRig_Bartender_C::All_BeginSpawnDrinks(bool PlayFireworks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "All_BeginSpawnDrinks");

	Params::BP_SpaceRig_Bartender_C_All_BeginSpawnDrinks Parms{};

	Parms.PlayFireworks = PlayFireworks;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Return To Idle
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::Return_To_Idle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "Return To Idle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnDrinkReady_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C*                  DrinkBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::OnDrinkReady_Event(class ABP_DrinksBox_C* DrinkBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "OnDrinkReady_Event");

	Params::BP_SpaceRig_Bartender_C_OnDrinkReady_Event Parms{};

	Parms.DrinkBox = DrinkBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnAvailableForNewDrink_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C*                  DrinkBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::OnAvailableForNewDrink_Event(class ABP_DrinksBox_C* DrinkBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "OnAvailableForNewDrink_Event");

	Params::BP_SpaceRig_Bartender_C_OnAvailableForNewDrink_Event Parms{};

	Parms.DrinkBox = DrinkBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Server Spawn Next Drink
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::Server_Spawn_Next_Drink()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "Server Spawn Next Drink");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Lerp To
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       PourTransform                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::Lerp_To(const struct FTransform& PourTransform, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "Lerp To");

	Params::BP_SpaceRig_Bartender_C_Lerp_To Parms{};

	Parms.PourTransform = std::move(PourTransform);
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SpawnDrinks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*              Drinable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::SpawnDrinks(class UDrinkableDataAsset* Drinable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "SpawnDrinks");

	Params::BP_SpaceRig_Bartender_C_SpawnDrinks Parms{};

	Parms.Drinable = Drinable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Update Bartender Lights
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::Update_Bartender_Lights()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "Update Bartender Lights");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnPlayerLeave_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::OnPlayerLeave_Event(class AFSDPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "OnPlayerLeave_Event");

	Params::BP_SpaceRig_Bartender_C_OnPlayerLeave_Event Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LookAtCustomer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 Customer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::LookAtCustomer(class APlayerCharacter* Customer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "LookAtCustomer");

	Params::BP_SpaceRig_Bartender_C_LookAtCustomer Parms{};

	Parms.Customer = Customer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    CanUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SpaceRig_Bartender_C::BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");

	Params::BP_SpaceRig_Bartender_C_BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature Parms{};

	Parms.CanUse = CanUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputKeys                              Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	Params::BP_SpaceRig_Bartender_C_BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature Parms{};

	Parms.User = User;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_SpaceRig_Bartender_C::FinishedTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "FinishedTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_SpaceRig_Bartender_C::FinishedTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "FinishedTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_SpaceRig_Bartender_C::LerpTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "LerpTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_SpaceRig_Bartender_C::LerpTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "LerpTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.CanOrderNewRound
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SpaceRig_Bartender_C::CanOrderNewRound(bool* CanOrder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "CanOrderNewRound");

	Params::BP_SpaceRig_Bartender_C_CanOrderNewRound Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanOrder != nullptr)
		*CanOrder = Parms.CanOrder;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCustomer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 Customer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::SetCustomer(class APlayerCharacter* Customer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "SetCustomer");

	Params::BP_SpaceRig_Bartender_C_SetCustomer Parms{};

	Parms.Customer = Customer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnRep_CurrentCustomerState
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::OnRep_CurrentCustomerState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "OnRep_CurrentCustomerState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetBartenderLightMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*               SourceMaterial                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::SetBartenderLightMaterial(class UMaterialInterface* SourceMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "SetBartenderLightMaterial");

	Params::BP_SpaceRig_Bartender_C_SetBartenderLightMaterial Parms{};

	Parms.SourceMaterial = SourceMaterial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Pour
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C*                  DrinkBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PourDuration                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::Pour(class ABP_DrinksBox_C* DrinkBox, float* PourDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "Pour");

	Params::BP_SpaceRig_Bartender_C_Pour Parms{};

	Parms.DrinkBox = DrinkBox;

	UObject::ProcessEvent(Func, &Parms);

	if (PourDuration != nullptr)
		*PourDuration = Parms.PourDuration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PourFinished
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::PourFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "PourFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAffirmative
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Duration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::PlayAffirmative(float* Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "PlayAffirmative");

	Params::BP_SpaceRig_Bartender_C_PlayAffirmative Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayNegative
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Duration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::PlayNegative(float* Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "PlayNegative");

	Params::BP_SpaceRig_Bartender_C_PlayNegative Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     MontageToPlay                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Duration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::PlayAnim(class UAnimMontage* MontageToPlay, float* Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "PlayAnim");

	Params::BP_SpaceRig_Bartender_C_PlayAnim Parms{};

	Parms.MontageToPlay = MontageToPlay;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayGreeting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Duration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceRig_Bartender_C::PlayGreeting(float* Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "PlayGreeting");

	Params::BP_SpaceRig_Bartender_C_PlayGreeting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Spawn Mixer Beer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ControlEventID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   MixerCooldownToSet                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDrinkableDataAsset*              OrderedDrink                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Ordering_Player                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             Announcement_Text                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SpaceRig_Bartender_C::Spawn_Mixer_Beer(const class FString& ControlEventID, int32 MixerCooldownToSet, class UDrinkableDataAsset* OrderedDrink, const class FString& Ordering_Player, const class FText& Announcement_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "Spawn Mixer Beer");

	Params::BP_SpaceRig_Bartender_C_Spawn_Mixer_Beer Parms{};

	Parms.ControlEventID = std::move(ControlEventID);
	Parms.MixerCooldownToSet = MixerCooldownToSet;
	Parms.OrderedDrink = OrderedDrink;
	Parms.Ordering_Player = std::move(Ordering_Player);
	Parms.Announcement_Text = std::move(Announcement_Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PayCredits
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Purchased                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SpaceRig_Bartender_C::PayCredits(class APlayerCharacter* User, int32 Amount, bool* Purchased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "PayCredits");

	Params::BP_SpaceRig_Bartender_C_PayCredits Parms{};

	Parms.User = User;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (Purchased != nullptr)
		*Purchased = Parms.Purchased;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCableAnchors
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::SetCableAnchors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "SetCableAnchors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UpdateHolidayDecoration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::UpdateHolidayDecoration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpaceRig_Bartender_C", "UpdateHolidayDecoration");

	UObject::ProcessEvent(Func, nullptr);
}

}

