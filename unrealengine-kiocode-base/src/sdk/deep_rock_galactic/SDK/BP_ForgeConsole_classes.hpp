#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ForgeConsole

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BaseSpaceRigConsole_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ForgeConsole.BP_ForgeConsole_C
// 0x0068 (0x0358 - 0x02F0)
class ABP_ForgeConsole_C final : public ABP_BaseSpaceRigConsole_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ForgeConsole_C;                  // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          CollisionBox5;                                     // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LightCone;                                         // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem_Smoke2;                             // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Forge;                                  // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_Lamp;                                    // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CollisionBox4;                                     // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CollisionBox3;                                     // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CollisionBox2;                                     // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh_Forge;                                // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CollisionBox1;                                     // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Lamp;                                   // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem_Smoke;                              // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void OnWindowCreated(class UWindowWidget* WindowWidget);
	void UpdateNotificationBanner();
	void ExecuteUbergraph_BP_ForgeConsole(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ForgeConsole_C">();
	}
	static class ABP_ForgeConsole_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ForgeConsole_C>();
	}
};
static_assert(alignof(ABP_ForgeConsole_C) == 0x000008, "Wrong alignment on ABP_ForgeConsole_C");
static_assert(sizeof(ABP_ForgeConsole_C) == 0x000358, "Wrong size on ABP_ForgeConsole_C");
static_assert(offsetof(ABP_ForgeConsole_C, UberGraphFrame_BP_ForgeConsole_C) == 0x0002F0, "Member 'ABP_ForgeConsole_C::UberGraphFrame_BP_ForgeConsole_C' has a wrong offset!");
static_assert(offsetof(ABP_ForgeConsole_C, CollisionBox5) == 0x0002F8, "Member 'ABP_ForgeConsole_C::CollisionBox5' has a wrong offset!");
static_assert(offsetof(ABP_ForgeConsole_C, LightCone) == 0x000300, "Member 'ABP_ForgeConsole_C::LightCone' has a wrong offset!");
static_assert(offsetof(ABP_ForgeConsole_C, ParticleSystem_Smoke2) == 0x000308, "Member 'ABP_ForgeConsole_C::ParticleSystem_Smoke2' has a wrong offset!");
static_assert(offsetof(ABP_ForgeConsole_C, PointLight_Forge) == 0x000310, "Member 'ABP_ForgeConsole_C::PointLight_Forge' has a wrong offset!");
static_assert(offsetof(ABP_ForgeConsole_C, SpotLight_Lamp) == 0x000318, "Member 'ABP_ForgeConsole_C::SpotLight_Lamp' has a wrong offset!");
static_assert(offsetof(ABP_ForgeConsole_C, CollisionBox4) == 0x000320, "Member 'ABP_ForgeConsole_C::CollisionBox4' has a wrong offset!");
static_assert(offsetof(ABP_ForgeConsole_C, CollisionBox3) == 0x000328, "Member 'ABP_ForgeConsole_C::CollisionBox3' has a wrong offset!");
static_assert(offsetof(ABP_ForgeConsole_C, CollisionBox2) == 0x000330, "Member 'ABP_ForgeConsole_C::CollisionBox2' has a wrong offset!");
static_assert(offsetof(ABP_ForgeConsole_C, SkeletalMesh_Forge) == 0x000338, "Member 'ABP_ForgeConsole_C::SkeletalMesh_Forge' has a wrong offset!");
static_assert(offsetof(ABP_ForgeConsole_C, CollisionBox1) == 0x000340, "Member 'ABP_ForgeConsole_C::CollisionBox1' has a wrong offset!");
static_assert(offsetof(ABP_ForgeConsole_C, PointLight_Lamp) == 0x000348, "Member 'ABP_ForgeConsole_C::PointLight_Lamp' has a wrong offset!");
static_assert(offsetof(ABP_ForgeConsole_C, ParticleSystem_Smoke) == 0x000350, "Member 'ABP_ForgeConsole_C::ParticleSystem_Smoke' has a wrong offset!");

}
