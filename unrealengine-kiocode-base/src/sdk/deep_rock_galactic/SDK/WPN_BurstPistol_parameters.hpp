#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_BurstPistol

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function WPN_BurstPistol.WPN_BurstPistol_C.ExecuteUbergraph_WPN_BurstPistol
// 0x0020 (0x0020 - 0x0000)
struct WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3151[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponDisplay_Base_AmmoCount_C*        K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol) == 0x000008, "Wrong alignment on WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol");
static_assert(sizeof(WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol) == 0x000020, "Wrong size on WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol");
static_assert(offsetof(WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol, EntryPoint) == 0x000000, "Member 'WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol::EntryPoint' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000008, "Member 'WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol, K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count) == 0x000010, "Member 'WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol::K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WPN_BurstPistol.WPN_BurstPistol_C.GetGearStatEntry
// 0x0900 (0x0900 - 0x0000)
struct WPN_BurstPistol_C_GetGearStatEntry final
{
public:
	class AFSDPlayerState*                        PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGearStatEntry>                 Stats;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_DamageBonus_Random_GearStatEntry; // 0x0020(0x0068)()
	bool                                          CallFunc_UPGDESC_DamageBonus_Random_HasUpgradedValue; // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3152[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_1;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3153[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetUpgradeName_ReturnValue;               // 0x00A0(0x0018)()
	class FText                                   CallFunc_GetUpgradeName_ReturnValue_1;             // 0x00B8(0x0018)()
	struct FGearStatEntry                         CallFunc_UPGDESC_Generic_GearStatEntry;            // 0x00D0(0x0068)()
	bool                                          CallFunc_UPGDESC_Generic_HasUpgradedValue;         // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3154[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetUpgradeName_ReturnValue_2;             // 0x0140(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3155[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_2;             // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Generic_GearStatEntry_1;          // 0x0168(0x0068)()
	bool                                          CallFunc_UPGDESC_Generic_HasUpgradedValue_1;       // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3156[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_3;             // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3157[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Generic_GearStatEntry_2;          // 0x01E8(0x0068)()
	bool                                          CallFunc_UPGDESC_Generic_HasUpgradedValue_2;       // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3158[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_4;             // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3159[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_HitScan_GearStatEntry;            // 0x0268(0x0068)()
	bool                                          CallFunc_UPGDESC_HitScan_HasAnyUpgrades;           // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_315A[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_5;             // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_315B[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_HitScan_GearStatEntry_1;          // 0x02E8(0x0068)()
	bool                                          CallFunc_UPGDESC_HitScan_HasAnyUpgrades_1;         // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_315C[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_6;             // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry;         // 0x0360(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades;        // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_315D[0x3];                                     // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_6;                  // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_315E[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetUpgradeName_ReturnValue_3;             // 0x03D8(0x0018)()
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_7;             // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_8;             // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_BurstWeapon_GearStatEntry;        // 0x0400(0x0068)()
	bool                                          CallFunc_UPGDESC_BurstWeapon_HasUpgradedValue;     // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_315F[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_BurstWeapon_GearStatEntry_1;      // 0x0470(0x0068)()
	bool                                          CallFunc_UPGDESC_BurstWeapon_HasUpgradedValue_1;   // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3160[0x3];                                     // 0x04D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_7;                  // 0x04DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_8;                  // 0x04E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3161[0x4];                                     // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_9;             // 0x04E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_HitScan_GearStatEntry_2;          // 0x04F0(0x0068)()
	bool                                          CallFunc_UPGDESC_HitScan_HasAnyUpgrades_2;         // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3162[0x7];                                     // 0x0559(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry;             // 0x0560(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue;          // 0x05C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3163[0x3];                                     // 0x05C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_9;                  // 0x05CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_10;                 // 0x05D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3164[0x4];                                     // 0x05D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_1;           // 0x05D8(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_1;        // 0x0640(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3165[0x7];                                     // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1;       // 0x0648(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1;      // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3166[0x3];                                     // 0x06B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_11;                 // 0x06B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_12;                 // 0x06B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3167[0x4];                                     // 0x06BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry_2;       // 0x06C0(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_2;      // 0x0728(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3168[0x7];                                     // 0x0729(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry_3;       // 0x0730(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_3;      // 0x0798(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3169[0x3];                                     // 0x0799(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_13;                 // 0x079C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_14;                 // 0x07A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_316A[0x4];                                     // 0x07A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry_4;       // 0x07A8(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_4;      // 0x0810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_316B[0x7];                                     // 0x0811(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry_5;       // 0x0818(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_5;      // 0x0880(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_316C[0x3];                                     // 0x0881(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_15;                 // 0x0884(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_16;                 // 0x0888(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_316D[0x4];                                     // 0x088C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_2;           // 0x0890(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_2;        // 0x08F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_316E[0x3];                                     // 0x08F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_17;                 // 0x08FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPN_BurstPistol_C_GetGearStatEntry) == 0x000008, "Wrong alignment on WPN_BurstPistol_C_GetGearStatEntry");
static_assert(sizeof(WPN_BurstPistol_C_GetGearStatEntry) == 0x000900, "Wrong size on WPN_BurstPistol_C_GetGearStatEntry");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, PlayerState) == 0x000000, "Member 'WPN_BurstPistol_C_GetGearStatEntry::PlayerState' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, Stats) == 0x000008, "Member 'WPN_BurstPistol_C_GetGearStatEntry::Stats' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue) == 0x000018, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_DamageBonus_Random_GearStatEntry) == 0x000020, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_DamageBonus_Random_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_DamageBonus_Random_HasUpgradedValue) == 0x000088, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_DamageBonus_Random_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue_1) == 0x000090, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue) == 0x000098, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetUpgradeName_ReturnValue) == 0x0000A0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetUpgradeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetUpgradeName_ReturnValue_1) == 0x0000B8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetUpgradeName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_Generic_GearStatEntry) == 0x0000D0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_Generic_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_Generic_HasUpgradedValue) == 0x000138, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_Generic_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetUpgradeName_ReturnValue_2) == 0x000140, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetUpgradeName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_1) == 0x000158, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue_2) == 0x000160, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_Generic_GearStatEntry_1) == 0x000168, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_Generic_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_Generic_HasUpgradedValue_1) == 0x0001D0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_Generic_HasUpgradedValue_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue_3) == 0x0001D8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_2) == 0x0001E0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_Generic_GearStatEntry_2) == 0x0001E8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_Generic_GearStatEntry_2' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_Generic_HasUpgradedValue_2) == 0x000250, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_Generic_HasUpgradedValue_2' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue_4) == 0x000258, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_3) == 0x000260, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_HitScan_GearStatEntry) == 0x000268, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_HitScan_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_HitScan_HasAnyUpgrades) == 0x0002D0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_HitScan_HasAnyUpgrades' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue_5) == 0x0002D8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_4) == 0x0002E0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_HitScan_GearStatEntry_1) == 0x0002E8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_HitScan_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_HitScan_HasAnyUpgrades_1) == 0x000350, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_HitScan_HasAnyUpgrades_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue_6) == 0x000358, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry) == 0x000360, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades) == 0x0003C8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_5) == 0x0003CC, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_6) == 0x0003D0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetUpgradeName_ReturnValue_3) == 0x0003D8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetUpgradeName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue_7) == 0x0003F0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue_8) == 0x0003F8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_BurstWeapon_GearStatEntry) == 0x000400, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_BurstWeapon_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_BurstWeapon_HasUpgradedValue) == 0x000468, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_BurstWeapon_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_BurstWeapon_GearStatEntry_1) == 0x000470, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_BurstWeapon_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_BurstWeapon_HasUpgradedValue_1) == 0x0004D8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_BurstWeapon_HasUpgradedValue_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_7) == 0x0004DC, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_8) == 0x0004E0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue_9) == 0x0004E8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_HitScan_GearStatEntry_2) == 0x0004F0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_HitScan_GearStatEntry_2' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_HitScan_HasAnyUpgrades_2) == 0x000558, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_HitScan_HasAnyUpgrades_2' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_GearStatEntry) == 0x000560, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_HasUpgradedValue) == 0x0005C8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_9) == 0x0005CC, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_10) == 0x0005D0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_GearStatEntry_1) == 0x0005D8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_HasUpgradedValue_1) == 0x000640, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_HasUpgradedValue_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1) == 0x000648, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1) == 0x0006B0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_11) == 0x0006B4, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_12) == 0x0006B8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry_2) == 0x0006C0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry_2' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_2) == 0x000728, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_2' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry_3) == 0x000730, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry_3' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_3) == 0x000798, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_3' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_13) == 0x00079C, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_14) == 0x0007A0, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry_4) == 0x0007A8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry_4' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_4) == 0x000810, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_4' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry_5) == 0x000818, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry_5' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_5) == 0x000880, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_5' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_15) == 0x000884, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_16) == 0x000888, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_GearStatEntry_2) == 0x000890, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_GearStatEntry_2' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_HasUpgradedValue_2) == 0x0008F8, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_HasUpgradedValue_2' has a wrong offset!");
static_assert(offsetof(WPN_BurstPistol_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_17) == 0x0008FC, "Member 'WPN_BurstPistol_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_17' has a wrong offset!");

}
