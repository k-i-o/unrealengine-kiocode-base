#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_Dots

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "ENUM_MenuColors_structs.hpp"


namespace SDK::Params
{

// Function Basic_Dots.Basic_Dots_C.ExecuteUbergraph_Basic_Dots
// 0x0018 (0x0018 - 0x0000)
struct Basic_Dots_C_ExecuteUbergraph_Basic_Dots final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4237[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_1;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_Dots_C_ExecuteUbergraph_Basic_Dots) == 0x000008, "Wrong alignment on Basic_Dots_C_ExecuteUbergraph_Basic_Dots");
static_assert(sizeof(Basic_Dots_C_ExecuteUbergraph_Basic_Dots) == 0x000018, "Wrong size on Basic_Dots_C_ExecuteUbergraph_Basic_Dots");
static_assert(offsetof(Basic_Dots_C_ExecuteUbergraph_Basic_Dots, EntryPoint) == 0x000000, "Member 'Basic_Dots_C_ExecuteUbergraph_Basic_Dots::EntryPoint' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_ExecuteUbergraph_Basic_Dots, Temp_bool_Variable) == 0x000004, "Member 'Basic_Dots_C_ExecuteUbergraph_Basic_Dots::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_ExecuteUbergraph_Basic_Dots, Temp_bool_Variable_1) == 0x000005, "Member 'Basic_Dots_C_ExecuteUbergraph_Basic_Dots::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_ExecuteUbergraph_Basic_Dots, K2Node_Event_IsDesignTime) == 0x000006, "Member 'Basic_Dots_C_ExecuteUbergraph_Basic_Dots::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_ExecuteUbergraph_Basic_Dots, K2Node_Select_Default) == 0x000008, "Member 'Basic_Dots_C_ExecuteUbergraph_Basic_Dots::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_ExecuteUbergraph_Basic_Dots, K2Node_Select_Default_1) == 0x000010, "Member 'Basic_Dots_C_ExecuteUbergraph_Basic_Dots::K2Node_Select_Default_1' has a wrong offset!");

