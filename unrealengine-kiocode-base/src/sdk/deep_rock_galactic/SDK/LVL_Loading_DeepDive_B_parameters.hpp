#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LVL_Loading_DeepDive_B

#include "Basic.hpp"


namespace SDK::Params
{

// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ExecuteUbergraph_LVL_Loading_DeepDive_B
// 0x0048 (0x0048 - 0x0000)
struct LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ULevelSequence* LoaderLevelSequence)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_356F[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                         K2Node_CustomEvent_LoaderLevelSequence;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B) == 0x000008, "Wrong alignment on LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B");
static_assert(sizeof(LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B) == 0x000048, "Wrong size on LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B, EntryPoint) == 0x000000, "Member 'LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B::EntryPoint' has a wrong offset!");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000028, "Member 'LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B, K2Node_CustomEvent_LoaderLevelSequence) == 0x000030, "Member 'LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B::K2Node_CustomEvent_LoaderLevelSequence' has a wrong offset!");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B, CallFunc_GetFSDGameInstance_ReturnValue_1) == 0x000038, "Member 'LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B::CallFunc_GetFSDGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B, CallFunc_IsPlayInEditor_ReturnValue) == 0x000040, "Member 'LVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B::CallFunc_IsPlayInEditor_ReturnValue' has a wrong offset!");

// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStart
// 0x0008 (0x0008 - 0x0000)
struct LVL_Loading_DeepDive_B_C_PlayerStart final
{
public:
	class ULevelSequence*                         LoaderLevelSequence;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LVL_Loading_DeepDive_B_C_PlayerStart) == 0x000008, "Wrong alignment on LVL_Loading_DeepDive_B_C_PlayerStart");
static_assert(sizeof(LVL_Loading_DeepDive_B_C_PlayerStart) == 0x000008, "Wrong size on LVL_Loading_DeepDive_B_C_PlayerStart");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_PlayerStart, LoaderLevelSequence) == 0x000000, "Member 'LVL_Loading_DeepDive_B_C_PlayerStart::LoaderLevelSequence' has a wrong offset!");

// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.Start Player
// 0x0038 (0x0038 - 0x0000)
struct LVL_Loading_DeepDive_B_C_Start_Player final
{
public:
	class ULevelSequence*                         LevelSequence;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPathName_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    CallFunc_CreateLevelSequencePlayer_OutActor;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                   CallFunc_CreateLevelSequencePlayer_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LVL_Loading_DeepDive_B_C_Start_Player) == 0x000008, "Wrong alignment on LVL_Loading_DeepDive_B_C_Start_Player");
static_assert(sizeof(LVL_Loading_DeepDive_B_C_Start_Player) == 0x000038, "Wrong size on LVL_Loading_DeepDive_B_C_Start_Player");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_Start_Player, LevelSequence) == 0x000000, "Member 'LVL_Loading_DeepDive_B_C_Start_Player::LevelSequence' has a wrong offset!");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_Start_Player, CallFunc_GetPathName_ReturnValue) == 0x000008, "Member 'LVL_Loading_DeepDive_B_C_Start_Player::CallFunc_GetPathName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_Start_Player, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'LVL_Loading_DeepDive_B_C_Start_Player::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_Start_Player, CallFunc_CreateLevelSequencePlayer_OutActor) == 0x000028, "Member 'LVL_Loading_DeepDive_B_C_Start_Player::CallFunc_CreateLevelSequencePlayer_OutActor' has a wrong offset!");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_Start_Player, CallFunc_CreateLevelSequencePlayer_ReturnValue) == 0x000030, "Member 'LVL_Loading_DeepDive_B_C_Start_Player::CallFunc_CreateLevelSequencePlayer_ReturnValue' has a wrong offset!");

// Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StopPlayer
// 0x0001 (0x0001 - 0x0000)
struct LVL_Loading_DeepDive_B_C_StopPlayer final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LVL_Loading_DeepDive_B_C_StopPlayer) == 0x000001, "Wrong alignment on LVL_Loading_DeepDive_B_C_StopPlayer");
static_assert(sizeof(LVL_Loading_DeepDive_B_C_StopPlayer) == 0x000001, "Wrong size on LVL_Loading_DeepDive_B_C_StopPlayer");
static_assert(offsetof(LVL_Loading_DeepDive_B_C_StopPlayer, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'LVL_Loading_DeepDive_B_C_StopPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
