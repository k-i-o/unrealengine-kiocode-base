#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_UpgradeHelpers

#include "Basic.hpp"

#include "FormatPreviewStatusType_structs.hpp"
#include "Engine_classes.hpp"
#include "FSD_structs.hpp"
#include "FormatWeaponStatType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_UpgradeHelpers.BPL_UpgradeHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_UpgradeHelpers_C final : public UBlueprintFunctionLibrary
{
public:
	static void UPGDESC_HitScan_Bullets(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Capacity(class UClass* UpgradedItem, class AFSDPlayerState* Player, int32 ComponentIndex, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_Drills(class UClass* Item, class AFSDPlayerState* Player, EDoubleDrillUpgradeType UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Has_Upgraded_Value);
	static void UPGDESC_Flare_Base(class UClass* FlareClass, class AFSDPlayerState* Player, EFlareUpgradeType UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_Item(class AFSDPlayerState* Player, class UClass* Item, EInventoryItemUpgradeType UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_SingleUsable_UseDuration(class UClass* Item, class UClass* SubItem, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_HitScan(class UClass* Item, class AFSDPlayerState* Player, EHitScanBaseUpgradeType UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);
	static void UPGDESC_Damage(class UClass*& Item, class UClass* UpgradedItem, class AFSDPlayerState*& Player, EDamageUpgrade UpgradeType, const class FText& Prefix, EDamageComponentType DamageComponentType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_AmmoDriven(class UClass* Item, class AFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType UpgradeType, bool OverrideStatType, EFormatWeaponStatType StatTypeOverride, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);
	static void UPGDESC_DamageBonus_PushStatus(class UClass* Item, class AFSDPlayerState* Player, class UClass* StatusEffect, const class FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_DamageConversion(class UClass* Item, class UClass* UpgradedItem, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const class FText& StatName, bool OverrideStatType, EFormatWeaponStatType StatTypeOverride, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_Flat(class UClass* Item, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const class FText& StatName, EFormatPreviewStatusType FormatType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_ElectricalSMG(class UClass* Item, class AFSDPlayerState* Player, EElectricalSMGUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_StatusBonus(class UClass* Item, class AFSDPlayerState* Player, class UClass* SstatusEffectIn, const class FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_TargetTypeBonus(class UClass* Item, class AFSDPlayerState* Player, const class FText& StatName, class FName Key, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_TargetStateBonus(class UClass* Item, class AFSDPlayerState* Player, const class FText& StatName, ETargetStateDamageBonusType TargetState, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_BoltAction(class UClass* Item, class AFSDPlayerState* Player, EBoltActionRifleUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Projectile(class UClass* Item, class UClass* UpgradedItem, class AFSDPlayerState* Player, EProjectileUpgrade UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_ChargedWeapon(class UClass* Item, class AFSDPlayerState* Player, EChargedWeaponUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_FlameThrower(class UClass* Item, class AFSDPlayerState* Player, EFlameThrowerUpgradeType UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Cryospray(class UClass* Item, class AFSDPlayerState* Player, ECryoSprayUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void FormatPercentage(float Base_Value, float Upgraded_Value, float Old_Upgraded_Value, float Final_Value, EFormatWeaponStatType Format, class UObject* __WorldContext, class FText* Base_Text, class FText* Upgrade_Text, class FText* Value);
	static void FormatCmtoM(float Base_Value, float Upgrade_Value, float Old_Upgrade_Value, float Final_Value, class UObject* __WorldContext, class FText* Base_Text, class FText* Upgrade_Text, class FText* Value);
	static void UPGDESC_ShieldRegenerator(class UClass* Item, class AFSDPlayerState* Player, EShieldGeneratorUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_GatlingGun(class UClass* Item, class AFSDPlayerState* Player, EGatlingGunUpgrade UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_AssaultRifle(class UClass* Item, class AFSDPlayerState* Player, EAssaultRifleUpgrade UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_AutoCannon(class UClass* Item, class AFSDPlayerState* Player, EAutoCannonUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_BeltDriven(class UClass* Item, class AFSDPlayerState* Player, EBeltDrivenWeaponUpgrade UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_HotBullets(class UClass* Item, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const class FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_AoEFear(class UClass* Item, class AFSDPlayerState* Player, const class FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_BurstWeapon(class UClass* Item, class AFSDPlayerState* Player, EBurstWeaponUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Armor(class AFSDPlayerState* Player, class UClass* ArmorClass, EArmorUpgradeType Armor_Upgrade_Type, const class FText& Text, EFormatWeaponStatType Format, EFormatPreviewStatusType PreviewFormat, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_SawedOff(class UClass* Item, class AFSDPlayerState* Player, ESawedOffShotgunUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_StickyFlame(class UClass* Item, class AFSDPlayerState* Player, class UClass* StatusEffect, const class FText& Text, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_ChargedProjectile(class UClass* Item, class AFSDPlayerState* Player, EChargedProjectileUpgrades UpgradeType, class UClass* UpgradedActor, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_CombatShotgun(class UClass* Item, class AFSDPlayerState* Player, EAutoShotgunUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_LineCutterProjectile(class UClass* Item, class AFSDPlayerState* Player, ELineCutterProjectileUpgradeType UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Pickaxe(class UClass* Item, class AFSDPlayerState* Player, EPickaxeUpgradeType UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Grenades(class UClass* Item, class AFSDPlayerState* Player, EGrenadeUpgradeType UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_ZiplineGun(class UClass* Item, class AFSDPlayerState* Player, EZiplineGunUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_FlaregunProjectile(class UClass* Item, class AFSDPlayerState* Player, EFlaregunProjectileUpgrades UpgradeType, class UClass* UpgradedActor, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_GrapplingHook(class UClass* Item, class AFSDPlayerState* Player, EGrapplingHookUpgrade UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_CoooldownAggregator(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Bosco(class UClass* UpgradedItem, class AFSDPlayerState* Player, EBoscoUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasChanged);
	static void UPGDESC_PlatformGun(class UClass* Item, class AFSDPlayerState* Player, EPlatformGunUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Should_show_text);
	static void UPGDESC_TriggeredStat(class AFSDPlayerState* Player, class UClass* Item, class UClass* Status_Effect, const class FText& Text, ETriggeredStatusEffectType Type, EFormatWeaponStatType Format, class UObject* __WorldContext, struct FGearStatEntry* Gear_stat_entry, bool* Is_upgraded);
	static void UPGDESC_ArmorStat(class AFSDPlayerState* Player, class UClass* ArmorClass, class UPawnStat* Stat, const class FText& Text, EFormatWeaponStatType Format, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Changed);
	static void UPGDESC_Flaregun(class UClass* Item, class AFSDPlayerState* PlayerState, EFlaregunUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Detpack(class UClass* Item, class AFSDPlayerState* PlayerState, EDetPackUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_SentryGun(class UClass* Item, class AFSDPlayerState* Player, ESentryGunUpgradeType Upgrade_Type, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Has_Upgraded_Value);
	static void UPGDESC_DualMPs(class UClass* Item, class AFSDPlayerState* Player, EDualMachinePistolsUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_AmmoDrivenEx(class UClass* Item, class AFSDPlayerState* Player, TArray<EAmmoDrivenWeapnUpgradeType>& UpgradeTypes, TArray<struct FGearStatEntry>& GearStats, class UObject* __WorldContext);
	static void FormatToPercentageNormalized(float Base_Value, float Upgrade_Value, float Old_Upgrade_Value, float Final_Value, EFormatWeaponStatType FormatType, class UObject* __WorldContext, class FText* Base_Text, class FText* Upgrade_Text, class FText* Value);
	static void UPGDESC_HitCounter(class UClass* Item, class AFSDPlayerState* Player, class UClass* HitCounterClass, const class FText& Upgrade_Text, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_Random(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_CryoSprayProjectile(class UClass* Item, class AFSDPlayerState* Player, class UClass* ProjectileClass, const class FText& UpgradeText, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Generic(class AFSDPlayerState* Player, class UClass* Item, class UItemUpgrade* UpgradeType, bool UseCustomText, const class FText& Text, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void FormatUpgrade(struct FUpgradeValues& UpgradeValues, EFormatWeaponStatType StatFormat, EFormatPreviewStatusType PreviewFormat, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value, EItemPreviewStatus* Format, bool* HasAnyupgrades);
	static void FormatUpgradeToEntry(class FText& Text, struct FUpgradeValues& UpgradeValues, EFormatWeaponStatType StatFormat, EFormatPreviewStatusType PreviewFormat, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);
	static void UPGDESC_DPS(class UClass* Item, class UClass* UpgradedItem, class AFSDPlayerState* Player, const class FText& StatName, float Interval, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void FormatStatic(const class FText& Text, float Value, EFormatWeaponStatType Format, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_GooCannon(class UClass* Item, class AFSDPlayerState* Player, EGooGunUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);
	static void UPGDESC_DynamicSTE(class UClass* Item, class UClass* UpgradedItem, class AFSDPlayerState* Player, EModifyStatusEffectDamageUpgrade UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);
	static void UPGDESC_GooCannon_Projectile(class UClass* Item, class UClass* UpgradedItem, class AFSDPlayerState* Player, EGooGunProjectileUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_LockOnRifle(class UClass* Item, class AFSDPlayerState* Player, ELockOnWeaponUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);
	static void UPGDESC_ProjectileLauncher(class UClass* Item, class AFSDPlayerState* Player, EProjectileLauncherBaseUpgradeType UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Crossbow(class UClass* Item, TSubclassOf<class ACrossbowProjectileBase> Projectile, class AFSDPlayerState* Player, ECrossbowUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);
	static void UPGDESC_CoilGun(class UClass* Item, class AFSDPlayerState* Player, const class FText& Prefix, ECoilgunUpgrades UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);
	static void FormatToPercentageZeroBasedNormalized(float Base_Value, float Upgrade_Value, float Old_Upgrade_Value, float Final_Value, EFormatWeaponStatType FormatType, class UObject* __WorldContext, class FText* Base_Text, class FText* Upgrade_Text, class FText* Value);
	static void UPGDESC_MicrowaveGun(class UClass* Item, class AFSDPlayerState* Player, const class FText& Prefix, EMicrowaveGunUpgrade UpgradeType, bool UseTextOnly, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);
	static void UPGDESC_CapsuleHitScan(class UClass* Item, class AFSDPlayerState* Player, ECapsuleHitscanUpgradeType UpgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyupgrades);

	static void FormatValues(struct FUpgradeValues& UpgradeValues, EFormatWeaponStatType Format, class UObject* __WorldContext, class FText* BaseText, class FText* UpgradeText, class FText* Value);
	static EItemPreviewStatus FormatPreviewStatus(bool FormatValue, struct FUpgradeValues& UpgradeValues, EFormatPreviewStatusType FormatType, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_UpgradeHelpers_C">();
	}
	static class UBPL_UpgradeHelpers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_UpgradeHelpers_C>();
	}
};
static_assert(alignof(UBPL_UpgradeHelpers_C) == 0x000008, "Wrong alignment on UBPL_UpgradeHelpers_C");
static_assert(sizeof(UBPL_UpgradeHelpers_C) == 0x000028, "Wrong size on UBPL_UpgradeHelpers_C");

}
