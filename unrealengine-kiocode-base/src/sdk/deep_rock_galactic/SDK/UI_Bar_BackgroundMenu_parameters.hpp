#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Bar_BackgroundMenu

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnRoundSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UI_Bar_BackgroundMenu_C_OnRoundSelected__DelegateSignature final
{
public:
	class ASpaceRigBar*                           Bar;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDrinkableDataAsset*                    RequestedDrink;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Bar_BackgroundMenu_C_OnRoundSelected__DelegateSignature) == 0x000008, "Wrong alignment on UI_Bar_BackgroundMenu_C_OnRoundSelected__DelegateSignature");
static_assert(sizeof(UI_Bar_BackgroundMenu_C_OnRoundSelected__DelegateSignature) == 0x000010, "Wrong size on UI_Bar_BackgroundMenu_C_OnRoundSelected__DelegateSignature");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_OnRoundSelected__DelegateSignature, Bar) == 0x000000, "Member 'UI_Bar_BackgroundMenu_C_OnRoundSelected__DelegateSignature::Bar' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_OnRoundSelected__DelegateSignature, RequestedDrink) == 0x000008, "Member 'UI_Bar_BackgroundMenu_C_OnRoundSelected__DelegateSignature::RequestedDrink' has a wrong offset!");

// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.ExecuteUbergraph_UI_Bar_BackgroundMenu
// 0x00B0 (0x00B0 - 0x0000)
struct UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UDrinkableDataAsset*>            CallFunc_GetBarDrinkables_ReturnValue;             // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UDrinkableDataAsset* Drinkable)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDrinkableDataAsset*                    CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MustBeUnlocked_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AB9[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ABA[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ABB[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ABC[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0068(0x0028)()
	class UUI_Bar_BackgroundMenu_Item_C*          CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SpaceRig_Bartender_C*               K2Node_CustomEvent_InBartender;                    // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDrinkableDataAsset*                    K2Node_CustomEvent_Drinkable;                      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu) == 0x000008, "Wrong alignment on UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu");
static_assert(sizeof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu) == 0x0000B0, "Wrong size on UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, EntryPoint) == 0x000000, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, CallFunc_GetBarDrinkables_ReturnValue) == 0x000008, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::CallFunc_GetBarDrinkables_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, CallFunc_Array_Get_Item) == 0x000030, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, CallFunc_MustBeUnlocked_ReturnValue) == 0x000038, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::CallFunc_MustBeUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, K2Node_Event_IsDesignTime) == 0x000048, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, CallFunc_MenuColors_OutputColor) == 0x00004C, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, CallFunc_GetOwningPlayer_ReturnValue) == 0x000060, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, K2Node_MakeStruct_SlateColor) == 0x000068, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, CallFunc_Create_ReturnValue) == 0x000090, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, K2Node_CustomEvent_InBartender) == 0x000098, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::K2Node_CustomEvent_InBartender' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0000A0, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu, K2Node_CustomEvent_Drinkable) == 0x0000A8, "Member 'UI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu::K2Node_CustomEvent_Drinkable' has a wrong offset!");

// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnNewDrinkableSpecial
// 0x0008 (0x0008 - 0x0000)
struct UI_Bar_BackgroundMenu_C_OnNewDrinkableSpecial final
{
public:
	class UDrinkableDataAsset*                    Drinkable;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Bar_BackgroundMenu_C_OnNewDrinkableSpecial) == 0x000008, "Wrong alignment on UI_Bar_BackgroundMenu_C_OnNewDrinkableSpecial");
static_assert(sizeof(UI_Bar_BackgroundMenu_C_OnNewDrinkableSpecial) == 0x000008, "Wrong size on UI_Bar_BackgroundMenu_C_OnNewDrinkableSpecial");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_OnNewDrinkableSpecial, Drinkable) == 0x000000, "Member 'UI_Bar_BackgroundMenu_C_OnNewDrinkableSpecial::Drinkable' has a wrong offset!");

// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.Set Bartender
// 0x0008 (0x0008 - 0x0000)
struct UI_Bar_BackgroundMenu_C_Set_Bartender final
{
public:
	class ABP_SpaceRig_Bartender_C*               InBartender;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Bar_BackgroundMenu_C_Set_Bartender) == 0x000008, "Wrong alignment on UI_Bar_BackgroundMenu_C_Set_Bartender");
static_assert(sizeof(UI_Bar_BackgroundMenu_C_Set_Bartender) == 0x000008, "Wrong size on UI_Bar_BackgroundMenu_C_Set_Bartender");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_Set_Bartender, InBartender) == 0x000000, "Member 'UI_Bar_BackgroundMenu_C_Set_Bartender::InBartender' has a wrong offset!");

// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Bar_BackgroundMenu_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Bar_BackgroundMenu_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Bar_BackgroundMenu_C_PreConstruct");
static_assert(sizeof(UI_Bar_BackgroundMenu_C_PreConstruct) == 0x000001, "Wrong size on UI_Bar_BackgroundMenu_C_PreConstruct");
static_assert(offsetof(UI_Bar_BackgroundMenu_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Bar_BackgroundMenu_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
