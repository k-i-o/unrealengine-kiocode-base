#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_Tab_GFX_Console

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_Tab_GFX_Console.Options_Tab_GFX_Console_C
// 0x0078 (0x02D8 - 0x0260)
class UOptions_Tab_GFX_Console_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                         ModeDescription;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_Gamma;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_HDR_Gamma;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_OverallQuality;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_Ragdoll;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_StaticResolutionScaling;                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Console_QualitySetting_C*      Options_Console_QualitySetting;                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Console_StaticResolutionScaling_C* Options_Console_StaticResolutionScaling;           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_GFX_Gamma_C*                   Options_GFX_Gamma;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_GFX_HDR_Gamma_C*               Options_GFX_HDR_Gamma;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Scalability_Ragdolls_C*        Options_Scalability_Ragdolls;                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         VRRDescription;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             SettingsChanged;                                   // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SettingsChanged__DelegateSignature();
	void ExecuteUbergraph_Options_Tab_GFX_Console(int32 EntryPoint);
	void UINeedsUpdate();
	void Construct();
	void ForceMicrosoftNonHDR();
	void AddStaticResolutionOption();
	void ApplyGraphicOptionsText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_Tab_GFX_Console_C">();
	}
	static class UOptions_Tab_GFX_Console_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_Tab_GFX_Console_C>();
	}
};
static_assert(alignof(UOptions_Tab_GFX_Console_C) == 0x000008, "Wrong alignment on UOptions_Tab_GFX_Console_C");
static_assert(sizeof(UOptions_Tab_GFX_Console_C) == 0x0002D8, "Wrong size on UOptions_Tab_GFX_Console_C");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, UberGraphFrame) == 0x000260, "Member 'UOptions_Tab_GFX_Console_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, ModeDescription) == 0x000268, "Member 'UOptions_Tab_GFX_Console_C::ModeDescription' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, OPT_Gamma) == 0x000270, "Member 'UOptions_Tab_GFX_Console_C::OPT_Gamma' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, OPT_HDR_Gamma) == 0x000278, "Member 'UOptions_Tab_GFX_Console_C::OPT_HDR_Gamma' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, OPT_OverallQuality) == 0x000280, "Member 'UOptions_Tab_GFX_Console_C::OPT_OverallQuality' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, OPT_Ragdoll) == 0x000288, "Member 'UOptions_Tab_GFX_Console_C::OPT_Ragdoll' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, OPT_StaticResolutionScaling) == 0x000290, "Member 'UOptions_Tab_GFX_Console_C::OPT_StaticResolutionScaling' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, Options_Console_QualitySetting) == 0x000298, "Member 'UOptions_Tab_GFX_Console_C::Options_Console_QualitySetting' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, Options_Console_StaticResolutionScaling) == 0x0002A0, "Member 'UOptions_Tab_GFX_Console_C::Options_Console_StaticResolutionScaling' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, Options_GFX_Gamma) == 0x0002A8, "Member 'UOptions_Tab_GFX_Console_C::Options_GFX_Gamma' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, Options_GFX_HDR_Gamma) == 0x0002B0, "Member 'UOptions_Tab_GFX_Console_C::Options_GFX_HDR_Gamma' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, Options_Scalability_Ragdolls) == 0x0002B8, "Member 'UOptions_Tab_GFX_Console_C::Options_Scalability_Ragdolls' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, VRRDescription) == 0x0002C0, "Member 'UOptions_Tab_GFX_Console_C::VRRDescription' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_GFX_Console_C, SettingsChanged) == 0x0002C8, "Member 'UOptions_Tab_GFX_Console_C::SettingsChanged' has a wrong offset!");

}
