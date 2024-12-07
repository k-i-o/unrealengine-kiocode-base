#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleScreen_Seasons_NextReward

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.ExecuteUbergraph_ConsoleScreen_Seasons_NextReward
// 0x00B0 (0x00B0 - 0x0000)
struct ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AE5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSeasonLevel                           K2Node_CustomEvent_Season_Level;                   // 0x0008(0x0018)(NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AE6[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRewardText_Title;                      // 0x0028(0x0018)()
	class FText                                   CallFunc_GetRewardText_Category;                   // 0x0040(0x0018)()
	class FText                                   CallFunc_GetRewardText_Description;                // 0x0058(0x0018)()
	bool                                          CallFunc_GetRewardText_HasOptionalCharacterID;     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AE7[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     CallFunc_GetRewardText_CharacterID;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USeasonsSubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSeasonLevel                           CallFunc_GetNextReward_ReturnValue;                // 0x0088(0x0018)(NoDestructor, ContainsInstancedReference)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward) == 0x000008, "Wrong alignment on ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward");
static_assert(sizeof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward) == 0x0000B0, "Wrong size on ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward, EntryPoint) == 0x000000, "Member 'ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward::EntryPoint' has a wrong offset!");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward, K2Node_CustomEvent_Season_Level) == 0x000008, "Member 'ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward::K2Node_CustomEvent_Season_Level' has a wrong offset!");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward, K2Node_Event_IsDesignTime) == 0x000020, "Member 'ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward, CallFunc_GetRewardText_Title) == 0x000028, "Member 'ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward::CallFunc_GetRewardText_Title' has a wrong offset!");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward, CallFunc_GetRewardText_Category) == 0x000040, "Member 'ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward::CallFunc_GetRewardText_Category' has a wrong offset!");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward, CallFunc_GetRewardText_Description) == 0x000058, "Member 'ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward::CallFunc_GetRewardText_Description' has a wrong offset!");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward, CallFunc_GetRewardText_HasOptionalCharacterID) == 0x000070, "Member 'ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward::CallFunc_GetRewardText_HasOptionalCharacterID' has a wrong offset!");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward, CallFunc_GetRewardText_CharacterID) == 0x000078, "Member 'ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward::CallFunc_GetRewardText_CharacterID' has a wrong offset!");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000080, "Member 'ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward, CallFunc_GetNextReward_ReturnValue) == 0x000088, "Member 'ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward::CallFunc_GetNextReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward, CallFunc_MenuColors_OutputColor) == 0x0000A0, "Member 'ConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward::CallFunc_MenuColors_OutputColor' has a wrong offset!");

// Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ConsoleScreen_Seasons_NextReward_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ConsoleScreen_Seasons_NextReward_C_PreConstruct) == 0x000001, "Wrong alignment on ConsoleScreen_Seasons_NextReward_C_PreConstruct");
static_assert(sizeof(ConsoleScreen_Seasons_NextReward_C_PreConstruct) == 0x000001, "Wrong size on ConsoleScreen_Seasons_NextReward_C_PreConstruct");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ConsoleScreen_Seasons_NextReward_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.SetData
// 0x0018 (0x0018 - 0x0000)
struct ConsoleScreen_Seasons_NextReward_C_SetData final
{
public:
	struct FSeasonLevel                           Season_Level;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(ConsoleScreen_Seasons_NextReward_C_SetData) == 0x000008, "Wrong alignment on ConsoleScreen_Seasons_NextReward_C_SetData");
static_assert(sizeof(ConsoleScreen_Seasons_NextReward_C_SetData) == 0x000018, "Wrong size on ConsoleScreen_Seasons_NextReward_C_SetData");
static_assert(offsetof(ConsoleScreen_Seasons_NextReward_C_SetData, Season_Level) == 0x000000, "Member 'ConsoleScreen_Seasons_NextReward_C_SetData::Season_Level' has a wrong offset!");

}

