#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LIB_RumbleFunctions

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LIB_RumbleFunctions.LIB_RumbleFunctions_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_RumbleFunctions_C final : public UBlueprintFunctionLibrary
{
public:
	static void FSD_Rumble_At_Location(class UObject* WorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, const struct FVector& Location, const struct FRotator& Rotation, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy, class UObject* __WorldContext);
	static void FSD_Rumble_At_Actor(class AActor* Actor, class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LIB_RumbleFunctions_C">();
	}
	static class ULIB_RumbleFunctions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULIB_RumbleFunctions_C>();
	}
};
static_assert(alignof(ULIB_RumbleFunctions_C) == 0x000008, "Wrong alignment on ULIB_RumbleFunctions_C");
static_assert(sizeof(ULIB_RumbleFunctions_C) == 0x000028, "Wrong size on ULIB_RumbleFunctions_C");

}

