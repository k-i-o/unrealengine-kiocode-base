#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FoamPuddle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FoamPuddle.BP_FoamPuddle_C
// 0x0050 (0x03D0 - 0x0380)
class ABP_FoamPuddle_C final : public AFoamPuddle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USimpleObjectInfoComponent*             SimpleObjectInfo;                                  // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerrainDetectComponent*                TerrainDetect;                                     // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_NewTrack_0_FB8CEE454A0146654CCF979239EF7152; // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_FB8CEE454A0146654CCF979239EF7152; // 0x03AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4767[0x3];                                     // 0x03AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_44A611F34AD5A6FAD05E20AB4D1BE0FB; // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_44A611F34AD5A6FAD05E20AB4D1BE0FB; // 0x03BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4768[0x3];                                     // 0x03BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldDestroy;                                     // 0x03C8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void OnRep_ShouldDestory();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void ScaleOutAndDestroy();
	void SetPuddleLifetime(float LifeTime);
	void ExecuteUbergraph_BP_FoamPuddle(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FoamPuddle_C">();
	}
	static class ABP_FoamPuddle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FoamPuddle_C>();
	}
};
static_assert(alignof(ABP_FoamPuddle_C) == 0x000008, "Wrong alignment on ABP_FoamPuddle_C");
static_assert(sizeof(ABP_FoamPuddle_C) == 0x0003D0, "Wrong size on ABP_FoamPuddle_C");
static_assert(offsetof(ABP_FoamPuddle_C, UberGraphFrame) == 0x000380, "Member 'ABP_FoamPuddle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FoamPuddle_C, SimpleObjectInfo) == 0x000388, "Member 'ABP_FoamPuddle_C::SimpleObjectInfo' has a wrong offset!");
static_assert(offsetof(ABP_FoamPuddle_C, Box) == 0x000390, "Member 'ABP_FoamPuddle_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_FoamPuddle_C, Sphere) == 0x000398, "Member 'ABP_FoamPuddle_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_FoamPuddle_C, TerrainDetect) == 0x0003A0, "Member 'ABP_FoamPuddle_C::TerrainDetect' has a wrong offset!");
static_assert(offsetof(ABP_FoamPuddle_C, Timeline_1_NewTrack_0_FB8CEE454A0146654CCF979239EF7152) == 0x0003A8, "Member 'ABP_FoamPuddle_C::Timeline_1_NewTrack_0_FB8CEE454A0146654CCF979239EF7152' has a wrong offset!");
static_assert(offsetof(ABP_FoamPuddle_C, Timeline_1__Direction_FB8CEE454A0146654CCF979239EF7152) == 0x0003AC, "Member 'ABP_FoamPuddle_C::Timeline_1__Direction_FB8CEE454A0146654CCF979239EF7152' has a wrong offset!");
static_assert(offsetof(ABP_FoamPuddle_C, Timeline_1) == 0x0003B0, "Member 'ABP_FoamPuddle_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(ABP_FoamPuddle_C, Timeline_0_NewTrack_0_44A611F34AD5A6FAD05E20AB4D1BE0FB) == 0x0003B8, "Member 'ABP_FoamPuddle_C::Timeline_0_NewTrack_0_44A611F34AD5A6FAD05E20AB4D1BE0FB' has a wrong offset!");
static_assert(offsetof(ABP_FoamPuddle_C, Timeline_0__Direction_44A611F34AD5A6FAD05E20AB4D1BE0FB) == 0x0003BC, "Member 'ABP_FoamPuddle_C::Timeline_0__Direction_44A611F34AD5A6FAD05E20AB4D1BE0FB' has a wrong offset!");
static_assert(offsetof(ABP_FoamPuddle_C, Timeline_0) == 0x0003C0, "Member 'ABP_FoamPuddle_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_FoamPuddle_C, ShouldDestroy) == 0x0003C8, "Member 'ABP_FoamPuddle_C::ShouldDestroy' has a wrong offset!");

}
