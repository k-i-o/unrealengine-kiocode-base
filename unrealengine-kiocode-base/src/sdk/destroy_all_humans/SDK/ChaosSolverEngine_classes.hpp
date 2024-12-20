#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosSolverEngine

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (0x0028 - 0x0028)
class UChaosSolver final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolver">();
	}
	static class UChaosSolver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosSolver>();
	}
};
static_assert(alignof(UChaosSolver) == 0x000008, "Wrong alignment on UChaosSolver");
static_assert(sizeof(UChaosSolver) == 0x000028, "Wrong size on UChaosSolver");

// Class ChaosSolverEngine.ChaosSolverActor
// 0x0060 (0x0438 - 0x03D8)
class AChaosSolverActor final : public AActor
{
public:
	float                                         TimeStepMultiplier;                                // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CollisionIterations;                               // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PushOutIterations;                                 // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PushOutPairIterations;                             // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CollisionDataSizeMax;                              // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionDataTimeWindow;                           // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DoCollisionDataSpatialHash;                        // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_200B[0x3];                                     // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CollisionDataSpatialHashRadius;                    // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxCollisionPerCell;                               // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BreakingDataSizeMax;                               // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BreakingDataTimeWindow;                            // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DoBreakingDataSpatialHash;                         // 0x0404(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_200C[0x3];                                     // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BreakingDataSpatialHashRadius;                     // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxBreakingPerCell;                                // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TrailingDataSizeMax;                               // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TrailingDataTimeWindow;                            // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TrailingMinSpeedThreshold;                         // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TrailingMinVolumeThreshold;                        // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasFloor;                                          // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_200D[0x3];                                     // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FloorHeight;                                       // 0x0424(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBillboardComponent*                    SpriteComponent;                                   // 0x0428(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_200E[0x8];                                     // 0x0430(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolverActor">();
	}
	static class AChaosSolverActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AChaosSolverActor>();
	}
};
static_assert(alignof(AChaosSolverActor) == 0x000008, "Wrong alignment on AChaosSolverActor");
static_assert(sizeof(AChaosSolverActor) == 0x000438, "Wrong size on AChaosSolverActor");
static_assert(offsetof(AChaosSolverActor, TimeStepMultiplier) == 0x0003D8, "Member 'AChaosSolverActor::TimeStepMultiplier' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, CollisionIterations) == 0x0003DC, "Member 'AChaosSolverActor::CollisionIterations' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, PushOutIterations) == 0x0003E0, "Member 'AChaosSolverActor::PushOutIterations' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, PushOutPairIterations) == 0x0003E4, "Member 'AChaosSolverActor::PushOutPairIterations' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, CollisionDataSizeMax) == 0x0003E8, "Member 'AChaosSolverActor::CollisionDataSizeMax' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, CollisionDataTimeWindow) == 0x0003EC, "Member 'AChaosSolverActor::CollisionDataTimeWindow' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, DoCollisionDataSpatialHash) == 0x0003F0, "Member 'AChaosSolverActor::DoCollisionDataSpatialHash' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, CollisionDataSpatialHashRadius) == 0x0003F4, "Member 'AChaosSolverActor::CollisionDataSpatialHashRadius' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, MaxCollisionPerCell) == 0x0003F8, "Member 'AChaosSolverActor::MaxCollisionPerCell' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, BreakingDataSizeMax) == 0x0003FC, "Member 'AChaosSolverActor::BreakingDataSizeMax' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, BreakingDataTimeWindow) == 0x000400, "Member 'AChaosSolverActor::BreakingDataTimeWindow' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, DoBreakingDataSpatialHash) == 0x000404, "Member 'AChaosSolverActor::DoBreakingDataSpatialHash' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, BreakingDataSpatialHashRadius) == 0x000408, "Member 'AChaosSolverActor::BreakingDataSpatialHashRadius' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, MaxBreakingPerCell) == 0x00040C, "Member 'AChaosSolverActor::MaxBreakingPerCell' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, TrailingDataSizeMax) == 0x000410, "Member 'AChaosSolverActor::TrailingDataSizeMax' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, TrailingDataTimeWindow) == 0x000414, "Member 'AChaosSolverActor::TrailingDataTimeWindow' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, TrailingMinSpeedThreshold) == 0x000418, "Member 'AChaosSolverActor::TrailingMinSpeedThreshold' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, TrailingMinVolumeThreshold) == 0x00041C, "Member 'AChaosSolverActor::TrailingMinVolumeThreshold' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, HasFloor) == 0x000420, "Member 'AChaosSolverActor::HasFloor' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, FloorHeight) == 0x000424, "Member 'AChaosSolverActor::FloorHeight' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, SpriteComponent) == 0x000428, "Member 'AChaosSolverActor::SpriteComponent' has a wrong offset!");

}

