#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AsteroidField

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AsteroidField.BP_AsteroidField_C
// 0x00C0 (0x02E0 - 0x0220)
class ABP_AsteroidField_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere_RockRoot;                                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh_PlanetaryRing;                                // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                    Meshes_to_spawn;                                   // 0x0250(0x0010)(Edit, BlueprintVisible)
	int32                                         Number_of_meshes;                                  // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AsteroidScale;                                     // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadiusInner;                                       // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadiusOuter;                                       // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UInstancedStaticMeshComponent*>  Instanced_meshes;                                  // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TSoftObjectPtr<class UHierarchicalInstancedStaticMeshComponent> NewVar_0;                                          // 0x0280(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	float                                         RingNoiseScale;                                    // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RingHeight;                                        // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RingMeshCircumferance;                             // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RingField;                                         // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RingField_Minus_Show_Ring;                         // 0x02B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3558[0x2];                                     // 0x02B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RingOpacity;                                       // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          Random_seed;                                       // 0x02BC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	float                                         RingEmissiveMultiplier;                            // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Asteroid_Material;                                 // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x02D0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AsteroidField(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AsteroidField_C">();
	}
	static class ABP_AsteroidField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AsteroidField_C>();
	}
};
static_assert(alignof(ABP_AsteroidField_C) == 0x000008, "Wrong alignment on ABP_AsteroidField_C");
static_assert(sizeof(ABP_AsteroidField_C) == 0x0002E0, "Wrong size on ABP_AsteroidField_C");
static_assert(offsetof(ABP_AsteroidField_C, UberGraphFrame) == 0x000220, "Member 'ABP_AsteroidField_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, Sphere_RockRoot) == 0x000228, "Member 'ABP_AsteroidField_C::Sphere_RockRoot' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, RotatingMovement) == 0x000230, "Member 'ABP_AsteroidField_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, Billboard) == 0x000238, "Member 'ABP_AsteroidField_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, Mesh_PlanetaryRing) == 0x000240, "Member 'ABP_AsteroidField_C::Mesh_PlanetaryRing' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, Scene) == 0x000248, "Member 'ABP_AsteroidField_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, Meshes_to_spawn) == 0x000250, "Member 'ABP_AsteroidField_C::Meshes_to_spawn' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, Number_of_meshes) == 0x000260, "Member 'ABP_AsteroidField_C::Number_of_meshes' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, AsteroidScale) == 0x000264, "Member 'ABP_AsteroidField_C::AsteroidScale' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, RadiusInner) == 0x000268, "Member 'ABP_AsteroidField_C::RadiusInner' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, RadiusOuter) == 0x00026C, "Member 'ABP_AsteroidField_C::RadiusOuter' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, Instanced_meshes) == 0x000270, "Member 'ABP_AsteroidField_C::Instanced_meshes' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, NewVar_0) == 0x000280, "Member 'ABP_AsteroidField_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, RingNoiseScale) == 0x0002A8, "Member 'ABP_AsteroidField_C::RingNoiseScale' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, RingHeight) == 0x0002AC, "Member 'ABP_AsteroidField_C::RingHeight' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, RingMeshCircumferance) == 0x0002B0, "Member 'ABP_AsteroidField_C::RingMeshCircumferance' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, RingField) == 0x0002B4, "Member 'ABP_AsteroidField_C::RingField' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, RingField_Minus_Show_Ring) == 0x0002B5, "Member 'ABP_AsteroidField_C::RingField_Minus_Show_Ring' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, RingOpacity) == 0x0002B8, "Member 'ABP_AsteroidField_C::RingOpacity' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, Random_seed) == 0x0002BC, "Member 'ABP_AsteroidField_C::Random_seed' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, RingEmissiveMultiplier) == 0x0002C4, "Member 'ABP_AsteroidField_C::RingEmissiveMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, Asteroid_Material) == 0x0002C8, "Member 'ABP_AsteroidField_C::Asteroid_Material' has a wrong offset!");
static_assert(offsetof(ABP_AsteroidField_C, Rotation) == 0x0002D0, "Member 'ABP_AsteroidField_C::Rotation' has a wrong offset!");

}

