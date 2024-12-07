#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTN_UnlockItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BTN_UnlockItem.BTN_UnlockItem_C.SetData
// 0x0018 (0x0018 - 0x0000)
struct BTN_UnlockItem_C_SetData final
{
public:
	TScriptInterface<class ICraftable>            Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                 Character;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTN_UnlockItem_C_SetData) == 0x000008, "Wrong alignment on BTN_UnlockItem_C_SetData");
static_assert(sizeof(BTN_UnlockItem_C_SetData) == 0x000018, "Wrong size on BTN_UnlockItem_C_SetData");
static_assert(offsetof(BTN_UnlockItem_C_SetData, Item) == 0x000000, "Member 'BTN_UnlockItem_C_SetData::Item' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_SetData, Character) == 0x000010, "Member 'BTN_UnlockItem_C_SetData::Character' has a wrong offset!");

// Function BTN_UnlockItem.BTN_UnlockItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BTN_UnlockItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTN_UnlockItem_C_PreConstruct) == 0x000001, "Wrong alignment on BTN_UnlockItem_C_PreConstruct");
static_assert(sizeof(BTN_UnlockItem_C_PreConstruct) == 0x000001, "Wrong size on BTN_UnlockItem_C_PreConstruct");
static_assert(offsetof(BTN_UnlockItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BTN_UnlockItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BTN_UnlockItem.BTN_UnlockItem_C.ExecuteUbergraph_BTN_UnlockItem
// 0x00B0 (0x00B0 - 0x0000)
struct BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E61[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDSaveGame*                           CallFunc_GetFSDSaveGame_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0020(0x0028)()
	int32                                         CallFunc_GetPlayerRank_ReturnValue;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E62[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ICraftable>            K2Node_CustomEvent_Item;                           // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                 K2Node_CustomEvent_Character;                      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E63[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     CallFunc_GetCharacterID_ReturnValue;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRequiredPlayerRank_ReturnValue;        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOwned_ReturnValue;                      // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E64[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0080(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E65[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVanityItem*                            K2Node_DynamicCast_AsVanity_Item;                  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipped_ReturnValue;                   // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanCraft_ReturnValue;                     // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem) == 0x000008, "Wrong alignment on BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem");
static_assert(sizeof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem) == 0x0000B0, "Wrong size on BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, EntryPoint) == 0x000000, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, CallFunc_MenuColors_OutputColor) == 0x000004, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, CallFunc_GetFSDSaveGame_ReturnValue) == 0x000018, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::CallFunc_GetFSDSaveGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, CallFunc_GetPlayerRank_ReturnValue) == 0x000048, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::CallFunc_GetPlayerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, K2Node_CustomEvent_Item) == 0x000050, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, K2Node_CustomEvent_Character) == 0x000060, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, K2Node_Event_IsDesignTime) == 0x000068, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, CallFunc_GetCharacterID_ReturnValue) == 0x000070, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, CallFunc_GetRequiredPlayerRank_ReturnValue) == 0x000078, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::CallFunc_GetRequiredPlayerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, CallFunc_IsOwned_ReturnValue) == 0x00007C, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::CallFunc_IsOwned_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000080, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000098, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, K2Node_DynamicCast_AsVanity_Item) == 0x0000A0, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::K2Node_DynamicCast_AsVanity_Item' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, CallFunc_IsEquipped_ReturnValue) == 0x0000A9, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::CallFunc_IsEquipped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem, CallFunc_CanCraft_ReturnValue) == 0x0000AA, "Member 'BTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem::CallFunc_CanCraft_ReturnValue' has a wrong offset!");

}

