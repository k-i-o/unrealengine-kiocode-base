#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Endscreen_Lamp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Endscreen_Lamp.BP_Endscreen_Lamp_C
// 0x0048 (0x0268 - 0x0220)
class ABP_Endscreen_Lamp_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Static_Mesh;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Survived;                                          // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DA7[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Light_Intensity;                                   // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Light_Attenuation;                                 // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaterialGlow;                                      // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Light_Offset;                                      // 0x0250(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DA8[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Endscreen_Lamp(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void UpdateLights();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Endscreen_Lamp_C">();
	}
	static class ABP_Endscreen_Lamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Endscreen_Lamp_C>();
	}
};
static_assert(alignof(ABP_Endscreen_Lamp_C) == 0x000008, "Wrong alignment on ABP_Endscreen_Lamp_C");
static_assert(sizeof(ABP_Endscreen_Lamp_C) == 0x000268, "Wrong size on ABP_Endscreen_Lamp_C");
static_assert(offsetof(ABP_Endscreen_Lamp_C, UberGraphFrame) == 0x000220, "Member 'ABP_Endscreen_Lamp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Endscreen_Lamp_C, Static_Mesh) == 0x000228, "Member 'ABP_Endscreen_Lamp_C::Static_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_Endscreen_Lamp_C, Scene) == 0x000230, "Member 'ABP_Endscreen_Lamp_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_Endscreen_Lamp_C, PointLight) == 0x000238, "Member 'ABP_Endscreen_Lamp_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_Endscreen_Lamp_C, Survived) == 0x000240, "Member 'ABP_Endscreen_Lamp_C::Survived' has a wrong offset!");
static_assert(offsetof(ABP_Endscreen_Lamp_C, Light_Intensity) == 0x000244, "Member 'ABP_Endscreen_Lamp_C::Light_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_Endscreen_Lamp_C, Light_Attenuation) == 0x000248, "Member 'ABP_Endscreen_Lamp_C::Light_Attenuation' has a wrong offset!");
static_assert(offsetof(ABP_Endscreen_Lamp_C, MaterialGlow) == 0x00024C, "Member 'ABP_Endscreen_Lamp_C::MaterialGlow' has a wrong offset!");
static_assert(offsetof(ABP_Endscreen_Lamp_C, Light_Offset) == 0x000250, "Member 'ABP_Endscreen_Lamp_C::Light_Offset' has a wrong offset!");
static_assert(offsetof(ABP_Endscreen_Lamp_C, DynamicMaterial) == 0x000260, "Member 'ABP_Endscreen_Lamp_C::DynamicMaterial' has a wrong offset!");

}
