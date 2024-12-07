#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Campaign_Icon

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.IsAnyMissionCampaign
// 0x0038 (0x0038 - 0x0000)
struct ITM_Campaign_Icon_C_IsAnyMissionCampaign final
{
public:
	TArray<class UGeneratedMission*>              Missions;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AFSDPlayerState*                        Player;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOnMission;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47AB[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGeneratedMission*                      CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActiveCampaignMission_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47AC[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_Campaign_Icon_C_IsAnyMissionCampaign) == 0x000008, "Wrong alignment on ITM_Campaign_Icon_C_IsAnyMissionCampaign");
static_assert(sizeof(ITM_Campaign_Icon_C_IsAnyMissionCampaign) == 0x000038, "Wrong size on ITM_Campaign_Icon_C_IsAnyMissionCampaign");
static_assert(offsetof(ITM_Campaign_Icon_C_IsAnyMissionCampaign, Missions) == 0x000000, "Member 'ITM_Campaign_Icon_C_IsAnyMissionCampaign::Missions' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_IsAnyMissionCampaign, Player) == 0x000010, "Member 'ITM_Campaign_Icon_C_IsAnyMissionCampaign::Player' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_IsAnyMissionCampaign, IsOnMission) == 0x000018, "Member 'ITM_Campaign_Icon_C_IsAnyMissionCampaign::IsOnMission' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_IsAnyMissionCampaign, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'ITM_Campaign_Icon_C_IsAnyMissionCampaign::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_IsAnyMissionCampaign, Temp_int_Array_Index_Variable) == 0x000020, "Member 'ITM_Campaign_Icon_C_IsAnyMissionCampaign::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_IsAnyMissionCampaign, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'ITM_Campaign_Icon_C_IsAnyMissionCampaign::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_IsAnyMissionCampaign, CallFunc_Array_Get_Item) == 0x000028, "Member 'ITM_Campaign_Icon_C_IsAnyMissionCampaign::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_IsAnyMissionCampaign, CallFunc_IsActiveCampaignMission_ReturnValue) == 0x000030, "Member 'ITM_Campaign_Icon_C_IsAnyMissionCampaign::CallFunc_IsActiveCampaignMission_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_IsAnyMissionCampaign, CallFunc_Less_IntInt_ReturnValue) == 0x000031, "Member 'ITM_Campaign_Icon_C_IsAnyMissionCampaign::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_IsAnyMissionCampaign, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'ITM_Campaign_Icon_C_IsAnyMissionCampaign::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_Campaign_Icon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_Campaign_Icon_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_Campaign_Icon_C_PreConstruct");
static_assert(sizeof(ITM_Campaign_Icon_C_PreConstruct) == 0x000001, "Wrong size on ITM_Campaign_Icon_C_PreConstruct");
static_assert(offsetof(ITM_Campaign_Icon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_Campaign_Icon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.SetCampaignIconData
// 0x0010 (0x0010 - 0x0000)
struct ITM_Campaign_Icon_C_SetCampaignIconData final
{
public:
	TArray<class UGeneratedMission*>              Missions;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ITM_Campaign_Icon_C_SetCampaignIconData) == 0x000008, "Wrong alignment on ITM_Campaign_Icon_C_SetCampaignIconData");
static_assert(sizeof(ITM_Campaign_Icon_C_SetCampaignIconData) == 0x000010, "Wrong size on ITM_Campaign_Icon_C_SetCampaignIconData");
static_assert(offsetof(ITM_Campaign_Icon_C_SetCampaignIconData, Missions) == 0x000000, "Member 'ITM_Campaign_Icon_C_SetCampaignIconData::Missions' has a wrong offset!");

// Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.ExecuteUbergraph_ITM_Campaign_Icon
// 0x00E8 (0x00E8 - 0x0000)
struct ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47AD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDPlayerState*                        CallFunc_GetOwningFSDPlayerState_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47AE[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47AF[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColorsAndOpacity_OutputColor;         // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColorsAndOpacity_OutputColor_1;       // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColorsAndOpacity_OutputColor_2;       // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47B0[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGeneratedMission*>              K2Node_CustomEvent_Missions;                       // 0x0068(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsAnyMissionCampaign_IsOnMission;         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B1[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AFSDPlayerState*                        K2Node_DynamicCast_AsFSDPlayer_State;              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B2[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnyMissionCampaign_IsOnMission_1;       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B3[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_CampaignItem_Member_C*             CallFunc_Create_ReturnValue;                       // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47B4[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon) == 0x000008, "Wrong alignment on ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon");
static_assert(sizeof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon) == 0x0000E8, "Wrong size on ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, EntryPoint) == 0x000000, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, Temp_bool_Variable) == 0x000004, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_GetOwningFSDPlayerState_ReturnValue) == 0x000008, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_GetOwningFSDPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, Temp_byte_Variable) == 0x000010, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, Temp_byte_Variable_1) == 0x000011, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, Temp_int_Array_Index_Variable) == 0x000014, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, K2Node_Event_IsDesignTime) == 0x000020, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_MenuColorsAndOpacity_OutputColor) == 0x000024, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_MenuColorsAndOpacity_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_MenuColorsAndOpacity_OutputColor_1) == 0x000034, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_MenuColorsAndOpacity_OutputColor_1' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_MenuColorsAndOpacity_OutputColor_2) == 0x000044, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_MenuColorsAndOpacity_OutputColor_2' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_GetFSDGameState_ReturnValue) == 0x000060, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, K2Node_CustomEvent_Missions) == 0x000068, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::K2Node_CustomEvent_Missions' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_IsAnyMissionCampaign_IsOnMission) == 0x000078, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_IsAnyMissionCampaign_IsOnMission' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_Array_Get_Item) == 0x000080, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_GetPlayerName_ReturnValue) == 0x000088, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, K2Node_DynamicCast_AsFSDPlayer_State) == 0x000098, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::K2Node_DynamicCast_AsFSDPlayer_State' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_Array_Length_ReturnValue) == 0x0000A4, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_IsAnyMissionCampaign_IsOnMission_1) == 0x0000A8, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_IsAnyMissionCampaign_IsOnMission_1' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_Less_IntInt_ReturnValue) == 0x0000A9, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000B0, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_Create_ReturnValue) == 0x0000B8, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0000C0, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_GetPlayerController_ReturnValue) == 0x0000C8, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_GetChildrenCount_ReturnValue) == 0x0000D0, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_Greater_IntInt_ReturnValue) == 0x0000D4, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0000D5, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_BooleanOR_ReturnValue) == 0x0000D6, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_BooleanAND_ReturnValue) == 0x0000D7, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, K2Node_Select_Default) == 0x0000D8, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000E0, "Member 'ITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

