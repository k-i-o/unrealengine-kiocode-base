#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CraftingConsole

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CraftingConsole.BP_CraftingConsole_C
// 0x00B0 (0x02D0 - 0x0220)
class ABP_CraftingConsole_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                    SpotLight2;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight4;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight3;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight2;                                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight1;                                       // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight1;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LightCone2;                                        // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LightCone1;                                        // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget;                                            // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget2;                                           // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget1;                                           // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstantUsable*                         InstantUsable;                                     // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_26FA2F8A445C2278C5D1B8901F1A6686; // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_26FA2F8A445C2278C5D1B8901F1A6686; // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F08[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;                               // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void ExecuteUbergraph_BP_CraftingConsole(int32 EntryPoint);
	void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool* Param_IsNewPlayer);
	void Timeline_0__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CraftingConsole_C">();
	}
	static class ABP_CraftingConsole_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CraftingConsole_C>();
	}
};
static_assert(alignof(ABP_CraftingConsole_C) == 0x000008, "Wrong alignment on ABP_CraftingConsole_C");
static_assert(sizeof(ABP_CraftingConsole_C) == 0x0002D0, "Wrong size on ABP_CraftingConsole_C");
static_assert(offsetof(ABP_CraftingConsole_C, UberGraphFrame) == 0x000220, "Member 'ABP_CraftingConsole_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, SpotLight2) == 0x000228, "Member 'ABP_CraftingConsole_C::SpotLight2' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, PointLight4) == 0x000230, "Member 'ABP_CraftingConsole_C::PointLight4' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, PointLight3) == 0x000238, "Member 'ABP_CraftingConsole_C::PointLight3' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, PointLight2) == 0x000240, "Member 'ABP_CraftingConsole_C::PointLight2' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, PointLight1) == 0x000248, "Member 'ABP_CraftingConsole_C::PointLight1' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, SpotLight1) == 0x000250, "Member 'ABP_CraftingConsole_C::SpotLight1' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, LightCone2) == 0x000258, "Member 'ABP_CraftingConsole_C::LightCone2' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, SpotLight) == 0x000260, "Member 'ABP_CraftingConsole_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, LightCone1) == 0x000268, "Member 'ABP_CraftingConsole_C::LightCone1' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, Widget) == 0x000270, "Member 'ABP_CraftingConsole_C::Widget' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, Widget2) == 0x000278, "Member 'ABP_CraftingConsole_C::Widget2' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, Widget1) == 0x000280, "Member 'ABP_CraftingConsole_C::Widget1' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, StaticMesh) == 0x000288, "Member 'ABP_CraftingConsole_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, TextRender) == 0x000290, "Member 'ABP_CraftingConsole_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, Box) == 0x000298, "Member 'ABP_CraftingConsole_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, InstantUsable) == 0x0002A0, "Member 'ABP_CraftingConsole_C::InstantUsable' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_CraftingConsole_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, Timeline_0_NewTrack_0_26FA2F8A445C2278C5D1B8901F1A6686) == 0x0002B0, "Member 'ABP_CraftingConsole_C::Timeline_0_NewTrack_0_26FA2F8A445C2278C5D1B8901F1A6686' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, Timeline_0__Direction_26FA2F8A445C2278C5D1B8901F1A6686) == 0x0002B4, "Member 'ABP_CraftingConsole_C::Timeline_0__Direction_26FA2F8A445C2278C5D1B8901F1A6686' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, Timeline_0) == 0x0002B8, "Member 'ABP_CraftingConsole_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_CraftingConsole_C, PlayersThatHaveUsed) == 0x0002C0, "Member 'ABP_CraftingConsole_C::PlayersThatHaveUsed' has a wrong offset!");

}
