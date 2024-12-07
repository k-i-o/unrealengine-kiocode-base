#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HazPlus_Condensed_Tooltip

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_HazPlus_Condensed_Tooltip.UI_HazPlus_Condensed_Tooltip_C.ExecuteUbergraph_UI_HazPlus_Condensed_Tooltip
// 0x0008 (0x0008 - 0x0000)
struct UI_HazPlus_Condensed_Tooltip_C_ExecuteUbergraph_UI_HazPlus_Condensed_Tooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_HazPlus_Condensed_Tooltip_C_ExecuteUbergraph_UI_HazPlus_Condensed_Tooltip) == 0x000004, "Wrong alignment on UI_HazPlus_Condensed_Tooltip_C_ExecuteUbergraph_UI_HazPlus_Condensed_Tooltip");
static_assert(sizeof(UI_HazPlus_Condensed_Tooltip_C_ExecuteUbergraph_UI_HazPlus_Condensed_Tooltip) == 0x000008, "Wrong size on UI_HazPlus_Condensed_Tooltip_C_ExecuteUbergraph_UI_HazPlus_Condensed_Tooltip");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_ExecuteUbergraph_UI_HazPlus_Condensed_Tooltip, EntryPoint) == 0x000000, "Member 'UI_HazPlus_Condensed_Tooltip_C_ExecuteUbergraph_UI_HazPlus_Condensed_Tooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_ExecuteUbergraph_UI_HazPlus_Condensed_Tooltip, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_HazPlus_Condensed_Tooltip_C_ExecuteUbergraph_UI_HazPlus_Condensed_Tooltip::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_HazPlus_Condensed_Tooltip.UI_HazPlus_Condensed_Tooltip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_HazPlus_Condensed_Tooltip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_HazPlus_Condensed_Tooltip_C_PreConstruct) == 0x000001, "Wrong alignment on UI_HazPlus_Condensed_Tooltip_C_PreConstruct");
static_assert(sizeof(UI_HazPlus_Condensed_Tooltip_C_PreConstruct) == 0x000001, "Wrong size on UI_HazPlus_Condensed_Tooltip_C_PreConstruct");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_HazPlus_Condensed_Tooltip_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_HazPlus_Condensed_Tooltip.UI_HazPlus_Condensed_Tooltip_C.SetMutators
// 0x0088 (0x0088 - 0x0000)
struct UI_HazPlus_Condensed_Tooltip_C_SetMutators final
{
public:
	TArray<struct FDifficultyMutatorItem>         InMutator;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UUI_HazPlus_Icon_C*                     Icon;                                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDifficultyMutatorItem                 Mutator;                                           // 0x0018(0x0010)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31E5[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDifficultyMutatorItem                 CallFunc_Array_Get_Item;                           // 0x0038(0x0010)(NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31E6[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31E7[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31E8[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UITM_HazPlusItem_C*                     K2Node_DynamicCast_AsITM_Haz_Plus_Item;            // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_HazPlus_Condensed_Tooltip_C_SetMutators) == 0x000008, "Wrong alignment on UI_HazPlus_Condensed_Tooltip_C_SetMutators");
static_assert(sizeof(UI_HazPlus_Condensed_Tooltip_C_SetMutators) == 0x000088, "Wrong size on UI_HazPlus_Condensed_Tooltip_C_SetMutators");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, InMutator) == 0x000000, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::InMutator' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, Icon) == 0x000010, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::Icon' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, Mutator) == 0x000018, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::Mutator' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, Temp_int_Array_Index_Variable) == 0x000028, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, CallFunc_Array_Get_Item) == 0x000038, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000048, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, CallFunc_GetAllChildren_ReturnValue) == 0x000050, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, K2Node_DynamicCast_AsITM_Haz_Plus_Item) == 0x000078, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::K2Node_DynamicCast_AsITM_Haz_Plus_Item' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, CallFunc_SelectVisibility_IsVisible) == 0x000081, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, CallFunc_SelectVisibility_VisibilityChanged) == 0x000082, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Condensed_Tooltip_C_SetMutators, CallFunc_SelectVisibility_New_Visibility) == 0x000083, "Member 'UI_HazPlus_Condensed_Tooltip_C_SetMutators::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");

}

