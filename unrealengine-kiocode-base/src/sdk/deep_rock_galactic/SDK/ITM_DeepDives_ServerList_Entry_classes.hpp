#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DeepDives_ServerList_Entry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OnlineSubsystemUtils_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C
// 0x01A8 (0x0408 - 0x0260)
class UITM_DeepDives_ServerList_Entry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar;                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GradientMasked_Image_C*             GradientBackground;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              Modded_Box;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_ServerList_Entry_PlayerIcons_C*    ServerList_Entry_PlayerIcons;                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Distance;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Mission;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Team;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Distance;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Modded;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Region;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_ServerName;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FBlueprintSessionResult                Session;                                           // 0x02C8(0x0108)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             JoinServer;                                        // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBasic_ToolTip_C*                       MutatorToolTip;                                    // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       WarningToolTip;                                    // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBiome_ToolTip_C*                       BiomeToolTip;                                      // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Warning_0;                                   // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BiomeMaterial;                                     // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OpenProfile();
	void SetServername();
	void SetMissionNameWidth(float Width);
	class UWidget* GetMissionToolTip();
	void SetColumnWidths(TArray<float>& InWidths);
	void ToggleMissionDetails(bool Visible, bool* OutVisible);
	void SetNoMission();
	void SetSession(const struct FBlueprintSessionResult& Param_Session);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_DeepDives_ServerList_Entry(int32 EntryPoint);
	void JoinServer__DelegateSignature(const struct FBlueprintSessionResult& Param_Session);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_DeepDives_ServerList_Entry_C">();
	}
	static class UITM_DeepDives_ServerList_Entry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_DeepDives_ServerList_Entry_C>();
	}
};
static_assert(alignof(UITM_DeepDives_ServerList_Entry_C) == 0x000008, "Wrong alignment on UITM_DeepDives_ServerList_Entry_C");
static_assert(sizeof(UITM_DeepDives_ServerList_Entry_C) == 0x000408, "Wrong size on UITM_DeepDives_ServerList_Entry_C");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, UberGraphFrame) == 0x000260, "Member 'UITM_DeepDives_ServerList_Entry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, Basic_Menu_ColorBar) == 0x000268, "Member 'UITM_DeepDives_ServerList_Entry_C::Basic_Menu_ColorBar' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, Button_0) == 0x000270, "Member 'UITM_DeepDives_ServerList_Entry_C::Button_0' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, GradientBackground) == 0x000278, "Member 'UITM_DeepDives_ServerList_Entry_C::GradientBackground' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, Modded_Box) == 0x000280, "Member 'UITM_DeepDives_ServerList_Entry_C::Modded_Box' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, ServerList_Entry_PlayerIcons) == 0x000288, "Member 'UITM_DeepDives_ServerList_Entry_C::ServerList_Entry_PlayerIcons' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, SizeBox_Distance) == 0x000290, "Member 'UITM_DeepDives_ServerList_Entry_C::SizeBox_Distance' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, SizeBox_Mission) == 0x000298, "Member 'UITM_DeepDives_ServerList_Entry_C::SizeBox_Mission' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, SizeBox_Team) == 0x0002A0, "Member 'UITM_DeepDives_ServerList_Entry_C::SizeBox_Team' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, TXT_Distance) == 0x0002A8, "Member 'UITM_DeepDives_ServerList_Entry_C::TXT_Distance' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, TXT_Modded) == 0x0002B0, "Member 'UITM_DeepDives_ServerList_Entry_C::TXT_Modded' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, TXT_Region) == 0x0002B8, "Member 'UITM_DeepDives_ServerList_Entry_C::TXT_Region' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, TXT_ServerName) == 0x0002C0, "Member 'UITM_DeepDives_ServerList_Entry_C::TXT_ServerName' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, Session) == 0x0002C8, "Member 'UITM_DeepDives_ServerList_Entry_C::Session' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, JoinServer) == 0x0003D0, "Member 'UITM_DeepDives_ServerList_Entry_C::JoinServer' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, MutatorToolTip) == 0x0003E0, "Member 'UITM_DeepDives_ServerList_Entry_C::MutatorToolTip' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, WarningToolTip) == 0x0003E8, "Member 'UITM_DeepDives_ServerList_Entry_C::WarningToolTip' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, BiomeToolTip) == 0x0003F0, "Member 'UITM_DeepDives_ServerList_Entry_C::BiomeToolTip' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, Image_Warning_0) == 0x0003F8, "Member 'UITM_DeepDives_ServerList_Entry_C::Image_Warning_0' has a wrong offset!");
static_assert(offsetof(UITM_DeepDives_ServerList_Entry_C, BiomeMaterial) == 0x000400, "Member 'UITM_DeepDives_ServerList_Entry_C::BiomeMaterial' has a wrong offset!");

}
