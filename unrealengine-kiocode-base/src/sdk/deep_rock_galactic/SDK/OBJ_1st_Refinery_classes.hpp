#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OBJ_1st_Refinery

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass OBJ_1st_Refinery.OBJ_1st_Refinery_C
// 0x0008 (0x0218 - 0x0210)
class UOBJ_1st_Refinery_C final : public URefineryObjective
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_OBJ_1st_Refinery(int32 EntryPoint);
	void OnRefineryStateChangedBP(ERefineryState InRefineryState);
	void ReceiveRefinerySpawned(class AFSDRefinery* InRefinery);
	class FText GetObjectiveDescription(float MissionLength);

	class UTexture2D* GetObjectiveIcon() const;
	class FText GetInMissionText() const;
	int32 GetObjectiveAmount(float MissionLength) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OBJ_1st_Refinery_C">();
	}
	static class UOBJ_1st_Refinery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOBJ_1st_Refinery_C>();
	}
};
static_assert(alignof(UOBJ_1st_Refinery_C) == 0x000008, "Wrong alignment on UOBJ_1st_Refinery_C");
static_assert(sizeof(UOBJ_1st_Refinery_C) == 0x000218, "Wrong size on UOBJ_1st_Refinery_C");
static_assert(offsetof(UOBJ_1st_Refinery_C, UberGraphFrame) == 0x000210, "Member 'UOBJ_1st_Refinery_C::UberGraphFrame' has a wrong offset!");

}
