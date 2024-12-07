#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MisSel_PlanetZone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_MisSel_PlanetZone.ITM_MisSel_PlanetZone_C
// 0x0078 (0x02D8 - 0x0260)
class UITM_MisSel_PlanetZone_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LockBreak;                                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Infobox_MouseOver;                                 // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_Menu_MinimalWindow_C*            Basic_Menu_MinimalWindow;                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_MinimalWindow_C*            BasicWindow_Minimal;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Padlock;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Shadow;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_TooltipArrow;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MainButton;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VertBoxMinusTooltip;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlanetZone*                            Zone;                                              // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNewZone;                                         // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4706[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 I_Outline;                                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 I_AnimatedPlague;                                  // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ZoneCenter;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	TArray<class UGeneratedMission*> GetAvailableMissions();
	void Refresh();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void UpdateVisibility();
	void ExecuteUbergraph_ITM_MisSel_PlanetZone(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_MisSel_PlanetZone_C">();
	}
	static class UITM_MisSel_PlanetZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_MisSel_PlanetZone_C>();
	}
};
static_assert(alignof(UITM_MisSel_PlanetZone_C) == 0x000008, "Wrong alignment on UITM_MisSel_PlanetZone_C");
static_assert(sizeof(UITM_MisSel_PlanetZone_C) == 0x0002D8, "Wrong size on UITM_MisSel_PlanetZone_C");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, UberGraphFrame) == 0x000260, "Member 'UITM_MisSel_PlanetZone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, LockBreak) == 0x000268, "Member 'UITM_MisSel_PlanetZone_C::LockBreak' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, Infobox_MouseOver) == 0x000270, "Member 'UITM_MisSel_PlanetZone_C::Infobox_MouseOver' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, Basic_Menu_MinimalWindow) == 0x000278, "Member 'UITM_MisSel_PlanetZone_C::Basic_Menu_MinimalWindow' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, BasicWindow_Minimal) == 0x000280, "Member 'UITM_MisSel_PlanetZone_C::BasicWindow_Minimal' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, IMG_Padlock) == 0x000288, "Member 'UITM_MisSel_PlanetZone_C::IMG_Padlock' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, IMG_Shadow) == 0x000290, "Member 'UITM_MisSel_PlanetZone_C::IMG_Shadow' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, IMG_TooltipArrow) == 0x000298, "Member 'UITM_MisSel_PlanetZone_C::IMG_TooltipArrow' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, MainButton) == 0x0002A0, "Member 'UITM_MisSel_PlanetZone_C::MainButton' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, VertBoxMinusTooltip) == 0x0002A8, "Member 'UITM_MisSel_PlanetZone_C::VertBoxMinusTooltip' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, Zone) == 0x0002B0, "Member 'UITM_MisSel_PlanetZone_C::Zone' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, IsNewZone) == 0x0002B8, "Member 'UITM_MisSel_PlanetZone_C::IsNewZone' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, I_Outline) == 0x0002C0, "Member 'UITM_MisSel_PlanetZone_C::I_Outline' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, I_AnimatedPlague) == 0x0002C8, "Member 'UITM_MisSel_PlanetZone_C::I_AnimatedPlague' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_PlanetZone_C, ZoneCenter) == 0x0002D0, "Member 'UITM_MisSel_PlanetZone_C::ZoneCenter' has a wrong offset!");

}

