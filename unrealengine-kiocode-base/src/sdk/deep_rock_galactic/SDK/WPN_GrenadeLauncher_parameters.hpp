#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_GrenadeLauncher

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.CustomEvent1
// 0x0008 (0x0008 - 0x0000)
struct WPN_GrenadeLauncher_C_CustomEvent1 final
{
public:
	const class UItemUpgrade*                     Event;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPN_GrenadeLauncher_C_CustomEvent1) == 0x000008, "Wrong alignment on WPN_GrenadeLauncher_C_CustomEvent1");
static_assert(sizeof(WPN_GrenadeLauncher_C_CustomEvent1) == 0x000008, "Wrong size on WPN_GrenadeLauncher_C_CustomEvent1");
static_assert(offsetof(WPN_GrenadeLauncher_C_CustomEvent1, Event) == 0x000000, "Member 'WPN_GrenadeLauncher_C_CustomEvent1::Event' has a wrong offset!");

// Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.ExecuteUbergraph_WPN_GrenadeLauncher
// 0x0038 (0x0038 - 0x0000)
struct WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_509E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHUD_CroNewGrenadeLauncher_C*           K2Node_DynamicCast_AsHUD_Cro_New_Grenade_Launcher; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UItemUpgrade*                     K2Node_Event_Event;                                // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponDisplay_Base_AmmoCount_C*        K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher) == 0x000008, "Wrong alignment on WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher");
static_assert(sizeof(WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher) == 0x000038, "Wrong size on WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher");
static_assert(offsetof(WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher, EntryPoint) == 0x000000, "Member 'WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher::EntryPoint' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher, K2Node_DynamicCast_AsHUD_Cro_New_Grenade_Launcher) == 0x000008, "Member 'WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher::K2Node_DynamicCast_AsHUD_Cro_New_Grenade_Launcher' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000018, "Member 'WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher, K2Node_Event_Event) == 0x000020, "Member 'WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher::K2Node_Event_Event' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher, K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count) == 0x000028, "Member 'WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher::K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'WPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.GetGearStatEntry
// 0x07F8 (0x07F8 - 0x0000)
struct WPN_GrenadeLauncher_C_GetGearStatEntry final
{
public:
	class AFSDPlayerState*                        PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGearStatEntry>                 Stats;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   CallFunc_GetUpgradeName_ReturnValue;               // 0x0018(0x0018)()
	class FText                                   CallFunc_GetUpgradeName_ReturnValue_1;             // 0x0030(0x0018)()
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Generic_GearStatEntry;            // 0x0050(0x0068)()
	bool                                          CallFunc_UPGDESC_Generic_HasUpgradedValue;         // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A0[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Generic_GearStatEntry_1;          // 0x00C0(0x0068)()
	bool                                          CallFunc_UPGDESC_Generic_HasUpgradedValue_1;       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A1[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_DamageBonus_Random_GearStatEntry; // 0x0130(0x0068)()
	bool                                          CallFunc_UPGDESC_DamageBonus_Random_HasUpgradedValue; // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A2[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_1;             // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50A3[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry;         // 0x01B0(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades;        // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A4[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1;       // 0x0220(0x0068)()
	bool                                          CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1;      // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A5[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x02C0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x02D8(0x0018)()
	struct FGearStatEntry                         K2Node_MakeStruct_GearStatEntry;                   // 0x02F0(0x0068)()
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x035C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_2;             // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectileLauncherComponent*           CallFunc_GetComponentFromClass_ReturnValue;        // 0x0368(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry;             // 0x0370(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue;          // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A6[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Projectile_GearStatEntry;         // 0x03E0(0x0068)()
	bool                                          CallFunc_UPGDESC_Projectile_HasUpgradedValue;      // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A7[0x3];                                     // 0x0449(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x044C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_6;                  // 0x0450(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50A8[0x4];                                     // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Projectile_GearStatEntry_1;       // 0x0458(0x0068)()
	bool                                          CallFunc_UPGDESC_Projectile_HasUpgradedValue_1;    // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A9[0x7];                                     // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_DamageBonus_DamageConversion_GearStatEntry; // 0x04C8(0x0068)()
	bool                                          CallFunc_UPGDESC_DamageBonus_DamageConversion_HasUpgradedValue; // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50AA[0x3];                                     // 0x0531(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_7;                  // 0x0534(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_8;                  // 0x0538(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50AB[0x4];                                     // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_1;           // 0x0540(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_1;        // 0x05A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50AC[0x7];                                     // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_2;           // 0x05B0(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_2;        // 0x0618(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50AD[0x3];                                     // 0x0619(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_9;                  // 0x061C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_10;                 // 0x0620(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50AE[0x4];                                     // 0x0624(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_3;           // 0x0628(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_3;        // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50AF[0x7];                                     // 0x0691(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_4;           // 0x0698(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_4;        // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50B0[0x3];                                     // 0x0701(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_11;                 // 0x0704(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_12;                 // 0x0708(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50B1[0x4];                                     // 0x070C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_5;           // 0x0710(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_5;        // 0x0778(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50B2[0x7];                                     // 0x0779(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Damage_GearStatEntry_6;           // 0x0780(0x0068)()
	bool                                          CallFunc_UPGDESC_Damage_HasUpgradedValue_6;        // 0x07E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50B3[0x3];                                     // 0x07E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_13;                 // 0x07EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_14;                 // 0x07F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPN_GrenadeLauncher_C_GetGearStatEntry) == 0x000008, "Wrong alignment on WPN_GrenadeLauncher_C_GetGearStatEntry");
static_assert(sizeof(WPN_GrenadeLauncher_C_GetGearStatEntry) == 0x0007F8, "Wrong size on WPN_GrenadeLauncher_C_GetGearStatEntry");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, PlayerState) == 0x000000, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::PlayerState' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, Stats) == 0x000008, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::Stats' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_GetUpgradeName_ReturnValue) == 0x000018, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_GetUpgradeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_GetUpgradeName_ReturnValue_1) == 0x000030, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_GetUpgradeName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue) == 0x000048, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Generic_GearStatEntry) == 0x000050, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Generic_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Generic_HasUpgradedValue) == 0x0000B8, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Generic_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Generic_GearStatEntry_1) == 0x0000C0, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Generic_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Generic_HasUpgradedValue_1) == 0x000128, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Generic_HasUpgradedValue_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue) == 0x00012C, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_DamageBonus_Random_GearStatEntry) == 0x000130, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_DamageBonus_Random_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_DamageBonus_Random_HasUpgradedValue) == 0x000198, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_DamageBonus_Random_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue_1) == 0x0001A0, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_1) == 0x0001A8, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry) == 0x0001B0, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades) == 0x000218, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1) == 0x000220, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1) == 0x000288, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_2) == 0x00028C, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Conv_TextToString_ReturnValue) == 0x000290, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0002A0, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Conv_StringToInt_ReturnValue) == 0x0002B0, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Conv_StringToInt_ReturnValue_1) == 0x0002B4, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Conv_StringToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Add_IntInt_ReturnValue) == 0x0002B8, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Add_IntInt_ReturnValue_1) == 0x0002BC, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Conv_IntToText_ReturnValue) == 0x0002C0, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0002D8, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, K2Node_MakeStruct_GearStatEntry) == 0x0002F0, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::K2Node_MakeStruct_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_3) == 0x000358, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_4) == 0x00035C, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue_2) == 0x000360, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_GetComponentFromClass_ReturnValue) == 0x000368, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_GetComponentFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_GearStatEntry) == 0x000370, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_HasUpgradedValue) == 0x0003D8, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Projectile_GearStatEntry) == 0x0003E0, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Projectile_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Projectile_HasUpgradedValue) == 0x000448, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Projectile_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_5) == 0x00044C, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_6) == 0x000450, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Projectile_GearStatEntry_1) == 0x000458, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Projectile_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Projectile_HasUpgradedValue_1) == 0x0004C0, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Projectile_HasUpgradedValue_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_DamageBonus_DamageConversion_GearStatEntry) == 0x0004C8, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_DamageBonus_DamageConversion_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_DamageBonus_DamageConversion_HasUpgradedValue) == 0x000530, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_DamageBonus_DamageConversion_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_7) == 0x000534, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_8) == 0x000538, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_GearStatEntry_1) == 0x000540, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_HasUpgradedValue_1) == 0x0005A8, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_HasUpgradedValue_1' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_GearStatEntry_2) == 0x0005B0, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_GearStatEntry_2' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_HasUpgradedValue_2) == 0x000618, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_HasUpgradedValue_2' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_9) == 0x00061C, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_10) == 0x000620, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_GearStatEntry_3) == 0x000628, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_GearStatEntry_3' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_HasUpgradedValue_3) == 0x000690, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_HasUpgradedValue_3' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_GearStatEntry_4) == 0x000698, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_GearStatEntry_4' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_HasUpgradedValue_4) == 0x000700, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_HasUpgradedValue_4' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_11) == 0x000704, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_12) == 0x000708, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_GearStatEntry_5) == 0x000710, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_GearStatEntry_5' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_HasUpgradedValue_5) == 0x000778, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_HasUpgradedValue_5' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_GearStatEntry_6) == 0x000780, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_GearStatEntry_6' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_UPGDESC_Damage_HasUpgradedValue_6) == 0x0007E8, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_UPGDESC_Damage_HasUpgradedValue_6' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_13) == 0x0007EC, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WPN_GrenadeLauncher_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_14) == 0x0007F0, "Member 'WPN_GrenadeLauncher_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_14' has a wrong offset!");

}
