#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ForceOtherSpecialEvent

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_ForceOtherSpecialEvent.UI_ForceOtherSpecialEvent_C.BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct UI_ForceOtherSpecialEvent_C_BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ForceOtherSpecialEvent_C_BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_ForceOtherSpecialEvent_C_BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(UI_ForceOtherSpecialEvent_C_BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on UI_ForceOtherSpecialEvent_C_BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'UI_ForceOtherSpecialEvent_C_BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'UI_ForceOtherSpecialEvent_C_BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function UI_ForceOtherSpecialEvent.UI_ForceOtherSpecialEvent_C.ExecuteUbergraph_UI_ForceOtherSpecialEvent
// 0x0078 (0x0078 - 0x0000)
struct UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_555D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindOptionIndex_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_555E[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameData*                              CallFunc_GetFSDGameData_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameData*                              CallFunc_GetFSDGameData_ReturnValue_1;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpecialEvent*                          CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USpecialEvent*                          CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent) == 0x000008, "Wrong alignment on UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent");
static_assert(sizeof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent) == 0x000078, "Wrong size on UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, EntryPoint) == 0x000000, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, Temp_int_Array_Index_Variable) == 0x000004, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, K2Node_ComponentBoundEvent_SelectedItem) == 0x000010, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, K2Node_ComponentBoundEvent_SelectionType) == 0x000020, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000028, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, CallFunc_FindOptionIndex_ReturnValue) == 0x000030, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::CallFunc_FindOptionIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, CallFunc_GetFSDGameData_ReturnValue) == 0x000040, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::CallFunc_GetFSDGameData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, CallFunc_GetFSDGameData_ReturnValue_1) == 0x000048, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::CallFunc_GetFSDGameData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, CallFunc_Array_Get_Item) == 0x000050, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, CallFunc_GetObjectName_ReturnValue) == 0x000058, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'UI_ForceOtherSpecialEvent_C_ExecuteUbergraph_UI_ForceOtherSpecialEvent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

