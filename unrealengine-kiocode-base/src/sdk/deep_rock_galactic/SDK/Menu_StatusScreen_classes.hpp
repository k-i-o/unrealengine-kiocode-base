#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Menu_StatusScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "FSD_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Menu_StatusScreen.Menu_StatusScreen_C
// 0x00B0 (0x0350 - 0x02A0)
class UMenu_StatusScreen_C final : public UWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LoadoutClicked;                                    // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_IconWithOutline_C*               Basic_IconWithOutline;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Loadout;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DataReadout;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DataReadout_isModded;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DataReadout_SeedString;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_TabPlayerList_InteractableV2_C*    FriendsTab;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BottomSmoke;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_GradientBottom;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_separator_2;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_EscMenu_BriefingV2_C*              ITM_EscMenu_BriefingV2;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_PreventDuplicateCharacters_C*      ITM_PreventDuplicateCharacters;                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_PrivatePublic_C*                   ITM_PrivatePublic;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SeasonLogo_C*                      ITM_SeasonLogo;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_WeaponAndPerkInfo_C*               ITM_WeaponAndPerkInfo1;                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_TabPlayerListEntry_InteractableV2_C* LocalPlayer;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerCharacterImage;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_3;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OpenMinersManual;                                  // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OpenMinersManual__DelegateSignature(class UObject* IdentifyingObject, bool OpenSpecificPage, EMinersManualSinglePage Page);
	void ExecuteUbergraph_Menu_StatusScreen(int32 EntryPoint);
	void OnMenuClosed();
	void OnMenuOpened();
	void RefreshShowroom();
	void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_7_BiomeClicked__DelegateSignature();
	void BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_3_WarningClicked__DelegateSignature();
	void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_2_MutatorClicked__DelegateSignature();
	void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_1_MissionTypeClicked__DelegateSignature();
	void Close();
	void Update();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Menu_StatusScreen_C">();
	}
	static class UMenu_StatusScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenu_StatusScreen_C>();
	}
};
static_assert(alignof(UMenu_StatusScreen_C) == 0x000008, "Wrong alignment on UMenu_StatusScreen_C");
static_assert(sizeof(UMenu_StatusScreen_C) == 0x000350, "Wrong size on UMenu_StatusScreen_C");
static_assert(offsetof(UMenu_StatusScreen_C, UberGraphFrame) == 0x0002A0, "Member 'UMenu_StatusScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, LoadoutClicked) == 0x0002A8, "Member 'UMenu_StatusScreen_C::LoadoutClicked' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, Basic_IconWithOutline) == 0x0002B0, "Member 'UMenu_StatusScreen_C::Basic_IconWithOutline' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, Button_Loadout) == 0x0002B8, "Member 'UMenu_StatusScreen_C::Button_Loadout' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, DataReadout) == 0x0002C0, "Member 'UMenu_StatusScreen_C::DataReadout' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, DataReadout_isModded) == 0x0002C8, "Member 'UMenu_StatusScreen_C::DataReadout_isModded' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, DataReadout_SeedString) == 0x0002D0, "Member 'UMenu_StatusScreen_C::DataReadout_SeedString' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, FriendsTab) == 0x0002D8, "Member 'UMenu_StatusScreen_C::FriendsTab' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, Image_BottomSmoke) == 0x0002E0, "Member 'UMenu_StatusScreen_C::Image_BottomSmoke' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, Image_GradientBottom) == 0x0002E8, "Member 'UMenu_StatusScreen_C::Image_GradientBottom' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, Image_separator_2) == 0x0002F0, "Member 'UMenu_StatusScreen_C::Image_separator_2' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, ITM_EscMenu_BriefingV2) == 0x0002F8, "Member 'UMenu_StatusScreen_C::ITM_EscMenu_BriefingV2' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, ITM_PreventDuplicateCharacters) == 0x000300, "Member 'UMenu_StatusScreen_C::ITM_PreventDuplicateCharacters' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, ITM_PrivatePublic) == 0x000308, "Member 'UMenu_StatusScreen_C::ITM_PrivatePublic' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, ITM_SeasonLogo) == 0x000310, "Member 'UMenu_StatusScreen_C::ITM_SeasonLogo' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, ITM_WeaponAndPerkInfo1) == 0x000318, "Member 'UMenu_StatusScreen_C::ITM_WeaponAndPerkInfo1' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, LocalPlayer) == 0x000320, "Member 'UMenu_StatusScreen_C::LocalPlayer' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, PlayerCharacterImage) == 0x000328, "Member 'UMenu_StatusScreen_C::PlayerCharacterImage' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, TextBlock) == 0x000330, "Member 'UMenu_StatusScreen_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, TextBlock_3) == 0x000338, "Member 'UMenu_StatusScreen_C::TextBlock_3' has a wrong offset!");
static_assert(offsetof(UMenu_StatusScreen_C, OpenMinersManual) == 0x000340, "Member 'UMenu_StatusScreen_C::OpenMinersManual' has a wrong offset!");

}
