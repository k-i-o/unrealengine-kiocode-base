#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_SaveSlot_Entry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C
// 0x0128 (0x0388 - 0x0260)
class UITM_SaveSlot_Entry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar;                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable_C*                Button_Delete;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable_C*                Button_Load;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SaveSlot_Entry_ClassIcon_C*        Driller;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SaveSlot_Entry_ClassIcon_C*        Engineer;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SaveSlot_Entry_ClassIcon_C*        Gunner;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_MissionIcon;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MainButton;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SaveSlot_Entry_ClassIcon_C*        Scout;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Rank;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_MainSave;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Modded;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_SaveName;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_TimeStamp;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       MutatorToolTip;                                    // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       WarningToolTip;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBiome_ToolTip_C*                       BiomeToolTip;                                      // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SaveSlotName;                                      // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 FullSaveSlotName;                                  // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSaveDeleted;                                     // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSaveConverted;                                   // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFSDSaveGame*                           SaveInstance;                                      // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSaveDetails;                                     // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSaveLoaded;                                      // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ActiveSave;                                        // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_30A6[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBasic_ToolTip_C*                       LoadButtonTooltip;                                 // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       DeleteButtonTooltip;                               // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSaveDeletedWithReference;                        // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSaveDeleted__DelegateSignature();
	void OnSaveConverted__DelegateSignature();
	void OnSaveDetails__DelegateSignature(class UFSDSaveGame* SaveSlot);
	void OnSaveLoaded__DelegateSignature();
	void OnSaveDeletedWithReference__DelegateSignature(class UFSDSaveGame* Save);
	void ExecuteUbergraph_ITM_SaveSlot_Entry(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature();
	void DeleteAnswer(bool Yes);
	void BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
	void LoadAnswer(bool Yes);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void SetValues(class UFSDSaveGame* SaveGameInstance, bool MainSlot);
	void GetSaveSlotName(class UFSDSaveGame* SaveGame, bool ReturnEmptyOnNonUser, class FString* OutSaveSlotName);
	void SetHeroRanks();
	void SetSelectedColor();
	void SaveNameExists(const class FString& Param_Name, bool* Exists);
	void SetIfSaveIsActive(bool IsMainSlot);
	class UWidget* CreateLoadButtonToolTip();
	class UWidget* CreateDeleteButtonToolTip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_SaveSlot_Entry_C">();
	}
	static class UITM_SaveSlot_Entry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_SaveSlot_Entry_C>();
	}
};
static_assert(alignof(UITM_SaveSlot_Entry_C) == 0x000008, "Wrong alignment on UITM_SaveSlot_Entry_C");
static_assert(sizeof(UITM_SaveSlot_Entry_C) == 0x000388, "Wrong size on UITM_SaveSlot_Entry_C");
static_assert(offsetof(UITM_SaveSlot_Entry_C, UberGraphFrame) == 0x000260, "Member 'UITM_SaveSlot_Entry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, Basic_Menu_ColorBar) == 0x000268, "Member 'UITM_SaveSlot_Entry_C::Basic_Menu_ColorBar' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, Button_Delete) == 0x000270, "Member 'UITM_SaveSlot_Entry_C::Button_Delete' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, Button_Load) == 0x000278, "Member 'UITM_SaveSlot_Entry_C::Button_Load' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, Driller) == 0x000280, "Member 'UITM_SaveSlot_Entry_C::Driller' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, Engineer) == 0x000288, "Member 'UITM_SaveSlot_Entry_C::Engineer' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, Gunner) == 0x000290, "Member 'UITM_SaveSlot_Entry_C::Gunner' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, Image_1) == 0x000298, "Member 'UITM_SaveSlot_Entry_C::Image_1' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, IMG_MissionIcon) == 0x0002A0, "Member 'UITM_SaveSlot_Entry_C::IMG_MissionIcon' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, MainButton) == 0x0002A8, "Member 'UITM_SaveSlot_Entry_C::MainButton' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, Scout) == 0x0002B0, "Member 'UITM_SaveSlot_Entry_C::Scout' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, Text_Rank) == 0x0002B8, "Member 'UITM_SaveSlot_Entry_C::Text_Rank' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, TXT_MainSave) == 0x0002C0, "Member 'UITM_SaveSlot_Entry_C::TXT_MainSave' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, TXT_Modded) == 0x0002C8, "Member 'UITM_SaveSlot_Entry_C::TXT_Modded' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, TXT_SaveName) == 0x0002D0, "Member 'UITM_SaveSlot_Entry_C::TXT_SaveName' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, TXT_TimeStamp) == 0x0002D8, "Member 'UITM_SaveSlot_Entry_C::TXT_TimeStamp' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, MutatorToolTip) == 0x0002E0, "Member 'UITM_SaveSlot_Entry_C::MutatorToolTip' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, WarningToolTip) == 0x0002E8, "Member 'UITM_SaveSlot_Entry_C::WarningToolTip' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, BiomeToolTip) == 0x0002F0, "Member 'UITM_SaveSlot_Entry_C::BiomeToolTip' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, SaveSlotName) == 0x0002F8, "Member 'UITM_SaveSlot_Entry_C::SaveSlotName' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, FullSaveSlotName) == 0x000308, "Member 'UITM_SaveSlot_Entry_C::FullSaveSlotName' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, OnSaveDeleted) == 0x000318, "Member 'UITM_SaveSlot_Entry_C::OnSaveDeleted' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, OnSaveConverted) == 0x000328, "Member 'UITM_SaveSlot_Entry_C::OnSaveConverted' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, SaveInstance) == 0x000338, "Member 'UITM_SaveSlot_Entry_C::SaveInstance' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, OnSaveDetails) == 0x000340, "Member 'UITM_SaveSlot_Entry_C::OnSaveDetails' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, OnSaveLoaded) == 0x000350, "Member 'UITM_SaveSlot_Entry_C::OnSaveLoaded' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, ActiveSave) == 0x000360, "Member 'UITM_SaveSlot_Entry_C::ActiveSave' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, LoadButtonTooltip) == 0x000368, "Member 'UITM_SaveSlot_Entry_C::LoadButtonTooltip' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, DeleteButtonTooltip) == 0x000370, "Member 'UITM_SaveSlot_Entry_C::DeleteButtonTooltip' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_C, OnSaveDeletedWithReference) == 0x000378, "Member 'UITM_SaveSlot_Entry_C::OnSaveDeletedWithReference' has a wrong offset!");

}
