#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Community_Console_ClaimReward

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "ENUM_MenuColors_structs.hpp"
#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C
// 0x00E8 (0x0368 - 0x0280)
class UITM_Community_Console_ClaimReward_C final : public UFSDUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LogoAnimation;                                     // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Faction;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SydicateLogoBox;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      SyndicateLogo;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TextBackground;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TextBorder;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      UI_ImageTinted_C_0;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      UI_ImageTinted_C_2;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      UI_ImageTinted_C_3;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      UI_ImageTinted_C_4;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ENUM_MenuColors                               IconColor;                                         // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A3B[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            IconBrush;                                         // 0x02E0(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ITM_Community_Console_ClaimReward(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_Community_Console_ClaimReward_C">();
	}
	static class UITM_Community_Console_ClaimReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_Community_Console_ClaimReward_C>();
	}
};
static_assert(alignof(UITM_Community_Console_ClaimReward_C) == 0x000008, "Wrong alignment on UITM_Community_Console_ClaimReward_C");
static_assert(sizeof(UITM_Community_Console_ClaimReward_C) == 0x000368, "Wrong size on UITM_Community_Console_ClaimReward_C");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, UberGraphFrame) == 0x000280, "Member 'UITM_Community_Console_ClaimReward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, LogoAnimation) == 0x000288, "Member 'UITM_Community_Console_ClaimReward_C::LogoAnimation' has a wrong offset!");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, Image_Faction) == 0x000290, "Member 'UITM_Community_Console_ClaimReward_C::Image_Faction' has a wrong offset!");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, SydicateLogoBox) == 0x000298, "Member 'UITM_Community_Console_ClaimReward_C::SydicateLogoBox' has a wrong offset!");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, SyndicateLogo) == 0x0002A0, "Member 'UITM_Community_Console_ClaimReward_C::SyndicateLogo' has a wrong offset!");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, TextBackground) == 0x0002A8, "Member 'UITM_Community_Console_ClaimReward_C::TextBackground' has a wrong offset!");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, TextBorder) == 0x0002B0, "Member 'UITM_Community_Console_ClaimReward_C::TextBorder' has a wrong offset!");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, UI_ImageTinted_C_0) == 0x0002B8, "Member 'UITM_Community_Console_ClaimReward_C::UI_ImageTinted_C_0' has a wrong offset!");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, UI_ImageTinted_C_2) == 0x0002C0, "Member 'UITM_Community_Console_ClaimReward_C::UI_ImageTinted_C_2' has a wrong offset!");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, UI_ImageTinted_C_3) == 0x0002C8, "Member 'UITM_Community_Console_ClaimReward_C::UI_ImageTinted_C_3' has a wrong offset!");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, UI_ImageTinted_C_4) == 0x0002D0, "Member 'UITM_Community_Console_ClaimReward_C::UI_ImageTinted_C_4' has a wrong offset!");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, IconColor) == 0x0002D8, "Member 'UITM_Community_Console_ClaimReward_C::IconColor' has a wrong offset!");
static_assert(offsetof(UITM_Community_Console_ClaimReward_C, IconBrush) == 0x0002E0, "Member 'UITM_Community_Console_ClaimReward_C::IconBrush' has a wrong offset!");

}
