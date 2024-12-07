#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Season_ChallengeTimer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.ExecuteUbergraph_ITM_Season_ChallengeTimer
// 0x0060 (0x0060 - 0x0000)
struct ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EB0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USeasonsSubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PauseAnimation_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EB1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_TimeToNewChallenge_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EB2[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3EB3[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer) == 0x000008, "Wrong alignment on ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer");
static_assert(sizeof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer) == 0x000060, "Wrong size on ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer");
static_assert(offsetof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer, EntryPoint) == 0x000000, "Member 'ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer, CallFunc_PauseAnimation_ReturnValue) == 0x000010, "Member 'ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer::CallFunc_PauseAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer, CallFunc_TimeToNewChallenge_ReturnValue) == 0x000018, "Member 'ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer::CallFunc_TimeToNewChallenge_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000020, "Member 'ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer, CallFunc_GetTotalSeconds_ReturnValue) == 0x000024, "Member 'ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000030, "Member 'ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000048, "Member 'ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer, CallFunc_PlayAnimationForward_ReturnValue) == 0x000050, "Member 'ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000058, "Member 'ITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

}

