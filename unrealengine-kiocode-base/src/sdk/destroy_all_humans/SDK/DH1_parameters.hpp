#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DH1

#include "Basic.hpp"

#include "DH1_structs.hpp"


namespace SDK::Params
{

// Function DH1.DH1DamageModifier_DataTable.FindByWeaponType
// 0x0060 (0x0060 - 0x0000)
struct DH1DamageModifier_DataTable_FindByWeaponType final
{
public:
	struct FDH1DamageModifier                     _entryOut;                                         // 0x0000(0x0048)(Parm, OutParm, NativeAccessSpecifierPublic)
	EDH1WeaponType                                _weaponType;                                       // 0x0048(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E9E[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             _pDataTable;                                       // 0x0050(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0058(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E9F[0x7];                                     // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(DH1DamageModifier_DataTable_FindByWeaponType) == 0x000008, "Wrong alignment on DH1DamageModifier_DataTable_FindByWeaponType");
static_assert(sizeof(DH1DamageModifier_DataTable_FindByWeaponType) == 0x000060, "Wrong size on DH1DamageModifier_DataTable_FindByWeaponType");
static_assert(offsetof(DH1DamageModifier_DataTable_FindByWeaponType, _entryOut) == 0x000000, "Member 'DH1DamageModifier_DataTable_FindByWeaponType::_entryOut' has a wrong offset!");
static_assert(offsetof(DH1DamageModifier_DataTable_FindByWeaponType, _weaponType) == 0x000048, "Member 'DH1DamageModifier_DataTable_FindByWeaponType::_weaponType' has a wrong offset!");
static_assert(offsetof(DH1DamageModifier_DataTable_FindByWeaponType, _pDataTable) == 0x000050, "Member 'DH1DamageModifier_DataTable_FindByWeaponType::_pDataTable' has a wrong offset!");
static_assert(offsetof(DH1DamageModifier_DataTable_FindByWeaponType, ReturnValue) == 0x000058, "Member 'DH1DamageModifier_DataTable_FindByWeaponType::ReturnValue' has a wrong offset!");

// Function DH1.DH1GameState.GetSettings
// 0x0008 (0x0008 - 0x0000)
struct DH1GameState_GetSettings final
{
public:
	class UDH1Game_Settings*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DH1GameState_GetSettings) == 0x000008, "Wrong alignment on DH1GameState_GetSettings");
static_assert(sizeof(DH1GameState_GetSettings) == 0x000008, "Wrong size on DH1GameState_GetSettings");
static_assert(offsetof(DH1GameState_GetSettings, ReturnValue) == 0x000000, "Member 'DH1GameState_GetSettings::ReturnValue' has a wrong offset!");

}

