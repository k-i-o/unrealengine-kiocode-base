#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_CommunityGoalRewardToolTip

#include "Basic.hpp"


namespace SDK::Params
{

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.ExecuteUbergraph_ITM_CommunityGoalRewardToolTip
// 0x0010 (0x0010 - 0x0000)
struct ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_407E[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip) == 0x000004, "Wrong alignment on ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip");
static_assert(sizeof(ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip) == 0x000010, "Wrong size on ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip, EntryPoint) == 0x000000, "Member 'ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip, K2Node_Event_IsDesignTime) == 0x000005, "Member 'ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip, CallFunc_BreakVector2D_X) == 0x000008, "Member 'ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip, CallFunc_BreakVector2D_Y) == 0x00000C, "Member 'ITM_CommunityGoalRewardToolTip_C_ExecuteUbergraph_ITM_CommunityGoalRewardToolTip::CallFunc_BreakVector2D_Y' has a wrong offset!");

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_CommunityGoalRewardToolTip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_CommunityGoalRewardToolTip_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_CommunityGoalRewardToolTip_C_PreConstruct");
static_assert(sizeof(ITM_CommunityGoalRewardToolTip_C_PreConstruct) == 0x000001, "Wrong size on ITM_CommunityGoalRewardToolTip_C_PreConstruct");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_CommunityGoalRewardToolTip_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetFaction
// 0x0008 (0x0008 - 0x0000)
struct ITM_CommunityGoalRewardToolTip_C_SetFaction final
{
public:
	class UCommunityGoalFaction*                  Param_Faction;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CommunityGoalRewardToolTip_C_SetFaction) == 0x000008, "Wrong alignment on ITM_CommunityGoalRewardToolTip_C_SetFaction");
static_assert(sizeof(ITM_CommunityGoalRewardToolTip_C_SetFaction) == 0x000008, "Wrong size on ITM_CommunityGoalRewardToolTip_C_SetFaction");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_SetFaction, Param_Faction) == 0x000000, "Member 'ITM_CommunityGoalRewardToolTip_C_SetFaction::Param_Faction' has a wrong offset!");

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.BuildResources
// 0x0208 (0x0208 - 0x0000)
struct ITM_CommunityGoalRewardToolTip_C_BuildResources final
{
public:
	int32                                         Tier;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_407F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBox*                         TempHBox;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UResourceData*, int32>             ResourceMap;                                       // 0x0010(0x0050)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4080[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4081[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UResourceData*>                  CallFunc_Map_Keys_Keys;                            // 0x0080(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4082[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4083[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBox*                         CallFunc_CreateHorizontalBox_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4084[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UResourceData*>                  CallFunc_Map_Keys_Keys_1;                          // 0x00B8(0x0010)(ReferenceParm)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResourceData*                          CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_RewardResourceAditive_C*            CallFunc_Create_ReturnValue;                       // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4085[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4086[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBox*                         CallFunc_CreateHorizontalBox_ReturnValue_1;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UResourceData*, int32>             CallFunc_GetResourcesTierOnlyReward_ReturnValue;   // 0x0108(0x0050)()
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_2;      // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4087[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResourceData*                          CallFunc_Array_Get_Item_1;                         // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4088[0x3];                                     // 0x0175(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value;                           // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4089[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_RewardResourceAditive_C*            CallFunc_Create_ReturnValue_1;                     // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value_1;                         // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_408A[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_3;      // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         CallFunc_CreateHorizontalBox_ReturnValue_2;        // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_408B[0x6];                                     // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UResourceData*, int32>             CallFunc_GetResourcesReward_ReturnValue;           // 0x01B8(0x0050)()
};
static_assert(alignof(ITM_CommunityGoalRewardToolTip_C_BuildResources) == 0x000008, "Wrong alignment on ITM_CommunityGoalRewardToolTip_C_BuildResources");
static_assert(sizeof(ITM_CommunityGoalRewardToolTip_C_BuildResources) == 0x000208, "Wrong size on ITM_CommunityGoalRewardToolTip_C_BuildResources");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, Tier) == 0x000000, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::Tier' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, TempHBox) == 0x000008, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::TempHBox' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, ResourceMap) == 0x000010, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::ResourceMap' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, Temp_int_Loop_Counter_Variable) == 0x000060, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, Temp_int_Loop_Counter_Variable_1) == 0x00006C, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, Temp_int_Array_Index_Variable) == 0x000074, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Percent_IntInt_ReturnValue) == 0x000078, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Map_Keys_Keys) == 0x000080, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000090, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Array_Length_ReturnValue) == 0x000094, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Less_IntInt_ReturnValue_1) == 0x000098, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_CreateHorizontalBox_ReturnValue) == 0x0000A0, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_CreateHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0000A8, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Map_Keys_Keys_1) == 0x0000B8, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000C8, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Create_ReturnValue) == 0x0000D8, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Array_Length_ReturnValue_1) == 0x0000E0, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000E4, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_AddChild_ReturnValue) == 0x0000E8, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_AddChildToVerticalBox_ReturnValue_1) == 0x0000F0, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_AddChildToVerticalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_IsValid_ReturnValue_1) == 0x0000F8, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_IsValid_ReturnValue_2) == 0x0000F9, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_CreateHorizontalBox_ReturnValue_1) == 0x000100, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_CreateHorizontalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_GetResourcesTierOnlyReward_ReturnValue) == 0x000108, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_GetResourcesTierOnlyReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_AddChildToVerticalBox_ReturnValue_2) == 0x000158, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_AddChildToVerticalBox_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_IsValid_ReturnValue_3) == 0x000160, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, Temp_int_Array_Index_Variable_1) == 0x000164, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Array_Get_Item_1) == 0x000168, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Percent_IntInt_ReturnValue_1) == 0x000170, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000174, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Map_Find_Value) == 0x000178, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Map_Find_ReturnValue) == 0x00017C, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000180, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Create_ReturnValue_1) == 0x000188, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Map_Find_Value_1) == 0x000190, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_Map_Find_ReturnValue_1) == 0x000194, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_AddChild_ReturnValue_1) == 0x000198, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_AddChildToVerticalBox_ReturnValue_3) == 0x0001A0, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_AddChildToVerticalBox_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_CreateHorizontalBox_ReturnValue_2) == 0x0001A8, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_CreateHorizontalBox_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_IsValid_ReturnValue_4) == 0x0001B0, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_IsValid_ReturnValue_5) == 0x0001B1, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_BuildResources, CallFunc_GetResourcesReward_ReturnValue) == 0x0001B8, "Member 'ITM_CommunityGoalRewardToolTip_C_BuildResources::CallFunc_GetResourcesReward_ReturnValue' has a wrong offset!");

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetGoalResultTier
// 0x0010 (0x0010 - 0x0000)
struct ITM_CommunityGoalRewardToolTip_C_SetGoalResultTier final
{
public:
	int32                                         Tier;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_408C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommunityGoal*                         Goal;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CommunityGoalRewardToolTip_C_SetGoalResultTier) == 0x000008, "Wrong alignment on ITM_CommunityGoalRewardToolTip_C_SetGoalResultTier");
