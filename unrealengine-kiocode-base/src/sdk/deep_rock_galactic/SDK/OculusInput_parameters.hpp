#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OculusInput

#include "Basic.hpp"

#include "OculusInput_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function OculusInput.OculusInputFunctionLibrary.GetBoneName
// 0x0018 (0x0018 - 0x0000)
struct OculusInputFunctionLibrary_GetBoneName final
{
public:
	EBone                                         BoneId;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16FB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OculusInputFunctionLibrary_GetBoneName) == 0x000008, "Wrong alignment on OculusInputFunctionLibrary_GetBoneName");
static_assert(sizeof(OculusInputFunctionLibrary_GetBoneName) == 0x000018, "Wrong size on OculusInputFunctionLibrary_GetBoneName");
static_assert(offsetof(OculusInputFunctionLibrary_GetBoneName, BoneId) == 0x000000, "Member 'OculusInputFunctionLibrary_GetBoneName::BoneId' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetBoneName, ReturnValue) == 0x000008, "Member 'OculusInputFunctionLibrary_GetBoneName::ReturnValue' has a wrong offset!");

// Function OculusInput.OculusInputFunctionLibrary.GetBoneRotation
// 0x0020 (0x0020 - 0x0000)
struct OculusInputFunctionLibrary_GetBoneRotation final
{
public:
	EOculusHandType                               DeviceHand;                                        // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBone                                         BoneId;                                            // 0x0001(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16FC[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ControllerIndex;                                   // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16FD[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(OculusInputFunctionLibrary_GetBoneRotation) == 0x000010, "Wrong alignment on OculusInputFunctionLibrary_GetBoneRotation");
static_assert(sizeof(OculusInputFunctionLibrary_GetBoneRotation) == 0x000020, "Wrong size on OculusInputFunctionLibrary_GetBoneRotation");
static_assert(offsetof(OculusInputFunctionLibrary_GetBoneRotation, DeviceHand) == 0x000000, "Member 'OculusInputFunctionLibrary_GetBoneRotation::DeviceHand' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetBoneRotation, BoneId) == 0x000001, "Member 'OculusInputFunctionLibrary_GetBoneRotation::BoneId' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetBoneRotation, ControllerIndex) == 0x000004, "Member 'OculusInputFunctionLibrary_GetBoneRotation::ControllerIndex' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetBoneRotation, ReturnValue) == 0x000010, "Member 'OculusInputFunctionLibrary_GetBoneRotation::ReturnValue' has a wrong offset!");

// Function OculusInput.OculusInputFunctionLibrary.GetDominantHand
// 0x0008 (0x0008 - 0x0000)
struct OculusInputFunctionLibrary_GetDominantHand final
{
public:
	int32                                         ControllerIndex;                                   // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOculusHandType                               ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16FE[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(OculusInputFunctionLibrary_GetDominantHand) == 0x000004, "Wrong alignment on OculusInputFunctionLibrary_GetDominantHand");
static_assert(sizeof(OculusInputFunctionLibrary_GetDominantHand) == 0x000008, "Wrong size on OculusInputFunctionLibrary_GetDominantHand");
static_assert(offsetof(OculusInputFunctionLibrary_GetDominantHand, ControllerIndex) == 0x000000, "Member 'OculusInputFunctionLibrary_GetDominantHand::ControllerIndex' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetDominantHand, ReturnValue) == 0x000004, "Member 'OculusInputFunctionLibrary_GetDominantHand::ReturnValue' has a wrong offset!");

// Function OculusInput.OculusInputFunctionLibrary.GetHandScale
// 0x000C (0x000C - 0x0000)
struct OculusInputFunctionLibrary_GetHandScale final
{
public:
	EOculusHandType                               DeviceHand;                                        // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16FF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ControllerIndex;                                   // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OculusInputFunctionLibrary_GetHandScale) == 0x000004, "Wrong alignment on OculusInputFunctionLibrary_GetHandScale");
static_assert(sizeof(OculusInputFunctionLibrary_GetHandScale) == 0x00000C, "Wrong size on OculusInputFunctionLibrary_GetHandScale");
static_assert(offsetof(OculusInputFunctionLibrary_GetHandScale, DeviceHand) == 0x000000, "Member 'OculusInputFunctionLibrary_GetHandScale::DeviceHand' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetHandScale, ControllerIndex) == 0x000004, "Member 'OculusInputFunctionLibrary_GetHandScale::ControllerIndex' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetHandScale, ReturnValue) == 0x000008, "Member 'OculusInputFunctionLibrary_GetHandScale::ReturnValue' has a wrong offset!");

// Function OculusInput.OculusInputFunctionLibrary.GetHandSkeletalMesh
// 0x0018 (0x0018 - 0x0000)
struct OculusInputFunctionLibrary_GetHandSkeletalMesh final
{
public:
	class USkeletalMesh*                          HandSkeletalMesh;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOculusHandType                               SkeletonType;                                      // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOculusHandType                               MeshType;                                          // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1700[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WorldToMeters;                                     // 0x000C(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1701[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(OculusInputFunctionLibrary_GetHandSkeletalMesh) == 0x000008, "Wrong alignment on OculusInputFunctionLibrary_GetHandSkeletalMesh");
static_assert(sizeof(OculusInputFunctionLibrary_GetHandSkeletalMesh) == 0x000018, "Wrong size on OculusInputFunctionLibrary_GetHandSkeletalMesh");
static_assert(offsetof(OculusInputFunctionLibrary_GetHandSkeletalMesh, HandSkeletalMesh) == 0x000000, "Member 'OculusInputFunctionLibrary_GetHandSkeletalMesh::HandSkeletalMesh' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetHandSkeletalMesh, SkeletonType) == 0x000008, "Member 'OculusInputFunctionLibrary_GetHandSkeletalMesh::SkeletonType' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetHandSkeletalMesh, MeshType) == 0x000009, "Member 'OculusInputFunctionLibrary_GetHandSkeletalMesh::MeshType' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetHandSkeletalMesh, WorldToMeters) == 0x00000C, "Member 'OculusInputFunctionLibrary_GetHandSkeletalMesh::WorldToMeters' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetHandSkeletalMesh, ReturnValue) == 0x000010, "Member 'OculusInputFunctionLibrary_GetHandSkeletalMesh::ReturnValue' has a wrong offset!");

// Function OculusInput.OculusInputFunctionLibrary.GetPointerPose
// 0x0040 (0x0040 - 0x0000)
struct OculusInputFunctionLibrary_GetPointerPose final
{
public:
	EOculusHandType                               DeviceHand;                                        // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1702[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ControllerIndex;                                   // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1703[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ReturnValue;                                       // 0x0010(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(OculusInputFunctionLibrary_GetPointerPose) == 0x000010, "Wrong alignment on OculusInputFunctionLibrary_GetPointerPose");
static_assert(sizeof(OculusInputFunctionLibrary_GetPointerPose) == 0x000040, "Wrong size on OculusInputFunctionLibrary_GetPointerPose");
static_assert(offsetof(OculusInputFunctionLibrary_GetPointerPose, DeviceHand) == 0x000000, "Member 'OculusInputFunctionLibrary_GetPointerPose::DeviceHand' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetPointerPose, ControllerIndex) == 0x000004, "Member 'OculusInputFunctionLibrary_GetPointerPose::ControllerIndex' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetPointerPose, ReturnValue) == 0x000010, "Member 'OculusInputFunctionLibrary_GetPointerPose::ReturnValue' has a wrong offset!");

// Function OculusInput.OculusInputFunctionLibrary.GetTrackingConfidence
// 0x000C (0x000C - 0x0000)
struct OculusInputFunctionLibrary_GetTrackingConfidence final
{
public:
	EOculusHandType                               DeviceHand;                                        // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1704[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ControllerIndex;                                   // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETrackingConfidence                           ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1705[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(OculusInputFunctionLibrary_GetTrackingConfidence) == 0x000004, "Wrong alignment on OculusInputFunctionLibrary_GetTrackingConfidence");
static_assert(sizeof(OculusInputFunctionLibrary_GetTrackingConfidence) == 0x00000C, "Wrong size on OculusInputFunctionLibrary_GetTrackingConfidence");
static_assert(offsetof(OculusInputFunctionLibrary_GetTrackingConfidence, DeviceHand) == 0x000000, "Member 'OculusInputFunctionLibrary_GetTrackingConfidence::DeviceHand' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetTrackingConfidence, ControllerIndex) == 0x000004, "Member 'OculusInputFunctionLibrary_GetTrackingConfidence::ControllerIndex' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_GetTrackingConfidence, ReturnValue) == 0x000008, "Member 'OculusInputFunctionLibrary_GetTrackingConfidence::ReturnValue' has a wrong offset!");

// Function OculusInput.OculusInputFunctionLibrary.InitializeHandPhysics
// 0x0028 (0x0028 - 0x0000)
struct OculusInputFunctionLibrary_InitializeHandPhysics final
{
public:
	EOculusHandType                               SkeletonType;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1706[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkinnedMeshComponent*                  HandComponent;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WorldToMeters;                                     // 0x0010(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1707[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOculusCapsuleCollider>         ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(OculusInputFunctionLibrary_InitializeHandPhysics) == 0x000008, "Wrong alignment on OculusInputFunctionLibrary_InitializeHandPhysics");
static_assert(sizeof(OculusInputFunctionLibrary_InitializeHandPhysics) == 0x000028, "Wrong size on OculusInputFunctionLibrary_InitializeHandPhysics");
static_assert(offsetof(OculusInputFunctionLibrary_InitializeHandPhysics, SkeletonType) == 0x000000, "Member 'OculusInputFunctionLibrary_InitializeHandPhysics::SkeletonType' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_InitializeHandPhysics, HandComponent) == 0x000008, "Member 'OculusInputFunctionLibrary_InitializeHandPhysics::HandComponent' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_InitializeHandPhysics, WorldToMeters) == 0x000010, "Member 'OculusInputFunctionLibrary_InitializeHandPhysics::WorldToMeters' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_InitializeHandPhysics, ReturnValue) == 0x000018, "Member 'OculusInputFunctionLibrary_InitializeHandPhysics::ReturnValue' has a wrong offset!");

// Function OculusInput.OculusInputFunctionLibrary.IsHandTrackingEnabled
// 0x0001 (0x0001 - 0x0000)
struct OculusInputFunctionLibrary_IsHandTrackingEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OculusInputFunctionLibrary_IsHandTrackingEnabled) == 0x000001, "Wrong alignment on OculusInputFunctionLibrary_IsHandTrackingEnabled");
static_assert(sizeof(OculusInputFunctionLibrary_IsHandTrackingEnabled) == 0x000001, "Wrong size on OculusInputFunctionLibrary_IsHandTrackingEnabled");
static_assert(offsetof(OculusInputFunctionLibrary_IsHandTrackingEnabled, ReturnValue) == 0x000000, "Member 'OculusInputFunctionLibrary_IsHandTrackingEnabled::ReturnValue' has a wrong offset!");

// Function OculusInput.OculusInputFunctionLibrary.IsPointerPoseValid
// 0x000C (0x000C - 0x0000)
struct OculusInputFunctionLibrary_IsPointerPoseValid final
{
public:
	EOculusHandType                               DeviceHand;                                        // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1708[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ControllerIndex;                                   // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1709[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(OculusInputFunctionLibrary_IsPointerPoseValid) == 0x000004, "Wrong alignment on OculusInputFunctionLibrary_IsPointerPoseValid");
static_assert(sizeof(OculusInputFunctionLibrary_IsPointerPoseValid) == 0x00000C, "Wrong size on OculusInputFunctionLibrary_IsPointerPoseValid");
static_assert(offsetof(OculusInputFunctionLibrary_IsPointerPoseValid, DeviceHand) == 0x000000, "Member 'OculusInputFunctionLibrary_IsPointerPoseValid::DeviceHand' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_IsPointerPoseValid, ControllerIndex) == 0x000004, "Member 'OculusInputFunctionLibrary_IsPointerPoseValid::ControllerIndex' has a wrong offset!");
static_assert(offsetof(OculusInputFunctionLibrary_IsPointerPoseValid, ReturnValue) == 0x000008, "Member 'OculusInputFunctionLibrary_IsPointerPoseValid::ReturnValue' has a wrong offset!");

}
