#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tool_BatteringRam

#include "Basic.hpp"

#include "PickupItem_base_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tool_BatteringRam.Tool_BatteringRam_C
// 0x0018 (0x0270 - 0x0258)
class ATool_BatteringRam_C final : public APickupItem_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Tool_BatteringRam_C;                // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHighlightInRangeComponent_C*           HighlightInRangeComponent;                         // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAlertComponent_C*                      AlertComponent;                                    // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Tool_BatteringRam(int32 EntryPoint);
	void HitDoor(class AActor* HitObject);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tool_BatteringRam_C">();
	}
	static class ATool_BatteringRam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATool_BatteringRam_C>();
	}
};
static_assert(alignof(ATool_BatteringRam_C) == 0x000008, "Wrong alignment on ATool_BatteringRam_C");
static_assert(sizeof(ATool_BatteringRam_C) == 0x000270, "Wrong size on ATool_BatteringRam_C");
static_assert(offsetof(ATool_BatteringRam_C, UberGraphFrame_Tool_BatteringRam_C) == 0x000258, "Member 'ATool_BatteringRam_C::UberGraphFrame_Tool_BatteringRam_C' has a wrong offset!");
static_assert(offsetof(ATool_BatteringRam_C, HighlightInRangeComponent) == 0x000260, "Member 'ATool_BatteringRam_C::HighlightInRangeComponent' has a wrong offset!");
static_assert(offsetof(ATool_BatteringRam_C, AlertComponent) == 0x000268, "Member 'ATool_BatteringRam_C::AlertComponent' has a wrong offset!");

}
