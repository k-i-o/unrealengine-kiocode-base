#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SupplyPod_Ammo

#include "Basic.hpp"

#include "BP_SupplyPod_Ammo_classes.hpp"
#include "BP_SupplyPod_Ammo_parameters.hpp"


namespace SDK
{

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandlePhotosentitivity
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SupplyPod_Ammo_C::HandlePhotosentitivity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "HandlePhotosentitivity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUsableChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              UseCollider                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           DoorMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SupplyPod_Ammo_C::HandleUsableChanged(class UPrimitiveComponent* UseCollider, class USkeletalMeshComponent* DoorMesh, bool CanUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "HandleUsableChanged");

	Params::BP_SupplyPod_Ammo_C_HandleUsableChanged Parms{};

	Parms.UseCollider = UseCollider;
	Parms.DoorMesh = DoorMesh;
	Parms.CanUse = CanUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HealUser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::HealUser(class APlayerCharacter* User)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "HealUser");

	Params::BP_SupplyPod_Ammo_C_HealUser Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.DisableUsable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Collider                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           DoorMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::DisableUsable(class UPrimitiveComponent* Collider, class USkeletalMeshComponent* DoorMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "DisableUsable");

	Params::BP_SupplyPod_Ammo_C_DisableUsable Parms{};

	Parms.Collider = Collider;
	Parms.DoorMesh = DoorMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ResupplyUser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::ResupplyUser(class APlayerCharacter* User)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "ResupplyUser");

	Params::BP_SupplyPod_Ammo_C_ResupplyUser Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SupplyPod_Ammo_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDroppodImpact
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Ammo_C::OnDroppodImpact()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "OnDroppodImpact");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDropStarted
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Ammo_C::OnDropStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "OnDropStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "ReceiveTick");

	Params::BP_SupplyPod_Ammo_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    CanUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");

	Params::BP_SupplyPod_Ammo_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature Parms{};

	Parms.CanUse = CanUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    CanUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool CanUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature");

	Params::BP_SupplyPod_Ammo_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature Parms{};

	Parms.CanUse = CanUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    CanUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature");

	Params::BP_SupplyPod_Ammo_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature Parms{};

	Parms.CanUse = CanUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    CanUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool CanUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature");

	Params::BP_SupplyPod_Ammo_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature Parms{};

	Parms.CanUse = CanUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputKeys                              Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature");

	Params::BP_SupplyPod_Ammo_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature Parms{};

	Parms.User = User;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputKeys                              Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature");

	Params::BP_SupplyPod_Ammo_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature Parms{};

	Parms.User = User;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputKeys                              Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature");

	Params::BP_SupplyPod_Ammo_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature Parms{};

	Parms.User = User;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputKeys                              Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature");

	Params::BP_SupplyPod_Ammo_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature Parms{};

	Parms.User = User;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnTunnelBLocked
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Ammo_C::OnTunnelBLocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "OnTunnelBLocked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.SupplyUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*                 User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USingleUsableComponent*           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::SupplyUsed(class APlayerCharacter* User, class USingleUsableComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "SupplyUsed");

	Params::BP_SupplyPod_Ammo_C_SupplyUsed Parms{};

	Parms.User = User;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UsableChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*              UseCollider                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           DoorMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::UsableChanged(bool CanUse, class UPrimitiveComponent* UseCollider, class USkeletalMeshComponent* DoorMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "UsableChanged");

	Params::BP_SupplyPod_Ammo_C_UsableChanged Parms{};

	Parms.CanUse = CanUse;
	Parms.UseCollider = UseCollider;
	Parms.DoorMesh = DoorMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Ammo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   UserCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature(int32 UserCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature");

	Params::BP_SupplyPod_Ammo_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature Parms{};

	Parms.UserCount = UserCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   UserCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature(int32 UserCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature");

	Params::BP_SupplyPod_Ammo_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature Parms{};

	Parms.UserCount = UserCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   UserCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature(int32 UserCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature");

	Params::BP_SupplyPod_Ammo_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature Parms{};

	Parms.UserCount = UserCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   UserCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature(int32 UserCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature");

	Params::BP_SupplyPod_Ammo_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature Parms{};

	Parms.UserCount = UserCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUserCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   UserCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USingleUsableComponent*           Usable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           Door                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::HandleUserCountChanged(int32 UserCount, class USingleUsableComponent* Usable, class USkeletalMeshComponent* Door)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "HandleUserCountChanged");

	Params::BP_SupplyPod_Ammo_C_HandleUserCountChanged Parms{};

	Parms.UserCount = UserCount;
	Parms.Usable = Usable;
	Parms.Door = Door;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ExecuteUbergraph_BP_SupplyPod_Ammo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyPod_Ammo_C::ExecuteUbergraph_BP_SupplyPod_Ammo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyPod_Ammo_C", "ExecuteUbergraph_BP_SupplyPod_Ammo");

	Params::BP_SupplyPod_Ammo_C_ExecuteUbergraph_BP_SupplyPod_Ammo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

