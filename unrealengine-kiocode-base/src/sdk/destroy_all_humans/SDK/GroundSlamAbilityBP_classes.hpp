#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GroundSlamAbilityBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MyAbilityBP_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GroundSlamAbilityBP.GroundSlamAbilityBP_C
// 0x0068 (0x0160 - 0x00F8)
class UGroundSlamAbilityBP_C final : public UMyAbilityBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GroundSlamAbilityBP_C;              // 0x00F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Timer;                                             // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HowLong;                                           // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HowWide;                                           // 0x010C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMyCharacter_C*                         MyCharOwner;                                       // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         XDiff;                                             // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         YDiff;                                             // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Direction;                                         // 0x0120(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AMyCharacter_C*>                 AffectedChars;                                     // 0x0138(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FVector>                        AffectedCells;                                     // 0x0148(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Damage;                                            // 0x0158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ContinueAction();
	void ExecuteUbergraph_GroundSlamAbilityBP(int32 EntryPoint);
	void OnEnd();
	void PreDisplayTarget(const struct FVector& Target);
	void ReceiveBeginPlay();
	void Use(const struct FVector& AbilityTarget);
	void ValidateTarget(const struct FVector& Target, bool* Valid_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GroundSlamAbilityBP_C">();
	}
	static class UGroundSlamAbilityBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGroundSlamAbilityBP_C>();
	}
};
static_assert(alignof(UGroundSlamAbilityBP_C) == 0x000008, "Wrong alignment on UGroundSlamAbilityBP_C");
static_assert(sizeof(UGroundSlamAbilityBP_C) == 0x000160, "Wrong size on UGroundSlamAbilityBP_C");
static_assert(offsetof(UGroundSlamAbilityBP_C, UberGraphFrame_GroundSlamAbilityBP_C) == 0x0000F8, "Member 'UGroundSlamAbilityBP_C::UberGraphFrame_GroundSlamAbilityBP_C' has a wrong offset!");
static_assert(offsetof(UGroundSlamAbilityBP_C, Timer) == 0x000100, "Member 'UGroundSlamAbilityBP_C::Timer' has a wrong offset!");
static_assert(offsetof(UGroundSlamAbilityBP_C, HowLong) == 0x000108, "Member 'UGroundSlamAbilityBP_C::HowLong' has a wrong offset!");
static_assert(offsetof(UGroundSlamAbilityBP_C, HowWide) == 0x00010C, "Member 'UGroundSlamAbilityBP_C::HowWide' has a wrong offset!");
static_assert(offsetof(UGroundSlamAbilityBP_C, MyCharOwner) == 0x000110, "Member 'UGroundSlamAbilityBP_C::MyCharOwner' has a wrong offset!");
static_assert(offsetof(UGroundSlamAbilityBP_C, XDiff) == 0x000118, "Member 'UGroundSlamAbilityBP_C::XDiff' has a wrong offset!");
static_assert(offsetof(UGroundSlamAbilityBP_C, YDiff) == 0x00011C, "Member 'UGroundSlamAbilityBP_C::YDiff' has a wrong offset!");
static_assert(offsetof(UGroundSlamAbilityBP_C, Direction) == 0x000120, "Member 'UGroundSlamAbilityBP_C::Direction' has a wrong offset!");
static_assert(offsetof(UGroundSlamAbilityBP_C, AffectedChars) == 0x000138, "Member 'UGroundSlamAbilityBP_C::AffectedChars' has a wrong offset!");
static_assert(offsetof(UGroundSlamAbilityBP_C, AffectedCells) == 0x000148, "Member 'UGroundSlamAbilityBP_C::AffectedCells' has a wrong offset!");
static_assert(offsetof(UGroundSlamAbilityBP_C, Damage) == 0x000158, "Member 'UGroundSlamAbilityBP_C::Damage' has a wrong offset!");

}
