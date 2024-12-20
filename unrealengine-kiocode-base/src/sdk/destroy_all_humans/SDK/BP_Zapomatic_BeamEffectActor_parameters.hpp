#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Zapomatic_BeamEffectActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Zapomatic_BeamEffectActor.BP_Zapomatic_BeamEffectActor_C.ExecuteUbergraph_BP_Zapomatic_BeamEffectActor
// 0x0180 (0x0180 - 0x0000)
struct BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A2[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event__pTargetActor;                        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event__vTargetLocation;                     // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event__vTargetNormal;                       // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x004C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult1;      // 0x00F0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor) == 0x000008, "Wrong alignment on BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor");
static_assert(sizeof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor) == 0x000180, "Wrong size on BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, EntryPoint) == 0x000000, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, CallFunc_IsValid_ReturnValue1) == 0x000019, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, K2Node_Event__pTargetActor) == 0x000020, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::K2Node_Event__pTargetActor' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, K2Node_Event__vTargetLocation) == 0x000028, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::K2Node_Event__vTargetLocation' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, K2Node_Event__vTargetNormal) == 0x000034, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::K2Node_Event__vTargetNormal' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, CallFunc_K2_GetActorLocation_ReturnValue1) == 0x000040, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::CallFunc_K2_GetActorLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x00004C, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000D4, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, CallFunc_Add_VectorVector_ReturnValue) == 0x0000E0, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, K2Node_Event_DeltaSeconds) == 0x0000EC, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, CallFunc_K2_SetWorldLocation_SweepHitResult1) == 0x0000F0, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::CallFunc_K2_SetWorldLocation_SweepHitResult1' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor, CallFunc_Add_FloatFloat_ReturnValue) == 0x000178, "Member 'BP_Zapomatic_BeamEffectActor_C_ExecuteUbergraph_BP_Zapomatic_BeamEffectActor::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_Zapomatic_BeamEffectActor.BP_Zapomatic_BeamEffectActor_C.UpdateBeam
// 0x0020 (0x0020 - 0x0000)
struct BP_Zapomatic_BeamEffectActor_C_UpdateBeam final
{
public:
	class AActor*                                 _pTargetActor;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                _vTargetLocation;                                  // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                _vTargetNormal;                                    // 0x0014(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Zapomatic_BeamEffectActor_C_UpdateBeam) == 0x000008, "Wrong alignment on BP_Zapomatic_BeamEffectActor_C_UpdateBeam");
static_assert(sizeof(BP_Zapomatic_BeamEffectActor_C_UpdateBeam) == 0x000020, "Wrong size on BP_Zapomatic_BeamEffectActor_C_UpdateBeam");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UpdateBeam, _pTargetActor) == 0x000000, "Member 'BP_Zapomatic_BeamEffectActor_C_UpdateBeam::_pTargetActor' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UpdateBeam, _vTargetLocation) == 0x000008, "Member 'BP_Zapomatic_BeamEffectActor_C_UpdateBeam::_vTargetLocation' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UpdateBeam, _vTargetNormal) == 0x000014, "Member 'BP_Zapomatic_BeamEffectActor_C_UpdateBeam::_vTargetNormal' has a wrong offset!");

// Function BP_Zapomatic_BeamEffectActor.BP_Zapomatic_BeamEffectActor_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Zapomatic_BeamEffectActor_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Zapomatic_BeamEffectActor_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Zapomatic_BeamEffectActor_C_ReceiveTick");
static_assert(sizeof(BP_Zapomatic_BeamEffectActor_C_ReceiveTick) == 0x000004, "Wrong size on BP_Zapomatic_BeamEffectActor_C_ReceiveTick");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Zapomatic_BeamEffectActor_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_Zapomatic_BeamEffectActor.BP_Zapomatic_BeamEffectActor_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct BP_Zapomatic_BeamEffectActor_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue1; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Zapomatic_BeamEffectActor_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Zapomatic_BeamEffectActor_C_UserConstructionScript");
static_assert(sizeof(BP_Zapomatic_BeamEffectActor_C_UserConstructionScript) == 0x000010, "Wrong size on BP_Zapomatic_BeamEffectActor_C_UserConstructionScript");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'BP_Zapomatic_BeamEffectActor_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue1) == 0x000008, "Member 'BP_Zapomatic_BeamEffectActor_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue1' has a wrong offset!");

// Function BP_Zapomatic_BeamEffectActor.BP_Zapomatic_BeamEffectActor_C.UpdateBeamFVX
// 0x004C (0x004C - 0x0000)
struct BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX final
{
public:
	struct FVector                                Target;                                            // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Source;                                            // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsObjectPendingKill_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A3[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX) == 0x000004, "Wrong alignment on BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX");
static_assert(sizeof(BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX) == 0x00004C, "Wrong size on BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX, Target) == 0x000000, "Member 'BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX::Target' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX, Source) == 0x00000C, "Member 'BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX::Source' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000018, "Member 'BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000024, "Member 'BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX, CallFunc_VSize_ReturnValue) == 0x000034, "Member 'BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000038, "Member 'BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX, CallFunc_IsObjectPendingKill_ReturnValue) == 0x00003C, "Member 'BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX::CallFunc_IsObjectPendingKill_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX, CallFunc_MakeVector_ReturnValue) == 0x000040, "Member 'BP_Zapomatic_BeamEffectActor_C_UpdateBeamFVX::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

}

