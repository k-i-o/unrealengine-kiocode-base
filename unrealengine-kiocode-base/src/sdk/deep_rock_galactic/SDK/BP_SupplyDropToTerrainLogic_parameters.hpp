#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SupplyDropToTerrainLogic

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.FallStateChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_SupplyDropToTerrainLogic_C_FallStateChanged final
{
public:
	bool                                          IsFalling;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SupplyDropToTerrainLogic_C_FallStateChanged) == 0x000001, "Wrong alignment on BP_SupplyDropToTerrainLogic_C_FallStateChanged");
static_assert(sizeof(BP_SupplyDropToTerrainLogic_C_FallStateChanged) == 0x000001, "Wrong size on BP_SupplyDropToTerrainLogic_C_FallStateChanged");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_FallStateChanged, IsFalling) == 0x000000, "Member 'BP_SupplyDropToTerrainLogic_C_FallStateChanged::IsFalling' has a wrong offset!");

// Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.OnComponentActivated_Event_0
// 0x0010 (0x0010 - 0x0000)
struct BP_SupplyDropToTerrainLogic_C_OnComponentActivated_Event_0 final
{
public:
	class UActorComponent*                        Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bReset;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SupplyDropToTerrainLogic_C_OnComponentActivated_Event_0) == 0x000008, "Wrong alignment on BP_SupplyDropToTerrainLogic_C_OnComponentActivated_Event_0");
static_assert(sizeof(BP_SupplyDropToTerrainLogic_C_OnComponentActivated_Event_0) == 0x000010, "Wrong size on BP_SupplyDropToTerrainLogic_C_OnComponentActivated_Event_0");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_OnComponentActivated_Event_0, Component) == 0x000000, "Member 'BP_SupplyDropToTerrainLogic_C_OnComponentActivated_Event_0::Component' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_OnComponentActivated_Event_0, bReset) == 0x000008, "Member 'BP_SupplyDropToTerrainLogic_C_OnComponentActivated_Event_0::bReset' has a wrong offset!");

// Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.ExecuteUbergraph_BP_SupplyDropToTerrainLogic
// 0x0118 (0x0118 - 0x0000)
struct BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeSeconds_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsFalling)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UActorComponent* Component, bool bReset)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_TimeSince_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E4F[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDropToTerrainComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsFalling;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E50[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E51[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E52[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDamageComponent*                       CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPathfinderCollisionComponent*          CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E53[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_4;                   // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_5;                   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E54[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_6;                   // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_7;                   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOutlineComponent*                      CallFunc_GetComponentByClass_ReturnValue_3;        // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_8;                   // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E55[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UActorComponent*                        K2Node_CustomEvent_component;                      // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bReset;                         // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E56[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue_1;       // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic) == 0x000008, "Wrong alignment on BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic");
static_assert(sizeof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic) == 0x000118, "Wrong size on BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, EntryPoint) == 0x000000, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetTimeSeconds_ReturnValue) == 0x000004, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_TimeSince_ReturnValue) == 0x000028, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_TimeSince_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00002C, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, K2Node_CustomEvent_IsFalling) == 0x000040, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::K2Node_CustomEvent_IsFalling' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetOwner_ReturnValue_1) == 0x000048, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetOwner_ReturnValue_2) == 0x000050, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetOwner_ReturnValue_3) == 0x000068, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_BreakVector_X) == 0x000070, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_BreakVector_Y) == 0x000074, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_BreakVector_Z) == 0x000078, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000080, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000088, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_Abs_ReturnValue) == 0x00008C, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000090, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000098, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetOwner_ReturnValue_4) == 0x0000A0, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetOwner_ReturnValue_5) == 0x0000A8, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetOwner_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000B0, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetOwner_ReturnValue_6) == 0x0000C0, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetOwner_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetOwner_ReturnValue_7) == 0x0000C8, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetOwner_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetComponentByClass_ReturnValue_3) == 0x0000D0, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_GetOwner_ReturnValue_8) == 0x0000D8, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_GetOwner_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0000E0, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, K2Node_CustomEvent_component) == 0x0000F0, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::K2Node_CustomEvent_component' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, K2Node_CustomEvent_bReset) == 0x0000F8, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::K2Node_CustomEvent_bReset' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000100, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000108, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic, CallFunc_SpawnSoundAtLocation_ReturnValue_1) == 0x000110, "Member 'BP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic::CallFunc_SpawnSoundAtLocation_ReturnValue_1' has a wrong offset!");

}

