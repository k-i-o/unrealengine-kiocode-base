#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Grenade_HE_Base

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.ExecuteUbergraph_ITM_Grenade_HE_Base
// 0x0070 (0x0070 - 0x0000)
struct ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCloseToLocalPlayer_ReturnValue;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCloseToLocalPlayer_ReturnValue_1;       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52EE[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52EF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInRangeOfLocalPlayer_ReturnValue;       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetTinnitusProtection_ReturnValue;        // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F0[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F1[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base) == 0x000008, "Wrong alignment on ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base");
static_assert(sizeof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base) == 0x000070, "Wrong size on ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, EntryPoint) == 0x000000, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_IsCloseToLocalPlayer_ReturnValue) == 0x000004, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_IsCloseToLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_IsCloseToLocalPlayer_ReturnValue_1) == 0x000005, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_IsCloseToLocalPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_GetFSDGameUserSettings_ReturnValue) == 0x000020, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_GetFSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_IsInRangeOfLocalPlayer_ReturnValue) == 0x000028, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_IsInRangeOfLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_GetTinnitusProtection_ReturnValue) == 0x000029, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_GetTinnitusProtection_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00002C, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000038, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000044, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_HasAuthority_ReturnValue) == 0x000050, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000058, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x000060, "Member 'ITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");

// Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.AddGearStateEntries
// 0x01F8 (0x01F8 - 0x0000)
struct ITM_Grenade_HE_Base_C_AddGearStateEntries final
{
public:
	class AFSDPlayerState*                        PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGearStatEntry>                 Stats;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry;             // 0x0020(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F2[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_1;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_1;           // 0x0098(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_1;        // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F3[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_2;             // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_2;           // 0x0110(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_2;        // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F4[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_3;             // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_3;           // 0x0188(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_3;        // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52F5[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_Grenade_HE_Base_C_AddGearStateEntries) == 0x000008, "Wrong alignment on ITM_Grenade_HE_Base_C_AddGearStateEntries");
static_assert(sizeof(ITM_Grenade_HE_Base_C_AddGearStateEntries) == 0x0001F8, "Wrong size on ITM_Grenade_HE_Base_C_AddGearStateEntries");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, PlayerState) == 0x000000, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::PlayerState' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, Stats) == 0x000008, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::Stats' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_GetObjectClass_ReturnValue) == 0x000018, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_GearStatEntry) == 0x000020, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_GearStatEntry' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_HasUpgradedValue) == 0x000088, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue) == 0x00008C, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_GetObjectClass_ReturnValue_1) == 0x000090, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_GetObjectClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_GearStatEntry_1) == 0x000098, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_HasUpgradedValue_1) == 0x000100, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_HasUpgradedValue_1' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue_1) == 0x000104, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_GetObjectClass_ReturnValue_2) == 0x000108, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_GetObjectClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_GearStatEntry_2) == 0x000110, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_GearStatEntry_2' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_HasUpgradedValue_2) == 0x000178, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_HasUpgradedValue_2' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue_2) == 0x00017C, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_GetObjectClass_ReturnValue_3) == 0x000180, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_GetObjectClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_GearStatEntry_3) == 0x000188, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_GearStatEntry_3' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_UPGDESC_Damage_HasUpgradedValue_3) == 0x0001F0, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_UPGDESC_Damage_HasUpgradedValue_3' has a wrong offset!");
static_assert(offsetof(ITM_Grenade_HE_Base_C_AddGearStateEntries, CallFunc_Array_Add_ReturnValue_3) == 0x0001F4, "Member 'ITM_Grenade_HE_Base_C_AddGearStateEntries::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");

}
