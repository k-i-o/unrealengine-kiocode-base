#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ObjectiveMarker_Beam_F2S

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ObjectiveMarker_Beam_F2S.BP_ObjectiveMarker_Beam_F2S_C.ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S
// 0x0048 (0x0048 - 0x0000)
struct BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22D0[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_RotatorRotator_ReturnValue;      // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Debug_ShoudShowBeams_ShowBeams;           // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Debug_ShoudShowBeams_ShowBeams1;          // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Debug_ShoudShowBeams_ShowBeams2;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Debug_ShoudShowBeams_ShowBeams3;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22D1[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBFGObjectiveMarkerSettings*            CallFunc_GetSettings_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22D2[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBFGObjectiveMarkerSettings*            CallFunc_GetSettings_ReturnValue1;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S) == 0x000008, "Wrong alignment on BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S");
static_assert(sizeof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S) == 0x000048, "Wrong size on BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, EntryPoint) == 0x000000, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_Add_FloatFloat_ReturnValue) == 0x00000C, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000010, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_K2_SetActorRotation_ReturnValue) == 0x00001C, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_NotEqual_RotatorRotator_ReturnValue) == 0x00001D, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_NotEqual_RotatorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_Debug_ShoudShowBeams_ShowBeams) == 0x00001E, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_Debug_ShoudShowBeams_ShowBeams' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_Debug_ShoudShowBeams_ShowBeams1) == 0x00001F, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_Debug_ShoudShowBeams_ShowBeams1' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_Debug_ShoudShowBeams_ShowBeams2) == 0x000020, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_Debug_ShoudShowBeams_ShowBeams2' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_Debug_ShoudShowBeams_ShowBeams3) == 0x000021, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_Debug_ShoudShowBeams_ShowBeams3' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_GetSettings_ReturnValue) == 0x000028, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_GetSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_GetSettings_ReturnValue1) == 0x000038, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_GetSettings_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S, CallFunc_IsValid_ReturnValue1) == 0x000040, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S::CallFunc_IsValid_ReturnValue1' has a wrong offset!");

// Function BP_ObjectiveMarker_Beam_F2S.BP_ObjectiveMarker_Beam_F2S_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ObjectiveMarker_Beam_F2S_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjectiveMarker_Beam_F2S_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ObjectiveMarker_Beam_F2S_C_ReceiveTick");
static_assert(sizeof(BP_ObjectiveMarker_Beam_F2S_C_ReceiveTick) == 0x000004, "Wrong size on BP_ObjectiveMarker_Beam_F2S_C_ReceiveTick");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ObjectiveMarker_Beam_F2S_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ObjectiveMarker_Beam_F2S.BP_ObjectiveMarker_Beam_F2S_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct BP_ObjectiveMarker_Beam_F2S_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjectiveMarker_Beam_F2S_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_ObjectiveMarker_Beam_F2S_C_UserConstructionScript");
static_assert(sizeof(BP_ObjectiveMarker_Beam_F2S_C_UserConstructionScript) == 0x000008, "Wrong size on BP_ObjectiveMarker_Beam_F2S_C_UserConstructionScript");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'BP_ObjectiveMarker_Beam_F2S_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function BP_ObjectiveMarker_Beam_F2S.BP_ObjectiveMarker_Beam_F2S_C.Debug_ShoudShowBeams
// 0x000C (0x000C - 0x0000)
struct BP_ObjectiveMarker_Beam_F2S_C_Debug_ShoudShowBeams final
{
public:
	bool                                          ShowBeams;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22D3[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetGameIniInt_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ObjectiveMarker_Beam_F2S_C_Debug_ShoudShowBeams) == 0x000004, "Wrong alignment on BP_ObjectiveMarker_Beam_F2S_C_Debug_ShoudShowBeams");
static_assert(sizeof(BP_ObjectiveMarker_Beam_F2S_C_Debug_ShoudShowBeams) == 0x00000C, "Wrong size on BP_ObjectiveMarker_Beam_F2S_C_Debug_ShoudShowBeams");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_Debug_ShoudShowBeams, ShowBeams) == 0x000000, "Member 'BP_ObjectiveMarker_Beam_F2S_C_Debug_ShoudShowBeams::ShowBeams' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_Debug_ShoudShowBeams, CallFunc_GetGameIniInt_ReturnValue) == 0x000004, "Member 'BP_ObjectiveMarker_Beam_F2S_C_Debug_ShoudShowBeams::CallFunc_GetGameIniInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjectiveMarker_Beam_F2S_C_Debug_ShoudShowBeams, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'BP_ObjectiveMarker_Beam_F2S_C_Debug_ShoudShowBeams::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

