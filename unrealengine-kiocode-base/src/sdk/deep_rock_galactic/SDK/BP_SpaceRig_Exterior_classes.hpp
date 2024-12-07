#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpaceRig_Exterior

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpaceRig_Exterior.BP_SpaceRig_Exterior_C
// 0x00B0 (0x02D0 - 0x0220)
class ABP_SpaceRig_Exterior_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Launch_Blink_Light1;                               // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Launch_Blink_Light7;                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Launch_Blink_Light6;                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Launch_Blink_Light5;                               // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Launch_Blink_Light4;                               // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Launch_Blink_Light3;                               // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Launch_Blink_Light2;                               // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Launch_Blink_Light_Parent;                         // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_SpaceRig_Exterior_Smoke_Vent;                    // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    Area_spotlight2;                                   // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    Area_spotlight1;                                   // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    Area_spotlight;                                    // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight3;                                        // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight2;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight1;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_SpaceRig_Exterior_Smoke1;                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_SpaceRig_Exterior_Smaller_Smoke;                 // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_SpaceRig_Exterior_Smoke_Chimney;                 // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_ConeMesh;                                       // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_SpaceRig_ext;                                   // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpaceRig_Exterior_C">();
	}
	static class ABP_SpaceRig_Exterior_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpaceRig_Exterior_C>();
	}
};
static_assert(alignof(ABP_SpaceRig_Exterior_C) == 0x000008, "Wrong alignment on ABP_SpaceRig_Exterior_C");
static_assert(sizeof(ABP_SpaceRig_Exterior_C) == 0x0002D0, "Wrong size on ABP_SpaceRig_Exterior_C");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, Launch_Blink_Light1) == 0x000220, "Member 'ABP_SpaceRig_Exterior_C::Launch_Blink_Light1' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, Launch_Blink_Light7) == 0x000228, "Member 'ABP_SpaceRig_Exterior_C::Launch_Blink_Light7' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, Launch_Blink_Light6) == 0x000230, "Member 'ABP_SpaceRig_Exterior_C::Launch_Blink_Light6' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, Launch_Blink_Light5) == 0x000238, "Member 'ABP_SpaceRig_Exterior_C::Launch_Blink_Light5' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, Launch_Blink_Light4) == 0x000240, "Member 'ABP_SpaceRig_Exterior_C::Launch_Blink_Light4' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, Launch_Blink_Light3) == 0x000248, "Member 'ABP_SpaceRig_Exterior_C::Launch_Blink_Light3' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, Launch_Blink_Light2) == 0x000250, "Member 'ABP_SpaceRig_Exterior_C::Launch_Blink_Light2' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, Launch_Blink_Light_Parent) == 0x000258, "Member 'ABP_SpaceRig_Exterior_C::Launch_Blink_Light_Parent' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, P_SpaceRig_Exterior_Smoke_Vent) == 0x000260, "Member 'ABP_SpaceRig_Exterior_C::P_SpaceRig_Exterior_Smoke_Vent' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, SpotLight) == 0x000268, "Member 'ABP_SpaceRig_Exterior_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, Area_spotlight2) == 0x000270, "Member 'ABP_SpaceRig_Exterior_C::Area_spotlight2' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, Area_spotlight1) == 0x000278, "Member 'ABP_SpaceRig_Exterior_C::Area_spotlight1' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, Area_spotlight) == 0x000280, "Member 'ABP_SpaceRig_Exterior_C::Area_spotlight' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, SpotLight3) == 0x000288, "Member 'ABP_SpaceRig_Exterior_C::SpotLight3' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, SpotLight2) == 0x000290, "Member 'ABP_SpaceRig_Exterior_C::SpotLight2' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, SpotLight1) == 0x000298, "Member 'ABP_SpaceRig_Exterior_C::SpotLight1' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, P_SpaceRig_Exterior_Smoke1) == 0x0002A0, "Member 'ABP_SpaceRig_Exterior_C::P_SpaceRig_Exterior_Smoke1' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, P_SpaceRig_Exterior_Smaller_Smoke) == 0x0002A8, "Member 'ABP_SpaceRig_Exterior_C::P_SpaceRig_Exterior_Smaller_Smoke' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, P_SpaceRig_Exterior_Smoke_Chimney) == 0x0002B0, "Member 'ABP_SpaceRig_Exterior_C::P_SpaceRig_Exterior_Smoke_Chimney' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, SM_ConeMesh) == 0x0002B8, "Member 'ABP_SpaceRig_Exterior_C::SM_ConeMesh' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, SM_SpaceRig_ext) == 0x0002C0, "Member 'ABP_SpaceRig_Exterior_C::SM_SpaceRig_ext' has a wrong offset!");
static_assert(offsetof(ABP_SpaceRig_Exterior_C, DefaultSceneRoot) == 0x0002C8, "Member 'ABP_SpaceRig_Exterior_C::DefaultSceneRoot' has a wrong offset!");

}

