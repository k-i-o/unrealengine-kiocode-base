#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Bar_BackgroundMenu_Item

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_Item
// 0x0060 (0x0060 - 0x0000)
struct UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A28[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetDrinkableIcon_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0020(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
};
static_assert(alignof(UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item) == 0x000008, "Wrong alignment on UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item");
static_assert(sizeof(UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item) == 0x000060, "Wrong size on UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item");
static_assert(offsetof(UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item, EntryPoint) == 0x000000, "Member 'UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item, CallFunc_GetDrinkableIcon_ReturnValue) == 0x000008, "Member 'UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item::CallFunc_GetDrinkableIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item, CallFunc_MenuColors_OutputColor) == 0x000010, "Member 'UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item, CallFunc_TextToUpper_ReturnValue) == 0x000020, "Member 'UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'UI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Bar_BackgroundMenu_Item_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Bar_BackgroundMenu_Item_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Bar_BackgroundMenu_Item_C_PreConstruct");
static_assert(sizeof(UI_Bar_BackgroundMenu_Item_C_PreConstruct) == 0x000001, "Wrong size on UI_Bar_BackgroundMenu_Item_C_PreConstruct");
static_assert(offsetof(UI_Bar_BackgroundMenu_Item_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Bar_BackgroundMenu_Item_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

