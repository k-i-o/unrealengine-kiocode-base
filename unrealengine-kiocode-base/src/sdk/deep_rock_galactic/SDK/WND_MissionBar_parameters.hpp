#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_MissionBar

#include "Basic.hpp"

#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function WND_MissionBar.WND_MissionBar_C.ExecuteUbergraph_WND_MissionBar
// 0x0038 (0x0038 - 0x0000)
struct WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UGeneratedMission* OutGeneratedMission)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_38F3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGeneratedMission*                      K2Node_CustomEvent_OutGeneratedMission;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue_1;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar) == 0x000008, "Wrong alignment on WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar");
static_assert(sizeof(WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar) == 0x000038, "Wrong size on WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar");
static_assert(offsetof(WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar, EntryPoint) == 0x000000, "Member 'WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000018, "Member 'WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar, K2Node_CustomEvent_OutGeneratedMission) == 0x000020, "Member 'WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar::K2Node_CustomEvent_OutGeneratedMission' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar, CallFunc_GetFSDGameInstance_ReturnValue_1) == 0x000028, "Member 'WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar::CallFunc_GetFSDGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar, K2Node_Event_IsDesignTime) == 0x000030, "Member 'WND_MissionBar_C_ExecuteUbergraph_WND_MissionBar::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WND_MissionBar.WND_MissionBar_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WND_MissionBar_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WND_MissionBar_C_PreConstruct) == 0x000001, "Wrong alignment on WND_MissionBar_C_PreConstruct");
static_assert(sizeof(WND_MissionBar_C_PreConstruct) == 0x000001, "Wrong size on WND_MissionBar_C_PreConstruct");
static_assert(offsetof(WND_MissionBar_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WND_MissionBar_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WND_MissionBar.WND_MissionBar_C.OnGeneratedMissionChanged
// 0x0008 (0x0008 - 0x0000)
struct WND_MissionBar_C_OnGeneratedMissionChanged final
{
public:
	class UGeneratedMission*                      OutGeneratedMission;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WND_MissionBar_C_OnGeneratedMissionChanged) == 0x000008, "Wrong alignment on WND_MissionBar_C_OnGeneratedMissionChanged");
static_assert(sizeof(WND_MissionBar_C_OnGeneratedMissionChanged) == 0x000008, "Wrong size on WND_MissionBar_C_OnGeneratedMissionChanged");
static_assert(offsetof(WND_MissionBar_C_OnGeneratedMissionChanged, OutGeneratedMission) == 0x000000, "Member 'WND_MissionBar_C_OnGeneratedMissionChanged::OutGeneratedMission' has a wrong offset!");

// Function WND_MissionBar.WND_MissionBar_C.SetGeneratedMission
// 0x0020 (0x0020 - 0x0000)
struct WND_MissionBar_C_SetGeneratedMission final
{
public:
	class UGeneratedMission*                      InMission;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       SlotWidget;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Widget;                                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSingleMission_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WND_MissionBar_C_SetGeneratedMission) == 0x000008, "Wrong alignment on WND_MissionBar_C_SetGeneratedMission");
static_assert(sizeof(WND_MissionBar_C_SetGeneratedMission) == 0x000020, "Wrong size on WND_MissionBar_C_SetGeneratedMission");
static_assert(offsetof(WND_MissionBar_C_SetGeneratedMission, InMission) == 0x000000, "Member 'WND_MissionBar_C_SetGeneratedMission::InMission' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetGeneratedMission, SlotWidget) == 0x000008, "Member 'WND_MissionBar_C_SetGeneratedMission::SlotWidget' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetGeneratedMission, Widget) == 0x000010, "Member 'WND_MissionBar_C_SetGeneratedMission::Widget' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetGeneratedMission, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WND_MissionBar_C_SetGeneratedMission::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetGeneratedMission, CallFunc_IsSingleMission_ReturnValue) == 0x000019, "Member 'WND_MissionBar_C_SetGeneratedMission::CallFunc_IsSingleMission_ReturnValue' has a wrong offset!");

// Function WND_MissionBar.WND_MissionBar_C.SetMissionType
// 0x00A0 (0x00A0 - 0x0000)
struct WND_MissionBar_C_SetMissionType final
{
public:
	bool                                          IsSingleMission;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38F4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       SlotWidget;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Widget;                                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncManager*                          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0020(0x0010)(NoDestructor)
	TScriptInterface<class IMissionModeManager>   CallFunc_GetDeepDiveManager_ReturnValue;           // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TSoftClassPtr<class UClass>                   CallFunc_GetMissionBarWidget_ReturnValue;          // 0x0040(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    CallFunc_SyncLoadClass_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38F5[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWND_MissionBar_Normal_C*               CallFunc_Create_ReturnValue_1;                     // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WND_MissionBar_C_SetMissionType) == 0x000008, "Wrong alignment on WND_MissionBar_C_SetMissionType");
static_assert(sizeof(WND_MissionBar_C_SetMissionType) == 0x0000A0, "Wrong size on WND_MissionBar_C_SetMissionType");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, IsSingleMission) == 0x000000, "Member 'WND_MissionBar_C_SetMissionType::IsSingleMission' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, SlotWidget) == 0x000008, "Member 'WND_MissionBar_C_SetMissionType::SlotWidget' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, Widget) == 0x000010, "Member 'WND_MissionBar_C_SetMissionType::Widget' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000018, "Member 'WND_MissionBar_C_SetMissionType::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, K2Node_MakeStruct_Anchors) == 0x000020, "Member 'WND_MissionBar_C_SetMissionType::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, CallFunc_GetDeepDiveManager_ReturnValue) == 0x000030, "Member 'WND_MissionBar_C_SetMissionType::CallFunc_GetDeepDiveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, CallFunc_GetMissionBarWidget_ReturnValue) == 0x000040, "Member 'WND_MissionBar_C_SetMissionType::CallFunc_GetMissionBarWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, CallFunc_SyncLoadClass_ReturnValue) == 0x000068, "Member 'WND_MissionBar_C_SetMissionType::CallFunc_SyncLoadClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, K2Node_ClassDynamicCast_AsUser_Widget) == 0x000070, "Member 'WND_MissionBar_C_SetMissionType::K2Node_ClassDynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, K2Node_ClassDynamicCast_bSuccess) == 0x000078, "Member 'WND_MissionBar_C_SetMissionType::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, CallFunc_GetOwningPlayer_ReturnValue) == 0x000080, "Member 'WND_MissionBar_C_SetMissionType::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, CallFunc_AddChildToCanvas_ReturnValue) == 0x000088, "Member 'WND_MissionBar_C_SetMissionType::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, CallFunc_Create_ReturnValue) == 0x000090, "Member 'WND_MissionBar_C_SetMissionType::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_C_SetMissionType, CallFunc_Create_ReturnValue_1) == 0x000098, "Member 'WND_MissionBar_C_SetMissionType::CallFunc_Create_ReturnValue_1' has a wrong offset!");

}
