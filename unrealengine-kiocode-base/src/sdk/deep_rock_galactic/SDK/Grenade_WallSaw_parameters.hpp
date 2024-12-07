#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Grenade_WallSaw

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Grenade_WallSaw.Grenade_WallSaw_C.GetDurationBeforeExpiration
// 0x0004 (0x0004 - 0x0000)
struct Grenade_WallSaw_C_GetDurationBeforeExpiration final
{
public:
	float                                         Param_Duration;                                    // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Grenade_WallSaw_C_GetDurationBeforeExpiration) == 0x000004, "Wrong alignment on Grenade_WallSaw_C_GetDurationBeforeExpiration");
static_assert(sizeof(Grenade_WallSaw_C_GetDurationBeforeExpiration) == 0x000004, "Wrong size on Grenade_WallSaw_C_GetDurationBeforeExpiration");
static_assert(offsetof(Grenade_WallSaw_C_GetDurationBeforeExpiration, Param_Duration) == 0x000000, "Member 'Grenade_WallSaw_C_GetDurationBeforeExpiration::Param_Duration' has a wrong offset!");

// Function Grenade_WallSaw.Grenade_WallSaw_C.ExecuteUbergraph_Grenade_WallSaw
// 0x0080 (0x0080 - 0x0000)
struct Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5082[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5083[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WallSaw_C*                          CallFunc_FinishSpawningActor_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       CallFunc_GetComponentByClass_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw) == 0x000010, "Wrong alignment on Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw");
static_assert(sizeof(Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw) == 0x000080, "Wrong size on Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw");
static_assert(offsetof(Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw, EntryPoint) == 0x000000, "Member 'Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw::EntryPoint' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw, CallFunc_GetInstigator_ReturnValue) == 0x000008, "Member 'Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000050, "Member 'Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw, CallFunc_FinishSpawningActor_ReturnValue) == 0x000058, "Member 'Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw, CallFunc_GetComponentByClass_ReturnValue) == 0x000060, "Member 'Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw, CallFunc_GetForwardVector_ReturnValue) == 0x000068, "Member 'Grenade_WallSaw_C_ExecuteUbergraph_Grenade_WallSaw::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");

// Function Grenade_WallSaw.Grenade_WallSaw_C.AddGearStateEntries
// 0x0130 (0x0130 - 0x0000)
struct Grenade_WallSaw_C_AddGearStateEntries final
{
public:
	class AFSDPlayerState*                        PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGearStatEntry>                 Stats;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDamageComponent*                       CallFunc_GetComponentFromClass_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDamage_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5084[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x0040(0x0018)()
	struct FGearStatEntry                         K2Node_MakeStruct_GearStatEntry;                   // 0x0058(0x0068)()
	struct FGearStatEntry                         K2Node_MakeStruct_GearStatEntry_1;                 // 0x00C0(0x0068)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Grenade_WallSaw_C_AddGearStateEntries) == 0x000008, "Wrong alignment on Grenade_WallSaw_C_AddGearStateEntries");
static_assert(sizeof(Grenade_WallSaw_C_AddGearStateEntries) == 0x000130, "Wrong size on Grenade_WallSaw_C_AddGearStateEntries");
static_assert(offsetof(Grenade_WallSaw_C_AddGearStateEntries, PlayerState) == 0x000000, "Member 'Grenade_WallSaw_C_AddGearStateEntries::PlayerState' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_AddGearStateEntries, Stats) == 0x000008, "Member 'Grenade_WallSaw_C_AddGearStateEntries::Stats' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_AddGearStateEntries, CallFunc_GetComponentFromClass_ReturnValue) == 0x000018, "Member 'Grenade_WallSaw_C_AddGearStateEntries::CallFunc_GetComponentFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_AddGearStateEntries, CallFunc_GetDamage_ReturnValue) == 0x000020, "Member 'Grenade_WallSaw_C_AddGearStateEntries::CallFunc_GetDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_AddGearStateEntries, CallFunc_Conv_FloatToText_ReturnValue) == 0x000028, "Member 'Grenade_WallSaw_C_AddGearStateEntries::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_AddGearStateEntries, CallFunc_Conv_FloatToText_ReturnValue_1) == 0x000040, "Member 'Grenade_WallSaw_C_AddGearStateEntries::CallFunc_Conv_FloatToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_AddGearStateEntries, K2Node_MakeStruct_GearStatEntry) == 0x000058, "Member 'Grenade_WallSaw_C_AddGearStateEntries::K2Node_MakeStruct_GearStatEntry' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_AddGearStateEntries, K2Node_MakeStruct_GearStatEntry_1) == 0x0000C0, "Member 'Grenade_WallSaw_C_AddGearStateEntries::K2Node_MakeStruct_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue) == 0x000128, "Member 'Grenade_WallSaw_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_WallSaw_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue_1) == 0x00012C, "Member 'Grenade_WallSaw_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

}

