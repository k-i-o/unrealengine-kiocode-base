#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Grenade_Axe

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Grenade_Axe.Grenade_Axe_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0024(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000024, "Member 'Grenade_Axe_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function Grenade_Axe.Grenade_Axe_C.ExecuteUbergraph_Grenade_Axe
// 0x0180 (0x0180 - 0x0000)
struct Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_507C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x002C(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_507D[0x2];                                     // 0x00B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AProjectileBase*                        CallFunc_SpawnProjectile_ReturnValue;              // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe) == 0x000008, "Wrong alignment on Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe");
static_assert(sizeof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe) == 0x000180, "Wrong size on Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, EntryPoint) == 0x000000, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::EntryPoint' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, K2Node_ComponentBoundEvent_HitComponent) == 0x000008, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000020, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, K2Node_ComponentBoundEvent_Hit) == 0x00002C, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_bBlockingHit) == 0x0000B4, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000B5, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_Time) == 0x0000B8, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_Distance) == 0x0000BC, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_Location) == 0x0000C0, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_ImpactPoint) == 0x0000CC, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_Normal) == 0x0000D8, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_ImpactNormal) == 0x0000E4, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_PhysMat) == 0x0000F0, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_HitActor) == 0x0000F8, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_HitComponent) == 0x000100, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_HitBoneName) == 0x000108, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_HitItem) == 0x000110, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_ElementIndex) == 0x000114, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_FaceIndex) == 0x000118, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_TraceStart) == 0x00011C, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_BreakHitResult_TraceEnd) == 0x000128, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000134, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_GetVelocity_ReturnValue) == 0x000140, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_Add_VectorVector_ReturnValue) == 0x00014C, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_Normal_ReturnValue) == 0x000158, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000164, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_SpawnProjectile_ReturnValue) == 0x000170, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_SpawnProjectile_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_HasAuthority_ReturnValue) == 0x000178, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe, CallFunc_HasAuthority_ReturnValue_1) == 0x000179, "Member 'Grenade_Axe_C_ExecuteUbergraph_Grenade_Axe::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");

// Function Grenade_Axe.Grenade_Axe_C.AddGearStateEntries
// 0x01E8 (0x01E8 - 0x0000)
struct Grenade_Axe_C_AddGearStateEntries final
{
public:
	class AFSDPlayerState*                        PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGearStatEntry>                 Stats;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGearStatEntry                         K2Node_MakeStruct_GearStatEntry;                   // 0x0018(0x0068)()
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry;             // 0x0088(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue;          // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_507E[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_1;             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_1;           // 0x0100(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_1;        // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_507F[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_2;             // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_2;           // 0x0178(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_2;        // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5080[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Grenade_Axe_C_AddGearStateEntries) == 0x000008, "Wrong alignment on Grenade_Axe_C_AddGearStateEntries");
static_assert(sizeof(Grenade_Axe_C_AddGearStateEntries) == 0x0001E8, "Wrong size on Grenade_Axe_C_AddGearStateEntries");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, PlayerState) == 0x000000, "Member 'Grenade_Axe_C_AddGearStateEntries::PlayerState' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, Stats) == 0x000008, "Member 'Grenade_Axe_C_AddGearStateEntries::Stats' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, K2Node_MakeStruct_GearStatEntry) == 0x000018, "Member 'Grenade_Axe_C_AddGearStateEntries::K2Node_MakeStruct_GearStatEntry' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, CallFunc_GetObjectClass_ReturnValue) == 0x000080, "Member 'Grenade_Axe_C_AddGearStateEntries::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_GearStatEntry) == 0x000088, "Member 'Grenade_Axe_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_GearStatEntry' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_HasUpgradedValue) == 0x0000F0, "Member 'Grenade_Axe_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue) == 0x0000F4, "Member 'Grenade_Axe_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, CallFunc_GetObjectClass_ReturnValue_1) == 0x0000F8, "Member 'Grenade_Axe_C_AddGearStateEntries::CallFunc_GetObjectClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_GearStatEntry_1) == 0x000100, "Member 'Grenade_Axe_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_HasUpgradedValue_1) == 0x000168, "Member 'Grenade_Axe_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_HasUpgradedValue_1' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue_1) == 0x00016C, "Member 'Grenade_Axe_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, CallFunc_GetObjectClass_ReturnValue_2) == 0x000170, "Member 'Grenade_Axe_C_AddGearStateEntries::CallFunc_GetObjectClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_GearStatEntry_2) == 0x000178, "Member 'Grenade_Axe_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_GearStatEntry_2' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_HasUpgradedValue_2) == 0x0001E0, "Member 'Grenade_Axe_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_HasUpgradedValue_2' has a wrong offset!");
static_assert(offsetof(Grenade_Axe_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue_2) == 0x0001E4, "Member 'Grenade_Axe_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

}

