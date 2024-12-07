#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_Tab_Gameplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_Tab_Gameplay.Options_Tab_Gameplay_C
// 0x0108 (0x0368 - 0x0260)
class UOptions_Tab_Gameplay_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Option_C*                        Basic_Option;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        Basic_Option_C_0;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        Basic_Option_CameraShakes;                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        Basic_Option_Photosensitivity;                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AdvancedLabel_C*                    CommunityLabel;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_FOV;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_HeadBOB;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_Language;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_LanguageDebug;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_PreventLatejoinCharacterDuplication;           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_Servername;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_StreamerTag;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_TutorialHiints;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_WeaponSway;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOption_ColorDeficieny_C*               Option_ColorDeficieny;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_CameraShake_C*                 Options_CameraShake;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_FOV_C*                         Options_FOV;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Headbob_C*                     Options_Headbob;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_HoldToBreakImmobilization_C*   Options_HoldToBreakImmobilization;                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_HoldToFire_C*                  Options_HoldToFire;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Language_C*                    Options_Language;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_LocalizationDebug_C*           Options_LocalizationDebug;                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_OverlayIntensity_C*            Options_OverlayIntensity;                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_PhotosensitivityMode_C*        Options_PhotosensitivityMode;                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_PreventLatejoinCharacterDuplication_C* Options_PreventLatejoinCharacterDuplication;       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_ShowSubtitles_C*               Options_ShowSubtitles;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_TutorialHints_C*               Options_TutorialHints;                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_UseStreamerProgram_C*          Options_UseStreamerProgram;                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_WeaponSway_C*                  Options_WeaponSway;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_GameServerName_C*              UI_GameServerName;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             SettingsChanged;                                   // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SettingsChanged__DelegateSignature();
	void ExecuteUbergraph_Options_Tab_Gameplay(int32 EntryPoint);
	void BndEvt__Options_Language_K2Node_ComponentBoundEvent_1_OnLanguageChanged__DelegateSignature(const struct FLocalizedLanguageInfo& Selected_Language);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_Tab_Gameplay_C">();
	}
	static class UOptions_Tab_Gameplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_Tab_Gameplay_C>();
	}
};
static_assert(alignof(UOptions_Tab_Gameplay_C) == 0x000008, "Wrong alignment on UOptions_Tab_Gameplay_C");
static_assert(sizeof(UOptions_Tab_Gameplay_C) == 0x000368, "Wrong size on UOptions_Tab_Gameplay_C");
static_assert(offsetof(UOptions_Tab_Gameplay_C, UberGraphFrame) == 0x000260, "Member 'UOptions_Tab_Gameplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Basic_Option) == 0x000268, "Member 'UOptions_Tab_Gameplay_C::Basic_Option' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Basic_Option_C_0) == 0x000270, "Member 'UOptions_Tab_Gameplay_C::Basic_Option_C_0' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Basic_Option_CameraShakes) == 0x000278, "Member 'UOptions_Tab_Gameplay_C::Basic_Option_CameraShakes' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Basic_Option_Photosensitivity) == 0x000280, "Member 'UOptions_Tab_Gameplay_C::Basic_Option_Photosensitivity' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, CommunityLabel) == 0x000288, "Member 'UOptions_Tab_Gameplay_C::CommunityLabel' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, OPT_FOV) == 0x000290, "Member 'UOptions_Tab_Gameplay_C::OPT_FOV' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, OPT_HeadBOB) == 0x000298, "Member 'UOptions_Tab_Gameplay_C::OPT_HeadBOB' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, OPT_Language) == 0x0002A0, "Member 'UOptions_Tab_Gameplay_C::OPT_Language' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, OPT_LanguageDebug) == 0x0002A8, "Member 'UOptions_Tab_Gameplay_C::OPT_LanguageDebug' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, OPT_PreventLatejoinCharacterDuplication) == 0x0002B0, "Member 'UOptions_Tab_Gameplay_C::OPT_PreventLatejoinCharacterDuplication' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, OPT_Servername) == 0x0002B8, "Member 'UOptions_Tab_Gameplay_C::OPT_Servername' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, OPT_StreamerTag) == 0x0002C0, "Member 'UOptions_Tab_Gameplay_C::OPT_StreamerTag' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, OPT_TutorialHiints) == 0x0002C8, "Member 'UOptions_Tab_Gameplay_C::OPT_TutorialHiints' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, OPT_WeaponSway) == 0x0002D0, "Member 'UOptions_Tab_Gameplay_C::OPT_WeaponSway' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Option_ColorDeficieny) == 0x0002D8, "Member 'UOptions_Tab_Gameplay_C::Option_ColorDeficieny' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_CameraShake) == 0x0002E0, "Member 'UOptions_Tab_Gameplay_C::Options_CameraShake' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_FOV) == 0x0002E8, "Member 'UOptions_Tab_Gameplay_C::Options_FOV' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_Headbob) == 0x0002F0, "Member 'UOptions_Tab_Gameplay_C::Options_Headbob' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_HoldToBreakImmobilization) == 0x0002F8, "Member 'UOptions_Tab_Gameplay_C::Options_HoldToBreakImmobilization' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_HoldToFire) == 0x000300, "Member 'UOptions_Tab_Gameplay_C::Options_HoldToFire' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_Language) == 0x000308, "Member 'UOptions_Tab_Gameplay_C::Options_Language' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_LocalizationDebug) == 0x000310, "Member 'UOptions_Tab_Gameplay_C::Options_LocalizationDebug' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_OverlayIntensity) == 0x000318, "Member 'UOptions_Tab_Gameplay_C::Options_OverlayIntensity' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_PhotosensitivityMode) == 0x000320, "Member 'UOptions_Tab_Gameplay_C::Options_PhotosensitivityMode' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_PreventLatejoinCharacterDuplication) == 0x000328, "Member 'UOptions_Tab_Gameplay_C::Options_PreventLatejoinCharacterDuplication' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_ShowSubtitles) == 0x000330, "Member 'UOptions_Tab_Gameplay_C::Options_ShowSubtitles' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_TutorialHints) == 0x000338, "Member 'UOptions_Tab_Gameplay_C::Options_TutorialHints' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_UseStreamerProgram) == 0x000340, "Member 'UOptions_Tab_Gameplay_C::Options_UseStreamerProgram' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, Options_WeaponSway) == 0x000348, "Member 'UOptions_Tab_Gameplay_C::Options_WeaponSway' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, UI_GameServerName) == 0x000350, "Member 'UOptions_Tab_Gameplay_C::UI_GameServerName' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Gameplay_C, SettingsChanged) == 0x000358, "Member 'UOptions_Tab_Gameplay_C::SettingsChanged' has a wrong offset!");

}

