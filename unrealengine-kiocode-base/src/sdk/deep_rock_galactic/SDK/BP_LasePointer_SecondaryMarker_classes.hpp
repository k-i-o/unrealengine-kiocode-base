#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LasePointer_SecondaryMarker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_LaserPointer_Marker_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C
// 0x0008 (0x02F0 - 0x02E8)
class ABP_LasePointer_SecondaryMarker_C final : public ABP_LaserPointer_Marker_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_LasePointer_SecondaryMarker_C;   // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void UpdateMaterial();
	void ExecuteUbergraph_BP_LasePointer_SecondaryMarker(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LasePointer_SecondaryMarker_C">();
	}
	static class ABP_LasePointer_SecondaryMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LasePointer_SecondaryMarker_C>();
	}
};
static_assert(alignof(ABP_LasePointer_SecondaryMarker_C) == 0x000008, "Wrong alignment on ABP_LasePointer_SecondaryMarker_C");
static_assert(sizeof(ABP_LasePointer_SecondaryMarker_C) == 0x0002F0, "Wrong size on ABP_LasePointer_SecondaryMarker_C");
static_assert(offsetof(ABP_LasePointer_SecondaryMarker_C, UberGraphFrame_BP_LasePointer_SecondaryMarker_C) == 0x0002E8, "Member 'ABP_LasePointer_SecondaryMarker_C::UberGraphFrame_BP_LasePointer_SecondaryMarker_C' has a wrong offset!");

}
