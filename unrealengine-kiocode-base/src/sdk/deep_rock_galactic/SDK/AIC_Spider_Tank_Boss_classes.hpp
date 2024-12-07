#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_Spider_Tank_Boss

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIC_Spider_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C
// 0x0008 (0x0380 - 0x0378)
class AAIC_Spider_Tank_Boss_C final : public AAIC_Spider_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_Spider_Tank_Boss_C;             // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void OnArmorDestroyed(float EnrageDuration);
	void ReceivePossess(class APawn* PossessedPawn);
	void ReceiveBeginPlay();
	void StartSpeedModifier();
	void ExecuteUbergraph_AIC_Spider_Tank_Boss(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_Spider_Tank_Boss_C">();
	}
	static class AAIC_Spider_Tank_Boss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_Spider_Tank_Boss_C>();
	}
};
static_assert(alignof(AAIC_Spider_Tank_Boss_C) == 0x000008, "Wrong alignment on AAIC_Spider_Tank_Boss_C");
static_assert(sizeof(AAIC_Spider_Tank_Boss_C) == 0x000380, "Wrong size on AAIC_Spider_Tank_Boss_C");
static_assert(offsetof(AAIC_Spider_Tank_Boss_C, UberGraphFrame_AIC_Spider_Tank_Boss_C) == 0x000378, "Member 'AAIC_Spider_Tank_Boss_C::UberGraphFrame_AIC_Spider_Tank_Boss_C' has a wrong offset!");

}

