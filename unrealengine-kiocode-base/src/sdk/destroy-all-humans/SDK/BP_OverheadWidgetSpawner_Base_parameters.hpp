#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OverheadWidgetSpawner_Base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_OverheadWidgetSpawner_Base.BP_OverheadWidgetSpawner_Base_C.ExecuteUbergraph_BP_OverheadWidgetSpawner_Base
// 0x0068 (0x0068 - 0x0000)
struct BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPrespawningPoolPhase_ReturnValue;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21ED[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21EE[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABFGGameState*                          K2Node_DynamicCast_AsBFGGame_State;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21EF[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBFGOverheadWidgetManager*              CallFunc_GetOverheadWidgetManager_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_Event__bAutomaticallyReactivateComponents;  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21F0[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue1;                    // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base) == 0x000008, "Wrong alignment on BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base");
static_assert(sizeof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base) == 0x000068, "Wrong size on BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base, EntryPoint) == 0x000000, "Member 'BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base, CallFunc_IsPrespawningPoolPhase_ReturnValue) == 0x000004, "Member 'BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base::CallFunc_IsPrespawningPoolPhase_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base, K2Node_DynamicCast_AsBFGGame_State) == 0x000020, "Member 'BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base::K2Node_DynamicCast_AsBFGGame_State' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base, CallFunc_GetOverheadWidgetManager_ReturnValue) == 0x000030, "Member 'BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base::CallFunc_GetOverheadWidgetManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base, CallFunc_Conv_TextToString_ReturnValue) == 0x000038, "Member 'BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base, K2Node_Event__bAutomaticallyReactivateComponents) == 0x000048, "Member 'BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base::K2Node_Event__bAutomaticallyReactivateComponents' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base, CallFunc_GetOwner_ReturnValue) == 0x000050, "Member 'BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base, CallFunc_GetOwner_ReturnValue1) == 0x000058, "Member 'BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base::CallFunc_GetOwner_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BP_OverheadWidgetSpawner_Base_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_OverheadWidgetSpawner_Base.BP_OverheadWidgetSpawner_Base_C.OnRetrieveFromPool
// 0x0001 (0x0001 - 0x0000)
struct BP_OverheadWidgetSpawner_Base_C_OnRetrieveFromPool final
{
public:
	bool                                          _bAutomaticallyReactivateComponents;               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_OverheadWidgetSpawner_Base_C_OnRetrieveFromPool) == 0x000001, "Wrong alignment on BP_OverheadWidgetSpawner_Base_C_OnRetrieveFromPool");
static_assert(sizeof(BP_OverheadWidgetSpawner_Base_C_OnRetrieveFromPool) == 0x000001, "Wrong size on BP_OverheadWidgetSpawner_Base_C_OnRetrieveFromPool");
static_assert(offsetof(BP_OverheadWidgetSpawner_Base_C_OnRetrieveFromPool, _bAutomaticallyReactivateComponents) == 0x000000, "Member 'BP_OverheadWidgetSpawner_Base_C_OnRetrieveFromPool::_bAutomaticallyReactivateComponents' has a wrong offset!");

}
