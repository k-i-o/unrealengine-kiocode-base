#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Component_ChainReaction

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Component_ChainReaction.BP_Component_ChainReaction_C.ExecuteUbergraph_BP_Component_ChainReaction
// 0x0088 (0x0088 - 0x0000)
struct BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_205C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagQuery                      K2Node_CustomEvent_ChainReactionQuery;             // 0x0008(0x0048)(ConstParm)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_205D[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ActorComponent_ChainReactionManager_C* CallFunc_GetManager_MyMngr;                        // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_205E[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ActorComponent_ChainReactionManager_C* CallFunc_GetManager_MyMngr1;                       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_205F[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ActorComponent_ChainReactionManager_C* CallFunc_GetManager_MyMngr2;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction) == 0x000008, "Wrong alignment on BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction");
static_assert(sizeof(BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction) == 0x000088, "Wrong size on BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction");
static_assert(offsetof(BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction, EntryPoint) == 0x000000, "Member 'BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction, K2Node_CustomEvent_ChainReactionQuery) == 0x000008, "Member 'BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction::K2Node_CustomEvent_ChainReactionQuery' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction, K2Node_Event_EndPlayReason) == 0x000050, "Member 'BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction, CallFunc_GetManager_MyMngr) == 0x000058, "Member 'BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction::CallFunc_GetManager_MyMngr' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction, CallFunc_GetManager_MyMngr1) == 0x000068, "Member 'BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction::CallFunc_GetManager_MyMngr1' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction, CallFunc_IsValid_ReturnValue1) == 0x000070, "Member 'BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction, CallFunc_GetManager_MyMngr2) == 0x000078, "Member 'BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction::CallFunc_GetManager_MyMngr2' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction, CallFunc_IsValid_ReturnValue2) == 0x000080, "Member 'BP_Component_ChainReaction_C_ExecuteUbergraph_BP_Component_ChainReaction::CallFunc_IsValid_ReturnValue2' has a wrong offset!");

// Function BP_Component_ChainReaction.BP_Component_ChainReaction_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_Component_ChainReaction_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Component_ChainReaction_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_Component_ChainReaction_C_ReceiveEndPlay");
static_assert(sizeof(BP_Component_ChainReaction_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_Component_ChainReaction_C_ReceiveEndPlay");
static_assert(offsetof(BP_Component_ChainReaction_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_Component_ChainReaction_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_Component_ChainReaction.BP_Component_ChainReaction_C.TriggerChainReaction
// 0x0048 (0x0048 - 0x0000)
struct BP_Component_ChainReaction_C_TriggerChainReaction final
{
public:
	struct FGameplayTagQuery                      ChainReactionQuery;                                // 0x0000(0x0048)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_Component_ChainReaction_C_TriggerChainReaction) == 0x000008, "Wrong alignment on BP_Component_ChainReaction_C_TriggerChainReaction");
static_assert(sizeof(BP_Component_ChainReaction_C_TriggerChainReaction) == 0x000048, "Wrong size on BP_Component_ChainReaction_C_TriggerChainReaction");
static_assert(offsetof(BP_Component_ChainReaction_C_TriggerChainReaction, ChainReactionQuery) == 0x000000, "Member 'BP_Component_ChainReaction_C_TriggerChainReaction::ChainReactionQuery' has a wrong offset!");

// Function BP_Component_ChainReaction.BP_Component_ChainReaction_C.DoChainReaction
// 0x0048 (0x0048 - 0x0000)
struct BP_Component_ChainReaction_C_DoChainReaction final
{
public:
	class UBP_Component_ChainReaction_C*          _SourceComponent;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 LocalOwner;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2060[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_ChainReactionInterface_C> K2Node_DynamicCast_AsBP_Chain_Reaction_Interface;  // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2061[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_OverheadOpportunityWidgetComponent_C* CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Component_ChainReaction_C_DoChainReaction) == 0x000008, "Wrong alignment on BP_Component_ChainReaction_C_DoChainReaction");
static_assert(sizeof(BP_Component_ChainReaction_C_DoChainReaction) == 0x000048, "Wrong size on BP_Component_ChainReaction_C_DoChainReaction");
static_assert(offsetof(BP_Component_ChainReaction_C_DoChainReaction, _SourceComponent) == 0x000000, "Member 'BP_Component_ChainReaction_C_DoChainReaction::_SourceComponent' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_DoChainReaction, LocalOwner) == 0x000008, "Member 'BP_Component_ChainReaction_C_DoChainReaction::LocalOwner' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_DoChainReaction, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Component_ChainReaction_C_DoChainReaction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_DoChainReaction, K2Node_DynamicCast_AsBP_Chain_Reaction_Interface) == 0x000018, "Member 'BP_Component_ChainReaction_C_DoChainReaction::K2Node_DynamicCast_AsBP_Chain_Reaction_Interface' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_DoChainReaction, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_Component_ChainReaction_C_DoChainReaction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_DoChainReaction, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'BP_Component_ChainReaction_C_DoChainReaction::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_DoChainReaction, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_Component_ChainReaction_C_DoChainReaction::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_DoChainReaction, CallFunc_IsValid_ReturnValue1) == 0x000040, "Member 'BP_Component_ChainReaction_C_DoChainReaction::CallFunc_IsValid_ReturnValue1' has a wrong offset!");

// Function BP_Component_ChainReaction.BP_Component_ChainReaction_C.GetManager
// 0x0020 (0x0020 - 0x0000)
struct BP_Component_ChainReaction_C_GetManager final
{
public:
	class UBP_ActorComponent_ChainReactionManager_C* Param_MyMngr;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2062[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ActorComponent_ChainReactionManager_C* CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Component_ChainReaction_C_GetManager) == 0x000008, "Wrong alignment on BP_Component_ChainReaction_C_GetManager");
static_assert(sizeof(BP_Component_ChainReaction_C_GetManager) == 0x000020, "Wrong size on BP_Component_ChainReaction_C_GetManager");
static_assert(offsetof(BP_Component_ChainReaction_C_GetManager, Param_MyMngr) == 0x000000, "Member 'BP_Component_ChainReaction_C_GetManager::Param_MyMngr' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_GetManager, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'BP_Component_ChainReaction_C_GetManager::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_GetManager, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Component_ChainReaction_C_GetManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_GetManager, CallFunc_IsValid_ReturnValue1) == 0x000011, "Member 'BP_Component_ChainReaction_C_GetManager::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Component_ChainReaction_C_GetManager, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_Component_ChainReaction_C_GetManager::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

}

