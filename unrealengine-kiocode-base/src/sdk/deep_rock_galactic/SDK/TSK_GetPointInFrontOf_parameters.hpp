#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TSK_GetPointInFrontOf

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct TSK_GetPointInFrontOf_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TSK_GetPointInFrontOf_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on TSK_GetPointInFrontOf_C_ReceiveExecuteAI");
static_assert(sizeof(TSK_GetPointInFrontOf_C_ReceiveExecuteAI) == 0x000010, "Wrong size on TSK_GetPointInFrontOf_C_ReceiveExecuteAI");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'TSK_GetPointInFrontOf_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'TSK_GetPointInFrontOf_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

// Function TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C.ExecuteUbergraph_TSK_GetPointInFrontOf
// 0x0078 (0x0078 - 0x0000)
struct TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54BD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDeepPathfinderMovement*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetBlackboardValueAsObject_ReturnValue;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54BE[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_DynamicCast_AsActor;                        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54BF[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_FindNearestPathfinderPoint_ReturnValue;   // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf) == 0x000008, "Wrong alignment on TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf");
static_assert(sizeof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf) == 0x000078, "Wrong size on TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, EntryPoint) == 0x000000, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::EntryPoint' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, K2Node_Event_OwnerController) == 0x000008, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, K2Node_Event_ControlledPawn) == 0x000010, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, CallFunc_GetBlackboardValueAsObject_ReturnValue) == 0x000020, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::CallFunc_GetBlackboardValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000028, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, K2Node_DynamicCast_AsActor) == 0x000030, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, CallFunc_GetActorForwardVector_ReturnValue) == 0x00003C, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000054, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, CallFunc_Add_VectorVector_ReturnValue) == 0x000060, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf, CallFunc_FindNearestPathfinderPoint_ReturnValue) == 0x00006C, "Member 'TSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf::CallFunc_FindNearestPathfinderPoint_ReturnValue' has a wrong offset!");

}
