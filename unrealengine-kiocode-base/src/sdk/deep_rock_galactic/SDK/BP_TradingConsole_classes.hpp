#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TradingConsole

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TradingConsole.BP_TradingConsole_C
// 0x0058 (0x0278 - 0x0220)
class ABP_TradingConsole_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box1;                                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget_Second;                                     // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget_Main;                                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstantUsable*                         InstantUsable;                                     // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;                               // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool* Param_IsNewPlayer);
	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
	void ExecuteUbergraph_BP_TradingConsole(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TradingConsole_C">();
	}
	static class ABP_TradingConsole_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TradingConsole_C>();
	}
};
static_assert(alignof(ABP_TradingConsole_C) == 0x000008, "Wrong alignment on ABP_TradingConsole_C");
static_assert(sizeof(ABP_TradingConsole_C) == 0x000278, "Wrong size on ABP_TradingConsole_C");
static_assert(offsetof(ABP_TradingConsole_C, UberGraphFrame) == 0x000220, "Member 'ABP_TradingConsole_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TradingConsole_C, Box1) == 0x000228, "Member 'ABP_TradingConsole_C::Box1' has a wrong offset!");
static_assert(offsetof(ABP_TradingConsole_C, Widget_Second) == 0x000230, "Member 'ABP_TradingConsole_C::Widget_Second' has a wrong offset!");
static_assert(offsetof(ABP_TradingConsole_C, TextRender) == 0x000238, "Member 'ABP_TradingConsole_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_TradingConsole_C, Widget_Main) == 0x000240, "Member 'ABP_TradingConsole_C::Widget_Main' has a wrong offset!");
static_assert(offsetof(ABP_TradingConsole_C, StaticMesh1) == 0x000248, "Member 'ABP_TradingConsole_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_TradingConsole_C, Box) == 0x000250, "Member 'ABP_TradingConsole_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_TradingConsole_C, InstantUsable) == 0x000258, "Member 'ABP_TradingConsole_C::InstantUsable' has a wrong offset!");
static_assert(offsetof(ABP_TradingConsole_C, DefaultSceneRoot) == 0x000260, "Member 'ABP_TradingConsole_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TradingConsole_C, PlayersThatHaveUsed) == 0x000268, "Member 'ABP_TradingConsole_C::PlayersThatHaveUsed' has a wrong offset!");

}
