#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BerzerkComp

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_BerzerkComp.BP_BerzerkComp_C.ExecuteUbergraph_BP_BerzerkComp
// 0x0040 (0x0040 - 0x0000)
struct BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3221[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem*                                  K2Node_CustomEvent_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APickaxeItem*                           K2Node_DynamicCast_AsPickaxe_Item;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3222[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AItem* Item)>            K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3223[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_Event_character;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Value;                                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp) == 0x000008, "Wrong alignment on BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp");
static_assert(sizeof(BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp) == 0x000040, "Wrong size on BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp");
static_assert(offsetof(BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp, EntryPoint) == 0x000000, "Member 'BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp, K2Node_CustomEvent_Item) == 0x000008, "Member 'BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp, K2Node_DynamicCast_AsPickaxe_Item) == 0x000010, "Member 'BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp::K2Node_DynamicCast_AsPickaxe_Item' has a wrong offset!");
static_assert(offsetof(BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp, K2Node_Event_character) == 0x000030, "Member 'BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp::K2Node_Event_character' has a wrong offset!");
static_assert(offsetof(BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp, K2Node_Event_Value) == 0x000038, "Member 'BP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp::K2Node_Event_Value' has a wrong offset!");

// Function BP_BerzerkComp.BP_BerzerkComp_C.OnItemEquipped_Event_0
// 0x0008 (0x0008 - 0x0000)
struct BP_BerzerkComp_C_OnItemEquipped_Event_0 final
{
public:
	class AItem*                                  Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BerzerkComp_C_OnItemEquipped_Event_0) == 0x000008, "Wrong alignment on BP_BerzerkComp_C_OnItemEquipped_Event_0");
static_assert(sizeof(BP_BerzerkComp_C_OnItemEquipped_Event_0) == 0x000008, "Wrong size on BP_BerzerkComp_C_OnItemEquipped_Event_0");
static_assert(offsetof(BP_BerzerkComp_C_OnItemEquipped_Event_0, Item) == 0x000000, "Member 'BP_BerzerkComp_C_OnItemEquipped_Event_0::Item' has a wrong offset!");

// Function BP_BerzerkComp.BP_BerzerkComp_C.Receive_ActivatePerk
// 0x0010 (0x0010 - 0x0000)
struct BP_BerzerkComp_C_Receive_ActivatePerk final
{
public:
	class APlayerCharacter*                       Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BerzerkComp_C_Receive_ActivatePerk) == 0x000008, "Wrong alignment on BP_BerzerkComp_C_Receive_ActivatePerk");
static_assert(sizeof(BP_BerzerkComp_C_Receive_ActivatePerk) == 0x000010, "Wrong size on BP_BerzerkComp_C_Receive_ActivatePerk");
static_assert(offsetof(BP_BerzerkComp_C_Receive_ActivatePerk, Character) == 0x000000, "Member 'BP_BerzerkComp_C_Receive_ActivatePerk::Character' has a wrong offset!");
static_assert(offsetof(BP_BerzerkComp_C_Receive_ActivatePerk, Value) == 0x000008, "Member 'BP_BerzerkComp_C_Receive_ActivatePerk::Value' has a wrong offset!");

}

