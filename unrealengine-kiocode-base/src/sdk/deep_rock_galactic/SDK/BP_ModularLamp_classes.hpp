#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModularLamp

#include "Basic.hpp"

#include "ENUM_ModularLamps_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ModularLamp.BP_ModularLamp_C
// 0x0050 (0x0270 - 0x0220)
class ABP_ModularLamp_C final : public AActor
{
public:
	class UPointLightComponent*                   Light;                                             // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ENUM_ModularLamps                             MeshSelection;                                     // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_353D[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           LightColor;                                        // 0x023C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightIntensity;                                    // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightAttenuation;                                  // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightFalloffExponent;                              // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LightOffset;                                       // 0x0258(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaterialModifier;                                  // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynLightMaterial;                                  // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void SetLightColor(const struct FLinearColor& Param_LightColor);
	const struct FSTRUCT_Lamp GetMeshStructByEnum(ENUM_ModularLamps Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ModularLamp_C">();
	}
	static class ABP_ModularLamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ModularLamp_C>();
	}
};
static_assert(alignof(ABP_ModularLamp_C) == 0x000008, "Wrong alignment on ABP_ModularLamp_C");
static_assert(sizeof(ABP_ModularLamp_C) == 0x000270, "Wrong size on ABP_ModularLamp_C");
static_assert(offsetof(ABP_ModularLamp_C, Light) == 0x000220, "Member 'ABP_ModularLamp_C::Light' has a wrong offset!");
static_assert(offsetof(ABP_ModularLamp_C, Mesh) == 0x000228, "Member 'ABP_ModularLamp_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_ModularLamp_C, Scene) == 0x000230, "Member 'ABP_ModularLamp_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_ModularLamp_C, MeshSelection) == 0x000238, "Member 'ABP_ModularLamp_C::MeshSelection' has a wrong offset!");
static_assert(offsetof(ABP_ModularLamp_C, LightColor) == 0x00023C, "Member 'ABP_ModularLamp_C::LightColor' has a wrong offset!");
static_assert(offsetof(ABP_ModularLamp_C, LightIntensity) == 0x00024C, "Member 'ABP_ModularLamp_C::LightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_ModularLamp_C, LightAttenuation) == 0x000250, "Member 'ABP_ModularLamp_C::LightAttenuation' has a wrong offset!");
static_assert(offsetof(ABP_ModularLamp_C, LightFalloffExponent) == 0x000254, "Member 'ABP_ModularLamp_C::LightFalloffExponent' has a wrong offset!");
static_assert(offsetof(ABP_ModularLamp_C, LightOffset) == 0x000258, "Member 'ABP_ModularLamp_C::LightOffset' has a wrong offset!");
static_assert(offsetof(ABP_ModularLamp_C, MaterialModifier) == 0x000264, "Member 'ABP_ModularLamp_C::MaterialModifier' has a wrong offset!");
static_assert(offsetof(ABP_ModularLamp_C, DynLightMaterial) == 0x000268, "Member 'ABP_ModularLamp_C::DynLightMaterial' has a wrong offset!");

}

