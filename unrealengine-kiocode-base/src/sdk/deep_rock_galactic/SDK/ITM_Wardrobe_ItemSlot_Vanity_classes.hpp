#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Wardrobe_ItemSlot_Vanity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "ITM_Wardrobe_ItemSlot_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C
// 0x0040 (0x0428 - 0x03E8)
class UITM_Wardrobe_ItemSlot_Vanity_C : public UITM_Wardrobe_ItemSlot_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ITM_Wardrobe_ItemSlot_Vanity_C;     // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EVanitySlot                                   VanitySlot;                                        // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_31C0[0x7];                                     // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UVanityItem*>                    VanityItems;                                       // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                             DefaultItemIcon;                                   // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   DefaultItemName;                                   // 0x0410(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly)

public:
	void ReceiveShowShuffleOptions(bool* OutShowOptions);
	void ReceivePreviewItem(int32 Param_Index, bool Show, bool* OutSuccess);
	void ReceiveEquipItem(int32 InIndex, bool* OutSuccess);
	void ReceiveGetSelectedIndex(int32* OutIndex);
	void ReceiveInitializeEntries(TArray<struct FStruct_Wardrobe_Entry>& InEntries);
	void ReceiveCreateEntryWidget(class UObject* InObject, int32 InIndex, class UWidget* InReuseWidget, bool IsSlotWidget, class UWidget** OutWidget);
	void ReceiveReleaseResource(class UWidget* InWidget);
	void ReceivePreConstruct();
	void PostInitilization();
	class UVanityItem* GetDefaultItem();
	void GetVanityDLC(class UVanityItem* InItem, class UDLCBase** Required_DLC);
	const class FText GetVanityName(class UVanityItem* InVanityItem);
	void UpdateItemWidget(class UITM_GeneratedIcon_Item_C* InWidget, class UVanityItem* InVanityItem, bool In_Show_Tool_Tip, class FName In_Cancel_Group);
	void CreateItemWidget(bool InBackgroundVisible, bool InShowToolTip, class UITM_GeneratedIcon_Item_C** OutItemWidget);
	void SetSelectedItem(class UVanityItem* Item);
	void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_Wardrobe_ItemSlot_Vanity_C">();
	}
	static class UITM_Wardrobe_ItemSlot_Vanity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_Wardrobe_ItemSlot_Vanity_C>();
	}
};
static_assert(alignof(UITM_Wardrobe_ItemSlot_Vanity_C) == 0x000008, "Wrong alignment on UITM_Wardrobe_ItemSlot_Vanity_C");
static_assert(sizeof(UITM_Wardrobe_ItemSlot_Vanity_C) == 0x000428, "Wrong size on UITM_Wardrobe_ItemSlot_Vanity_C");
static_assert(offsetof(UITM_Wardrobe_ItemSlot_Vanity_C, UberGraphFrame_ITM_Wardrobe_ItemSlot_Vanity_C) == 0x0003E8, "Member 'UITM_Wardrobe_ItemSlot_Vanity_C::UberGraphFrame_ITM_Wardrobe_ItemSlot_Vanity_C' has a wrong offset!");
static_assert(offsetof(UITM_Wardrobe_ItemSlot_Vanity_C, VanitySlot) == 0x0003F0, "Member 'UITM_Wardrobe_ItemSlot_Vanity_C::VanitySlot' has a wrong offset!");
static_assert(offsetof(UITM_Wardrobe_ItemSlot_Vanity_C, VanityItems) == 0x0003F8, "Member 'UITM_Wardrobe_ItemSlot_Vanity_C::VanityItems' has a wrong offset!");
static_assert(offsetof(UITM_Wardrobe_ItemSlot_Vanity_C, DefaultItemIcon) == 0x000408, "Member 'UITM_Wardrobe_ItemSlot_Vanity_C::DefaultItemIcon' has a wrong offset!");
static_assert(offsetof(UITM_Wardrobe_ItemSlot_Vanity_C, DefaultItemName) == 0x000410, "Member 'UITM_Wardrobe_ItemSlot_Vanity_C::DefaultItemName' has a wrong offset!");

}
