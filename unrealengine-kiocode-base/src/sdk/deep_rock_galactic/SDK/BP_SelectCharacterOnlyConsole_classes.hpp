#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SelectCharacterOnlyConsole

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SelectCharacterOnlyConsole.BP_SelectCharacterOnlyConsole_C
// 0x0070 (0x0290 - 0x0220)
class ABP_SelectCharacterOnlyConsole_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight4;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight3;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight2;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight1;                                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget;                                            // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh_CPU;                                          // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh_Keyboard;                                     // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh_Monitor;                                      // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstantUsable*                         InstantUsable;                                     // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void ExecuteUbergraph_BP_SelectCharacterOnlyConsole(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SelectCharacterOnlyConsole_C">();
	}
	static class ABP_SelectCharacterOnlyConsole_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SelectCharacterOnlyConsole_C>();
	}
};
static_assert(alignof(ABP_SelectCharacterOnlyConsole_C) == 0x000008, "Wrong alignment on ABP_SelectCharacterOnlyConsole_C");
static_assert(sizeof(ABP_SelectCharacterOnlyConsole_C) == 0x000290, "Wrong size on ABP_SelectCharacterOnlyConsole_C");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, UberGraphFrame) == 0x000220, "Member 'ABP_SelectCharacterOnlyConsole_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, PointLight4) == 0x000228, "Member 'ABP_SelectCharacterOnlyConsole_C::PointLight4' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, PointLight3) == 0x000230, "Member 'ABP_SelectCharacterOnlyConsole_C::PointLight3' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, PointLight2) == 0x000238, "Member 'ABP_SelectCharacterOnlyConsole_C::PointLight2' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, PointLight1) == 0x000240, "Member 'ABP_SelectCharacterOnlyConsole_C::PointLight1' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, PointLight) == 0x000248, "Member 'ABP_SelectCharacterOnlyConsole_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, TextRender) == 0x000250, "Member 'ABP_SelectCharacterOnlyConsole_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, Box) == 0x000258, "Member 'ABP_SelectCharacterOnlyConsole_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, Widget) == 0x000260, "Member 'ABP_SelectCharacterOnlyConsole_C::Widget' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, Mesh_CPU) == 0x000268, "Member 'ABP_SelectCharacterOnlyConsole_C::Mesh_CPU' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, Mesh_Keyboard) == 0x000270, "Member 'ABP_SelectCharacterOnlyConsole_C::Mesh_Keyboard' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, Mesh_Monitor) == 0x000278, "Member 'ABP_SelectCharacterOnlyConsole_C::Mesh_Monitor' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, InstantUsable) == 0x000280, "Member 'ABP_SelectCharacterOnlyConsole_C::InstantUsable' has a wrong offset!");
static_assert(offsetof(ABP_SelectCharacterOnlyConsole_C, DefaultSceneRoot) == 0x000288, "Member 'ABP_SelectCharacterOnlyConsole_C::DefaultSceneRoot' has a wrong offset!");

}
