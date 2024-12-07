#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LVL_CharacterSelection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LVL_CharacterSelection.LVL_CharacterSelection_C
// 0x0038 (0x0260 - 0x0228)
class ALVL_CharacterSelection_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULevelSequencePlayer*                   Player;                                            // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterSelectionSwitcher_C*          Switcher;                                          // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCharacterViewInfo>             CharViewerList;                                    // 0x0240(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ACharacterSelectionSwitcher_C*          CharacterSelectionSwitcher_186_ExecuteUbergraph_LVL_CharacterSelection_RefProperty; // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           CameraActor_1_ExecuteUbergraph_LVL_CharacterSelection_RefProperty; // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LVL_CharacterSelection(int32 EntryPoint);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void StartLevelSeq(class ULevelSequence* CharacterLevelSequence);
	void StartPlay(ECharselectionCameraLocation SelectionLocation);
	void StopPlay();
	void StartPlayer(ECharselectionCameraLocation CamSetting);
	void StopPlayer();
	void PlaySpecificSequence(class ULevelSequence* LevelSequence);
	void MakeVanity(bool UseSleves, struct FEquippedVanity* UseSleveless);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LVL_CharacterSelection_C">();
	}
	static class ALVL_CharacterSelection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALVL_CharacterSelection_C>();
	}
};
static_assert(alignof(ALVL_CharacterSelection_C) == 0x000008, "Wrong alignment on ALVL_CharacterSelection_C");
static_assert(sizeof(ALVL_CharacterSelection_C) == 0x000260, "Wrong size on ALVL_CharacterSelection_C");
static_assert(offsetof(ALVL_CharacterSelection_C, UberGraphFrame) == 0x000228, "Member 'ALVL_CharacterSelection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALVL_CharacterSelection_C, Player) == 0x000230, "Member 'ALVL_CharacterSelection_C::Player' has a wrong offset!");
static_assert(offsetof(ALVL_CharacterSelection_C, Switcher) == 0x000238, "Member 'ALVL_CharacterSelection_C::Switcher' has a wrong offset!");
static_assert(offsetof(ALVL_CharacterSelection_C, CharViewerList) == 0x000240, "Member 'ALVL_CharacterSelection_C::CharViewerList' has a wrong offset!");
static_assert(offsetof(ALVL_CharacterSelection_C, CharacterSelectionSwitcher_186_ExecuteUbergraph_LVL_CharacterSelection_RefProperty) == 0x000250, "Member 'ALVL_CharacterSelection_C::CharacterSelectionSwitcher_186_ExecuteUbergraph_LVL_CharacterSelection_RefProperty' has a wrong offset!");
static_assert(offsetof(ALVL_CharacterSelection_C, CameraActor_1_ExecuteUbergraph_LVL_CharacterSelection_RefProperty) == 0x000258, "Member 'ALVL_CharacterSelection_C::CameraActor_1_ExecuteUbergraph_LVL_CharacterSelection_RefProperty' has a wrong offset!");

}

