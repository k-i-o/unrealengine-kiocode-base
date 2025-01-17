#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Interceptor

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function NPC_Interceptor.NPC_Interceptor_C.ExecuteUbergraph_NPC_Interceptor
// 0x0150 (0x0150 - 0x0000)
struct NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_3;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_2;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43[0x1];                                       // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          Temp_byte_Variable_1;                              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* Player)>         K2Node_CreateDelegate_OutputDelegate_4;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADoorBP_C*                              K2Node_DynamicCast_AsDoor_BP;                      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckCanPlaceTrap_CanPlace_;              // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82[0x2];                                       // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00A0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors;      // 0x00D8(0x0010)(ReferenceParm)
	class APoliceTrap_BarbedWire_C*               CallFunc_FinishSpawningActor_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Random_OutItem;                     // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_ProjectPointToNavigation_ProjectedLocation; // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_ProjectPointToNavigation_ReturnValue;  // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_125[0x3];                                      // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation; // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue; // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue_1;    // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Player;                         // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor) == 0x000010, "Wrong alignment on NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor");
static_assert(sizeof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor) == 0x000150, "Wrong size on NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, EntryPoint) == 0x000000, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_CustomEvent_MovementResult_3) == 0x000004, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_CustomEvent_MovementResult_3' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_CustomEvent_MovementResult_2) == 0x000018, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_CustomEvent_MovementResult_2' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, Temp_byte_Variable) == 0x00002C, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000040, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_CustomEvent_MovementResult_1) == 0x000041, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_CustomEvent_MovementResult) == 0x000042, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_CreateDelegate_OutputDelegate_3) == 0x000044, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, Temp_byte_Variable_1) == 0x000054, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_CreateDelegate_OutputDelegate_4) == 0x000058, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000068, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_Event_OtherActor) == 0x000070, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_DynamicCast_AsDoor_BP) == 0x000078, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_DynamicCast_AsDoor_BP' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_CheckCanPlaceTrap_CanPlace_) == 0x000081, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_CheckCanPlaceTrap_CanPlace_' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000084, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000090, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_MakeTransform_ReturnValue) == 0x0000A0, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000D0, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_GetAllActorsWithInterface_OutActors) == 0x0000D8, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_GetAllActorsWithInterface_OutActors' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000E8, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_Array_Random_OutItem) == 0x0000F0, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_Array_Random_OutIndex) == 0x0000F8, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x000100, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00010C, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_K2_ProjectPointToNavigation_ProjectedLocation) == 0x000118, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_K2_ProjectPointToNavigation_ProjectedLocation' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_K2_ProjectPointToNavigation_ReturnValue) == 0x000124, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_K2_ProjectPointToNavigation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation) == 0x000128, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue) == 0x000134, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_CreateMoveToProxyObject_ReturnValue_1) == 0x000138, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_CreateMoveToProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, CallFunc_IsValid_ReturnValue_1) == 0x000140, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor, K2Node_CustomEvent_Player) == 0x000148, "Member 'NPC_Interceptor_C_ExecuteUbergraph_NPC_Interceptor::K2Node_CustomEvent_Player' has a wrong offset!");

// Function NPC_Interceptor.NPC_Interceptor_C.OnDeathStats
// 0x0008 (0x0008 - 0x0000)
struct NPC_Interceptor_C_OnDeathStats final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Interceptor_C_OnDeathStats) == 0x000008, "Wrong alignment on NPC_Interceptor_C_OnDeathStats");
static_assert(sizeof(NPC_Interceptor_C_OnDeathStats) == 0x000008, "Wrong size on NPC_Interceptor_C_OnDeathStats");
static_assert(offsetof(NPC_Interceptor_C_OnDeathStats, Player) == 0x000000, "Member 'NPC_Interceptor_C_OnDeathStats::Player' has a wrong offset!");

