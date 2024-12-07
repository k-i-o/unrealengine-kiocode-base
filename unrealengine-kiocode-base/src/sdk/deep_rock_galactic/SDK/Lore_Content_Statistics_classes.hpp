#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lore_Content_Statistics

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Lore_Content_Statistics.Lore_Content_Statistics_C
// 0x0028 (0x0288 - 0x0260)
class ULore_Content_Statistics_C final : public UUserWidget
{
public:
	class ULore_Content_ProgressBar_C*            Bar_Damage;                                        // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULore_Content_ProgressBar_C*            Bar_Health;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULore_Content_ProgressBar_C*            Bar_Speed;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULore_Content_Weaknesses_C*             Lore_Content_Resistances;                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULore_Content_Weaknesses_C*             Lore_Content_Weaknesses;                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetData(class UEnemyMinersManualData* Enemy, const TArray<struct FDamageTypeDescription>& WeaknessesIcons, const TArray<struct FDamageTypeDescription>& ResistancesIcons);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lore_Content_Statistics_C">();
	}
	static class ULore_Content_Statistics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULore_Content_Statistics_C>();
	}
};
static_assert(alignof(ULore_Content_Statistics_C) == 0x000008, "Wrong alignment on ULore_Content_Statistics_C");
static_assert(sizeof(ULore_Content_Statistics_C) == 0x000288, "Wrong size on ULore_Content_Statistics_C");
static_assert(offsetof(ULore_Content_Statistics_C, Bar_Damage) == 0x000260, "Member 'ULore_Content_Statistics_C::Bar_Damage' has a wrong offset!");
static_assert(offsetof(ULore_Content_Statistics_C, Bar_Health) == 0x000268, "Member 'ULore_Content_Statistics_C::Bar_Health' has a wrong offset!");
static_assert(offsetof(ULore_Content_Statistics_C, Bar_Speed) == 0x000270, "Member 'ULore_Content_Statistics_C::Bar_Speed' has a wrong offset!");
static_assert(offsetof(ULore_Content_Statistics_C, Lore_Content_Resistances) == 0x000278, "Member 'ULore_Content_Statistics_C::Lore_Content_Resistances' has a wrong offset!");
static_assert(offsetof(ULore_Content_Statistics_C, Lore_Content_Weaknesses) == 0x000280, "Member 'ULore_Content_Statistics_C::Lore_Content_Weaknesses' has a wrong offset!");

}

