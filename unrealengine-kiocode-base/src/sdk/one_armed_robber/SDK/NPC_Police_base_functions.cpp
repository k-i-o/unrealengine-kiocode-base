#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Police_base

#include "Basic.hpp"

#include "NPC_Police_base_classes.hpp"
#include "NPC_Police_base_parameters.hpp"


namespace SDK
{

// Function NPC_Police_base.NPC_Police_base_C.ExecuteUbergraph_NPC_Police_base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::ExecuteUbergraph_NPC_Police_base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "ExecuteUbergraph_NPC_Police_base");

	Params::NPC_Police_base_C_ExecuteUbergraph_NPC_Police_base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.StopWarningPowerbox
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::StopWarningPowerbox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "StopWarningPowerbox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.BndEvt__NPC_Police_base_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ANPC_Police_base_C::BndEvt__NPC_Police_base_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "BndEvt__NPC_Police_base_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::NPC_Police_base_C_BndEvt__NPC_Police_base_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.StartWarningPowerBox
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::StartWarningPowerBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "StartWarningPowerBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.Body stun
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::Body_stun(class FName Bone, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "Body stun");

	Params::NPC_Police_base_C_Body_stun Parms{};

	Parms.Bone = Bone;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.PoliceUncrouch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::PoliceUncrouch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "PoliceUncrouch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.PoliceCrouch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::PoliceCrouch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "PoliceCrouch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.SmoothRotate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANPC_Police_base_C::SmoothRotate(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "SmoothRotate");

	Params::NPC_Police_base_C_SmoothRotate Parms{};

	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.MoveToCover
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::MoveToCover(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "MoveToCover");

	Params::NPC_Police_base_C_MoveToCover Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.LeaveCover
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::LeaveCover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "LeaveCover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.LooseHat
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::LooseHat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "LooseHat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.HeadStun
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::HeadStun()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "HeadStun");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.HeadStunChance
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::HeadStunChance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "HeadStunChance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.BndEvt__NPC_Police_base_DamageComponent_K2Node_ComponentBoundEvent_1_Damage__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::BndEvt__NPC_Police_base_DamageComponent_K2Node_ComponentBoundEvent_1_Damage__DelegateSignature(int32 Amount, class FName Bone, const struct FVector& HitLocation, const struct FVector& StartLocation, class AActor* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "BndEvt__NPC_Police_base_DamageComponent_K2Node_ComponentBoundEvent_1_Damage__DelegateSignature");

	Params::NPC_Police_base_C_BndEvt__NPC_Police_base_DamageComponent_K2Node_ComponentBoundEvent_1_Damage__DelegateSignature Parms{};

	Parms.Amount = Amount;
	Parms.Bone = Bone;
	Parms.HitLocation = std::move(HitLocation);
	Parms.StartLocation = std::move(StartLocation);
	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.DropAmmo
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::DropAmmo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "DropAmmo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.MoveNearTarget
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::MoveNearTarget(float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "MoveNearTarget");

	Params::NPC_Police_base_C_MoveNearTarget Parms{};

	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.PoliceDie
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::PoliceDie(class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "PoliceDie");

	Params::NPC_Police_base_C_PoliceDie Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.Shoot
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::Shoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "Shoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.SetTarget
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::SetTarget(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "SetTarget");

	Params::NPC_Police_base_C_SetTarget Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.BndEvt__NPC_Police_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::BndEvt__NPC_Police_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "BndEvt__NPC_Police_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature");

	Params::NPC_Police_base_C_BndEvt__NPC_Police_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.OnSuccess_D72A09BB4846C507EDCEE78EF2293331
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::OnSuccess_D72A09BB4846C507EDCEE78EF2293331(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "OnSuccess_D72A09BB4846C507EDCEE78EF2293331");

	Params::NPC_Police_base_C_OnSuccess_D72A09BB4846C507EDCEE78EF2293331 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.OnFail_D72A09BB4846C507EDCEE78EF2293331
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::OnFail_D72A09BB4846C507EDCEE78EF2293331(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "OnFail_D72A09BB4846C507EDCEE78EF2293331");

	Params::NPC_Police_base_C_OnFail_D72A09BB4846C507EDCEE78EF2293331 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.OnSuccess_FFD927C649BBA39C366E5BA4336B9B80
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::OnSuccess_FFD927C649BBA39C366E5BA4336B9B80(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "OnSuccess_FFD927C649BBA39C366E5BA4336B9B80");

	Params::NPC_Police_base_C_OnSuccess_FFD927C649BBA39C366E5BA4336B9B80 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.OnFail_FFD927C649BBA39C366E5BA4336B9B80
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::OnFail_FFD927C649BBA39C366E5BA4336B9B80(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "OnFail_FFD927C649BBA39C366E5BA4336B9B80");

	Params::NPC_Police_base_C_OnFail_FFD927C649BBA39C366E5BA4336B9B80 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Police_base.NPC_Police_base_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ANPC_Police_base_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ANPC_Police_base_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.ShootPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::ShootPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "ShootPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.FindNon-DownedPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Found_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANPC_Police_base_C::FindNonMinusDownedPlayer(class AActor** Player, bool* Found_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "FindNon-DownedPlayer");

	Params::NPC_Police_base_C_FindNonMinusDownedPlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;

	if (Found_ != nullptr)
		*Found_ = Parms.Found_;
}


// Function NPC_Police_base.NPC_Police_base_C.CheckCover
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Will_take_cover_                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Cover_location                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Police_base_C::CheckCover(bool* Will_take_cover_, struct FVector* Cover_location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "CheckCover");

	Params::NPC_Police_base_C_CheckCover Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Will_take_cover_ != nullptr)
		*Will_take_cover_ = Parms.Will_take_cover_;

	if (Cover_location != nullptr)
		*Cover_location = std::move(Parms.Cover_location);
}


// Function NPC_Police_base.NPC_Police_base_C.CheckClearView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::CheckClearView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "CheckClearView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.CheckIfPointIsOnPlayerLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Player_location                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          PointLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OnLevel_                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANPC_Police_base_C::CheckIfPointIsOnPlayerLevel(const struct FVector& Player_location, const struct FVector& PointLocation, bool* OnLevel_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "CheckIfPointIsOnPlayerLevel");

	Params::NPC_Police_base_C_CheckIfPointIsOnPlayerLevel Parms{};

	Parms.Player_location = std::move(Player_location);
	Parms.PointLocation = std::move(PointLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (OnLevel_ != nullptr)
		*OnLevel_ = Parms.OnLevel_;
}


// Function NPC_Police_base.NPC_Police_base_C.findActivePowerbox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANPC_Police_base_C::FindActivePowerbox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "findActivePowerbox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Police_base.NPC_Police_base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPC_Police_base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Police_base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

