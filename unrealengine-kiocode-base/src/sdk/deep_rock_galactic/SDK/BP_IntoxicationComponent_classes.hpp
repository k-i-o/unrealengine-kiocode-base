#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IntoxicationComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IntoxicationComponent.BP_IntoxicationComponent_C
// 0x0048 (0x0148 - 0x0100)
class UBP_IntoxicationComponent_C final : public UCharacterIntoxicationComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0100(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Seed;                                              // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DrunkEffectCoolDown;                               // 0x010C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DrunkenMovementNoiseStrength;                      // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DrunkenYawNoiseStrength;                           // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DrunkenPitchNoiseStrength;                         // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreMovement;                                    // 0x011C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IgnoreYaw;                                         // 0x011D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IgnorePitch;                                       // 0x011E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35E3[0x1];                                     // 0x011F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DrunkenEffect;                                     // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EffectID;                                          // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntoxicationVisualStrength;                        // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntoxicationMovementStrength;                      // 0x0134(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DrunkenShoutCoolDown;                              // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShoutCooldownMax;                                  // 0x013C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShoutCooldownMin;                                  // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BeginShoutIntoxicationLimit;                       // 0x0144(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_IntoxicationComponent(int32 EntryPoint);
	void ReceiveDrunkBegin();
	void ReceiveDrunkEnd();
	void Lerp_Post_Process_Strength(float DeltaTime);
	void ReceivePassOutDrunk();
	void ReceiveDrunkTick(float DeltaTime, float DrunkTime);
	void Pop_Effects(const class FString& DebugReason);
	void Push_Effects();
	void Lerp_Movement_Stength(float DeltaTime);
	void SetPostProcessStrength(float NewStrength);
	void MyLerp(float Current_Value, float Target_Value, float Delta_Time, float* Result);
	void ToPercentStr(float Progress, class FString* PercentString);

	int32 GetAlcoholPct(EDrinkableAlcoholStrength Strength) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IntoxicationComponent_C">();
	}
	static class UBP_IntoxicationComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_IntoxicationComponent_C>();
	}
};
static_assert(alignof(UBP_IntoxicationComponent_C) == 0x000008, "Wrong alignment on UBP_IntoxicationComponent_C");
static_assert(sizeof(UBP_IntoxicationComponent_C) == 0x000148, "Wrong size on UBP_IntoxicationComponent_C");
static_assert(offsetof(UBP_IntoxicationComponent_C, UberGraphFrame) == 0x000100, "Member 'UBP_IntoxicationComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, Seed) == 0x000108, "Member 'UBP_IntoxicationComponent_C::Seed' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, DrunkEffectCoolDown) == 0x00010C, "Member 'UBP_IntoxicationComponent_C::DrunkEffectCoolDown' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, DrunkenMovementNoiseStrength) == 0x000110, "Member 'UBP_IntoxicationComponent_C::DrunkenMovementNoiseStrength' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, DrunkenYawNoiseStrength) == 0x000114, "Member 'UBP_IntoxicationComponent_C::DrunkenYawNoiseStrength' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, DrunkenPitchNoiseStrength) == 0x000118, "Member 'UBP_IntoxicationComponent_C::DrunkenPitchNoiseStrength' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, IgnoreMovement) == 0x00011C, "Member 'UBP_IntoxicationComponent_C::IgnoreMovement' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, IgnoreYaw) == 0x00011D, "Member 'UBP_IntoxicationComponent_C::IgnoreYaw' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, IgnorePitch) == 0x00011E, "Member 'UBP_IntoxicationComponent_C::IgnorePitch' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, DrunkenEffect) == 0x000120, "Member 'UBP_IntoxicationComponent_C::DrunkenEffect' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, EffectID) == 0x000128, "Member 'UBP_IntoxicationComponent_C::EffectID' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, IntoxicationVisualStrength) == 0x000130, "Member 'UBP_IntoxicationComponent_C::IntoxicationVisualStrength' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, IntoxicationMovementStrength) == 0x000134, "Member 'UBP_IntoxicationComponent_C::IntoxicationMovementStrength' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, DrunkenShoutCoolDown) == 0x000138, "Member 'UBP_IntoxicationComponent_C::DrunkenShoutCoolDown' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, ShoutCooldownMax) == 0x00013C, "Member 'UBP_IntoxicationComponent_C::ShoutCooldownMax' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, ShoutCooldownMin) == 0x000140, "Member 'UBP_IntoxicationComponent_C::ShoutCooldownMin' has a wrong offset!");
static_assert(offsetof(UBP_IntoxicationComponent_C, BeginShoutIntoxicationLimit) == 0x000144, "Member 'UBP_IntoxicationComponent_C::BeginShoutIntoxicationLimit' has a wrong offset!");

}
