#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Console_MissionStatistics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Console_MissionStatistics.Console_MissionStatistics_C
// 0x0028 (0x0288 - 0x0260)
class UConsole_MissionStatistics_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           AvailablePerkPoints;                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleScreen_Notification_C*          ConsoleScreen_Notification;                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MissionStats_View_C*                UI_MissionStats_View;                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PlayerController_SpaceRig_C*        Player;                                            // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void StartClaimable();
	void StopClaimable();
	void Update();
	void OnCountChanged_Event(class UObject* WorldContext, class UMissionStat* MissionStat, float Value);
	void OnMilestoneClaimed_Event(class UMilestoneAsset* Milestone, int32 ClaimedTier);
	void ExecuteUbergraph_Console_MissionStatistics(int32 EntryPoint);
	void HasClaimablePerkPoints(bool* Claimable);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Console_MissionStatistics_C">();
	}
	static class UConsole_MissionStatistics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsole_MissionStatistics_C>();
	}
};
static_assert(alignof(UConsole_MissionStatistics_C) == 0x000008, "Wrong alignment on UConsole_MissionStatistics_C");
static_assert(sizeof(UConsole_MissionStatistics_C) == 0x000288, "Wrong size on UConsole_MissionStatistics_C");
static_assert(offsetof(UConsole_MissionStatistics_C, UberGraphFrame) == 0x000260, "Member 'UConsole_MissionStatistics_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConsole_MissionStatistics_C, AvailablePerkPoints) == 0x000268, "Member 'UConsole_MissionStatistics_C::AvailablePerkPoints' has a wrong offset!");
static_assert(offsetof(UConsole_MissionStatistics_C, ConsoleScreen_Notification) == 0x000270, "Member 'UConsole_MissionStatistics_C::ConsoleScreen_Notification' has a wrong offset!");
static_assert(offsetof(UConsole_MissionStatistics_C, UI_MissionStats_View) == 0x000278, "Member 'UConsole_MissionStatistics_C::UI_MissionStats_View' has a wrong offset!");
static_assert(offsetof(UConsole_MissionStatistics_C, Player) == 0x000280, "Member 'UConsole_MissionStatistics_C::Player' has a wrong offset!");

}
