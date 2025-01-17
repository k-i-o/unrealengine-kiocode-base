#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OverheadWidgetSpawner_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OverheadWidgetSpawner_Base.BP_OverheadWidgetSpawner_Base_C
// 0x0028 (0x0470 - 0x0448)
class ABP_OverheadWidgetSpawner_Base_C : public ABFGEffectActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                   DisplayedText;                                     // 0x0458(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BP_OverheadWidgetSpawner_Base(int32 EntryPoint);
	void OnRetrieveFromPool(bool _bAutomaticallyReactivateComponents);
	void InitText();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OverheadWidgetSpawner_Base_C">();
	}
	static class ABP_OverheadWidgetSpawner_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OverheadWidgetSpawner_Base_C>();
	}
};
static_assert(alignof(ABP_OverheadWidgetSpawner_Base_C) == 0x000008, "Wrong alignment on ABP_OverheadWidgetSpawner_Base_C");
static_assert(sizeof(ABP_OverheadWidgetSpawner_Base_C) == 0x000470, "Wrong size on ABP_OverheadWidgetSpawner_Base_C");
static_assert(offsetof(ABP_OverheadWidgetSpawner_Base_C, UberGraphFrame) == 0x000448, "Member 'ABP_OverheadWidgetSpawner_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_OverheadWidgetSpawner_Base_C, DefaultSceneRoot) == 0x000450, "Member 'ABP_OverheadWidgetSpawner_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_OverheadWidgetSpawner_Base_C, DisplayedText) == 0x000458, "Member 'ABP_OverheadWidgetSpawner_Base_C::DisplayedText' has a wrong offset!");

}

