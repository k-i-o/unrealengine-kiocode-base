#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRJ_MicroMissile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PRJ_MicroMissile.PRJ_MicroMissile_C.IncreaseDamage
// 0x0004 (0x0004 - 0x0000)
struct PRJ_MicroMissile_C_IncreaseDamage final
{
public:
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PRJ_MicroMissile_C_IncreaseDamage) == 0x000004, "Wrong alignment on PRJ_MicroMissile_C_IncreaseDamage");
static_assert(sizeof(PRJ_MicroMissile_C_IncreaseDamage) == 0x000004, "Wrong size on PRJ_MicroMissile_C_IncreaseDamage");
static_assert(offsetof(PRJ_MicroMissile_C_IncreaseDamage, CallFunc_Add_FloatFloat_ReturnValue) == 0x000000, "Member 'PRJ_MicroMissile_C_IncreaseDamage::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function PRJ_MicroMissile.PRJ_MicroMissile_C.OnUpgradeElementAdded
// 0x0008 (0x0008 - 0x0000)
struct PRJ_MicroMissile_C_OnUpgradeElementAdded final
{
public:
	class UProjectileUpgradeElement*              Element;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PRJ_MicroMissile_C_OnUpgradeElementAdded) == 0x000008, "Wrong alignment on PRJ_MicroMissile_C_OnUpgradeElementAdded");
static_assert(sizeof(PRJ_MicroMissile_C_OnUpgradeElementAdded) == 0x000008, "Wrong size on PRJ_MicroMissile_C_OnUpgradeElementAdded");
static_assert(offsetof(PRJ_MicroMissile_C_OnUpgradeElementAdded, Element) == 0x000000, "Member 'PRJ_MicroMissile_C_OnUpgradeElementAdded::Element' has a wrong offset!");

// Function PRJ_MicroMissile.PRJ_MicroMissile_C.Explode
// 0x0088 (0x0088 - 0x0000)
struct PRJ_MicroMissile_C_Explode final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(PRJ_MicroMissile_C_Explode) == 0x000004, "Wrong alignment on PRJ_MicroMissile_C_Explode");
static_assert(sizeof(PRJ_MicroMissile_C_Explode) == 0x000088, "Wrong size on PRJ_MicroMissile_C_Explode");
static_assert(offsetof(PRJ_MicroMissile_C_Explode, HitResult) == 0x000000, "Member 'PRJ_MicroMissile_C_Explode::HitResult' has a wrong offset!");

// Function PRJ_MicroMissile.PRJ_MicroMissile_C.Impact
// 0x0088 (0x0088 - 0x0000)
struct PRJ_MicroMissile_C_Impact final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(PRJ_MicroMissile_C_Impact) == 0x000004, "Wrong alignment on PRJ_MicroMissile_C_Impact");
static_assert(sizeof(PRJ_MicroMissile_C_Impact) == 0x000088, "Wrong size on PRJ_MicroMissile_C_Impact");
static_assert(offsetof(PRJ_MicroMissile_C_Impact, HitResult) == 0x000000, "Member 'PRJ_MicroMissile_C_Impact::HitResult' has a wrong offset!");

// Function PRJ_MicroMissile.PRJ_MicroMissile_C.OnImpacted
// 0x008C (0x008C - 0x0000)
struct PRJ_MicroMissile_C_OnImpacted final
{
public:
	bool                                          PredictedImpact;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_539C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             HitResult;                                         // 0x0004(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(PRJ_MicroMissile_C_OnImpacted) == 0x000004, "Wrong alignment on PRJ_MicroMissile_C_OnImpacted");
static_assert(sizeof(PRJ_MicroMissile_C_OnImpacted) == 0x00008C, "Wrong size on PRJ_MicroMissile_C_OnImpacted");
static_assert(offsetof(PRJ_MicroMissile_C_OnImpacted, PredictedImpact) == 0x000000, "Member 'PRJ_MicroMissile_C_OnImpacted::PredictedImpact' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_OnImpacted, HitResult) == 0x000004, "Member 'PRJ_MicroMissile_C_OnImpacted::HitResult' has a wrong offset!");

// Function PRJ_MicroMissile.PRJ_MicroMissile_C.ExecuteUbergraph_PRJ_MicroMissile
// 0x0238 (0x0238 - 0x0000)
struct PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_539D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectileUpgradeElement*              K2Node_Event_element;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ElementOf_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_539E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ElementOf_ReturnValue_1;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ElementOf_ReturnValue_2;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ElementOf_ReturnValue_3;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_539F[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A0[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A1[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_CustomEvent_hitResult_1;                    // 0x0060(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             K2Node_CustomEvent_hitResult;                      // 0x00E8(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0170(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0180(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0190(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x0198(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_PredictedImpact;                      // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A2[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x01A4(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile) == 0x000008, "Wrong alignment on PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile");
static_assert(sizeof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile) == 0x000238, "Wrong size on PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, EntryPoint) == 0x000000, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::EntryPoint' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, K2Node_Event_element) == 0x000008, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::K2Node_Event_element' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_ElementOf_ReturnValue) == 0x000010, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_ElementOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000014, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_ElementOf_ReturnValue_1) == 0x000018, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_ElementOf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_ElementOf_ReturnValue_2) == 0x000019, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_ElementOf_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_ElementOf_ReturnValue_3) == 0x00001A, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_ElementOf_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_Add_FloatFloat_ReturnValue) == 0x000028, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_Less_FloatFloat_ReturnValue) == 0x00002C, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000030, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000044, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000050, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, Temp_int_Variable) == 0x000058, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00005C, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, K2Node_CustomEvent_hitResult_1) == 0x000060, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::K2Node_CustomEvent_hitResult_1' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, K2Node_CustomEvent_hitResult) == 0x0000E8, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::K2Node_CustomEvent_hitResult' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, K2Node_CreateDelegate_OutputDelegate_1) == 0x000170, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, K2Node_CreateDelegate_OutputDelegate_2) == 0x000180, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000190, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x000198, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, K2Node_Event_PredictedImpact) == 0x0001A0, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::K2Node_Event_PredictedImpact' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, K2Node_Event_HitResult) == 0x0001A4, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00022C, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000230, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile, CallFunc_Subtract_IntInt_ReturnValue) == 0x000234, "Member 'PRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

}
