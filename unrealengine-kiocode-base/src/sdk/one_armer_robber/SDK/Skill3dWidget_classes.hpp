#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill3dWidget

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill3dWidget.Skill3dWidget_C
// 0x0018 (0x0238 - 0x0220)
class ASkill3dWidget_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SM_Prop_GraphicsTablet_03;                         // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill3dWidget_C">();
	}
	static class ASkill3dWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASkill3dWidget_C>();
	}
};
static_assert(alignof(ASkill3dWidget_C) == 0x000008, "Wrong alignment on ASkill3dWidget_C");
static_assert(sizeof(ASkill3dWidget_C) == 0x000238, "Wrong size on ASkill3dWidget_C");
static_assert(offsetof(ASkill3dWidget_C, SM_Prop_GraphicsTablet_03) == 0x000220, "Member 'ASkill3dWidget_C::SM_Prop_GraphicsTablet_03' has a wrong offset!");
static_assert(offsetof(ASkill3dWidget_C, Widget) == 0x000228, "Member 'ASkill3dWidget_C::Widget' has a wrong offset!");
static_assert(offsetof(ASkill3dWidget_C, DefaultSceneRoot) == 0x000230, "Member 'ASkill3dWidget_C::DefaultSceneRoot' has a wrong offset!");

}
