#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReferenceManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ReferenceManager.ReferenceManager_C
// 0x0078 (0x0308 - 0x0290)
class AReferenceManager_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar;                                            // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_241C[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATurnManager_C*                         TurnManager;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UHUDWIdget_C*                           HUD;                                               // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerControllerBP_C*                  PlayerController;                                  // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AEnemyManager_C*                        EnemyManager;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AGridManagerBP_C*                       Grid;                                              // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AImporterBP_C*                          Importer;                                          // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ULoadLevelWidget_C*                     LoadLevelHud;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CombatLog;                                         // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ADisplayManager_C*                      DisplayManager;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DT;                                                // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                GameInstance;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ALanguageManager_C*                     LanguageManager;                                   // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CreateHUD();
	void ExecuteUbergraph_ReferenceManager(int32 EntryPoint);
	void GetDeltaTime(double* Param_DT);
	void GetDisplayManager(class ADisplayManager_C** NewParam);
	void GetEnemyManager(class AEnemyManager_C** Param_EnemyManager);
	void GetGridManager(class AGridManagerBP_C** Param_Grid);
	void GetHUD(class UHUDWIdget_C** Param_HUD);
	void GetImporter(class AImporterBP_C** Param_Importer);
	void GetPlayerController(class APlayerControllerBP_C** PC);
	void GetTurnMgr(class ATurnManager_C** Turn_Mg);
	void ImPlayerController(class APlayerControllerBP_C* PC);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReferenceManager_C">();
	}
	static class AReferenceManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReferenceManager_C>();
	}
};
static_assert(alignof(AReferenceManager_C) == 0x000008, "Wrong alignment on AReferenceManager_C");
static_assert(sizeof(AReferenceManager_C) == 0x000308, "Wrong size on AReferenceManager_C");
static_assert(offsetof(AReferenceManager_C, UberGraphFrame) == 0x000290, "Member 'AReferenceManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, DefaultSceneRoot) == 0x000298, "Member 'AReferenceManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, NewVar) == 0x0002A0, "Member 'AReferenceManager_C::NewVar' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, TurnManager) == 0x0002A8, "Member 'AReferenceManager_C::TurnManager' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, HUD) == 0x0002B0, "Member 'AReferenceManager_C::HUD' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, PlayerController) == 0x0002B8, "Member 'AReferenceManager_C::PlayerController' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, EnemyManager) == 0x0002C0, "Member 'AReferenceManager_C::EnemyManager' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, Grid) == 0x0002C8, "Member 'AReferenceManager_C::Grid' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, Importer) == 0x0002D0, "Member 'AReferenceManager_C::Importer' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, LoadLevelHud) == 0x0002D8, "Member 'AReferenceManager_C::LoadLevelHud' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, CombatLog) == 0x0002E0, "Member 'AReferenceManager_C::CombatLog' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, DisplayManager) == 0x0002E8, "Member 'AReferenceManager_C::DisplayManager' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, DT) == 0x0002F0, "Member 'AReferenceManager_C::DT' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, GameInstance) == 0x0002F8, "Member 'AReferenceManager_C::GameInstance' has a wrong offset!");
static_assert(offsetof(AReferenceManager_C, LanguageManager) == 0x000300, "Member 'AReferenceManager_C::LanguageManager' has a wrong offset!");

}
