#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Menu_SaveSlots

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Menu_SaveSlots.Menu_SaveSlots_C
// 0x00B0 (0x0310 - 0x0260)
class UMenu_SaveSlots_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                CharLevelBG;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_TopBar_ResourceCounter_C*          CreditsCounter;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Header;                                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CurrentSaveSlot_RankOrLevelReadout_C* ITM_ActiveLevel;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CurrentSaveSlot_RankOrLevelReadout_C* ITM_ActiveRank;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_TopBar_CharacterIcon_C*            ITM_CharacterIcon;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CreateNewSaveSlot_Entry_C*         ITM_CreateNewSaveSlot_Entry;                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CurrentSaveSlot_Resources_C*       ITM_CurrentSaveSlot_Resources;                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SaveSlot_Entry_C*                  ITM_SaveSlot_Entry;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SaveSlot_Entry_C*                  ITM_SaveSlot_Entry_1;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SaveSlot_Entry_C*                  ITM_SaveSlot_Entry_2;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SaveSlot_Entry_C*                  ITM_SaveSlot_Entry_3;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SaveSlot_Entry_Header_C*           ITM_SaveSlotsCategoryList_Entry;                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PlayerRankBG;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SaveSlotsBox;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SelectedSlot;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SlotList;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_NumberOfSlotsLeft;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             SettingsChanged;                                   // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         NumberOfSlots;                                     // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SettingsChanged__DelegateSignature();
	void ExecuteUbergraph_Menu_SaveSlots(int32 EntryPoint);
	void NewSaveslotCreated();
	void SaveLoaded();
	void SaveDetails(class UFSDSaveGame* SaveSlot);
	void PreConstruct(bool IsDesignTime);
	void SaveConverted();
	void SaveDeleted();
	void Construct();
	void OnSuccess_E9E78193470C6DFEB6754298C681AA76();
	void OnFailure_E9E78193470C6DFEB6754298C681AA76();
	void CreateSaveSlots();
	void SetInitialSelectedSave();
	void SetColors();
	void Set_Selected_Save(class UFSDSaveGame* SaveSlot);
	void BindSaveslotEvents(class UITM_SaveSlot_Entry_C* SaveslotWidget);
	void Set_Create_New_Saveslot_Entry();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Menu_SaveSlots_C">();
	}
	static class UMenu_SaveSlots_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenu_SaveSlots_C>();
	}
};
static_assert(alignof(UMenu_SaveSlots_C) == 0x000008, "Wrong alignment on UMenu_SaveSlots_C");
static_assert(sizeof(UMenu_SaveSlots_C) == 0x000310, "Wrong size on UMenu_SaveSlots_C");
static_assert(offsetof(UMenu_SaveSlots_C, UberGraphFrame) == 0x000260, "Member 'UMenu_SaveSlots_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, CharLevelBG) == 0x000268, "Member 'UMenu_SaveSlots_C::CharLevelBG' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, CreditsCounter) == 0x000270, "Member 'UMenu_SaveSlots_C::CreditsCounter' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, Header) == 0x000278, "Member 'UMenu_SaveSlots_C::Header' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, ITM_ActiveLevel) == 0x000280, "Member 'UMenu_SaveSlots_C::ITM_ActiveLevel' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, ITM_ActiveRank) == 0x000288, "Member 'UMenu_SaveSlots_C::ITM_ActiveRank' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, ITM_CharacterIcon) == 0x000290, "Member 'UMenu_SaveSlots_C::ITM_CharacterIcon' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, ITM_CreateNewSaveSlot_Entry) == 0x000298, "Member 'UMenu_SaveSlots_C::ITM_CreateNewSaveSlot_Entry' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, ITM_CurrentSaveSlot_Resources) == 0x0002A0, "Member 'UMenu_SaveSlots_C::ITM_CurrentSaveSlot_Resources' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, ITM_SaveSlot_Entry) == 0x0002A8, "Member 'UMenu_SaveSlots_C::ITM_SaveSlot_Entry' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, ITM_SaveSlot_Entry_1) == 0x0002B0, "Member 'UMenu_SaveSlots_C::ITM_SaveSlot_Entry_1' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, ITM_SaveSlot_Entry_2) == 0x0002B8, "Member 'UMenu_SaveSlots_C::ITM_SaveSlot_Entry_2' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, ITM_SaveSlot_Entry_3) == 0x0002C0, "Member 'UMenu_SaveSlots_C::ITM_SaveSlot_Entry_3' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, ITM_SaveSlotsCategoryList_Entry) == 0x0002C8, "Member 'UMenu_SaveSlots_C::ITM_SaveSlotsCategoryList_Entry' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, PlayerRankBG) == 0x0002D0, "Member 'UMenu_SaveSlots_C::PlayerRankBG' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, SaveSlotsBox) == 0x0002D8, "Member 'UMenu_SaveSlots_C::SaveSlotsBox' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, SelectedSlot) == 0x0002E0, "Member 'UMenu_SaveSlots_C::SelectedSlot' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, SlotList) == 0x0002E8, "Member 'UMenu_SaveSlots_C::SlotList' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, TXT_NumberOfSlotsLeft) == 0x0002F0, "Member 'UMenu_SaveSlots_C::TXT_NumberOfSlotsLeft' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, SettingsChanged) == 0x0002F8, "Member 'UMenu_SaveSlots_C::SettingsChanged' has a wrong offset!");
static_assert(offsetof(UMenu_SaveSlots_C, NumberOfSlots) == 0x000308, "Member 'UMenu_SaveSlots_C::NumberOfSlots' has a wrong offset!");

}

