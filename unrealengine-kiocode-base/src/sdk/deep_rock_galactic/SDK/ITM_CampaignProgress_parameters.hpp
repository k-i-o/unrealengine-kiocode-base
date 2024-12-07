#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_CampaignProgress

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.ExecuteUbergraph_ITM_CampaignProgress
// 0x0088 (0x0088 - 0x0000)
struct ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D0C[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCampaign*                              K2Node_CustomEvent_Campaign;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCampaignManager*                       CallFunc_GetCampaingManager_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D0D[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_CampaignItem_C*                    CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCampaignMission*                       CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D0E[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCampaignManager*                       CallFunc_GetCampaingManager_ReturnValue_1;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D0F[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress) == 0x000008, "Wrong alignment on ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress");
static_assert(sizeof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress) == 0x000088, "Wrong size on ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, EntryPoint) == 0x000000, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, K2Node_Event_IsDesignTime) == 0x000011, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, K2Node_CustomEvent_Campaign) == 0x000018, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::K2Node_CustomEvent_Campaign' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_GetCampaingManager_ReturnValue) == 0x000020, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_GetCampaingManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_Create_ReturnValue) == 0x000038, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_Array_Get_Item) == 0x000040, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_AddChild_ReturnValue) == 0x000050, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_GetCampaingManager_ReturnValue_1) == 0x000058, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_GetCampaingManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000060, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000061, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_BooleanAND_ReturnValue) == 0x000062, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_Greater_IntInt_ReturnValue) == 0x000063, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_BooleanAND_ReturnValue_1) == 0x000064, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_MenuColors_OutputColor) == 0x000068, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress, CallFunc_MenuColors_OutputColor_1) == 0x000078, "Member 'ITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.Update_Campaign
// 0x0008 (0x0008 - 0x0000)
struct ITM_CampaignProgress_C_Update_Campaign final
{
public:
	class UCampaign*                              Param_Campaign;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CampaignProgress_C_Update_Campaign) == 0x000008, "Wrong alignment on ITM_CampaignProgress_C_Update_Campaign");
static_assert(sizeof(ITM_CampaignProgress_C_Update_Campaign) == 0x000008, "Wrong size on ITM_CampaignProgress_C_Update_Campaign");
static_assert(offsetof(ITM_CampaignProgress_C_Update_Campaign, Param_Campaign) == 0x000000, "Member 'ITM_CampaignProgress_C_Update_Campaign::Param_Campaign' has a wrong offset!");

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_CampaignProgress_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_CampaignProgress_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_CampaignProgress_C_PreConstruct");
static_assert(sizeof(ITM_CampaignProgress_C_PreConstruct) == 0x000001, "Wrong size on ITM_CampaignProgress_C_PreConstruct");
static_assert(offsetof(ITM_CampaignProgress_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_CampaignProgress_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.TryPingMission
// 0x0020 (0x0020 - 0x0000)
struct ITM_CampaignProgress_C_TryPingMission final
{
public:
	int32                                         MissionIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D10[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_CampaignItem_C*                    K2Node_DynamicCast_AsITM_Campaign_Item;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_CampaignProgress_C_TryPingMission) == 0x000008, "Wrong alignment on ITM_CampaignProgress_C_TryPingMission");
static_assert(sizeof(ITM_CampaignProgress_C_TryPingMission) == 0x000020, "Wrong size on ITM_CampaignProgress_C_TryPingMission");
static_assert(offsetof(ITM_CampaignProgress_C_TryPingMission, MissionIndex) == 0x000000, "Member 'ITM_CampaignProgress_C_TryPingMission::MissionIndex' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_TryPingMission, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'ITM_CampaignProgress_C_TryPingMission::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_TryPingMission, K2Node_DynamicCast_AsITM_Campaign_Item) == 0x000010, "Member 'ITM_CampaignProgress_C_TryPingMission::K2Node_DynamicCast_AsITM_Campaign_Item' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_TryPingMission, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ITM_CampaignProgress_C_TryPingMission::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.ShowCampaignProgress
// 0x00C8 (0x00C8 - 0x0000)
struct ITM_CampaignProgress_C_ShowCampaignProgress final
{
public:
	class UCampaign*                              Param_Campaign;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Progress;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D11[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0010(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0028(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D12[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D13[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D14[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerControllerBase_C*             CallFunc_GetPlayerControllerBase_Controller;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDPlayerState*                        CallFunc_GetFSDPlayerState_ReturnValue;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterID*                     CallFunc_GetSelectedCharacterID_ReturnValue;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayingOffline_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D15[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D16[0x5];                                     // 0x0083(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0088(0x0018)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_CampaignItem_C*                    CallFunc_Create_ReturnValue;                       // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCampaignMission*                       CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D17[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CampaignProgress_C_ShowCampaignProgress) == 0x000008, "Wrong alignment on ITM_CampaignProgress_C_ShowCampaignProgress");
static_assert(sizeof(ITM_CampaignProgress_C_ShowCampaignProgress) == 0x0000C8, "Wrong size on ITM_CampaignProgress_C_ShowCampaignProgress");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, Param_Campaign) == 0x000000, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::Param_Campaign' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, Progress) == 0x000008, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::Progress' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, Temp_bool_Variable) == 0x00000C, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, Temp_text_Variable) == 0x000010, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, Temp_text_Variable_1) == 0x000028, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, Temp_int_Array_Index_Variable) == 0x000044, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000048, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000050, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_Greater_IntInt_ReturnValue) == 0x000051, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_GetPlayerControllerBase_Controller) == 0x000058, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_GetPlayerControllerBase_Controller' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_GetFSDPlayerState_ReturnValue) == 0x000060, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_GetFSDPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_GetSelectedCharacterID_ReturnValue) == 0x000068, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_GetSelectedCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_IsPlayingOffline_ReturnValue) == 0x000070, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_IsPlayingOffline_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_GetFSDGameState_ReturnValue) == 0x000078, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000080, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_HasAuthority_ReturnValue) == 0x000081, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_BooleanOR_ReturnValue) == 0x000082, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, K2Node_Select_Default) == 0x000088, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000A0, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_Create_ReturnValue) == 0x0000A8, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_Array_Length_ReturnValue) == 0x0000B8, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_Less_IntInt_ReturnValue) == 0x0000BC, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_C_ShowCampaignProgress, CallFunc_AddChild_ReturnValue) == 0x0000C0, "Member 'ITM_CampaignProgress_C_ShowCampaignProgress::CallFunc_AddChild_ReturnValue' has a wrong offset!");

}

