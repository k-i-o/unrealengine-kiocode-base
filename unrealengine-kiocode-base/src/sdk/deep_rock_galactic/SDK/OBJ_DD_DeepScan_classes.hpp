#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OBJ_DD_DeepScan

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass OBJ_DD_DeepScan.OBJ_DD_DeepScan_C
// 0x0000 (0x01D8 - 0x01D8)
class UOBJ_DD_DeepScan_C final : public UDeepScanSecondaryObjective
{
public:
	class FText GetObjectiveDescription(float MissionLength);

	class FText GetInMissionCounterText() const;
	class UTexture2D* GetInMissionCounterIcon() const;
	class FText GetInMissionText() const;
	class UTexture2D* GetObjectiveIcon() const;
	int32 GetObjectiveAmount(float MissionLength) const;
	struct FObjectiveMissionIcon GetMissionIcon() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OBJ_DD_DeepScan_C">();
	}
	static class UOBJ_DD_DeepScan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOBJ_DD_DeepScan_C>();
	}
};
static_assert(alignof(UOBJ_DD_DeepScan_C) == 0x000008, "Wrong alignment on UOBJ_DD_DeepScan_C");
static_assert(sizeof(UOBJ_DD_DeepScan_C) == 0x0001D8, "Wrong size on UOBJ_DD_DeepScan_C");

}
