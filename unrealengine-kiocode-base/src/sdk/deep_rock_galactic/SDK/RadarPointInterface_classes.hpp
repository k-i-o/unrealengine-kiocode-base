#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RadarPointInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RadarPointInterface.RadarPointInterface_C
// 0x0000 (0x0028 - 0x0028)
class IRadarPointInterface_C final : public IInterface
{
public:
	void InitPoint(class URadarPointComponent* RadarComponent, bool* Success);
	void Get3dPosition(struct FVector* Pos);
	void UpdatePoint(float Alpha, float VerticalDist, bool* Destroy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RadarPointInterface_C">();
	}
	static class IRadarPointInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IRadarPointInterface_C>();
	}
};
static_assert(alignof(IRadarPointInterface_C) == 0x000008, "Wrong alignment on IRadarPointInterface_C");
static_assert(sizeof(IRadarPointInterface_C) == 0x000028, "Wrong size on IRadarPointInterface_C");

}

