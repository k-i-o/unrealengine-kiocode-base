#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Equipmentshelf_equipment_C4

#include "Basic.hpp"

#include "Equipmentshelf_equipment_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Equipmentshelf_equipment_C4.Equipmentshelf_equipment_C4_C
// 0x0020 (0x0260 - 0x0240)
class AEquipmentshelf_equipment_C4_C final : public AEquipmentshelf_equipment_base_C
{
public:
	class UChildActorComponent*                   C7;                                                // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C6;                                                // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C5;                                                // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   C4;                                                // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Equipmentshelf_equipment_C4_C">();
	}
	static class AEquipmentshelf_equipment_C4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEquipmentshelf_equipment_C4_C>();
	}
};
static_assert(alignof(AEquipmentshelf_equipment_C4_C) == 0x000008, "Wrong alignment on AEquipmentshelf_equipment_C4_C");
static_assert(sizeof(AEquipmentshelf_equipment_C4_C) == 0x000260, "Wrong size on AEquipmentshelf_equipment_C4_C");
static_assert(offsetof(AEquipmentshelf_equipment_C4_C, C7) == 0x000240, "Member 'AEquipmentshelf_equipment_C4_C::C7' has a wrong offset!");
static_assert(offsetof(AEquipmentshelf_equipment_C4_C, C6) == 0x000248, "Member 'AEquipmentshelf_equipment_C4_C::C6' has a wrong offset!");
static_assert(offsetof(AEquipmentshelf_equipment_C4_C, C5) == 0x000250, "Member 'AEquipmentshelf_equipment_C4_C::C5' has a wrong offset!");
static_assert(offsetof(AEquipmentshelf_equipment_C4_C, C4) == 0x000258, "Member 'AEquipmentshelf_equipment_C4_C::C4' has a wrong offset!");

}

