#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemMissionBriefcase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ItemMissionBriefcase.BP_ItemMissionBriefcase_C.ExecuteUbergraph_BP_ItemMissionBriefcase
// 0x0200 (0x0200 - 0x0000)
struct BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_220B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0018(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_220C[0x1];                                     // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00C0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_220D[0x1];                                     // 0x014B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_220E[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x01DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue2;         // 0x01E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase) == 0x000008, "Wrong alignment on BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase");
static_assert(sizeof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase) == 0x000200, "Wrong size on BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, EntryPoint) == 0x000000, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, Temp_object_Variable) == 0x000008, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000018, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0000A0, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, Temp_bool_Has_Been_Initd_Variable) == 0x0000A1, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, Temp_bool_IsClosed_Variable) == 0x0000A2, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, K2Node_Event_DeltaSeconds) == 0x0000A4, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000A8, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000B4, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_LineTraceSingle_OutHit) == 0x0000C0, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_LineTraceSingle_ReturnValue) == 0x000148, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_bBlockingHit) == 0x000149, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_bInitialOverlap) == 0x00014A, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_Time) == 0x00014C, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_Distance) == 0x000150, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_Location) == 0x000154, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_ImpactPoint) == 0x000160, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_Normal) == 0x00016C, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_ImpactNormal) == 0x000178, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_PhysMat) == 0x000188, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_HitActor) == 0x000190, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_HitComponent) == 0x000198, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_HitBoneName) == 0x0001A0, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_HitItem) == 0x0001A8, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_FaceIndex) == 0x0001AC, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_TraceStart) == 0x0001B0, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_BreakHitResult_TraceEnd) == 0x0001BC, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0001C8, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_Add_VectorVector_ReturnValue) == 0x0001D0, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_K2_GetActorLocation_ReturnValue1) == 0x0001DC, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_K2_GetActorLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_K2_GetActorLocation_ReturnValue2) == 0x0001E8, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_K2_GetActorLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_Vector_Distance_ReturnValue) == 0x0001F4, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0001F8, "Member 'BP_ItemMissionBriefcase_C_ExecuteUbergraph_BP_ItemMissionBriefcase::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_ItemMissionBriefcase.BP_ItemMissionBriefcase_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ItemMissionBriefcase_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemMissionBriefcase_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ItemMissionBriefcase_C_ReceiveTick");
static_assert(sizeof(BP_ItemMissionBriefcase_C_ReceiveTick) == 0x000004, "Wrong size on BP_ItemMissionBriefcase_C_ReceiveTick");
static_assert(offsetof(BP_ItemMissionBriefcase_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ItemMissionBriefcase_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ItemMissionBriefcase.BP_ItemMissionBriefcase_C.UpdateLocation
// 0x00B0 (0x00B0 - 0x0000)
struct BP_ItemMissionBriefcase_C_UpdateLocation final
{
public:
	struct FVector                                NewParam;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewParam1;                                         // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0024(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemMissionBriefcase_C_UpdateLocation) == 0x000004, "Wrong alignment on BP_ItemMissionBriefcase_C_UpdateLocation");
static_assert(sizeof(BP_ItemMissionBriefcase_C_UpdateLocation) == 0x0000B0, "Wrong size on BP_ItemMissionBriefcase_C_UpdateLocation");
static_assert(offsetof(BP_ItemMissionBriefcase_C_UpdateLocation, NewParam) == 0x000000, "Member 'BP_ItemMissionBriefcase_C_UpdateLocation::NewParam' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_UpdateLocation, NewParam1) == 0x00000C, "Member 'BP_ItemMissionBriefcase_C_UpdateLocation::NewParam1' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_UpdateLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000018, "Member 'BP_ItemMissionBriefcase_C_UpdateLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_UpdateLocation, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000024, "Member 'BP_ItemMissionBriefcase_C_UpdateLocation::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ItemMissionBriefcase_C_UpdateLocation, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0000AC, "Member 'BP_ItemMissionBriefcase_C_UpdateLocation::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

}
