#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OculusMR

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "OculusHMD_structs.hpp"


namespace SDK
{

// Enum OculusMR.EOculusMR_CompositionMethod
// NumValues: 0x0003
enum class EOculusMR_CompositionMethod : uint8
{
	ExternalComposition                      = 0,
	DirectComposition                        = 1,
	EOculusMR_MAX                            = 2,
};

// Enum OculusMR.EOculusMR_PostProcessEffects
// NumValues: 0x0003
enum class EOculusMR_PostProcessEffects : uint8
{
	PPE_Off                                  = 0,
	PPE_On                                   = 1,
	PPE_MAX                                  = 2,
};

// Enum OculusMR.EOculusMR_ClippingReference
// NumValues: 0x0003
enum class EOculusMR_ClippingReference : uint8
{
	CR_TrackingReference                     = 0,
	CR_Head                                  = 1,
	CR_MAX                                   = 2,
};

// Enum OculusMR.EOculusMR_CameraDeviceEnum
// NumValues: 0x0004
enum class EOculusMR_CameraDeviceEnum : uint8
{
	CD_None                                  = 0,
	CD_WebCamera0                            = 1,
	CD_WebCamera1                            = 2,
	CD_MAX                                   = 3,
};

// ScriptStruct OculusMR.OculusMR_PlaneMeshTriangle
// 0x003C (0x003C - 0x0000)
struct FOculusMR_PlaneMeshTriangle final
{
public:
	struct FVector                                Vertex0;                                           // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV0;                                               // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Vertex1;                                           // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV1;                                               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Vertex2;                                           // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV2;                                               // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOculusMR_PlaneMeshTriangle) == 0x000004, "Wrong alignment on FOculusMR_PlaneMeshTriangle");
static_assert(sizeof(FOculusMR_PlaneMeshTriangle) == 0x00003C, "Wrong size on FOculusMR_PlaneMeshTriangle");
static_assert(offsetof(FOculusMR_PlaneMeshTriangle, Vertex0) == 0x000000, "Member 'FOculusMR_PlaneMeshTriangle::Vertex0' has a wrong offset!");
static_assert(offsetof(FOculusMR_PlaneMeshTriangle, UV0) == 0x00000C, "Member 'FOculusMR_PlaneMeshTriangle::UV0' has a wrong offset!");
static_assert(offsetof(FOculusMR_PlaneMeshTriangle, Vertex1) == 0x000014, "Member 'FOculusMR_PlaneMeshTriangle::Vertex1' has a wrong offset!");
static_assert(offsetof(FOculusMR_PlaneMeshTriangle, UV1) == 0x000020, "Member 'FOculusMR_PlaneMeshTriangle::UV1' has a wrong offset!");
static_assert(offsetof(FOculusMR_PlaneMeshTriangle, Vertex2) == 0x000028, "Member 'FOculusMR_PlaneMeshTriangle::Vertex2' has a wrong offset!");
static_assert(offsetof(FOculusMR_PlaneMeshTriangle, UV2) == 0x000034, "Member 'FOculusMR_PlaneMeshTriangle::UV2' has a wrong offset!");

// ScriptStruct OculusMR.TrackedCamera
// 0x0078 (0x0078 - 0x0000)
struct FTrackedCamera final
{
public:
	int32                                         Index;                                             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_170A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Name;                                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        UpdateTime;                                        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FieldOfView;                                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SizeX;                                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SizeY;                                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETrackedDeviceType                            AttachedTrackedDevice;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_170B[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CalibratedRotation;                                // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                CalibratedOffset;                                  // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               UserRotation;                                      // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                UserOffset;                                        // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RawRotation;                                       // 0x0060(0x000C)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                RawOffset;                                         // 0x006C(0x000C)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTrackedCamera) == 0x000008, "Wrong alignment on FTrackedCamera");
static_assert(sizeof(FTrackedCamera) == 0x000078, "Wrong size on FTrackedCamera");
static_assert(offsetof(FTrackedCamera, Index) == 0x000000, "Member 'FTrackedCamera::Index' has a wrong offset!");
static_assert(offsetof(FTrackedCamera, Name) == 0x000008, "Member 'FTrackedCamera::Name' has a wrong offset!");
static_assert(offsetof(FTrackedCamera, UpdateTime) == 0x000018, "Member 'FTrackedCamera::UpdateTime' has a wrong offset!");
static_assert(offsetof(FTrackedCamera, FieldOfView) == 0x000020, "Member 'FTrackedCamera::FieldOfView' has a wrong offset!");
static_assert(offsetof(FTrackedCamera, SizeX) == 0x000024, "Member 'FTrackedCamera::SizeX' has a wrong offset!");
static_assert(offsetof(FTrackedCamera, SizeY) == 0x000028, "Member 'FTrackedCamera::SizeY' has a wrong offset!");
static_assert(offsetof(FTrackedCamera, AttachedTrackedDevice) == 0x00002C, "Member 'FTrackedCamera::AttachedTrackedDevice' has a wrong offset!");
static_assert(offsetof(FTrackedCamera, CalibratedRotation) == 0x000030, "Member 'FTrackedCamera::CalibratedRotation' has a wrong offset!");
static_assert(offsetof(FTrackedCamera, CalibratedOffset) == 0x00003C, "Member 'FTrackedCamera::CalibratedOffset' has a wrong offset!");
static_assert(offsetof(FTrackedCamera, UserRotation) == 0x000048, "Member 'FTrackedCamera::UserRotation' has a wrong offset!");
static_assert(offsetof(FTrackedCamera, UserOffset) == 0x000054, "Member 'FTrackedCamera::UserOffset' has a wrong offset!");
static_assert(offsetof(FTrackedCamera, RawRotation) == 0x000060, "Member 'FTrackedCamera::RawRotation' has a wrong offset!");
static_assert(offsetof(FTrackedCamera, RawOffset) == 0x00006C, "Member 'FTrackedCamera::RawOffset' has a wrong offset!");

}

