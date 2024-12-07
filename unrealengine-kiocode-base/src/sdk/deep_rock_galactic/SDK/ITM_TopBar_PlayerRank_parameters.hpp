#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_TopBar_PlayerRank

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.ExecuteUbergraph_ITM_TopBar_PlayerRank
// 0x0130 (0x0130 - 0x0000)
struct ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDPlayerState*                        CallFunc_GetFSDPlayerState_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AFSDPlayerState* PlayerState, const struct FPlayerProgress& Progress)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA3[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA4[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_3;                 // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Rank;                           // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Stars;                          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0098(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA5[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_4;                 // 0x00B4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA6[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBorder*>                        K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_5;                 // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA7[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBorder*                                CallFunc_Array_Get_Item;                           // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA8[0x2];                                     // 0x0102(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0104(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDPlayerState*                        CallFunc_GetFSDPlayerState_ReturnValue_1;          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDPlayerState*                        K2Node_CustomEvent_PlayerState;                    // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerProgress                        K2Node_CustomEvent_Progress;                       // 0x0128(0x0008)(NoDestructor)
};
static_assert(alignof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank) == 0x000008, "Wrong alignment on ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank");
static_assert(sizeof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank) == 0x000130, "Wrong size on ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, EntryPoint) == 0x000000, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_GetFSDPlayerState_ReturnValue) == 0x000008, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_GetFSDPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, K2Node_Event_IsDesignTime) == 0x000020, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_MenuColors_OutputColor) == 0x000024, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_MenuColors_OutputColor_1) == 0x000060, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_MenuColors_OutputColor_2) == 0x000070, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_MenuColors_OutputColor_3) == 0x000080, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_MenuColors_OutputColor_3' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, K2Node_CustomEvent_Rank) == 0x000090, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::K2Node_CustomEvent_Rank' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, K2Node_CustomEvent_Stars) == 0x000094, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::K2Node_CustomEvent_Stars' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_Conv_IntToText_ReturnValue) == 0x000098, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, Temp_bool_Variable) == 0x0000B0, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_MenuColors_OutputColor_4) == 0x0000B4, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_MenuColors_OutputColor_4' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, K2Node_MakeArray_Array) == 0x0000C8, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_MenuColors_OutputColor_5) == 0x0000D8, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_MenuColors_OutputColor_5' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_Array_Length_ReturnValue) == 0x0000E8, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, Temp_int_Variable) == 0x0000EC, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000F0, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000100, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_Less_IntInt_ReturnValue) == 0x000101, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, K2Node_Select_Default) == 0x000104, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_Add_IntInt_ReturnValue) == 0x000114, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, CallFunc_GetFSDPlayerState_ReturnValue_1) == 0x000118, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::CallFunc_GetFSDPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, K2Node_CustomEvent_PlayerState) == 0x000120, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::K2Node_CustomEvent_PlayerState' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank, K2Node_CustomEvent_Progress) == 0x000128, "Member 'ITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank::K2Node_CustomEvent_Progress' has a wrong offset!");

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.OnPlayerProgressChanged
// 0x0010 (0x0010 - 0x0000)
struct ITM_TopBar_PlayerRank_C_OnPlayerProgressChanged final
{
public:
	class AFSDPlayerState*                        PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerProgress                        Progress;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(ITM_TopBar_PlayerRank_C_OnPlayerProgressChanged) == 0x000008, "Wrong alignment on ITM_TopBar_PlayerRank_C_OnPlayerProgressChanged");
static_assert(sizeof(ITM_TopBar_PlayerRank_C_OnPlayerProgressChanged) == 0x000010, "Wrong size on ITM_TopBar_PlayerRank_C_OnPlayerProgressChanged");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_OnPlayerProgressChanged, PlayerState) == 0x000000, "Member 'ITM_TopBar_PlayerRank_C_OnPlayerProgressChanged::PlayerState' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_OnPlayerProgressChanged, Progress) == 0x000008, "Member 'ITM_TopBar_PlayerRank_C_OnPlayerProgressChanged::Progress' has a wrong offset!");

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.SetRankAndStars
// 0x0008 (0x0008 - 0x0000)
struct ITM_TopBar_PlayerRank_C_SetRankAndStars final
{
public:
	int32                                         Rank;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stars;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_TopBar_PlayerRank_C_SetRankAndStars) == 0x000004, "Wrong alignment on ITM_TopBar_PlayerRank_C_SetRankAndStars");
static_assert(sizeof(ITM_TopBar_PlayerRank_C_SetRankAndStars) == 0x000008, "Wrong size on ITM_TopBar_PlayerRank_C_SetRankAndStars");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_SetRankAndStars, Rank) == 0x000000, "Member 'ITM_TopBar_PlayerRank_C_SetRankAndStars::Rank' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_SetRankAndStars, Stars) == 0x000004, "Member 'ITM_TopBar_PlayerRank_C_SetRankAndStars::Stars' has a wrong offset!");

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_TopBar_PlayerRank_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_TopBar_PlayerRank_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_TopBar_PlayerRank_C_PreConstruct");
static_assert(sizeof(ITM_TopBar_PlayerRank_C_PreConstruct) == 0x000001, "Wrong size on ITM_TopBar_PlayerRank_C_PreConstruct");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_TopBar_PlayerRank_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.FromPlayerState
// 0x0018 (0x0018 - 0x0000)
struct ITM_TopBar_PlayerRank_C_FromPlayerState final
{
public:
	class APlayerState*                           PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDPlayerState*                        K2Node_DynamicCast_AsFSDPlayer_State;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_TopBar_PlayerRank_C_FromPlayerState) == 0x000008, "Wrong alignment on ITM_TopBar_PlayerRank_C_FromPlayerState");
static_assert(sizeof(ITM_TopBar_PlayerRank_C_FromPlayerState) == 0x000018, "Wrong size on ITM_TopBar_PlayerRank_C_FromPlayerState");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_FromPlayerState, PlayerState) == 0x000000, "Member 'ITM_TopBar_PlayerRank_C_FromPlayerState::PlayerState' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_FromPlayerState, K2Node_DynamicCast_AsFSDPlayer_State) == 0x000008, "Member 'ITM_TopBar_PlayerRank_C_FromPlayerState::K2Node_DynamicCast_AsFSDPlayer_State' has a wrong offset!");
static_assert(offsetof(ITM_TopBar_PlayerRank_C_FromPlayerState, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ITM_TopBar_PlayerRank_C_FromPlayerState::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

