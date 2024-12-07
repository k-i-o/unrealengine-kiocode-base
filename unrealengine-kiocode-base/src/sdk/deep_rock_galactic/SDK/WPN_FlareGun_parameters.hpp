#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_FlareGun

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function WPN_FlareGun.WPN_FlareGun_C.ExecuteUbergraph_WPN_FlareGun
// 0x0020 (0x0020 - 0x0000)
struct WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_346E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponDisplay_Base_AmmoCount_C*        K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun) == 0x000008, "Wrong alignment on WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun");
static_assert(sizeof(WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun) == 0x000020, "Wrong size on WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun");
static_assert(offsetof(WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun, EntryPoint) == 0x000000, "Member 'WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun::EntryPoint' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000008, "Member 'WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun, K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count) == 0x000010, "Member 'WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun::K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WPN_FlareGun_C_ExecuteUbergraph_WPN_FlareGun::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WPN_FlareGun.WPN_FlareGun_C.GetGearStatEntry
// 0x02D8 (0x02D8 - 0x0000)
struct WPN_FlareGun_C_GetGearStatEntry final
{
public:
	class AFSDPlayerState*                        PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGearStatEntry>                 Stats;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry;         // 0x0020(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades;        // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_346F[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1;       // 0x0090(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1;      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3470[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3471[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry_2;       // 0x0108(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_2;      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3472[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_FlaregunProjectile_GearStatEntry; // 0x0178(0x0068)()
	bool                                          CallFunc_UPGDESC_FlaregunProjectile_HasUpgradedValue; // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3473[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3474[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry_3;       // 0x01F0(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_3;      // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3475[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry_4;       // 0x0260(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_4;      // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3476[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPN_FlareGun_C_GetGearStatEntry) == 0x000008, "Wrong alignment on WPN_FlareGun_C_GetGearStatEntry");
static_assert(sizeof(WPN_FlareGun_C_GetGearStatEntry) == 0x0002D8, "Wrong size on WPN_FlareGun_C_GetGearStatEntry");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, PlayerState) == 0x000000, "Member 'WPN_FlareGun_C_GetGearStatEntry::PlayerState' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, Stats) == 0x000008, "Member 'WPN_FlareGun_C_GetGearStatEntry::Stats' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue) == 0x000018, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry) == 0x000020, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades) == 0x000088, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1) == 0x000090, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1) == 0x0000F8, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue) == 0x0000FC, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_1) == 0x000100, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry_2) == 0x000108, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry_2' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_2) == 0x000170, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_2' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_UPGDESC_FlaregunProjectile_GearStatEntry) == 0x000178, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_UPGDESC_FlaregunProjectile_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_UPGDESC_FlaregunProjectile_HasUpgradedValue) == 0x0001E0, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_UPGDESC_FlaregunProjectile_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_2) == 0x0001E4, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_3) == 0x0001E8, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry_3) == 0x0001F0, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry_3' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_3) == 0x000258, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_3' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry_4) == 0x000260, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry_4' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_4) == 0x0002C8, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_4' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_4) == 0x0002CC, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WPN_FlareGun_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_5) == 0x0002D0, "Member 'WPN_FlareGun_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");

}

