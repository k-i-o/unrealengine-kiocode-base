#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Grenade_Cluster

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Grenade_Cluster.Grenade_Cluster_C.ExecuteUbergraph_Grenade_Cluster
// 0x00E0 (0x00E0 - 0x0000)
struct Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_521B[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_521C[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_521D[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521E[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrenade_Cluster_Fragment_C*            CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_TransformRotation_ReturnValue;            // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster) == 0x000010, "Wrong alignment on Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster");
static_assert(sizeof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster) == 0x0000E0, "Wrong size on Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, EntryPoint) == 0x000000, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::EntryPoint' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_RandomFloatInRange_ReturnValue) == 0x000004, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_HasAuthority_ReturnValue) == 0x000014, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, Temp_int_Variable) == 0x000018, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_Percent_IntInt_ReturnValue) == 0x00001C, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00002C, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_Add_VectorVector_ReturnValue) == 0x000038, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_MakeTransform_ReturnValue) == 0x000050, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000080, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000090, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000098, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00009C, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000A0, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000A4, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000A8, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_MakeRotator_ReturnValue) == 0x0000AC, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x0000B8, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_TransformRotation_ReturnValue) == 0x0000BC, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_TransformRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x0000C8, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000D4, "Member 'Grenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

// Function Grenade_Cluster.Grenade_Cluster_C.AddGearStateEntries
// 0x0280 (0x0280 - 0x0000)
struct Grenade_Cluster_C_AddGearStateEntries final
{
public:
	class AFSDPlayerState*                        PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGearStatEntry>                 Stats;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry;             // 0x0020(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_521F[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_1;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_1;           // 0x0098(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_1;        // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5220[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0108(0x0018)()
	struct FGearStatEntry                         K2Node_MakeStruct_GearStatEntry;                   // 0x0120(0x0068)()
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5221[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_2;             // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_2;           // 0x0198(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_2;        // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5222[0x3];                                     // 0x0201(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_3;             // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_3;           // 0x0210(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_3;        // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5223[0x3];                                     // 0x0279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Grenade_Cluster_C_AddGearStateEntries) == 0x000008, "Wrong alignment on Grenade_Cluster_C_AddGearStateEntries");
static_assert(sizeof(Grenade_Cluster_C_AddGearStateEntries) == 0x000280, "Wrong size on Grenade_Cluster_C_AddGearStateEntries");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, PlayerState) == 0x000000, "Member 'Grenade_Cluster_C_AddGearStateEntries::PlayerState' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, Stats) == 0x000008, "Member 'Grenade_Cluster_C_AddGearStateEntries::Stats' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_GetObjectClass_ReturnValue) == 0x000018, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_GearStatEntry) == 0x000020, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_GearStatEntry' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_HasUpgradedValue) == 0x000088, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue) == 0x00008C, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_GetObjectClass_ReturnValue_1) == 0x000090, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_GetObjectClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_GearStatEntry_1) == 0x000098, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_HasUpgradedValue_1) == 0x000100, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_HasUpgradedValue_1' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue_1) == 0x000104, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_Conv_IntToText_ReturnValue) == 0x000108, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, K2Node_MakeStruct_GearStatEntry) == 0x000120, "Member 'Grenade_Cluster_C_AddGearStateEntries::K2Node_MakeStruct_GearStatEntry' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue_2) == 0x000188, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_GetObjectClass_ReturnValue_2) == 0x000190, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_GetObjectClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_GearStatEntry_2) == 0x000198, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_GearStatEntry_2' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_HasUpgradedValue_2) == 0x000200, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_HasUpgradedValue_2' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue_3) == 0x000204, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_GetObjectClass_ReturnValue_3) == 0x000208, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_GetObjectClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_GearStatEntry_3) == 0x000210, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_GearStatEntry_3' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_HasUpgradedValue_3) == 0x000278, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_HasUpgradedValue_3' has a wrong offset!");
static_assert(offsetof(Grenade_Cluster_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue_4) == 0x00027C, "Member 'Grenade_Cluster_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");

}
