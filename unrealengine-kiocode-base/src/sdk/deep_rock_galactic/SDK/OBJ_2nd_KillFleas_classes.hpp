#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OBJ_2nd_KillFleas

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C
// 0x0018 (0x01B8 - 0x01A0)
class UOBJ_2nd_KillFleas_C final : public UKillEnemiesObjective
{
public:
	class FText                                   MissionText;                                       // 0x01A0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

public:
	class FText GetObjectiveDescription(float MissionLength);

	class FText GetInMissionText() const;
	int32 GetObjectiveAmount(float MissionLength) const;
	class UTexture2D* GetObjectiveIcon() const;
	struct FObjectiveMissionIcon GetMissionIcon() const;
	class FText GetInMissionCounterText() const;
	class UTexture2D* GetInMissionCounterIcon() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OBJ_2nd_KillFleas_C">();
	}
	static class UOBJ_2nd_KillFleas_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOBJ_2nd_KillFleas_C>();
	}
};
static_assert(alignof(UOBJ_2nd_KillFleas_C) == 0x000008, "Wrong alignment on UOBJ_2nd_KillFleas_C");
static_assert(sizeof(UOBJ_2nd_KillFleas_C) == 0x0001B8, "Wrong size on UOBJ_2nd_KillFleas_C");
static_assert(offsetof(UOBJ_2nd_KillFleas_C, MissionText) == 0x0001A0, "Member 'UOBJ_2nd_KillFleas_C::MissionText' has a wrong offset!");

}
