#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChangeCharacterConsole

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChangeCharacterConsole.BP_ChangeCharacterConsole_C
// 0x0070 (0x0290 - 0x0220)
class ABP_ChangeCharacterConsole_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Greepling_005;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Greepling_006;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Greepling_008;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Greepling_007;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Greepling_003;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Greepling_004;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget;                                            // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstantUsable*                         InstantUsable;                                     // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;                               // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool* Param_IsNewPlayer);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void ExecuteUbergraph_BP_ChangeCharacterConsole(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChangeCharacterConsole_C">();
	}
	static class ABP_ChangeCharacterConsole_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ChangeCharacterConsole_C>();
	}
};
static_assert(alignof(ABP_ChangeCharacterConsole_C) == 0x000008, "Wrong alignment on ABP_ChangeCharacterConsole_C");
static_assert(sizeof(ABP_ChangeCharacterConsole_C) == 0x000290, "Wrong size on ABP_ChangeCharacterConsole_C");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, UberGraphFrame) == 0x000220, "Member 'ABP_ChangeCharacterConsole_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, SM_Greepling_005) == 0x000228, "Member 'ABP_ChangeCharacterConsole_C::SM_Greepling_005' has a wrong offset!");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, SM_Greepling_006) == 0x000230, "Member 'ABP_ChangeCharacterConsole_C::SM_Greepling_006' has a wrong offset!");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, SM_Greepling_008) == 0x000238, "Member 'ABP_ChangeCharacterConsole_C::SM_Greepling_008' has a wrong offset!");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, SM_Greepling_007) == 0x000240, "Member 'ABP_ChangeCharacterConsole_C::SM_Greepling_007' has a wrong offset!");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, SM_Greepling_003) == 0x000248, "Member 'ABP_ChangeCharacterConsole_C::SM_Greepling_003' has a wrong offset!");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, SM_Greepling_004) == 0x000250, "Member 'ABP_ChangeCharacterConsole_C::SM_Greepling_004' has a wrong offset!");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, Widget) == 0x000258, "Member 'ABP_ChangeCharacterConsole_C::Widget' has a wrong offset!");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, TextRender) == 0x000260, "Member 'ABP_ChangeCharacterConsole_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, Box) == 0x000268, "Member 'ABP_ChangeCharacterConsole_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, InstantUsable) == 0x000270, "Member 'ABP_ChangeCharacterConsole_C::InstantUsable' has a wrong offset!");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, DefaultSceneRoot) == 0x000278, "Member 'ABP_ChangeCharacterConsole_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ChangeCharacterConsole_C, PlayersThatHaveUsed) == 0x000280, "Member 'ABP_ChangeCharacterConsole_C::PlayersThatHaveUsed' has a wrong offset!");

}

