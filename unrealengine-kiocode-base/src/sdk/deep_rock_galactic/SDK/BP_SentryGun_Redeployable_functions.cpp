#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SentryGun_Redeployable

#include "Basic.hpp"

#include "BP_SentryGun_Redeployable_classes.hpp"
#include "BP_SentryGun_Redeployable_parameters.hpp"


namespace SDK
{

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateIndicatorLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    FiredShot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SentryGun_Redeployable_C::UpdateIndicatorLight(bool FiredShot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "UpdateIndicatorLight");

	Params::BP_SentryGun_Redeployable_C_UpdateIndicatorLight Parms{};

	Parms.FiredShot = FiredShot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ConditionallyEnableShadows
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ConditionallyEnableShadows()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "ConditionallyEnableShadows");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ToggleBuildMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InBuilding                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SentryGun_Redeployable_C::ToggleBuildMode(bool InBuilding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "ToggleBuildMode");

	Params::BP_SentryGun_Redeployable_C_ToggleBuildMode Parms{};

	Parms.InBuilding = InBuilding;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_SentryGun_Redeployable_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_SentryGun_Redeployable_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeploy
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnDeploy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "ReceiveOnDeploy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantle
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnDismantle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "ReceiveOnDismantle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantled
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnDismantled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "ReceiveOnDismantled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeployed
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnDeployed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "ReceiveOnDeployed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputKeys                              Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SentryGun_Redeployable_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	Params::BP_SentryGun_Redeployable_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature Parms{};

	Parms.User = User;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SentryGun_Redeployable_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature");

	Params::BP_SentryGun_Redeployable_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnSentryGunOwnerChanged
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnSentryGunOwnerChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "ReceiveOnSentryGunOwnerChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ActivateSpecialAttack
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ActivateSpecialAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "ActivateSpecialAttack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Multicast Special Attack GFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::Multicast_Special_Attack_GFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "Multicast Special Attack GFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Reset Special Attack
// (BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::Reset_Special_Attack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "Reset Special Attack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateShadows
// (BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::UpdateShadows()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "UpdateShadows");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SentryGun_Redeployable_C::BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature");

	Params::BP_SentryGun_Redeployable_C_BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveAmmoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentAmount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SentryGun_Redeployable_C::ReceiveAmmoChanged(int32 Delta, int32 CurrentAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "ReceiveAmmoChanged");

	Params::BP_SentryGun_Redeployable_C_ReceiveAmmoChanged Parms{};

	Parms.Delta = Delta;
	Parms.CurrentAmount = CurrentAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.SetArcIndicatorActive
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SentryGun_Redeployable_C::SetArcIndicatorActive(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "SetArcIndicatorActive");

	Params::BP_SentryGun_Redeployable_C_SetArcIndicatorActive Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ExecuteUbergraph_BP_SentryGun_Redeployable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SentryGun_Redeployable_C::ExecuteUbergraph_BP_SentryGun_Redeployable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "ExecuteUbergraph_BP_SentryGun_Redeployable");

	Params::BP_SentryGun_Redeployable_C_ExecuteUbergraph_BP_SentryGun_Redeployable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.GetDeployProgress
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_SentryGun_Redeployable_C::GetDeployProgress() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SentryGun_Redeployable_C", "GetDeployProgress");

	Params::BP_SentryGun_Redeployable_C_GetDeployProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
