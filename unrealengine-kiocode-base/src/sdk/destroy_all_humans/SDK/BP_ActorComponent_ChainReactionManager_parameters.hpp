#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorComponent_ChainReactionManager

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_ActorComponent_ChainReactionManager.BP_ActorComponent_ChainReactionManager_C.RegisterChainReaction
// 0x0010 (0x0010 - 0x0000)
struct BP_ActorComponent_ChainReactionManager_C_RegisterChainReaction final
{
public:
	class UBP_Component_ChainReaction_C*          _Component;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22C3[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActorComponent_ChainReactionManager_C_RegisterChainReaction) == 0x000008, "Wrong alignment on BP_ActorComponent_ChainReactionManager_C_RegisterChainReaction");
static_assert(sizeof(BP_ActorComponent_ChainReactionManager_C_RegisterChainReaction) == 0x000010, "Wrong size on BP_ActorComponent_ChainReactionManager_C_RegisterChainReaction");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_RegisterChainReaction, _Component) == 0x000000, "Member 'BP_ActorComponent_ChainReactionManager_C_RegisterChainReaction::_Component' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_RegisterChainReaction, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_ActorComponent_ChainReactionManager_C_RegisterChainReaction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_RegisterChainReaction, CallFunc_Array_AddUnique_ReturnValue) == 0x00000C, "Member 'BP_ActorComponent_ChainReactionManager_C_RegisterChainReaction::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function BP_ActorComponent_ChainReactionManager.BP_ActorComponent_ChainReactionManager_C.UnregisterChainReaction
// 0x0010 (0x0010 - 0x0000)
struct BP_ActorComponent_ChainReactionManager_C_UnregisterChainReaction final
{
public:
	class UBP_Component_ChainReaction_C*          _Component;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActorComponent_ChainReactionManager_C_UnregisterChainReaction) == 0x000008, "Wrong alignment on BP_ActorComponent_ChainReactionManager_C_UnregisterChainReaction");
static_assert(sizeof(BP_ActorComponent_ChainReactionManager_C_UnregisterChainReaction) == 0x000010, "Wrong size on BP_ActorComponent_ChainReactionManager_C_UnregisterChainReaction");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_UnregisterChainReaction, _Component) == 0x000000, "Member 'BP_ActorComponent_ChainReactionManager_C_UnregisterChainReaction::_Component' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_UnregisterChainReaction, CallFunc_Array_RemoveItem_ReturnValue) == 0x000008, "Member 'BP_ActorComponent_ChainReactionManager_C_UnregisterChainReaction::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function BP_ActorComponent_ChainReactionManager.BP_ActorComponent_ChainReactionManager_C.TriggerReaction
// 0x00A0 (0x00A0 - 0x0000)
struct BP_ActorComponent_ChainReactionManager_C_TriggerReaction final
{
public:
	class UBP_Component_ChainReaction_C*          _SourceComponent;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagQuery                      _EventQuery;                                       // 0x0008(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UBP_Component_ChainReaction_C*          LocalIter;                                         // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_Component_ChainReaction_C*>  LocalComponents;                                   // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          CallFunc_IsGameplayTagQueryEmpty_ReturnValue;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22C4[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Component_ChainReaction_C*          CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22C5[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue1;                    // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesObjectMatchQuery_ReturnValue;         // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction) == 0x000008, "Wrong alignment on BP_ActorComponent_ChainReactionManager_C_TriggerReaction");
static_assert(sizeof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction) == 0x0000A0, "Wrong size on BP_ActorComponent_ChainReactionManager_C_TriggerReaction");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, _SourceComponent) == 0x000000, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::_SourceComponent' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, _EventQuery) == 0x000008, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::_EventQuery' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, LocalIter) == 0x000050, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::LocalIter' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, LocalComponents) == 0x000058, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::LocalComponents' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_IsGameplayTagQueryEmpty_ReturnValue) == 0x000068, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_IsGameplayTagQueryEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_IsValid_ReturnValue1) == 0x00006A, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, Temp_int_Loop_Counter_Variable) == 0x00006C, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, Temp_int_Array_Index_Variable) == 0x000074, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_Array_Get_Item) == 0x000078, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_GetOwner_ReturnValue) == 0x000088, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_GetOwner_ReturnValue1) == 0x000090, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_GetOwner_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_DoesObjectMatchQuery_ReturnValue) == 0x000098, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_DoesObjectMatchQuery_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_IsValid_ReturnValue2) == 0x000099, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x00009A, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_TriggerReaction, CallFunc_BooleanAND_ReturnValue) == 0x00009B, "Member 'BP_ActorComponent_ChainReactionManager_C_TriggerReaction::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_ActorComponent_ChainReactionManager.BP_ActorComponent_ChainReactionManager_C.GetRegisteredChainReactionComponents
// 0x0010 (0x0010 - 0x0000)
struct BP_ActorComponent_ChainReactionManager_C_GetRegisteredChainReactionComponents final
{
public:
	TArray<class UBP_Component_ChainReaction_C*>  Param_RegisteredComponents;                        // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor)
};
static_assert(alignof(BP_ActorComponent_ChainReactionManager_C_GetRegisteredChainReactionComponents) == 0x000008, "Wrong alignment on BP_ActorComponent_ChainReactionManager_C_GetRegisteredChainReactionComponents");
static_assert(sizeof(BP_ActorComponent_ChainReactionManager_C_GetRegisteredChainReactionComponents) == 0x000010, "Wrong size on BP_ActorComponent_ChainReactionManager_C_GetRegisteredChainReactionComponents");
static_assert(offsetof(BP_ActorComponent_ChainReactionManager_C_GetRegisteredChainReactionComponents, Param_RegisteredComponents) == 0x000000, "Member 'BP_ActorComponent_ChainReactionManager_C_GetRegisteredChainReactionComponents::Param_RegisteredComponents' has a wrong offset!");

}
