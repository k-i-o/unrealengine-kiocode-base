#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DeployMenu_SpawnMapView

#include "Basic.hpp"

#include "HDMain_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C
// 0x0050 (0x0280 - 0x0230)
class UWBP_DeployMenu_SpawnMapView_C final : public UDeployMenu_SpawnMapView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DeployMenu_SpawnMinimap_C*         Minimap;                                           // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bMenuInitialized;                                  // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1593[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPreloadFinished;                                 // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AActor*                                 SelectedPOIActor;                                  // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSpawnPointSelected;                              // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSpawnPointDeselected;                            // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPreloadFinished__DelegateSignature();
	void OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor);
	void OnSpawnPointDeselected__DelegateSignature();
	void ExecuteUbergraph_WBP_DeployMenu_SpawnMapView(int32 EntryPoint);
	void BndEvt__Minimap_K2Node_ComponentBoundEvent_2_OnSpawnPointDeselected__DelegateSignature(class AActor* POISpawnPointActor);
	void BndEvt__Minimap_K2Node_ComponentBoundEvent_0_OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor);
	void OnPreloadFinished__SpawnMapView_();
	void BndEvt__Minimap_K2Node_ComponentBoundEvent_1_OnPreloadFinished__DelegateSignature();
	void Construct();
	void PreloadContent();
	void GetMinimapData(bool* bSuccess, TSoftObjectPtr<class UTexture2D>* MinimapImg, struct FMinimapGenerationSettings* MinimapSettings);
	void UpdatePlayerPOIs();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DeployMenu_SpawnMapView_C">();
	}
	static class UWBP_DeployMenu_SpawnMapView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DeployMenu_SpawnMapView_C>();
	}
};
static_assert(alignof(UWBP_DeployMenu_SpawnMapView_C) == 0x000008, "Wrong alignment on UWBP_DeployMenu_SpawnMapView_C");
static_assert(sizeof(UWBP_DeployMenu_SpawnMapView_C) == 0x000280, "Wrong size on UWBP_DeployMenu_SpawnMapView_C");
static_assert(offsetof(UWBP_DeployMenu_SpawnMapView_C, UberGraphFrame) == 0x000230, "Member 'UWBP_DeployMenu_SpawnMapView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SpawnMapView_C, Minimap) == 0x000238, "Member 'UWBP_DeployMenu_SpawnMapView_C::Minimap' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SpawnMapView_C, bMenuInitialized) == 0x000240, "Member 'UWBP_DeployMenu_SpawnMapView_C::bMenuInitialized' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SpawnMapView_C, OnPreloadFinished) == 0x000248, "Member 'UWBP_DeployMenu_SpawnMapView_C::OnPreloadFinished' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SpawnMapView_C, SelectedPOIActor) == 0x000258, "Member 'UWBP_DeployMenu_SpawnMapView_C::SelectedPOIActor' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SpawnMapView_C, OnSpawnPointSelected) == 0x000260, "Member 'UWBP_DeployMenu_SpawnMapView_C::OnSpawnPointSelected' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SpawnMapView_C, OnSpawnPointDeselected) == 0x000270, "Member 'UWBP_DeployMenu_SpawnMapView_C::OnSpawnPointDeselected' has a wrong offset!");

}
