#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OBJ_FindItems_Base

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass OBJ_FindItems_Base.OBJ_FindItems_Base_C
// 0x0018 (0x01B0 - 0x0198)
class UOBJ_FindItems_Base_C : public UGatheItemsObjective
{
public:
	class FText                                   ObjectiveDescription;                              // 0x0198(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	class FText GetObjectiveDescription(float MissionLength);

	class FText GetInMissionText() const;
	int32 GetObjectiveAmount(float MissionLength) const;
	class UTexture2D* GetObjectiveIcon() const;
	class FText GetInMissionCounterText() const;
	class UTexture2D* GetInMissionCounterIcon() const;
	bool IsObjectiveResource(class UResourceData* InResource) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OBJ_FindItems_Base_C">();
	}
	static class UOBJ_FindItems_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOBJ_FindItems_Base_C>();
	}
};
static_assert(alignof(UOBJ_FindItems_Base_C) == 0x000008, "Wrong alignment on UOBJ_FindItems_Base_C");
static_assert(sizeof(UOBJ_FindItems_Base_C) == 0x0001B0, "Wrong size on UOBJ_FindItems_Base_C");
static_assert(offsetof(UOBJ_FindItems_Base_C, ObjectiveDescription) == 0x000198, "Member 'UOBJ_FindItems_Base_C::ObjectiveDescription' has a wrong offset!");

}
