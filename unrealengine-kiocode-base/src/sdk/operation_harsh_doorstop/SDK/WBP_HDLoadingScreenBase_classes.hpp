#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDLoadingScreenBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C
// 0x0118 (0x0348 - 0x0230)
class UWBP_HDLoadingScreenBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundImage_Map;                               // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BluforFactionName;                                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               BluforTeamInfo;                                    // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BluforTeamReinforcementText;                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DeploymentText;                                    // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                              DeploymentThrobber;                                // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               GameModeHeader;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GameModeNameText;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MapNameText;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MapOverview;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MinimapImage;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OpforFactionName;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OpforTeamInfo;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OpforTeamReinforcementText;                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UTexture2D>>      MapBgImages;                                       // 0x02A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash)
	struct FSlateBrush                            MapBgBrush;                                        // 0x02B8(0x0088)(Edit, BlueprintVisible)
	bool                                          bEnableMapOverviewUI;                              // 0x0340(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bEnableTeamInfoUI;                                 // 0x0341(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_HDLoadingScreenBase(int32 EntryPoint);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SetLevelLoadData(const struct FLoadScreenLevelData& LevelData);
	void SetLoadingScreenDescription(const struct FLoadingScreenDescription& Description);
	void SetMapElementVisibility(ESlateVisibility NewVisibility);
	void SetBluforStartingTicketCount(int32 TicketCount);
	void SetOpforStartingTicketCount(int32 TicketCount);
	void SetMapBgImage(TSoftObjectPtr<class UTexture2D> InBgImage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HDLoadingScreenBase_C">();
	}
	static class UWBP_HDLoadingScreenBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HDLoadingScreenBase_C>();
	}
};
static_assert(alignof(UWBP_HDLoadingScreenBase_C) == 0x000008, "Wrong alignment on UWBP_HDLoadingScreenBase_C");
static_assert(sizeof(UWBP_HDLoadingScreenBase_C) == 0x000348, "Wrong size on UWBP_HDLoadingScreenBase_C");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, UberGraphFrame) == 0x000230, "Member 'UWBP_HDLoadingScreenBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, BackgroundImage_Map) == 0x000238, "Member 'UWBP_HDLoadingScreenBase_C::BackgroundImage_Map' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, BluforFactionName) == 0x000240, "Member 'UWBP_HDLoadingScreenBase_C::BluforFactionName' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, BluforTeamInfo) == 0x000248, "Member 'UWBP_HDLoadingScreenBase_C::BluforTeamInfo' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, BluforTeamReinforcementText) == 0x000250, "Member 'UWBP_HDLoadingScreenBase_C::BluforTeamReinforcementText' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, DeploymentText) == 0x000258, "Member 'UWBP_HDLoadingScreenBase_C::DeploymentText' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, DeploymentThrobber) == 0x000260, "Member 'UWBP_HDLoadingScreenBase_C::DeploymentThrobber' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, GameModeHeader) == 0x000268, "Member 'UWBP_HDLoadingScreenBase_C::GameModeHeader' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, GameModeNameText) == 0x000270, "Member 'UWBP_HDLoadingScreenBase_C::GameModeNameText' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, MapNameText) == 0x000278, "Member 'UWBP_HDLoadingScreenBase_C::MapNameText' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, MapOverview) == 0x000280, "Member 'UWBP_HDLoadingScreenBase_C::MapOverview' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, MinimapImage) == 0x000288, "Member 'UWBP_HDLoadingScreenBase_C::MinimapImage' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, OpforFactionName) == 0x000290, "Member 'UWBP_HDLoadingScreenBase_C::OpforFactionName' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, OpforTeamInfo) == 0x000298, "Member 'UWBP_HDLoadingScreenBase_C::OpforTeamInfo' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, OpforTeamReinforcementText) == 0x0002A0, "Member 'UWBP_HDLoadingScreenBase_C::OpforTeamReinforcementText' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, MapBgImages) == 0x0002A8, "Member 'UWBP_HDLoadingScreenBase_C::MapBgImages' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, MapBgBrush) == 0x0002B8, "Member 'UWBP_HDLoadingScreenBase_C::MapBgBrush' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, bEnableMapOverviewUI) == 0x000340, "Member 'UWBP_HDLoadingScreenBase_C::bEnableMapOverviewUI' has a wrong offset!");
static_assert(offsetof(UWBP_HDLoadingScreenBase_C, bEnableTeamInfoUI) == 0x000341, "Member 'UWBP_HDLoadingScreenBase_C::bEnableTeamInfoUI' has a wrong offset!");

}

