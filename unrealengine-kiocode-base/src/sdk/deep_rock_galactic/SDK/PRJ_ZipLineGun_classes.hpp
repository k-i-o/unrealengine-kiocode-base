#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_ZipLineGun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FSD_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PRJ_ZipLineGun.PRJ_ZipLineGun_C
// 0x00D8 (0x0350 - 0x0278)
class APRJ_ZipLineGun_C : public AZipLineProjectile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UZipLineUsable*                         ZipLineUsable;                                     // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Screw_A;                                           // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   Light_Start;                                       // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_ZipPole_B;                                      // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_ZipPole_Projectile_A;                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USimpleObjectInfoComponent*             SimpleObjectInfo;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle_Endpoint;                                 // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Trail;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   Light_End;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        EndPoint;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        Cable;                                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Start;                                             // 0x02E8(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End;                                               // 0x02F4(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSet;                                             // 0x0300(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F53[0x3];                                     // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Progress;                                          // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LifeTime;                                          // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LineColor;                                         // 0x030C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LineThickness;                                     // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CylLightEnd_DM;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CylLightStart_DM;                                  // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightColorEnd;                                     // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightColorStart;                                   // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetNearestPointOnLine(const struct FVector& WorldPosition, const struct FVector& LineStart, const struct FVector& LineEnd, struct FVector* NearestLinePosition);
	void Finish_Zip_Line();
	void UserConstructionScript();
	void On_Hit();
	void OnShoot(const struct FVector& Origin, const struct FVector& EndLocation);
	void SetCollider();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void All_ConnectWithZipLine(const struct FVector& Location, float VerticalSpeed);
	void BndEvt__PRJ_ZipLineGun_ZipLineUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void ExecuteUbergraph_PRJ_ZipLineGun(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PRJ_ZipLineGun_C">();
	}
	static class APRJ_ZipLineGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APRJ_ZipLineGun_C>();
	}
};
static_assert(alignof(APRJ_ZipLineGun_C) == 0x000008, "Wrong alignment on APRJ_ZipLineGun_C");
static_assert(sizeof(APRJ_ZipLineGun_C) == 0x000350, "Wrong size on APRJ_ZipLineGun_C");
static_assert(offsetof(APRJ_ZipLineGun_C, UberGraphFrame) == 0x000278, "Member 'APRJ_ZipLineGun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, ZipLineUsable) == 0x000280, "Member 'APRJ_ZipLineGun_C::ZipLineUsable' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, Screw_A) == 0x000288, "Member 'APRJ_ZipLineGun_C::Screw_A' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, Light_Start) == 0x000290, "Member 'APRJ_ZipLineGun_C::Light_Start' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, SK_ZipPole_B) == 0x000298, "Member 'APRJ_ZipLineGun_C::SK_ZipPole_B' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, SM_ZipPole_Projectile_A) == 0x0002A0, "Member 'APRJ_ZipLineGun_C::SM_ZipPole_Projectile_A' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, SimpleObjectInfo) == 0x0002A8, "Member 'APRJ_ZipLineGun_C::SimpleObjectInfo' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, Particle_Endpoint) == 0x0002B0, "Member 'APRJ_ZipLineGun_C::Particle_Endpoint' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, Trail) == 0x0002B8, "Member 'APRJ_ZipLineGun_C::Trail' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, Light_End) == 0x0002C0, "Member 'APRJ_ZipLineGun_C::Light_End' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, EndPoint) == 0x0002C8, "Member 'APRJ_ZipLineGun_C::EndPoint' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, Cable) == 0x0002D0, "Member 'APRJ_ZipLineGun_C::Cable' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, Capsule) == 0x0002D8, "Member 'APRJ_ZipLineGun_C::Capsule' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, DefaultSceneRoot) == 0x0002E0, "Member 'APRJ_ZipLineGun_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, Start) == 0x0002E8, "Member 'APRJ_ZipLineGun_C::Start' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, End) == 0x0002F4, "Member 'APRJ_ZipLineGun_C::End' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, IsSet) == 0x000300, "Member 'APRJ_ZipLineGun_C::IsSet' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, Progress) == 0x000304, "Member 'APRJ_ZipLineGun_C::Progress' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, LifeTime) == 0x000308, "Member 'APRJ_ZipLineGun_C::LifeTime' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, LineColor) == 0x00030C, "Member 'APRJ_ZipLineGun_C::LineColor' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, LineThickness) == 0x00031C, "Member 'APRJ_ZipLineGun_C::LineThickness' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, CylLightEnd_DM) == 0x000320, "Member 'APRJ_ZipLineGun_C::CylLightEnd_DM' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, CylLightStart_DM) == 0x000328, "Member 'APRJ_ZipLineGun_C::CylLightStart_DM' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, LightColorEnd) == 0x000330, "Member 'APRJ_ZipLineGun_C::LightColorEnd' has a wrong offset!");
static_assert(offsetof(APRJ_ZipLineGun_C, LightColorStart) == 0x000340, "Member 'APRJ_ZipLineGun_C::LightColorStart' has a wrong offset!");

}
