#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionStats_Item

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "ENUM_MenuColors_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnHoverBegin__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_MissionStats_Item_C_OnHoverBegin__DelegateSignature final
{
public:
	class UUI_MissionStats_Item_C*                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionStats_Item_C_OnHoverBegin__DelegateSignature) == 0x000008, "Wrong alignment on UI_MissionStats_Item_C_OnHoverBegin__DelegateSignature");
static_assert(sizeof(UI_MissionStats_Item_C_OnHoverBegin__DelegateSignature) == 0x000008, "Wrong size on UI_MissionStats_Item_C_OnHoverBegin__DelegateSignature");
static_assert(offsetof(UI_MissionStats_Item_C_OnHoverBegin__DelegateSignature, Sender) == 0x000000, "Member 'UI_MissionStats_Item_C_OnHoverBegin__DelegateSignature::Sender' has a wrong offset!");

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnHoverEnd__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_MissionStats_Item_C_OnHoverEnd__DelegateSignature final
{
public:
	class UUI_MissionStats_Item_C*                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionStats_Item_C_OnHoverEnd__DelegateSignature) == 0x000008, "Wrong alignment on UI_MissionStats_Item_C_OnHoverEnd__DelegateSignature");
static_assert(sizeof(UI_MissionStats_Item_C_OnHoverEnd__DelegateSignature) == 0x000008, "Wrong size on UI_MissionStats_Item_C_OnHoverEnd__DelegateSignature");
static_assert(offsetof(UI_MissionStats_Item_C_OnHoverEnd__DelegateSignature, Sender) == 0x000000, "Member 'UI_MissionStats_Item_C_OnHoverEnd__DelegateSignature::Sender' has a wrong offset!");

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.ExecuteUbergraph_UI_MissionStats_Item
// 0x0200 (0x0200 - 0x0000)
struct UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_465B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetHighestStatCountAsText_ReturnValue;    // 0x0008(0x0018)()
	TDelegate<void(class UObject* WorldContext, class UMissionStat* MissionStat, float Value)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENUM_MenuColors                               Temp_byte_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               Temp_byte_Variable_1;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_465C[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
	class UObject*                                K2Node_CustomEvent_WorldContext;                   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionStat*                           K2Node_CustomEvent_MissionStat;                    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value;                          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0084(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Selected;                       // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_465D[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetIcon_ReturnValue;                      // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00A0(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x00D8(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0148(0x0070)(ConstParm)
	ENUM_MenuColors                               K2Node_Select_Default;                             // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_465E[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x01BC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_465F[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetStatCountTotalAsText_ReturnValue;      // 0x01D0(0x0018)()
	class FText                                   CallFunc_GetLowestStatCountAsText_ReturnValue;     // 0x01E8(0x0018)()
};
static_assert(alignof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item) == 0x000008, "Wrong alignment on UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item");
static_assert(sizeof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item) == 0x000200, "Wrong size on UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, EntryPoint) == 0x000000, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, CallFunc_GetHighestStatCountAsText_ReturnValue) == 0x000008, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::CallFunc_GetHighestStatCountAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, Temp_bool_Variable) == 0x000030, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, Temp_byte_Variable) == 0x000031, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, Temp_byte_Variable_1) == 0x000032, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, K2Node_Event_IsDesignTime) == 0x000033, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, CallFunc_MenuColors_OutputColor) == 0x000034, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, K2Node_CustomEvent_WorldContext) == 0x000070, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::K2Node_CustomEvent_WorldContext' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, K2Node_CustomEvent_MissionStat) == 0x000078, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::K2Node_CustomEvent_MissionStat' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, K2Node_CustomEvent_Value) == 0x000080, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, CallFunc_MenuColors_OutputColor_1) == 0x000084, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, K2Node_CustomEvent_Selected) == 0x000094, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::K2Node_CustomEvent_Selected' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, CallFunc_GetIcon_ReturnValue) == 0x000098, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::CallFunc_GetIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, K2Node_Event_MyGeometry) == 0x0000A0, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, K2Node_Event_MouseEvent_1) == 0x0000D8, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, K2Node_Event_MouseEvent) == 0x000148, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, K2Node_Select_Default) == 0x0001B8, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, CallFunc_MenuColors_OutputColor_2) == 0x0001BC, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, CallFunc_GetStatCountTotalAsText_ReturnValue) == 0x0001D0, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::CallFunc_GetStatCountTotalAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item, CallFunc_GetLowestStatCountAsText_ReturnValue) == 0x0001E8, "Member 'UI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item::CallFunc_GetLowestStatCountAsText_ReturnValue' has a wrong offset!");

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct UI_MissionStats_Item_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UI_MissionStats_Item_C_OnMouseLeave) == 0x000008, "Wrong alignment on UI_MissionStats_Item_C_OnMouseLeave");
static_assert(sizeof(UI_MissionStats_Item_C_OnMouseLeave) == 0x000070, "Wrong size on UI_MissionStats_Item_C_OnMouseLeave");
static_assert(offsetof(UI_MissionStats_Item_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'UI_MissionStats_Item_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct UI_MissionStats_Item_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UI_MissionStats_Item_C_OnMouseEnter) == 0x000008, "Wrong alignment on UI_MissionStats_Item_C_OnMouseEnter");
static_assert(sizeof(UI_MissionStats_Item_C_OnMouseEnter) == 0x0000A8, "Wrong size on UI_MissionStats_Item_C_OnMouseEnter");
static_assert(offsetof(UI_MissionStats_Item_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'UI_MissionStats_Item_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'UI_MissionStats_Item_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.Set Selected
// 0x0001 (0x0001 - 0x0000)
struct UI_MissionStats_Item_C_Set_Selected final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_MissionStats_Item_C_Set_Selected) == 0x000001, "Wrong alignment on UI_MissionStats_Item_C_Set_Selected");
static_assert(sizeof(UI_MissionStats_Item_C_Set_Selected) == 0x000001, "Wrong size on UI_MissionStats_Item_C_Set_Selected");
static_assert(offsetof(UI_MissionStats_Item_C_Set_Selected, Selected) == 0x000000, "Member 'UI_MissionStats_Item_C_Set_Selected::Selected' has a wrong offset!");

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnCountChanged_Event
// 0x0018 (0x0018 - 0x0000)
struct UI_MissionStats_Item_C_OnCountChanged_Event final
{
public:
	class UObject*                                WorldContext;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionStat*                           MissionStat;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionStats_Item_C_OnCountChanged_Event) == 0x000008, "Wrong alignment on UI_MissionStats_Item_C_OnCountChanged_Event");
static_assert(sizeof(UI_MissionStats_Item_C_OnCountChanged_Event) == 0x000018, "Wrong size on UI_MissionStats_Item_C_OnCountChanged_Event");
static_assert(offsetof(UI_MissionStats_Item_C_OnCountChanged_Event, WorldContext) == 0x000000, "Member 'UI_MissionStats_Item_C_OnCountChanged_Event::WorldContext' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_OnCountChanged_Event, MissionStat) == 0x000008, "Member 'UI_MissionStats_Item_C_OnCountChanged_Event::MissionStat' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_OnCountChanged_Event, Value) == 0x000010, "Member 'UI_MissionStats_Item_C_OnCountChanged_Event::Value' has a wrong offset!");

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_MissionStats_Item_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_MissionStats_Item_C_PreConstruct) == 0x000001, "Wrong alignment on UI_MissionStats_Item_C_PreConstruct");
static_assert(sizeof(UI_MissionStats_Item_C_PreConstruct) == 0x000001, "Wrong size on UI_MissionStats_Item_C_PreConstruct");
static_assert(offsetof(UI_MissionStats_Item_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_MissionStats_Item_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.GetMissionStat
// 0x0008 (0x0008 - 0x0000)
struct UI_MissionStats_Item_C_GetMissionStat final
{
public:
	class UMissionStat*                           Param_Mission_Stat;                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionStats_Item_C_GetMissionStat) == 0x000008, "Wrong alignment on UI_MissionStats_Item_C_GetMissionStat");
static_assert(sizeof(UI_MissionStats_Item_C_GetMissionStat) == 0x000008, "Wrong size on UI_MissionStats_Item_C_GetMissionStat");
static_assert(offsetof(UI_MissionStats_Item_C_GetMissionStat, Param_Mission_Stat) == 0x000000, "Member 'UI_MissionStats_Item_C_GetMissionStat::Param_Mission_Stat' has a wrong offset!");

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.SetCategoryFilter
// 0x0038 (0x0038 - 0x0000)
struct UI_MissionStats_Item_C_SetCategoryFilter final
{
public:
	TArray<class UTexture2D*>                     Filter;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4660[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4661[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_MissionStats_Item_C_SetCategoryFilter) == 0x000008, "Wrong alignment on UI_MissionStats_Item_C_SetCategoryFilter");
static_assert(sizeof(UI_MissionStats_Item_C_SetCategoryFilter) == 0x000038, "Wrong size on UI_MissionStats_Item_C_SetCategoryFilter");
static_assert(offsetof(UI_MissionStats_Item_C_SetCategoryFilter, Filter) == 0x000000, "Member 'UI_MissionStats_Item_C_SetCategoryFilter::Filter' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_SetCategoryFilter, Temp_int_Array_Index_Variable) == 0x000010, "Member 'UI_MissionStats_Item_C_SetCategoryFilter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_SetCategoryFilter, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'UI_MissionStats_Item_C_SetCategoryFilter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_SetCategoryFilter, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'UI_MissionStats_Item_C_SetCategoryFilter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_SetCategoryFilter, CallFunc_Array_Get_Item) == 0x000020, "Member 'UI_MissionStats_Item_C_SetCategoryFilter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_SetCategoryFilter, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'UI_MissionStats_Item_C_SetCategoryFilter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_SetCategoryFilter, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00002C, "Member 'UI_MissionStats_Item_C_SetCategoryFilter::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_SetCategoryFilter, CallFunc_Less_IntInt_ReturnValue) == 0x00002D, "Member 'UI_MissionStats_Item_C_SetCategoryFilter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_SetCategoryFilter, CallFunc_Array_Length_ReturnValue_1) == 0x000030, "Member 'UI_MissionStats_Item_C_SetCategoryFilter::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_MissionStats_Item_C_SetCategoryFilter, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'UI_MissionStats_Item_C_SetCategoryFilter::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.IsInteractable
// 0x0001 (0x0001 - 0x0000)
struct UI_MissionStats_Item_C_IsInteractable final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_MissionStats_Item_C_IsInteractable) == 0x000001, "Wrong alignment on UI_MissionStats_Item_C_IsInteractable");
static_assert(sizeof(UI_MissionStats_Item_C_IsInteractable) == 0x000001, "Wrong size on UI_MissionStats_Item_C_IsInteractable");
static_assert(offsetof(UI_MissionStats_Item_C_IsInteractable, ReturnValue) == 0x000000, "Member 'UI_MissionStats_Item_C_IsInteractable::ReturnValue' has a wrong offset!");

}

