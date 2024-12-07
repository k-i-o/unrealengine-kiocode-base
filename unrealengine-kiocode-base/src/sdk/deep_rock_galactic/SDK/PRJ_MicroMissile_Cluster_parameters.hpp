#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_MicroMissile_Cluster

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PRJ_MicroMissile_Cluster.PRJ_MicroMissile_Cluster_C.CalculateClusterTrajectory
// 0x0218 (0x0218 - 0x0000)
struct PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory final
{
public:
	float                                         RealDeltaTime;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ProjectileSpeed;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ClusterHitCenter;                                  // 0x0008(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GravityAccel;                                      // 0x0014(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastSimulatedPosition;                             // 0x0020(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SimulatedPosition;                                 // 0x002C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SimulatedVelocity;                                 // 0x0038(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalElapsedCalculationTime;                       // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Gravity;                                           // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTimePerStep;                                  // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumSteps;                                          // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_538D[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0070(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x010C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0196(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_538E[0x1];                                     // 0x0197(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0208(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0215(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory) == 0x000008, "Wrong alignment on PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory");
static_assert(sizeof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory) == 0x000218, "Wrong size on PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, RealDeltaTime) == 0x000000, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::RealDeltaTime' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, ProjectileSpeed) == 0x000004, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::ProjectileSpeed' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, ClusterHitCenter) == 0x000008, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::ClusterHitCenter' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, GravityAccel) == 0x000014, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::GravityAccel' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, LastSimulatedPosition) == 0x000020, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::LastSimulatedPosition' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, SimulatedPosition) == 0x00002C, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::SimulatedPosition' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, SimulatedVelocity) == 0x000038, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::SimulatedVelocity' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, TotalElapsedCalculationTime) == 0x000044, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::TotalElapsedCalculationTime' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, Gravity) == 0x000048, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::Gravity' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, DeltaTimePerStep) == 0x00004C, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::DeltaTimePerStep' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, NumSteps) == 0x000050, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::NumSteps' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, Temp_bool_Variable) == 0x000054, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Not_PreBool_ReturnValue) == 0x000055, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000058, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakVector_X) == 0x000064, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakVector_Y) == 0x000068, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakVector_Z) == 0x00006C, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, Temp_object_Variable) == 0x000070, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Add_VectorVector_ReturnValue) == 0x000080, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_GetActorForwardVector_ReturnValue) == 0x00008C, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, Temp_int_Variable) == 0x000098, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Add_IntInt_ReturnValue) == 0x00009C, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000A0, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000AC, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Normal_ReturnValue) == 0x0000B8, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000C4, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000C8, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000CC, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x0000D0, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_MakeVector_ReturnValue) == 0x0000DC, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0000E8, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000F4, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_Add_VectorVector_ReturnValue_3) == 0x000100, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_LineTraceSingle_OutHit) == 0x00010C, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_LineTraceSingle_ReturnValue) == 0x000194, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_bBlockingHit) == 0x000195, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_bInitialOverlap) == 0x000196, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_Time) == 0x000198, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_Distance) == 0x00019C, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_Location) == 0x0001A0, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_ImpactPoint) == 0x0001AC, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_Normal) == 0x0001B8, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_ImpactNormal) == 0x0001C4, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_PhysMat) == 0x0001D0, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_HitActor) == 0x0001D8, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_HitComponent) == 0x0001E0, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_HitBoneName) == 0x0001E8, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_HitItem) == 0x0001F0, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_ElementIndex) == 0x0001F4, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_FaceIndex) == 0x0001F8, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_TraceStart) == 0x0001FC, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BreakHitResult_TraceEnd) == 0x000208, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000214, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory, CallFunc_BooleanAND_ReturnValue) == 0x000215, "Member 'PRJ_MicroMissile_Cluster_C_CalculateClusterTrajectory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function PRJ_MicroMissile_Cluster.PRJ_MicroMissile_Cluster_C.SpawnClusters
// 0x0010 (0x0010 - 0x0000)
struct PRJ_MicroMissile_Cluster_C_SpawnClusters final
{
public:
	struct FVector                                InVector;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClusterDelay;                                      // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PRJ_MicroMissile_Cluster_C_SpawnClusters) == 0x000004, "Wrong alignment on PRJ_MicroMissile_Cluster_C_SpawnClusters");
static_assert(sizeof(PRJ_MicroMissile_Cluster_C_SpawnClusters) == 0x000010, "Wrong size on PRJ_MicroMissile_Cluster_C_SpawnClusters");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_SpawnClusters, InVector) == 0x000000, "Member 'PRJ_MicroMissile_Cluster_C_SpawnClusters::InVector' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_SpawnClusters, ClusterDelay) == 0x00000C, "Member 'PRJ_MicroMissile_Cluster_C_SpawnClusters::ClusterDelay' has a wrong offset!");

// Function PRJ_MicroMissile_Cluster.PRJ_MicroMissile_Cluster_C.OnImpacted
// 0x008C (0x008C - 0x0000)
struct PRJ_MicroMissile_Cluster_C_OnImpacted final
{
public:
	bool                                          PredictedImpact;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_538F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             HitResult;                                         // 0x0004(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(PRJ_MicroMissile_Cluster_C_OnImpacted) == 0x000004, "Wrong alignment on PRJ_MicroMissile_Cluster_C_OnImpacted");
static_assert(sizeof(PRJ_MicroMissile_Cluster_C_OnImpacted) == 0x00008C, "Wrong size on PRJ_MicroMissile_Cluster_C_OnImpacted");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_OnImpacted, PredictedImpact) == 0x000000, "Member 'PRJ_MicroMissile_Cluster_C_OnImpacted::PredictedImpact' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_OnImpacted, HitResult) == 0x000004, "Member 'PRJ_MicroMissile_Cluster_C_OnImpacted::HitResult' has a wrong offset!");

// Function PRJ_MicroMissile_Cluster.PRJ_MicroMissile_Cluster_C.ExecuteUbergraph_PRJ_MicroMissile_Cluster
// 0x01A0 (0x01A0 - 0x0000)
struct PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMoveComponentAction                          Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5390[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_InVector;                       // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_ClusterDelay;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_PredictedImpact;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5391[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x002C(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_5392[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00C0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxSpeed_ReturnValue;                  // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_CalculateClusterTrajectory_ClusterHitCenter; // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_InverseTransformLocation_ReturnValue;     // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5393[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x0110(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5394[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IWeaponFireOwner>      K2Node_DynamicCast_AsWeapon_Fire_Owner;            // 0x0180(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsLocallyControlled_ReturnValue;       // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster) == 0x000010, "Wrong alignment on PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster");
static_assert(sizeof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster) == 0x0001A0, "Wrong size on PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, EntryPoint) == 0x000000, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::EntryPoint' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, Temp_byte_Variable) == 0x000004, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, Temp_bool_Variable) == 0x000005, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_HasAuthority_ReturnValue) == 0x000006, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, K2Node_CustomEvent_InVector) == 0x000008, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::K2Node_CustomEvent_InVector' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, K2Node_CustomEvent_ClusterDelay) == 0x000014, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::K2Node_CustomEvent_ClusterDelay' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000028, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, K2Node_Event_PredictedImpact) == 0x000029, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::K2Node_Event_PredictedImpact' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, K2Node_Event_HitResult) == 0x00002C, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000B8, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_GetTransform_ReturnValue) == 0x0000C0, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_GetMaxSpeed_ReturnValue) == 0x0000F0, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_GetMaxSpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_CalculateClusterTrajectory_ClusterHitCenter) == 0x0000F4, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_CalculateClusterTrajectory_ClusterHitCenter' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_InverseTransformLocation_ReturnValue) == 0x000100, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_InverseTransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_GetTransform_ReturnValue_1) == 0x000110, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_BreakTransform_Location) == 0x000140, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_BreakTransform_Rotation) == 0x00014C, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_BreakTransform_Scale) == 0x000158, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000168, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_GetOwner_ReturnValue) == 0x000170, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_GetOwner_ReturnValue_1) == 0x000178, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, K2Node_DynamicCast_AsWeapon_Fire_Owner) == 0x000180, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::K2Node_DynamicCast_AsWeapon_Fire_Owner' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, K2Node_DynamicCast_bSuccess) == 0x000190, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster, CallFunc_GetIsLocallyControlled_ReturnValue) == 0x000191, "Member 'PRJ_MicroMissile_Cluster_C_ExecuteUbergraph_PRJ_MicroMissile_Cluster::CallFunc_GetIsLocallyControlled_ReturnValue' has a wrong offset!");

}

