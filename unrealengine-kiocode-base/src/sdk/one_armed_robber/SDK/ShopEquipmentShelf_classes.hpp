#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShopEquipmentShelf

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ShopItemCategory_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShopEquipmentShelf.ShopEquipmentShelf_C
// 0x0058 (0x0278 - 0x0220)
class AShopEquipmentShelf_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        ShelfEnd;                                          // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Duffelbag;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Shelf_Bot;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Shelf_Mid;                                         // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Shelf_Top;                                         // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Prop_WorkShelf_01;                              // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UChildActorComponent*>           ChildArray;                                        // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_ShopEquipmentShelf(int32 EntryPoint);
	void RefreshInventory();
	void LoadShelfItems();
	void PreviewItem(class UClass* ItemInfo, int32 SalePrice);
	void CancelDrag();
	void DragItemFromCategory(EShopItemCategory Category);
	void ChangeCategory(EShopItemCategory Category);
	void RemoveloadoutCategory();
	void Remove();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopEquipmentShelf_C">();
	}
	static class AShopEquipmentShelf_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShopEquipmentShelf_C>();
	}
};
static_assert(alignof(AShopEquipmentShelf_C) == 0x000008, "Wrong alignment on AShopEquipmentShelf_C");
static_assert(sizeof(AShopEquipmentShelf_C) == 0x000278, "Wrong size on AShopEquipmentShelf_C");
static_assert(offsetof(AShopEquipmentShelf_C, UberGraphFrame) == 0x000220, "Member 'AShopEquipmentShelf_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AShopEquipmentShelf_C, ShelfEnd) == 0x000228, "Member 'AShopEquipmentShelf_C::ShelfEnd' has a wrong offset!");
static_assert(offsetof(AShopEquipmentShelf_C, Duffelbag) == 0x000230, "Member 'AShopEquipmentShelf_C::Duffelbag' has a wrong offset!");
static_assert(offsetof(AShopEquipmentShelf_C, Shelf_Bot) == 0x000238, "Member 'AShopEquipmentShelf_C::Shelf_Bot' has a wrong offset!");
static_assert(offsetof(AShopEquipmentShelf_C, Shelf_Mid) == 0x000240, "Member 'AShopEquipmentShelf_C::Shelf_Mid' has a wrong offset!");
static_assert(offsetof(AShopEquipmentShelf_C, Shelf_Top) == 0x000248, "Member 'AShopEquipmentShelf_C::Shelf_Top' has a wrong offset!");
static_assert(offsetof(AShopEquipmentShelf_C, Arrow) == 0x000250, "Member 'AShopEquipmentShelf_C::Arrow' has a wrong offset!");
static_assert(offsetof(AShopEquipmentShelf_C, SM_Prop_WorkShelf_01) == 0x000258, "Member 'AShopEquipmentShelf_C::SM_Prop_WorkShelf_01' has a wrong offset!");
static_assert(offsetof(AShopEquipmentShelf_C, DefaultSceneRoot) == 0x000260, "Member 'AShopEquipmentShelf_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AShopEquipmentShelf_C, ChildArray) == 0x000268, "Member 'AShopEquipmentShelf_C::ChildArray' has a wrong offset!");

}
