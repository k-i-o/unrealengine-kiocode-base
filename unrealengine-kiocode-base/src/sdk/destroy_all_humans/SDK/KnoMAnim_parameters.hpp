#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KnoMAnim

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function knoMAnim.knoMAnim_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct KnoMAnim_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(KnoMAnim_C_AnimGraph) == 0x000008, "Wrong alignment on KnoMAnim_C_AnimGraph");
static_assert(sizeof(KnoMAnim_C_AnimGraph) == 0x000010, "Wrong size on KnoMAnim_C_AnimGraph");
static_assert(offsetof(KnoMAnim_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'KnoMAnim_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function knoMAnim.knoMAnim_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct KnoMAnim_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KnoMAnim_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on KnoMAnim_C_BlueprintUpdateAnimation");
static_assert(sizeof(KnoMAnim_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on KnoMAnim_C_BlueprintUpdateAnimation");
static_assert(offsetof(KnoMAnim_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'KnoMAnim_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function knoMAnim.knoMAnim_C.ExecuteUbergraph_knoMAnim
// 0x0058 (0x0058 - 0x0000)
struct KnoMAnim_C_ExecuteUbergraph_knoMAnim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AReferenceManager_C*                    CallFunc_GetRefMgr_RefMgr;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEnemyManager_C*                        CallFunc_GetEnemyManager_EnemyManager;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239C[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239D[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239E[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AKnoM_C*                                K2Node_DynamicCast_AsKno_M;                        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239F[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KnoMAnim_C_ExecuteUbergraph_knoMAnim) == 0x000008, "Wrong alignment on KnoMAnim_C_ExecuteUbergraph_knoMAnim");
static_assert(sizeof(KnoMAnim_C_ExecuteUbergraph_knoMAnim) == 0x000058, "Wrong size on KnoMAnim_C_ExecuteUbergraph_knoMAnim");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, EntryPoint) == 0x000000, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::EntryPoint' has a wrong offset!");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, CallFunc_GetRefMgr_RefMgr) == 0x000008, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::CallFunc_GetRefMgr_RefMgr' has a wrong offset!");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, CallFunc_GetEnemyManager_EnemyManager) == 0x000010, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::CallFunc_GetEnemyManager_EnemyManager' has a wrong offset!");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue) == 0x000018, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00001C, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1) == 0x000020, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x000024, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, K2Node_Event_DeltaTimeX) == 0x000028, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000030, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, K2Node_DynamicCast_AsKno_M) == 0x000038, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::K2Node_DynamicCast_AsKno_M' has a wrong offset!");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(KnoMAnim_C_ExecuteUbergraph_knoMAnim, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1) == 0x000050, "Member 'KnoMAnim_C_ExecuteUbergraph_knoMAnim::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

}
