#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Geyser_Lava

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Geyser_Lava.BP_Geyser_Lava_C
// 0x0118 (0x0338 - 0x0220)
class ABP_Geyser_Lava_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        BoilingAudio;                                      // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                       Damage;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight1;                                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere1;                                           // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PreviewCube;                                       // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PreviewMesh;                                       // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrainDetectComponent*                TerrainDetect;                                     // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrainDetectComponent*                TerrainDetect3;                                    // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrainDetectComponent*                TerrainDetect2;                                    // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrainDetectComponent*                TerrainDetect1;                                    // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        TerrainDetectors;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExplosionComponent*                    Explosion;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle_Idle;                                     // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle_Erupt;                                    // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULevelGenerationCarverComponent*        LevelGenerationCarver_Geyser;                      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULevelGenerationCarverComponent*        LevelGenerationCarver_Cube;                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrainPlacementComponent*             TerrainPlacement;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USimpleObjectInfoComponent*             SimpleObjectInfo;                                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPathfinderCollisionComponent*          PathfinderCollision;                               // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DamageTriggerComponent_C*           BP_DamageTriggerComponent;                         // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SharedRoot;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_LightIdle_Animation_B5F889F4441C038D5B643AB1334A0B57; // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_LightIdle__Direction_B5F889F4441C038D5B643AB1334A0B57; // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F7F[0x3];                                     // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_LightIdle;                                      // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_LightErupt_Animation_7348656F4781FB277E0ACBB9184D718A; // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_LightErupt__Direction_7348656F4781FB277E0ACBB9184D718A; // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F80[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_LightErupt;                                     // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              _Max;                                              // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              _Max_0;                                            // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TraceDown;                                         // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VolcanoEruptionDanger;                             // 0x032C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          Explode;                                           // 0x032D(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay)
	uint8                                         Pad_4F81[0x2];                                     // 0x032E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LightIntensityErupt;                               // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightIntensityIdle;                                // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnRep_Explode();
	void OnRep_VolcanoEruptionDanger();
	void TL_LightErupt__FinishedFunc();
	void TL_LightErupt__UpdateFunc();
	void TL_LightIdle__FinishedFunc();
	void TL_LightIdle__UpdateFunc();
	void ReceiveBeginPlay();
	void BurnPlayers();
	void PlayDamageSound(const struct FVector& Location);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
	void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
	void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
	void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
	void Boom();
	void LightOn();
	void LightOff();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_Geyser_Lava(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Geyser_Lava_C">();
	}
	static class ABP_Geyser_Lava_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Geyser_Lava_C>();
	}
};
static_assert(alignof(ABP_Geyser_Lava_C) == 0x000008, "Wrong alignment on ABP_Geyser_Lava_C");
static_assert(sizeof(ABP_Geyser_Lava_C) == 0x000338, "Wrong size on ABP_Geyser_Lava_C");
static_assert(offsetof(ABP_Geyser_Lava_C, UberGraphFrame) == 0x000220, "Member 'ABP_Geyser_Lava_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, BoilingAudio) == 0x000228, "Member 'ABP_Geyser_Lava_C::BoilingAudio' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, Damage) == 0x000230, "Member 'ABP_Geyser_Lava_C::Damage' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, Capsule) == 0x000238, "Member 'ABP_Geyser_Lava_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, PointLight1) == 0x000240, "Member 'ABP_Geyser_Lava_C::PointLight1' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, PointLight) == 0x000248, "Member 'ABP_Geyser_Lava_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, StaticMesh2) == 0x000250, "Member 'ABP_Geyser_Lava_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, StaticMesh1) == 0x000258, "Member 'ABP_Geyser_Lava_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, StaticMesh) == 0x000260, "Member 'ABP_Geyser_Lava_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, Sphere1) == 0x000268, "Member 'ABP_Geyser_Lava_C::Sphere1' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, PreviewCube) == 0x000270, "Member 'ABP_Geyser_Lava_C::PreviewCube' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, PreviewMesh) == 0x000278, "Member 'ABP_Geyser_Lava_C::PreviewMesh' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TerrainDetect) == 0x000280, "Member 'ABP_Geyser_Lava_C::TerrainDetect' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TerrainDetect3) == 0x000288, "Member 'ABP_Geyser_Lava_C::TerrainDetect3' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TerrainDetect2) == 0x000290, "Member 'ABP_Geyser_Lava_C::TerrainDetect2' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TerrainDetect1) == 0x000298, "Member 'ABP_Geyser_Lava_C::TerrainDetect1' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TerrainDetectors) == 0x0002A0, "Member 'ABP_Geyser_Lava_C::TerrainDetectors' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, Explosion) == 0x0002A8, "Member 'ABP_Geyser_Lava_C::Explosion' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, Particle_Idle) == 0x0002B0, "Member 'ABP_Geyser_Lava_C::Particle_Idle' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, Particle_Erupt) == 0x0002B8, "Member 'ABP_Geyser_Lava_C::Particle_Erupt' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, LevelGenerationCarver_Geyser) == 0x0002C0, "Member 'ABP_Geyser_Lava_C::LevelGenerationCarver_Geyser' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, LevelGenerationCarver_Cube) == 0x0002C8, "Member 'ABP_Geyser_Lava_C::LevelGenerationCarver_Cube' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TerrainPlacement) == 0x0002D0, "Member 'ABP_Geyser_Lava_C::TerrainPlacement' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, SimpleObjectInfo) == 0x0002D8, "Member 'ABP_Geyser_Lava_C::SimpleObjectInfo' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, PathfinderCollision) == 0x0002E0, "Member 'ABP_Geyser_Lava_C::PathfinderCollision' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, BP_DamageTriggerComponent) == 0x0002E8, "Member 'ABP_Geyser_Lava_C::BP_DamageTriggerComponent' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, SharedRoot) == 0x0002F0, "Member 'ABP_Geyser_Lava_C::SharedRoot' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TL_LightIdle_Animation_B5F889F4441C038D5B643AB1334A0B57) == 0x0002F8, "Member 'ABP_Geyser_Lava_C::TL_LightIdle_Animation_B5F889F4441C038D5B643AB1334A0B57' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TL_LightIdle__Direction_B5F889F4441C038D5B643AB1334A0B57) == 0x0002FC, "Member 'ABP_Geyser_Lava_C::TL_LightIdle__Direction_B5F889F4441C038D5B643AB1334A0B57' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TL_LightIdle) == 0x000300, "Member 'ABP_Geyser_Lava_C::TL_LightIdle' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TL_LightErupt_Animation_7348656F4781FB277E0ACBB9184D718A) == 0x000308, "Member 'ABP_Geyser_Lava_C::TL_LightErupt_Animation_7348656F4781FB277E0ACBB9184D718A' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TL_LightErupt__Direction_7348656F4781FB277E0ACBB9184D718A) == 0x00030C, "Member 'ABP_Geyser_Lava_C::TL_LightErupt__Direction_7348656F4781FB277E0ACBB9184D718A' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TL_LightErupt) == 0x000310, "Member 'ABP_Geyser_Lava_C::TL_LightErupt' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, _Max) == 0x000318, "Member 'ABP_Geyser_Lava_C::_Max' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, _Max_0) == 0x000320, "Member 'ABP_Geyser_Lava_C::_Max_0' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, TraceDown) == 0x000328, "Member 'ABP_Geyser_Lava_C::TraceDown' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, VolcanoEruptionDanger) == 0x00032C, "Member 'ABP_Geyser_Lava_C::VolcanoEruptionDanger' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, Explode) == 0x00032D, "Member 'ABP_Geyser_Lava_C::Explode' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, LightIntensityErupt) == 0x000330, "Member 'ABP_Geyser_Lava_C::LightIntensityErupt' has a wrong offset!");
static_assert(offsetof(ABP_Geyser_Lava_C, LightIntensityIdle) == 0x000334, "Member 'ABP_Geyser_Lava_C::LightIntensityIdle' has a wrong offset!");

}

