#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameState_SpaceRig

#include "Basic.hpp"

#include "OnlineSubsystemUtils_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMisionSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_GameState_SpaceRig_C_OnMisionSelected__DelegateSignature final
{
public:
	class UGeneratedMission*                      Mission;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_SpaceRig_C_OnMisionSelected__DelegateSignature) == 0x000008, "Wrong alignment on BP_GameState_SpaceRig_C_OnMisionSelected__DelegateSignature");
static_assert(sizeof(BP_GameState_SpaceRig_C_OnMisionSelected__DelegateSignature) == 0x000008, "Wrong size on BP_GameState_SpaceRig_C_OnMisionSelected__DelegateSignature");
static_assert(offsetof(BP_GameState_SpaceRig_C_OnMisionSelected__DelegateSignature, Mission) == 0x000000, "Member 'BP_GameState_SpaceRig_C_OnMisionSelected__DelegateSignature::Mission' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionCountdownChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_GameState_SpaceRig_C_OnMissionCountdownChanged__DelegateSignature final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GameState_SpaceRig_C_OnMissionCountdownChanged__DelegateSignature) == 0x000001, "Wrong alignment on BP_GameState_SpaceRig_C_OnMissionCountdownChanged__DelegateSignature");
static_assert(sizeof(BP_GameState_SpaceRig_C_OnMissionCountdownChanged__DelegateSignature) == 0x000001, "Wrong size on BP_GameState_SpaceRig_C_OnMissionCountdownChanged__DelegateSignature");
static_assert(offsetof(BP_GameState_SpaceRig_C_OnMissionCountdownChanged__DelegateSignature, IsActive) == 0x000000, "Member 'BP_GameState_SpaceRig_C_OnMissionCountdownChanged__DelegateSignature::IsActive' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostCountdownChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_GameState_SpaceRig_C_OnHostCountdownChanged__DelegateSignature final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GameState_SpaceRig_C_OnHostCountdownChanged__DelegateSignature) == 0x000001, "Wrong alignment on BP_GameState_SpaceRig_C_OnHostCountdownChanged__DelegateSignature");
static_assert(sizeof(BP_GameState_SpaceRig_C_OnHostCountdownChanged__DelegateSignature) == 0x000001, "Wrong size on BP_GameState_SpaceRig_C_OnHostCountdownChanged__DelegateSignature");
static_assert(offsetof(BP_GameState_SpaceRig_C_OnHostCountdownChanged__DelegateSignature, IsActive) == 0x000000, "Member 'BP_GameState_SpaceRig_C_OnHostCountdownChanged__DelegateSignature::IsActive' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostTimerChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_GameState_SpaceRig_C_OnHostTimerChanged__DelegateSignature final
{
public:
	float                                         NewTime;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_SpaceRig_C_OnHostTimerChanged__DelegateSignature) == 0x000004, "Wrong alignment on BP_GameState_SpaceRig_C_OnHostTimerChanged__DelegateSignature");
static_assert(sizeof(BP_GameState_SpaceRig_C_OnHostTimerChanged__DelegateSignature) == 0x000004, "Wrong size on BP_GameState_SpaceRig_C_OnHostTimerChanged__DelegateSignature");
static_assert(offsetof(BP_GameState_SpaceRig_C_OnHostTimerChanged__DelegateSignature, NewTime) == 0x000000, "Member 'BP_GameState_SpaceRig_C_OnHostTimerChanged__DelegateSignature::NewTime' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionTimerChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_GameState_SpaceRig_C_OnMissionTimerChanged__DelegateSignature final
{
public:
	float                                         NewTime;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_SpaceRig_C_OnMissionTimerChanged__DelegateSignature) == 0x000004, "Wrong alignment on BP_GameState_SpaceRig_C_OnMissionTimerChanged__DelegateSignature");
static_assert(sizeof(BP_GameState_SpaceRig_C_OnMissionTimerChanged__DelegateSignature) == 0x000004, "Wrong size on BP_GameState_SpaceRig_C_OnMissionTimerChanged__DelegateSignature");
static_assert(offsetof(BP_GameState_SpaceRig_C_OnMissionTimerChanged__DelegateSignature, NewTime) == 0x000000, "Member 'BP_GameState_SpaceRig_C_OnMissionTimerChanged__DelegateSignature::NewTime' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_GameState_SpaceRig_C_OnCountdownChanged__DelegateSignature final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GameState_SpaceRig_C_OnCountdownChanged__DelegateSignature) == 0x000001, "Wrong alignment on BP_GameState_SpaceRig_C_OnCountdownChanged__DelegateSignature");
static_assert(sizeof(BP_GameState_SpaceRig_C_OnCountdownChanged__DelegateSignature) == 0x000001, "Wrong size on BP_GameState_SpaceRig_C_OnCountdownChanged__DelegateSignature");
static_assert(offsetof(BP_GameState_SpaceRig_C_OnCountdownChanged__DelegateSignature, Active) == 0x000000, "Member 'BP_GameState_SpaceRig_C_OnCountdownChanged__DelegateSignature::Active' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ExecuteUbergraph_BP_GameState_SpaceRig
// 0x00F0 (0x00F0 - 0x0000)
struct BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3778[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBlueprintSessionResult>        K2Node_CustomEvent_Results_2;                      // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FBlueprintSessionResult>        K2Node_CustomEvent_Results_1;                      // 0x0018(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(TArray<struct FBlueprintSessionResult>& Results)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FBlueprintSessionResult>        K2Node_CustomEvent_Results;                        // 0x0038(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(TArray<struct FBlueprintSessionResult>& Results)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FBlueprintSessionResult>        Temp_struct_Variable;                              // 0x0058(0x0010)(ReferenceParm)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3779[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_2;               // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_377A[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0080(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0097(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_377B[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TArray<struct FBlueprintSessionResult>& Results)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_377C[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDFindSessionsCallbackProxy*          CallFunc_FSDFindSessions_ReturnValue;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_377D[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue_1;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue;       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAutoRefreshServerlist_ReturnValue;     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AreDeepDiveRequirementsMet_ReturnValue;   // 0x00E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_377E[0x2];                                     // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue_2;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig) == 0x000008, "Wrong alignment on BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig");
static_assert(sizeof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig) == 0x0000F0, "Wrong size on BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, EntryPoint) == 0x000000, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, K2Node_CustomEvent_Results_2) == 0x000008, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::K2Node_CustomEvent_Results_2' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, K2Node_CustomEvent_Results_1) == 0x000018, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::K2Node_CustomEvent_Results_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, K2Node_CustomEvent_Results) == 0x000038, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::K2Node_CustomEvent_Results' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, Temp_struct_Variable) == 0x000058, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_HasAuthority_ReturnValue) == 0x000068, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_HasAuthority_ReturnValue_1) == 0x000069, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, K2Node_CreateDelegate_OutputDelegate_2) == 0x00006C, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_HasAuthority_ReturnValue_2) == 0x00007C, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000080, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, K2Node_Event_DeltaSeconds) == 0x000088, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00008C, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000090, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, Temp_bool_Has_Been_Initd_Variable) == 0x000094, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000095, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_BooleanAND_ReturnValue) == 0x000096, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000097, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_BooleanAND_ReturnValue_1) == 0x000098, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, K2Node_CreateDelegate_OutputDelegate_3) == 0x00009C, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_GetFSDGameInstance_ReturnValue) == 0x0000B0, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_GetPlayerController_ReturnValue) == 0x0000B8, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_FSDFindSessions_ReturnValue) == 0x0000C0, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_FSDFindSessions_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_GetFSDGameInstance_ReturnValue_1) == 0x0000D0, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_GetFSDGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_GetFSDGameUserSettings_ReturnValue) == 0x0000D8, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_GetFSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_GetAutoRefreshServerlist_ReturnValue) == 0x0000E0, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_GetAutoRefreshServerlist_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_BooleanOR_ReturnValue) == 0x0000E1, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0000E2, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_AreDeepDiveRequirementsMet_ReturnValue) == 0x0000E3, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_AreDeepDiveRequirementsMet_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, Temp_bool_IsClosed_Variable) == 0x0000E4, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x0000E5, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig, CallFunc_GetFSDGameInstance_ReturnValue_2) == 0x0000E8, "Member 'BP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig::CallFunc_GetFSDGameInstance_ReturnValue_2' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_GameState_SpaceRig_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_SpaceRig_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_GameState_SpaceRig_C_ReceiveTick");
static_assert(sizeof(BP_GameState_SpaceRig_C_ReceiveTick) == 0x000004, "Wrong size on BP_GameState_SpaceRig_C_ReceiveTick");
static_assert(offsetof(BP_GameState_SpaceRig_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_GameState_SpaceRig_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnSuccess_3EF307534AC5AC56C0D60384C554CF10
// 0x0010 (0x0010 - 0x0000)
struct BP_GameState_SpaceRig_C_OnSuccess_3EF307534AC5AC56C0D60384C554CF10 final
{
public:
	TArray<struct FBlueprintSessionResult>        Results;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_GameState_SpaceRig_C_OnSuccess_3EF307534AC5AC56C0D60384C554CF10) == 0x000008, "Wrong alignment on BP_GameState_SpaceRig_C_OnSuccess_3EF307534AC5AC56C0D60384C554CF10");
static_assert(sizeof(BP_GameState_SpaceRig_C_OnSuccess_3EF307534AC5AC56C0D60384C554CF10) == 0x000010, "Wrong size on BP_GameState_SpaceRig_C_OnSuccess_3EF307534AC5AC56C0D60384C554CF10");
static_assert(offsetof(BP_GameState_SpaceRig_C_OnSuccess_3EF307534AC5AC56C0D60384C554CF10, Results) == 0x000000, "Member 'BP_GameState_SpaceRig_C_OnSuccess_3EF307534AC5AC56C0D60384C554CF10::Results' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnFailure_3EF307534AC5AC56C0D60384C554CF10
// 0x0010 (0x0010 - 0x0000)
struct BP_GameState_SpaceRig_C_OnFailure_3EF307534AC5AC56C0D60384C554CF10 final
{
public:
	TArray<struct FBlueprintSessionResult>        Results;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_GameState_SpaceRig_C_OnFailure_3EF307534AC5AC56C0D60384C554CF10) == 0x000008, "Wrong alignment on BP_GameState_SpaceRig_C_OnFailure_3EF307534AC5AC56C0D60384C554CF10");
static_assert(sizeof(BP_GameState_SpaceRig_C_OnFailure_3EF307534AC5AC56C0D60384C554CF10) == 0x000010, "Wrong size on BP_GameState_SpaceRig_C_OnFailure_3EF307534AC5AC56C0D60384C554CF10");
static_assert(offsetof(BP_GameState_SpaceRig_C_OnFailure_3EF307534AC5AC56C0D60384C554CF10, Results) == 0x000000, "Member 'BP_GameState_SpaceRig_C_OnFailure_3EF307534AC5AC56C0D60384C554CF10::Results' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRefresh_3EF307534AC5AC56C0D60384C554CF10
// 0x0010 (0x0010 - 0x0000)
struct BP_GameState_SpaceRig_C_OnRefresh_3EF307534AC5AC56C0D60384C554CF10 final
{
public:
	TArray<struct FBlueprintSessionResult>        Results;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_GameState_SpaceRig_C_OnRefresh_3EF307534AC5AC56C0D60384C554CF10) == 0x000008, "Wrong alignment on BP_GameState_SpaceRig_C_OnRefresh_3EF307534AC5AC56C0D60384C554CF10");
static_assert(sizeof(BP_GameState_SpaceRig_C_OnRefresh_3EF307534AC5AC56C0D60384C554CF10) == 0x000010, "Wrong size on BP_GameState_SpaceRig_C_OnRefresh_3EF307534AC5AC56C0D60384C554CF10");
static_assert(offsetof(BP_GameState_SpaceRig_C_OnRefresh_3EF307534AC5AC56C0D60384C554CF10, Results) == 0x000000, "Member 'BP_GameState_SpaceRig_C_OnRefresh_3EF307534AC5AC56C0D60384C554CF10::Results' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionTimerActive
// 0x0001 (0x0001 - 0x0000)
struct BP_GameState_SpaceRig_C_OnRep_MissionTimerActive final
{
public:
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GameState_SpaceRig_C_OnRep_MissionTimerActive) == 0x000001, "Wrong alignment on BP_GameState_SpaceRig_C_OnRep_MissionTimerActive");
static_assert(sizeof(BP_GameState_SpaceRig_C_OnRep_MissionTimerActive) == 0x000001, "Wrong size on BP_GameState_SpaceRig_C_OnRep_MissionTimerActive");
static_assert(offsetof(BP_GameState_SpaceRig_C_OnRep_MissionTimerActive, CallFunc_BooleanOR_ReturnValue) == 0x000000, "Member 'BP_GameState_SpaceRig_C_OnRep_MissionTimerActive::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdownActive
// 0x0001 (0x0001 - 0x0000)
struct BP_GameState_SpaceRig_C_OnRep_HostCountdownActive final
{
public:
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GameState_SpaceRig_C_OnRep_HostCountdownActive) == 0x000001, "Wrong alignment on BP_GameState_SpaceRig_C_OnRep_HostCountdownActive");
static_assert(sizeof(BP_GameState_SpaceRig_C_OnRep_HostCountdownActive) == 0x000001, "Wrong size on BP_GameState_SpaceRig_C_OnRep_HostCountdownActive");
static_assert(offsetof(BP_GameState_SpaceRig_C_OnRep_HostCountdownActive, CallFunc_BooleanOR_ReturnValue) == 0x000000, "Member 'BP_GameState_SpaceRig_C_OnRep_HostCountdownActive::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.HandleActiveCountdown
// 0x0008 (0x0008 - 0x0000)
struct BP_GameState_SpaceRig_C_HandleActiveCountdown final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AreDeepDiveRequirementsMet_ReturnValue;   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GameState_SpaceRig_C_HandleActiveCountdown) == 0x000001, "Wrong alignment on BP_GameState_SpaceRig_C_HandleActiveCountdown");
static_assert(sizeof(BP_GameState_SpaceRig_C_HandleActiveCountdown) == 0x000008, "Wrong size on BP_GameState_SpaceRig_C_HandleActiveCountdown");
static_assert(offsetof(BP_GameState_SpaceRig_C_HandleActiveCountdown, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_GameState_SpaceRig_C_HandleActiveCountdown::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_HandleActiveCountdown, CallFunc_AreDeepDiveRequirementsMet_ReturnValue) == 0x000001, "Member 'BP_GameState_SpaceRig_C_HandleActiveCountdown::CallFunc_AreDeepDiveRequirementsMet_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_HandleActiveCountdown, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'BP_GameState_SpaceRig_C_HandleActiveCountdown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_HandleActiveCountdown, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000003, "Member 'BP_GameState_SpaceRig_C_HandleActiveCountdown::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_HandleActiveCountdown, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'BP_GameState_SpaceRig_C_HandleActiveCountdown::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_HandleActiveCountdown, CallFunc_BooleanAND_ReturnValue_1) == 0x000005, "Member 'BP_GameState_SpaceRig_C_HandleActiveCountdown::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_HandleActiveCountdown, CallFunc_BooleanAND_ReturnValue_2) == 0x000006, "Member 'BP_GameState_SpaceRig_C_HandleActiveCountdown::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_HandleActiveCountdown, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x000007, "Member 'BP_GameState_SpaceRig_C_HandleActiveCountdown::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");

// Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.AreDeepDiveRequirementsMet
// 0x0030 (0x0030 - 0x0000)
struct BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_377F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMissionModeManager>   CallFunc_GetDeepDiveManager_ReturnValue;           // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_AreAllSelectedClassesQualified_ReturnValue; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3780[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSingleMission_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet) == 0x000008, "Wrong alignment on BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet");
static_assert(sizeof(BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet) == 0x000030, "Wrong size on BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet");
static_assert(offsetof(BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet, ReturnValue) == 0x000000, "Member 'BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet, CallFunc_GetDeepDiveManager_ReturnValue) == 0x000008, "Member 'BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet::CallFunc_GetDeepDiveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet, CallFunc_AreAllSelectedClassesQualified_ReturnValue) == 0x000018, "Member 'BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet::CallFunc_AreAllSelectedClassesQualified_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000020, "Member 'BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet, CallFunc_IsSingleMission_ReturnValue) == 0x000028, "Member 'BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet::CallFunc_IsSingleMission_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet, CallFunc_BooleanOR_ReturnValue) == 0x00002A, "Member 'BP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

