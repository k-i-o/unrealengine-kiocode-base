#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_Shredder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_Shredder.AIC_Shredder_C
// 0x0018 (0x0370 - 0x0358)
class AAIC_Shredder_C final : public AFSDAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AENE_Jelly_Passive_Mother_C*            Mother;                                            // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpeedModifier;                                     // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class AENE_Jelly_Passive_Mother_C* FindNewMother();
	void ReceiveBeginPlay();
	void OnDeath(class UHealthComponentBase* HealthComponent);
	void ReceivePossess(class APawn* PossessedPawn);
	void Speed_Changer();
	void StartSpeedModifier();
	void ExecuteUbergraph_AIC_Shredder(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_Shredder_C">();
	}
	static class AAIC_Shredder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_Shredder_C>();
	}
};
static_assert(alignof(AAIC_Shredder_C) == 0x000008, "Wrong alignment on AAIC_Shredder_C");
static_assert(sizeof(AAIC_Shredder_C) == 0x000370, "Wrong size on AAIC_Shredder_C");
static_assert(offsetof(AAIC_Shredder_C, UberGraphFrame) == 0x000358, "Member 'AAIC_Shredder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAIC_Shredder_C, Mother) == 0x000360, "Member 'AAIC_Shredder_C::Mother' has a wrong offset!");
static_assert(offsetof(AAIC_Shredder_C, SpeedModifier) == 0x000368, "Member 'AAIC_Shredder_C::SpeedModifier' has a wrong offset!");

}

