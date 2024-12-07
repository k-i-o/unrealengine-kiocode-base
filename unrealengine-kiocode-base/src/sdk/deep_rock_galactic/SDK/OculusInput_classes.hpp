#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OculusInput

#include "Basic.hpp"

#include "OculusInput_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class OculusInput.OculusHandComponent
// 0x00A0 (0x08A0 - 0x0800)
class UOculusHandComponent final : public UPoseableMeshComponent
{
public:
	EOculusHandType                               SkeletonType;                                      // 0x0800(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOculusHandType                               MeshType;                                          // 0x0801(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EConfidenceBehavior                           ConfidenceBehavior;                                // 0x0802(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESystemGestureBehavior                        SystemGestureBehavior;                             // 0x0803(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16F8[0x4];                                     // 0x0804(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     SystemGestureMaterial;                             // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInitializePhysics;                                // 0x0810(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUpdateHandScale;                                  // 0x0811(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16F9[0x6];                                     // 0x0812(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     MaterialOverride;                                  // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<EBone, class FName>                      BoneNameMappings;                                  // 0x0820(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FOculusCapsuleCollider>         CollisionCapsules;                                 // 0x0870(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          bSkeletalMeshInitialized;                          // 0x0880(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16FA[0x1F];                                    // 0x0881(0x001F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OculusHandComponent">();
	}
	static class UOculusHandComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOculusHandComponent>();
	}
};
static_assert(alignof(UOculusHandComponent) == 0x000010, "Wrong alignment on UOculusHandComponent");
static_assert(sizeof(UOculusHandComponent) == 0x0008A0, "Wrong size on UOculusHandComponent");
static_assert(offsetof(UOculusHandComponent, SkeletonType) == 0x000800, "Member 'UOculusHandComponent::SkeletonType' has a wrong offset!");
static_assert(offsetof(UOculusHandComponent, MeshType) == 0x000801, "Member 'UOculusHandComponent::MeshType' has a wrong offset!");
static_assert(offsetof(UOculusHandComponent, ConfidenceBehavior) == 0x000802, "Member 'UOculusHandComponent::ConfidenceBehavior' has a wrong offset!");
static_assert(offsetof(UOculusHandComponent, SystemGestureBehavior) == 0x000803, "Member 'UOculusHandComponent::SystemGestureBehavior' has a wrong offset!");
static_assert(offsetof(UOculusHandComponent, SystemGestureMaterial) == 0x000808, "Member 'UOculusHandComponent::SystemGestureMaterial' has a wrong offset!");
static_assert(offsetof(UOculusHandComponent, bInitializePhysics) == 0x000810, "Member 'UOculusHandComponent::bInitializePhysics' has a wrong offset!");
static_assert(offsetof(UOculusHandComponent, bUpdateHandScale) == 0x000811, "Member 'UOculusHandComponent::bUpdateHandScale' has a wrong offset!");
static_assert(offsetof(UOculusHandComponent, MaterialOverride) == 0x000818, "Member 'UOculusHandComponent::MaterialOverride' has a wrong offset!");
static_assert(offsetof(UOculusHandComponent, BoneNameMappings) == 0x000820, "Member 'UOculusHandComponent::BoneNameMappings' has a wrong offset!");
static_assert(offsetof(UOculusHandComponent, CollisionCapsules) == 0x000870, "Member 'UOculusHandComponent::CollisionCapsules' has a wrong offset!");
static_assert(offsetof(UOculusHandComponent, bSkeletalMeshInitialized) == 0x000880, "Member 'UOculusHandComponent::bSkeletalMeshInitialized' has a wrong offset!");

// Class OculusInput.OculusInputFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOculusInputFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class FString GetBoneName(EBone BoneId);
	static struct FQuat GetBoneRotation(const EOculusHandType DeviceHand, const EBone BoneId, const int32 ControllerIndex);
	static EOculusHandType GetDominantHand(const int32 ControllerIndex);
	static float GetHandScale(const EOculusHandType DeviceHand, const int32 ControllerIndex);
	static bool GetHandSkeletalMesh(class USkeletalMesh* HandSkeletalMesh, EOculusHandType SkeletonType, EOculusHandType MeshType, const float WorldToMeters);
	static struct FTransform GetPointerPose(const EOculusHandType DeviceHand, const int32 ControllerIndex);
	static ETrackingConfidence GetTrackingConfidence(const EOculusHandType DeviceHand, const int32 ControllerIndex);
	static TArray<struct FOculusCapsuleCollider> InitializeHandPhysics(EOculusHandType SkeletonType, class USkinnedMeshComponent* HandComponent, const float WorldToMeters);
	static bool IsHandTrackingEnabled();
	static bool IsPointerPoseValid(const EOculusHandType DeviceHand, const int32 ControllerIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OculusInputFunctionLibrary">();
	}
	static class UOculusInputFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOculusInputFunctionLibrary>();
	}
};
static_assert(alignof(UOculusInputFunctionLibrary) == 0x000008, "Wrong alignment on UOculusInputFunctionLibrary");
static_assert(sizeof(UOculusInputFunctionLibrary) == 0x000028, "Wrong size on UOculusInputFunctionLibrary");

}

