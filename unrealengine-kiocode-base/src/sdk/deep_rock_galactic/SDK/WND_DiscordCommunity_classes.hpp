#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_DiscordCommunity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WND_DiscordCommunity.WND_DiscordCommunity_C
// 0x0040 (0x02E0 - 0x02A0)
class UWND_DiscordCommunity_C final : public UWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_ButtonScalable_C*                Basic_ButtonScalable;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable_C*                Basic_ButtonScalable_C_0;                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable_C*                Basic_ButtonScalable_C_1;                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMENU_SpaceRigTemplate_C*               MENU_TopBar;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScreen_DiscordScreen_C*                Screen_DiscordScreen;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonTab_C*                     ActiveTab;                                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommunityGoal*                         Goal;                                              // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WND_DiscordCommunity(int32 EntryPoint);
	void BndEvt__Basic_ButtonScalable_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__Basic_ButtonScalable_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnShown();
	void Close_Window();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WND_DiscordCommunity_C">();
	}
	static class UWND_DiscordCommunity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWND_DiscordCommunity_C>();
	}
};
static_assert(alignof(UWND_DiscordCommunity_C) == 0x000008, "Wrong alignment on UWND_DiscordCommunity_C");
static_assert(sizeof(UWND_DiscordCommunity_C) == 0x0002E0, "Wrong size on UWND_DiscordCommunity_C");
static_assert(offsetof(UWND_DiscordCommunity_C, UberGraphFrame) == 0x0002A0, "Member 'UWND_DiscordCommunity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWND_DiscordCommunity_C, Basic_ButtonScalable) == 0x0002A8, "Member 'UWND_DiscordCommunity_C::Basic_ButtonScalable' has a wrong offset!");
static_assert(offsetof(UWND_DiscordCommunity_C, Basic_ButtonScalable_C_0) == 0x0002B0, "Member 'UWND_DiscordCommunity_C::Basic_ButtonScalable_C_0' has a wrong offset!");
static_assert(offsetof(UWND_DiscordCommunity_C, Basic_ButtonScalable_C_1) == 0x0002B8, "Member 'UWND_DiscordCommunity_C::Basic_ButtonScalable_C_1' has a wrong offset!");
static_assert(offsetof(UWND_DiscordCommunity_C, MENU_TopBar) == 0x0002C0, "Member 'UWND_DiscordCommunity_C::MENU_TopBar' has a wrong offset!");
static_assert(offsetof(UWND_DiscordCommunity_C, Screen_DiscordScreen) == 0x0002C8, "Member 'UWND_DiscordCommunity_C::Screen_DiscordScreen' has a wrong offset!");
static_assert(offsetof(UWND_DiscordCommunity_C, ActiveTab) == 0x0002D0, "Member 'UWND_DiscordCommunity_C::ActiveTab' has a wrong offset!");
static_assert(offsetof(UWND_DiscordCommunity_C, Goal) == 0x0002D8, "Member 'UWND_DiscordCommunity_C::Goal' has a wrong offset!");

}