// Function NPC_Interceptor.NPC_Interceptor_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct NPC_Interceptor_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Interceptor_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on NPC_Interceptor_C_ReceiveActorBeginOverlap");
static_assert(sizeof(NPC_Interceptor_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on NPC_Interceptor_C_ReceiveActorBeginOverlap");
static_assert(offsetof(NPC_Interceptor_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'NPC_Interceptor_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function NPC_Interceptor.NPC_Interceptor_C.OnSuccess_39ACF7D943E338583662F38997A19C97
// 0x0001 (0x0001 - 0x0000)
struct NPC_Interceptor_C_OnSuccess_39ACF7D943E338583662F38997A19C97 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Interceptor_C_OnSuccess_39ACF7D943E338583662F38997A19C97) == 0x000001, "Wrong alignment on NPC_Interceptor_C_OnSuccess_39ACF7D943E338583662F38997A19C97");
static_assert(sizeof(NPC_Interceptor_C_OnSuccess_39ACF7D943E338583662F38997A19C97) == 0x000001, "Wrong size on NPC_Interceptor_C_OnSuccess_39ACF7D943E338583662F38997A19C97");
static_assert(offsetof(NPC_Interceptor_C_OnSuccess_39ACF7D943E338583662F38997A19C97, MovementResult) == 0x000000, "Member 'NPC_Interceptor_C_OnSuccess_39ACF7D943E338583662F38997A19C97::MovementResult' has a wrong offset!");

// Function NPC_Interceptor.NPC_Interceptor_C.OnFail_39ACF7D943E338583662F38997A19C97
// 0x0001 (0x0001 - 0x0000)
struct NPC_Interceptor_C_OnFail_39ACF7D943E338583662F38997A19C97 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Interceptor_C_OnFail_39ACF7D943E338583662F38997A19C97) == 0x000001, "Wrong alignment on NPC_Interceptor_C_OnFail_39ACF7D943E338583662F38997A19C97");
static_assert(sizeof(NPC_Interceptor_C_OnFail_39ACF7D943E338583662F38997A19C97) == 0x000001, "Wrong size on NPC_Interceptor_C_OnFail_39ACF7D943E338583662F38997A19C97");
static_assert(offsetof(NPC_Interceptor_C_OnFail_39ACF7D943E338583662F38997A19C97, MovementResult) == 0x000000, "Member 'NPC_Interceptor_C_OnFail_39ACF7D943E338583662F38997A19C97::MovementResult' has a wrong offset!");

// Function NPC_Interceptor.NPC_Interceptor_C.OnSuccess_2587FC5248E52D8493EEB981357C5499
// 0x0001 (0x0001 - 0x0000)
struct NPC_Interceptor_C_OnSuccess_2587FC5248E52D8493EEB981357C5499 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Interceptor_C_OnSuccess_2587FC5248E52D8493EEB981357C5499) == 0x000001, "Wrong alignment on NPC_Interceptor_C_OnSuccess_2587FC5248E52D8493EEB981357C5499");
static_assert(sizeof(NPC_Interceptor_C_OnSuccess_2587FC5248E52D8493EEB981357C5499) == 0x000001, "Wrong size on NPC_Interceptor_C_OnSuccess_2587FC5248E52D8493EEB981357C5499");
static_assert(offsetof(NPC_Interceptor_C_OnSuccess_2587FC5248E52D8493EEB981357C5499, MovementResult) == 0x000000, "Member 'NPC_Interceptor_C_OnSuccess_2587FC5248E52D8493EEB981357C5499::MovementResult' has a wrong offset!");

// Function NPC_Interceptor.NPC_Interceptor_C.OnFail_2587FC5248E52D8493EEB981357C5499
// 0x0001 (0x0001 - 0x0000)
struct NPC_Interceptor_C_OnFail_2587FC5248E52D8493EEB981357C5499 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Interceptor_C_OnFail_2587FC5248E52D8493EEB981357C5499) == 0x000001, "Wrong alignment on NPC_Interceptor_C_OnFail_2587FC5248E52D8493EEB981357C5499");
static_assert(sizeof(NPC_Interceptor_C_OnFail_2587FC5248E52D8493EEB981357C5499) == 0x000001, "Wrong size on NPC_Interceptor_C_OnFail_2587FC5248E52D8493EEB981357C5499");
static_assert(offsetof(NPC_Interceptor_C_OnFail_2587FC5248E52D8493EEB981357C5499, MovementResult) == 0x000000, "Member 'NPC_Interceptor_C_OnFail_2587FC5248E52D8493EEB981357C5499::MovementResult' has a wrong offset!");

// Function NPC_Interceptor.NPC_Interceptor_C.CheckCanPlaceTrap
// 0x0020 (0x0020 - 0x0000)
struct NPC_Interceptor_C_CheckCanPlaceTrap final
{
public:
	bool                                          CanPlace_;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NPC_Interceptor_C_CheckCanPlaceTrap) == 0x000008, "Wrong alignment on NPC_Interceptor_C_CheckCanPlaceTrap");
static_assert(sizeof(NPC_Interceptor_C_CheckCanPlaceTrap) == 0x000020, "Wrong size on NPC_Interceptor_C_CheckCanPlaceTrap");
static_assert(offsetof(NPC_Interceptor_C_CheckCanPlaceTrap, CanPlace_) == 0x000000, "Member 'NPC_Interceptor_C_CheckCanPlaceTrap::CanPlace_' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_CheckCanPlaceTrap, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000008, "Member 'NPC_Interceptor_C_CheckCanPlaceTrap::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_CheckCanPlaceTrap, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'NPC_Interceptor_C_CheckCanPlaceTrap::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Interceptor_C_CheckCanPlaceTrap, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'NPC_Interceptor_C_CheckCanPlaceTrap::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

