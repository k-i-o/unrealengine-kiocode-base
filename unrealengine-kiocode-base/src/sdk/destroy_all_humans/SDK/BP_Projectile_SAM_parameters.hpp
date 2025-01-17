#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_SAM

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Projectile_SAM.BP_Projectile_SAM_C.ExecuteUbergraph_BP_Projectile_SAM
// 0x0080 (0x0080 - 0x0000)
struct BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event__vLocation;                           // 0x0004(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event__fRadius;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event__bAutomaticallyReactivateComponents;  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2165[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2166[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	TArray<class UBFGEffectContainer*>            CallFunc_ActivateEffectWithTransform_ReturnValue;  // 0x0060(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsPrespawningPoolPhase_ReturnValue;       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2167[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event__fDelayDuration;                      // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM) == 0x000010, "Wrong alignment on BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM");
static_assert(sizeof(BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM) == 0x000080, "Wrong size on BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM");
static_assert(offsetof(BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM, EntryPoint) == 0x000000, "Member 'BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM, K2Node_Event__vLocation) == 0x000004, "Member 'BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM::K2Node_Event__vLocation' has a wrong offset!");
static_assert(offsetof(BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM, K2Node_Event__fRadius) == 0x000010, "Member 'BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM::K2Node_Event__fRadius' has a wrong offset!");
static_assert(offsetof(BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000014, "Member 'BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM, K2Node_Event__bAutomaticallyReactivateComponents) == 0x000018, "Member 'BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM::K2Node_Event__bAutomaticallyReactivateComponents' has a wrong offset!");
static_assert(offsetof(BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM, CallFunc_MakeVector_ReturnValue) == 0x00001C, "Member 'BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM, CallFunc_ActivateEffectWithTransform_ReturnValue) == 0x000060, "Member 'BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM::CallFunc_ActivateEffectWithTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM, CallFunc_IsPrespawningPoolPhase_ReturnValue) == 0x000070, "Member 'BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM::CallFunc_IsPrespawningPoolPhase_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM, K2Node_Event__fDelayDuration) == 0x000074, "Member 'BP_Projectile_SAM_C_ExecuteUbergraph_BP_Projectile_SAM::K2Node_Event__fDelayDuration' has a wrong offset!");

// Function BP_Projectile_SAM.BP_Projectile_SAM_C.OnProjectileFireDelayStarted
// 0x0004 (0x0004 - 0x0000)
struct BP_Projectile_SAM_C_OnProjectileFireDelayStarted final
{
public:
	float                                         _fDelayDuration;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Projectile_SAM_C_OnProjectileFireDelayStarted) == 0x000004, "Wrong alignment on BP_Projectile_SAM_C_OnProjectileFireDelayStarted");
static_assert(sizeof(BP_Projectile_SAM_C_OnProjectileFireDelayStarted) == 0x000004, "Wrong size on BP_Projectile_SAM_C_OnProjectileFireDelayStarted");
static_assert(offsetof(BP_Projectile_SAM_C_OnProjectileFireDelayStarted, _fDelayDuration) == 0x000000, "Member 'BP_Projectile_SAM_C_OnProjectileFireDelayStarted::_fDelayDuration' has a wrong offset!");

// Function BP_Projectile_SAM.BP_Projectile_SAM_C.OnRetrieveFromPool
// 0x0001 (0x0001 - 0x0000)
struct BP_Projectile_SAM_C_OnRetrieveFromPool final
{
public:
	bool                                          _bAutomaticallyReactivateComponents;               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Projectile_SAM_C_OnRetrieveFromPool) == 0x000001, "Wrong alignment on BP_Projectile_SAM_C_OnRetrieveFromPool");
static_assert(sizeof(BP_Projectile_SAM_C_OnRetrieveFromPool) == 0x000001, "Wrong size on BP_Projectile_SAM_C_OnRetrieveFromPool");
static_assert(offsetof(BP_Projectile_SAM_C_OnRetrieveFromPool, _bAutomaticallyReactivateComponents) == 0x000000, "Member 'BP_Projectile_SAM_C_OnRetrieveFromPool::_bAutomaticallyReactivateComponents' has a wrong offset!");

// Function BP_Projectile_SAM.BP_Projectile_SAM_C.OnProjectileExplosion
// 0x0010 (0x0010 - 0x0000)
struct BP_Projectile_SAM_C_OnProjectileExplosion final
{
public:
	struct FVector                                _vLocation;                                        // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _fRadius;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Projectile_SAM_C_OnProjectileExplosion) == 0x000004, "Wrong alignment on BP_Projectile_SAM_C_OnProjectileExplosion");
static_assert(sizeof(BP_Projectile_SAM_C_OnProjectileExplosion) == 0x000010, "Wrong size on BP_Projectile_SAM_C_OnProjectileExplosion");
static_assert(offsetof(BP_Projectile_SAM_C_OnProjectileExplosion, _vLocation) == 0x000000, "Member 'BP_Projectile_SAM_C_OnProjectileExplosion::_vLocation' has a wrong offset!");
static_assert(offsetof(BP_Projectile_SAM_C_OnProjectileExplosion, _fRadius) == 0x00000C, "Member 'BP_Projectile_SAM_C_OnProjectileExplosion::_fRadius' has a wrong offset!");

}

