#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProjectileBullet_ArmquistMachineGun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ProjectileBullet_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ProjectileBullet_ArmquistMachineGun.BP_ProjectileBullet_ArmquistMachineGun_C
// 0x0010 (0x0700 - 0x06F0)
class ABP_ProjectileBullet_ArmquistMachineGun_C final : public ABP_ProjectileBullet_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ProjectileBullet_ArmquistMachineGun_C; // 0x06F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                        PPFXMuzzleFleshEffect;                             // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ProjectileBullet_ArmquistMachineGun(int32 EntryPoint);
	void InitializeBullet();
	void OnProjectileStartedFlying();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProjectileBullet_ArmquistMachineGun_C">();
	}
	static class ABP_ProjectileBullet_ArmquistMachineGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ProjectileBullet_ArmquistMachineGun_C>();
	}
};
static_assert(alignof(ABP_ProjectileBullet_ArmquistMachineGun_C) == 0x000008, "Wrong alignment on ABP_ProjectileBullet_ArmquistMachineGun_C");
static_assert(sizeof(ABP_ProjectileBullet_ArmquistMachineGun_C) == 0x000700, "Wrong size on ABP_ProjectileBullet_ArmquistMachineGun_C");
static_assert(offsetof(ABP_ProjectileBullet_ArmquistMachineGun_C, UberGraphFrame_BP_ProjectileBullet_ArmquistMachineGun_C) == 0x0006F0, "Member 'ABP_ProjectileBullet_ArmquistMachineGun_C::UberGraphFrame_BP_ProjectileBullet_ArmquistMachineGun_C' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileBullet_ArmquistMachineGun_C, PPFXMuzzleFleshEffect) == 0x0006F8, "Member 'ABP_ProjectileBullet_ArmquistMachineGun_C::PPFXMuzzleFleshEffect' has a wrong offset!");

}

