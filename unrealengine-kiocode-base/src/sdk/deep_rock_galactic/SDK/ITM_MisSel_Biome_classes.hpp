#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MisSel_Biome

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_MisSel_Biome.ITM_MisSel_Biome_C
// 0x0160 (0x03C0 - 0x0260)
class UITM_MisSel_Biome_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ScannersOutOfRange;                                // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Infobox_MouseOver;                                 // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewZoneIntro;                                      // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_Menu_MinimalWindow_C*            BasicWindow_Minimal;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Outer;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_SeasonChallengeIcon_C*             Icon_Challenge;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Shadow;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_Campaign_Icon_C*                   ITM_Campaign_Icon;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MainButton;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         MissionsAvailiable;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NoMissionsAvailbable;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_BiomeName;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBiome*                                 Biome;                                             // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             BiomeSelected;                                     // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         NumberOfMissions;                                  // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CE5[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGeneratedMission*>              Missions;                                          // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Biome_Image_Size;                                  // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Biome_Image_Position;                              // 0x02FC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Biome_Image_Angle;                                 // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Biome_Image_Shear;                                 // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_MisSel_RegionImage_C*              Region;                                            // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNew;                                             // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CE6[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            OldTexture;                                        // 0x0328(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         UnlockStartTime;                                   // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UnlockAnimationTime;                               // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BiomeIndex;                                        // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetSoundCoordinate(struct FVector* SoundWorldPos);
	void SetCampaignVisiblity();
	bool IsUnlocked();
	void CreateMissionIcons(TArray<class UGeneratedMission*>& Array);
	bool HasMissions();
	void GetController(class ABP_PlayerController_SpaceRig_C** AsBP_Player_Controller_Space_Rig);
	void SortMissions(TArray<class UGeneratedMission*>& Param_Missions, TMap<class UMissionTemplate*, int32>* MissionCount1);
	void GetMissionsForBiome(TArray<class UGeneratedMission*>& Array, TArray<class UGeneratedMission*>* Param_Missions);
	void Unselect();
	void Select();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature();
	void SetData(const TArray<class UGeneratedMission*>& Param_Missions, bool IsNewBiome, int32 Param_BiomeIndex);
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ShowUnlockZone();
	void ShowChallengeIcon(bool InShow, class UTexture2D* Icon, const struct FLinearColor& Color);
	void ExecuteUbergraph_ITM_MisSel_Biome(int32 EntryPoint);
	void BiomeSelected__DelegateSignature(class UITM_MisSel_Biome_C* Param_Biome);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_MisSel_Biome_C">();
	}
	static class UITM_MisSel_Biome_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_MisSel_Biome_C>();
	}
};
static_assert(alignof(UITM_MisSel_Biome_C) == 0x000008, "Wrong alignment on UITM_MisSel_Biome_C");
static_assert(sizeof(UITM_MisSel_Biome_C) == 0x0003C0, "Wrong size on UITM_MisSel_Biome_C");
static_assert(offsetof(UITM_MisSel_Biome_C, UberGraphFrame) == 0x000260, "Member 'UITM_MisSel_Biome_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, ScannersOutOfRange) == 0x000268, "Member 'UITM_MisSel_Biome_C::ScannersOutOfRange' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, Infobox_MouseOver) == 0x000270, "Member 'UITM_MisSel_Biome_C::Infobox_MouseOver' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, NewZoneIntro) == 0x000278, "Member 'UITM_MisSel_Biome_C::NewZoneIntro' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, BasicWindow_Minimal) == 0x000280, "Member 'UITM_MisSel_Biome_C::BasicWindow_Minimal' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, CanvasPanel_Outer) == 0x000288, "Member 'UITM_MisSel_Biome_C::CanvasPanel_Outer' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, Icon_Challenge) == 0x000290, "Member 'UITM_MisSel_Biome_C::Icon_Challenge' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, IMG_Shadow) == 0x000298, "Member 'UITM_MisSel_Biome_C::IMG_Shadow' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, ITM_Campaign_Icon) == 0x0002A0, "Member 'UITM_MisSel_Biome_C::ITM_Campaign_Icon' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, MainButton) == 0x0002A8, "Member 'UITM_MisSel_Biome_C::MainButton' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, MissionsAvailiable) == 0x0002B0, "Member 'UITM_MisSel_Biome_C::MissionsAvailiable' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, NoMissionsAvailbable) == 0x0002B8, "Member 'UITM_MisSel_Biome_C::NoMissionsAvailbable' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, TextBlock_BiomeName) == 0x0002C0, "Member 'UITM_MisSel_Biome_C::TextBlock_BiomeName' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, Biome) == 0x0002C8, "Member 'UITM_MisSel_Biome_C::Biome' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, BiomeSelected) == 0x0002D0, "Member 'UITM_MisSel_Biome_C::BiomeSelected' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, NumberOfMissions) == 0x0002E0, "Member 'UITM_MisSel_Biome_C::NumberOfMissions' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, Missions) == 0x0002E8, "Member 'UITM_MisSel_Biome_C::Missions' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, Biome_Image_Size) == 0x0002F8, "Member 'UITM_MisSel_Biome_C::Biome_Image_Size' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, Biome_Image_Position) == 0x0002FC, "Member 'UITM_MisSel_Biome_C::Biome_Image_Position' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, Biome_Image_Angle) == 0x000304, "Member 'UITM_MisSel_Biome_C::Biome_Image_Angle' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, Biome_Image_Shear) == 0x000308, "Member 'UITM_MisSel_Biome_C::Biome_Image_Shear' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, Region) == 0x000310, "Member 'UITM_MisSel_Biome_C::Region' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, IsNew) == 0x000318, "Member 'UITM_MisSel_Biome_C::IsNew' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, DynamicMaterial) == 0x000320, "Member 'UITM_MisSel_Biome_C::DynamicMaterial' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, OldTexture) == 0x000328, "Member 'UITM_MisSel_Biome_C::OldTexture' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, UnlockStartTime) == 0x0003B0, "Member 'UITM_MisSel_Biome_C::UnlockStartTime' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, UnlockAnimationTime) == 0x0003B4, "Member 'UITM_MisSel_Biome_C::UnlockAnimationTime' has a wrong offset!");
static_assert(offsetof(UITM_MisSel_Biome_C, BiomeIndex) == 0x0003B8, "Member 'UITM_MisSel_Biome_C::BiomeIndex' has a wrong offset!");

}