static_assert(sizeof(ITM_CommunityGoalRewardToolTip_C_SetGoalResultTier) == 0x000010, "Wrong size on ITM_CommunityGoalRewardToolTip_C_SetGoalResultTier");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_SetGoalResultTier, Tier) == 0x000000, "Member 'ITM_CommunityGoalRewardToolTip_C_SetGoalResultTier::Tier' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_SetGoalResultTier, Goal) == 0x000008, "Member 'ITM_CommunityGoalRewardToolTip_C_SetGoalResultTier::Goal' has a wrong offset!");

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.TotalTiers
// 0x0008 (0x0008 - 0x0000)
struct ITM_CommunityGoalRewardToolTip_C_TotalTiers final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CommunityGoalRewardToolTip_C_TotalTiers) == 0x000004, "Wrong alignment on ITM_CommunityGoalRewardToolTip_C_TotalTiers");
static_assert(sizeof(ITM_CommunityGoalRewardToolTip_C_TotalTiers) == 0x000008, "Wrong size on ITM_CommunityGoalRewardToolTip_C_TotalTiers");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_TotalTiers, ReturnValue) == 0x000000, "Member 'ITM_CommunityGoalRewardToolTip_C_TotalTiers::ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_TotalTiers, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'ITM_CommunityGoalRewardToolTip_C_TotalTiers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetGoal
// 0x0008 (0x0008 - 0x0000)
struct ITM_CommunityGoalRewardToolTip_C_SetGoal final
{
public:
	class UCommunityGoal*                         Goal;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CommunityGoalRewardToolTip_C_SetGoal) == 0x000008, "Wrong alignment on ITM_CommunityGoalRewardToolTip_C_SetGoal");
static_assert(sizeof(ITM_CommunityGoalRewardToolTip_C_SetGoal) == 0x000008, "Wrong size on ITM_CommunityGoalRewardToolTip_C_SetGoal");
static_assert(offsetof(ITM_CommunityGoalRewardToolTip_C_SetGoal, Goal) == 0x000000, "Member 'ITM_CommunityGoalRewardToolTip_C_SetGoal::Goal' has a wrong offset!");

}