// Function Basic_Dots.Basic_Dots_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Basic_Dots_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_Dots_C_PreConstruct) == 0x000001, "Wrong alignment on Basic_Dots_C_PreConstruct");
static_assert(sizeof(Basic_Dots_C_PreConstruct) == 0x000001, "Wrong size on Basic_Dots_C_PreConstruct");
static_assert(offsetof(Basic_Dots_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Basic_Dots_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Basic_Dots.Basic_Dots_C.SetSelectedIndex
// 0x00C0 (0x00C0 - 0x0000)
struct Basic_Dots_C_SetSelectedIndex final
{
public:
	int32                                         InSelectedDotIndex;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4238[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBasic_Image_C*                         Dot;                                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4239[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_Select_Default;                             // 0x0020(0x0088)(ConstParm)
	ENUM_MenuColors                               K2Node_Select_Default_1;                           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_423A[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_Image_C*                         CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_Dots_C_SetSelectedIndex) == 0x000008, "Wrong alignment on Basic_Dots_C_SetSelectedIndex");
static_assert(sizeof(Basic_Dots_C_SetSelectedIndex) == 0x0000C0, "Wrong size on Basic_Dots_C_SetSelectedIndex");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, InSelectedDotIndex) == 0x000000, "Member 'Basic_Dots_C_SetSelectedIndex::InSelectedDotIndex' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, Selected) == 0x000004, "Member 'Basic_Dots_C_SetSelectedIndex::Selected' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, Dot) == 0x000008, "Member 'Basic_Dots_C_SetSelectedIndex::Dot' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, Temp_bool_Variable) == 0x000010, "Member 'Basic_Dots_C_SetSelectedIndex::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, Temp_bool_Variable_1) == 0x000011, "Member 'Basic_Dots_C_SetSelectedIndex::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, Temp_int_Array_Index_Variable) == 0x000014, "Member 'Basic_Dots_C_SetSelectedIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'Basic_Dots_C_SetSelectedIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'Basic_Dots_C_SetSelectedIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, K2Node_Select_Default) == 0x000020, "Member 'Basic_Dots_C_SetSelectedIndex::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, K2Node_Select_Default_1) == 0x0000A8, "Member 'Basic_Dots_C_SetSelectedIndex::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000A9, "Member 'Basic_Dots_C_SetSelectedIndex::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, CallFunc_Array_Length_ReturnValue) == 0x0000AC, "Member 'Basic_Dots_C_SetSelectedIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'Basic_Dots_C_SetSelectedIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetSelectedIndex, CallFunc_Less_IntInt_ReturnValue) == 0x0000B8, "Member 'Basic_Dots_C_SetSelectedIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function Basic_Dots.Basic_Dots_C.SetCountAndSelected
// 0x00A8 (0x00A8 - 0x0000)
struct Basic_Dots_C_SetCountAndSelected final
{
public:
	int32                                         InCount;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSelected;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_Image_C*                         Dot;                                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_423B[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_Image_C*                         CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_423C[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_423D[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1;      // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;    // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_Select_Default;                             // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_423E[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           K2Node_Select_Default_1;                           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBasic_Image_C*>                 CallFunc_CreateOrReuseChildren_ReturnValue;        // 0x0098(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(Basic_Dots_C_SetCountAndSelected) == 0x000008, "Wrong alignment on Basic_Dots_C_SetCountAndSelected");
static_assert(sizeof(Basic_Dots_C_SetCountAndSelected) == 0x0000A8, "Wrong size on Basic_Dots_C_SetCountAndSelected");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, InCount) == 0x000000, "Member 'Basic_Dots_C_SetCountAndSelected::InCount' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, InSelected) == 0x000004, "Member 'Basic_Dots_C_SetCountAndSelected::InSelected' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, Dot) == 0x000008, "Member 'Basic_Dots_C_SetCountAndSelected::Dot' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, Temp_bool_Variable) == 0x000010, "Member 'Basic_Dots_C_SetCountAndSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, Temp_bool_Variable_1) == 0x000011, "Member 'Basic_Dots_C_SetCountAndSelected::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'Basic_Dots_C_SetCountAndSelected::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, Temp_int_Array_Index_Variable) == 0x000018, "Member 'Basic_Dots_C_SetCountAndSelected::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'Basic_Dots_C_SetCountAndSelected::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, CallFunc_Array_Get_Item) == 0x000020, "Member 'Basic_Dots_C_SetCountAndSelected::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'Basic_Dots_C_SetCountAndSelected::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'Basic_Dots_C_SetCountAndSelected::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'Basic_Dots_C_SetCountAndSelected::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000038, "Member 'Basic_Dots_C_SetCountAndSelected::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1) == 0x000040, "Member 'Basic_Dots_C_SetCountAndSelected::CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000048, "Member 'Basic_Dots_C_SetCountAndSelected::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1) == 0x000050, "Member 'Basic_Dots_C_SetCountAndSelected::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, K2Node_MakeStruct_Margin) == 0x000058, "Member 'Basic_Dots_C_SetCountAndSelected::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, K2Node_MakeStruct_Margin_1) == 0x000068, "Member 'Basic_Dots_C_SetCountAndSelected::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, K2Node_Select_Default) == 0x000078, "Member 'Basic_Dots_C_SetCountAndSelected::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, CallFunc_Array_Length_ReturnValue_1) == 0x000088, "Member 'Basic_Dots_C_SetCountAndSelected::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00008C, "Member 'Basic_Dots_C_SetCountAndSelected::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, K2Node_Select_Default_1) == 0x000090, "Member 'Basic_Dots_C_SetCountAndSelected::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetCountAndSelected, CallFunc_CreateOrReuseChildren_ReturnValue) == 0x000098, "Member 'Basic_Dots_C_SetCountAndSelected::CallFunc_CreateOrReuseChildren_ReturnValue' has a wrong offset!");

// Function Basic_Dots.Basic_Dots_C.SetFromWidgetSwitcher
// 0x0018 (0x0018 - 0x0000)
struct Basic_Dots_C_SetFromWidgetSwitcher final
{
public:
	class UWidgetSwitcher*                        InSwitcher;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_423F[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_Dots_C_SetFromWidgetSwitcher) == 0x000008, "Wrong alignment on Basic_Dots_C_SetFromWidgetSwitcher");
static_assert(sizeof(Basic_Dots_C_SetFromWidgetSwitcher) == 0x000018, "Wrong size on Basic_Dots_C_SetFromWidgetSwitcher");
static_assert(offsetof(Basic_Dots_C_SetFromWidgetSwitcher, InSwitcher) == 0x000000, "Member 'Basic_Dots_C_SetFromWidgetSwitcher::InSwitcher' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetFromWidgetSwitcher, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'Basic_Dots_C_SetFromWidgetSwitcher::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetFromWidgetSwitcher, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x00000C, "Member 'Basic_Dots_C_SetFromWidgetSwitcher::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Dots_C_SetFromWidgetSwitcher, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'Basic_Dots_C_SetFromWidgetSwitcher::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");

}
