#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProjectileBullet_Tank

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ProjectileBullet_Tank.BP_ProjectileBullet_Tank_C.ExecuteUbergraph_BP_ProjectileBullet_Tank
// 0x0070 (0x0070 - 0x0000)
struct BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event__vLocation;                           // 0x0004(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event__fRadius;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2164[0xC];                                     // 0x0024(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	TArray<class UBFGEffectContainer*>            CallFunc_ActivateEffectWithTransform_ReturnValue;  // 0x0060(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank) == 0x000010, "Wrong alignment on BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank");
static_assert(sizeof(BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank) == 0x000070, "Wrong size on BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank");
static_assert(offsetof(BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank, EntryPoint) == 0x000000, "Member 'BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank, K2Node_Event__vLocation) == 0x000004, "Member 'BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank::K2Node_Event__vLocation' has a wrong offset!");
static_assert(offsetof(BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank, K2Node_Event__fRadius) == 0x000010, "Member 'BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank::K2Node_Event__fRadius' has a wrong offset!");
static_assert(offsetof(BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000014, "Member 'BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank, CallFunc_MakeVector_ReturnValue) == 0x000018, "Member 'BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank, CallFunc_ActivateEffectWithTransform_ReturnValue) == 0x000060, "Member 'BP_ProjectileBullet_Tank_C_ExecuteUbergraph_BP_ProjectileBullet_Tank::CallFunc_ActivateEffectWithTransform_ReturnValue' has a wrong offset!");

// Function BP_ProjectileBullet_Tank.BP_ProjectileBullet_Tank_C.OnProjectileExplosion
// 0x0010 (0x0010 - 0x0000)
struct BP_ProjectileBullet_Tank_C_OnProjectileExplosion final
{
public:
	struct FVector                                _vLocation;                                        // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _fRadius;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ProjectileBullet_Tank_C_OnProjectileExplosion) == 0x000004, "Wrong alignment on BP_ProjectileBullet_Tank_C_OnProjectileExplosion");
static_assert(sizeof(BP_ProjectileBullet_Tank_C_OnProjectileExplosion) == 0x000010, "Wrong size on BP_ProjectileBullet_Tank_C_OnProjectileExplosion");
static_assert(offsetof(BP_ProjectileBullet_Tank_C_OnProjectileExplosion, _vLocation) == 0x000000, "Member 'BP_ProjectileBullet_Tank_C_OnProjectileExplosion::_vLocation' has a wrong offset!");
static_assert(offsetof(BP_ProjectileBullet_Tank_C_OnProjectileExplosion, _fRadius) == 0x00000C, "Member 'BP_ProjectileBullet_Tank_C_OnProjectileExplosion::_fRadius' has a wrong offset!");

}
