#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Community_Console_ClaimReward

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C.ExecuteUbergraph_ITM_Community_Console_ClaimReward
// 0x00F8 (0x00F8 - 0x0000)
struct ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFSDFaction                                   Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A3C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommunityGoalFaction*                  Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommunityGoalFaction*                  Temp_object_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommunityGoalFaction*                  Temp_object_Variable_2;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommunityGoalFaction*                  Temp_object_Variable_3;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A3D[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColorsAndOpacity_OutputColor;         // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A3E[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDSaveGame*                           CallFunc_GetFSDSaveGame_ReturnValue;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFSDFaction                                   CallFunc_GetFaction_ReturnValue;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A3F[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommunityGoalFaction*                  K2Node_Select_Default;                             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0070(0x0088)()
};
static_assert(alignof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward) == 0x000008, "Wrong alignment on ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward");
static_assert(sizeof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward) == 0x0000F8, "Wrong size on ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, EntryPoint) == 0x000000, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, Temp_byte_Variable) == 0x000004, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, Temp_object_Variable) == 0x000010, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, Temp_object_Variable_1) == 0x000018, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, Temp_object_Variable_2) == 0x000020, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, Temp_object_Variable_3) == 0x000028, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, K2Node_Event_IsDesignTime) == 0x000030, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, CallFunc_MenuColors_OutputColor) == 0x000034, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, CallFunc_MenuColorsAndOpacity_OutputColor) == 0x000044, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::CallFunc_MenuColorsAndOpacity_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, CallFunc_GetFSDSaveGame_ReturnValue) == 0x000058, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::CallFunc_GetFSDSaveGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, CallFunc_GetFaction_ReturnValue) == 0x000060, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::CallFunc_GetFaction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, K2Node_Select_Default) == 0x000068, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward, K2Node_MakeStruct_SlateBrush) == 0x000070, "Member 'ITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_Community_Console_ClaimReward_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_Community_Console_ClaimReward_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_Community_Console_ClaimReward_C_PreConstruct");
static_assert(sizeof(ITM_Community_Console_ClaimReward_C_PreConstruct) == 0x000001, "Wrong size on ITM_Community_Console_ClaimReward_C_PreConstruct");
static_assert(offsetof(ITM_Community_Console_ClaimReward_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_Community_Console_ClaimReward_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

