#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_Keycard

#include "Basic.hpp"

#include "PickupItem_base_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Item_Keycard.Item_Keycard_C
// 0x0030 (0x0288 - 0x0258)
class AItem_Keycard_C final : public APickupItem_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Item_Keycard_C;                     // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHighlightInRangeComponent_C*           HighlightInRangeComponent;                         // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHighlightWhenHolding_C*                HighlightWhenHolding;                              // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         KeycardNumber;                                     // 0x0270(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Keycard_name;                                      // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Item_Keycard(int32 EntryPoint);
	void AlarmTriggeredInterfaceCall();
	void OnPickupInterfaceCall();
	void AlarmDisabledInterfaceCall();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Item_Keycard_C">();
	}
	static class AItem_Keycard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AItem_Keycard_C>();
	}
};
static_assert(alignof(AItem_Keycard_C) == 0x000008, "Wrong alignment on AItem_Keycard_C");
static_assert(sizeof(AItem_Keycard_C) == 0x000288, "Wrong size on AItem_Keycard_C");
static_assert(offsetof(AItem_Keycard_C, UberGraphFrame_Item_Keycard_C) == 0x000258, "Member 'AItem_Keycard_C::UberGraphFrame_Item_Keycard_C' has a wrong offset!");
static_assert(offsetof(AItem_Keycard_C, HighlightInRangeComponent) == 0x000260, "Member 'AItem_Keycard_C::HighlightInRangeComponent' has a wrong offset!");
static_assert(offsetof(AItem_Keycard_C, HighlightWhenHolding) == 0x000268, "Member 'AItem_Keycard_C::HighlightWhenHolding' has a wrong offset!");
static_assert(offsetof(AItem_Keycard_C, KeycardNumber) == 0x000270, "Member 'AItem_Keycard_C::KeycardNumber' has a wrong offset!");
static_assert(offsetof(AItem_Keycard_C, Keycard_name) == 0x000278, "Member 'AItem_Keycard_C::Keycard_name' has a wrong offset!");

}
