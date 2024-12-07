#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InfirmaryStats_Item

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverBegin__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_InfirmaryStats_Item_C_OnHoverBegin__DelegateSignature final
{
public:
	class UUI_MissionStats_Item_C*                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InfirmaryStats_Item_C_OnHoverBegin__DelegateSignature) == 0x000008, "Wrong alignment on UI_InfirmaryStats_Item_C_OnHoverBegin__DelegateSignature");
static_assert(sizeof(UI_InfirmaryStats_Item_C_OnHoverBegin__DelegateSignature) == 0x000008, "Wrong size on UI_InfirmaryStats_Item_C_OnHoverBegin__DelegateSignature");
static_assert(offsetof(UI_InfirmaryStats_Item_C_OnHoverBegin__DelegateSignature, Sender) == 0x000000, "Member 'UI_InfirmaryStats_Item_C_OnHoverBegin__DelegateSignature::Sender' has a wrong offset!");

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverEnd__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_InfirmaryStats_Item_C_OnHoverEnd__DelegateSignature final
{
public:
	class UUI_MissionStats_Item_C*                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InfirmaryStats_Item_C_OnHoverEnd__DelegateSignature) == 0x000008, "Wrong alignment on UI_InfirmaryStats_Item_C_OnHoverEnd__DelegateSignature");
static_assert(sizeof(UI_InfirmaryStats_Item_C_OnHoverEnd__DelegateSignature) == 0x000008, "Wrong size on UI_InfirmaryStats_Item_C_OnHoverEnd__DelegateSignature");
static_assert(offsetof(UI_InfirmaryStats_Item_C_OnHoverEnd__DelegateSignature, Sender) == 0x000000, "Member 'UI_InfirmaryStats_Item_C_OnHoverEnd__DelegateSignature::Sender' has a wrong offset!");

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.ExecuteUbergraph_UI_InfirmaryStats_Item
// 0x0138 (0x0138 - 0x0000)
struct UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENUM_MenuColors                               Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMissionStat* MissionStat, class FText StatValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4663[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0020(0x0018)()
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Selected;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4664[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetIcon_ReturnValue;                      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               Temp_byte_Variable_2;                              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               K2Node_Select_Default;                             // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4665[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x0094(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4666[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMissionStat*                           K2Node_CustomEvent_MissionStat;                    // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_StatValue;                      // 0x00B0(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00C8(0x0028)()
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4667[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerState_SpaceRig_C*             K2Node_DynamicCast_AsBP_Player_State_Space_Rig;    // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENUM_MenuColors                               Temp_byte_Variable_3;                              // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4668[0x5];                                     // 0x0103(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetMissionStatValue_StatValue;            // 0x0108(0x0018)()
	bool                                          CallFunc_GetMissionStatValue_Valid;                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENUM_MenuColors                               K2Node_Select_Default_1;                           // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4669[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_3;                 // 0x0124(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item) == 0x000008, "Wrong alignment on UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item");
static_assert(sizeof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item) == 0x000138, "Wrong size on UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, EntryPoint) == 0x000000, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, Temp_bool_Variable) == 0x000004, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, Temp_bool_Variable_1) == 0x000005, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, Temp_byte_Variable) == 0x000006, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, Temp_byte_Variable_1) == 0x000007, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, K2Node_Event_IsDesignTime) == 0x000018, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, CallFunc_TextToUpper_ReturnValue) == 0x000020, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, CallFunc_MenuColors_OutputColor) == 0x000038, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, CallFunc_MenuColors_OutputColor_1) == 0x000070, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, K2Node_CustomEvent_Selected) == 0x000080, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::K2Node_CustomEvent_Selected' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, CallFunc_GetIcon_ReturnValue) == 0x000088, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::CallFunc_GetIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, Temp_byte_Variable_2) == 0x000090, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, K2Node_Select_Default) == 0x000091, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, CallFunc_MenuColors_OutputColor_2) == 0x000094, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, K2Node_CustomEvent_MissionStat) == 0x0000A8, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::K2Node_CustomEvent_MissionStat' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, K2Node_CustomEvent_StatValue) == 0x0000B0, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::K2Node_CustomEvent_StatValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, K2Node_MakeStruct_SlateColor_1) == 0x0000C8, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000F0, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, K2Node_DynamicCast_AsBP_Player_State_Space_Rig) == 0x0000F8, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::K2Node_DynamicCast_AsBP_Player_State_Space_Rig' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, CallFunc_HasAuthority_ReturnValue) == 0x000101, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, Temp_byte_Variable_3) == 0x000102, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, CallFunc_GetMissionStatValue_StatValue) == 0x000108, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::CallFunc_GetMissionStatValue_StatValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, CallFunc_GetMissionStatValue_Valid) == 0x000120, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::CallFunc_GetMissionStatValue_Valid' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, K2Node_Select_Default_1) == 0x000121, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item, CallFunc_MenuColors_OutputColor_3) == 0x000124, "Member 'UI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item::CallFunc_MenuColors_OutputColor_3' has a wrong offset!");

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.MissonStatUpdate
// 0x0020 (0x0020 - 0x0000)
struct UI_InfirmaryStats_Item_C_MissonStatUpdate final
{
public:
	class UMissionStat*                           MissionStat;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   StatValue;                                         // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UI_InfirmaryStats_Item_C_MissonStatUpdate) == 0x000008, "Wrong alignment on UI_InfirmaryStats_Item_C_MissonStatUpdate");
static_assert(sizeof(UI_InfirmaryStats_Item_C_MissonStatUpdate) == 0x000020, "Wrong size on UI_InfirmaryStats_Item_C_MissonStatUpdate");
static_assert(offsetof(UI_InfirmaryStats_Item_C_MissonStatUpdate, MissionStat) == 0x000000, "Member 'UI_InfirmaryStats_Item_C_MissonStatUpdate::MissionStat' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_MissonStatUpdate, StatValue) == 0x000008, "Member 'UI_InfirmaryStats_Item_C_MissonStatUpdate::StatValue' has a wrong offset!");

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Set Selected
// 0x0001 (0x0001 - 0x0000)
struct UI_InfirmaryStats_Item_C_Set_Selected final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_InfirmaryStats_Item_C_Set_Selected) == 0x000001, "Wrong alignment on UI_InfirmaryStats_Item_C_Set_Selected");
static_assert(sizeof(UI_InfirmaryStats_Item_C_Set_Selected) == 0x000001, "Wrong size on UI_InfirmaryStats_Item_C_Set_Selected");
static_assert(offsetof(UI_InfirmaryStats_Item_C_Set_Selected, Selected) == 0x000000, "Member 'UI_InfirmaryStats_Item_C_Set_Selected::Selected' has a wrong offset!");

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_InfirmaryStats_Item_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_InfirmaryStats_Item_C_PreConstruct) == 0x000001, "Wrong alignment on UI_InfirmaryStats_Item_C_PreConstruct");
static_assert(sizeof(UI_InfirmaryStats_Item_C_PreConstruct) == 0x000001, "Wrong size on UI_InfirmaryStats_Item_C_PreConstruct");
static_assert(offsetof(UI_InfirmaryStats_Item_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_InfirmaryStats_Item_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetMissionStat
// 0x0008 (0x0008 - 0x0000)
struct UI_InfirmaryStats_Item_C_GetMissionStat final
{
public:
	class UMissionStat*                           Param_Mission_Stat;                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InfirmaryStats_Item_C_GetMissionStat) == 0x000008, "Wrong alignment on UI_InfirmaryStats_Item_C_GetMissionStat");
static_assert(sizeof(UI_InfirmaryStats_Item_C_GetMissionStat) == 0x000008, "Wrong size on UI_InfirmaryStats_Item_C_GetMissionStat");
static_assert(offsetof(UI_InfirmaryStats_Item_C_GetMissionStat, Param_Mission_Stat) == 0x000000, "Member 'UI_InfirmaryStats_Item_C_GetMissionStat::Param_Mission_Stat' has a wrong offset!");

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.SetCategoryFilter
// 0x0038 (0x0038 - 0x0000)
struct UI_InfirmaryStats_Item_C_SetCategoryFilter final
{
public:
	TArray<class UTexture2D*>                     Filter;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_466A[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_466B[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_InfirmaryStats_Item_C_SetCategoryFilter) == 0x000008, "Wrong alignment on UI_InfirmaryStats_Item_C_SetCategoryFilter");
static_assert(sizeof(UI_InfirmaryStats_Item_C_SetCategoryFilter) == 0x000038, "Wrong size on UI_InfirmaryStats_Item_C_SetCategoryFilter");
static_assert(offsetof(UI_InfirmaryStats_Item_C_SetCategoryFilter, Filter) == 0x000000, "Member 'UI_InfirmaryStats_Item_C_SetCategoryFilter::Filter' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_SetCategoryFilter, Temp_int_Array_Index_Variable) == 0x000010, "Member 'UI_InfirmaryStats_Item_C_SetCategoryFilter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_SetCategoryFilter, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'UI_InfirmaryStats_Item_C_SetCategoryFilter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_SetCategoryFilter, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'UI_InfirmaryStats_Item_C_SetCategoryFilter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_SetCategoryFilter, CallFunc_Array_Get_Item) == 0x000020, "Member 'UI_InfirmaryStats_Item_C_SetCategoryFilter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_SetCategoryFilter, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'UI_InfirmaryStats_Item_C_SetCategoryFilter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_SetCategoryFilter, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00002C, "Member 'UI_InfirmaryStats_Item_C_SetCategoryFilter::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_SetCategoryFilter, CallFunc_Less_IntInt_ReturnValue) == 0x00002D, "Member 'UI_InfirmaryStats_Item_C_SetCategoryFilter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_SetCategoryFilter, CallFunc_Array_Length_ReturnValue_1) == 0x000030, "Member 'UI_InfirmaryStats_Item_C_SetCategoryFilter::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_SetCategoryFilter, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'UI_InfirmaryStats_Item_C_SetCategoryFilter::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetPlayer
// 0x0028 (0x0028 - 0x0000)
struct UI_InfirmaryStats_Item_C_GetPlayer final
{
public:
	class AFSDPlayerController*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDPlayerController*                   K2Node_DynamicCast_AsFSDPlayer_Controller;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_466C[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDPlayerController*                   CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_InfirmaryStats_Item_C_GetPlayer) == 0x000008, "Wrong alignment on UI_InfirmaryStats_Item_C_GetPlayer");
static_assert(sizeof(UI_InfirmaryStats_Item_C_GetPlayer) == 0x000028, "Wrong size on UI_InfirmaryStats_Item_C_GetPlayer");
static_assert(offsetof(UI_InfirmaryStats_Item_C_GetPlayer, ReturnValue) == 0x000000, "Member 'UI_InfirmaryStats_Item_C_GetPlayer::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_GetPlayer, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'UI_InfirmaryStats_Item_C_GetPlayer::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_GetPlayer, K2Node_DynamicCast_AsFSDPlayer_Controller) == 0x000010, "Member 'UI_InfirmaryStats_Item_C_GetPlayer::K2Node_DynamicCast_AsFSDPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_GetPlayer, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_InfirmaryStats_Item_C_GetPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_GetPlayer, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'UI_InfirmaryStats_Item_C_GetPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_GetPlayer, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'UI_InfirmaryStats_Item_C_GetPlayer::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OwnedByLocal
// 0x0003 (0x0003 - 0x0000)
struct UI_InfirmaryStats_Item_C_OwnedByLocal final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_InfirmaryStats_Item_C_OwnedByLocal) == 0x000001, "Wrong alignment on UI_InfirmaryStats_Item_C_OwnedByLocal");
static_assert(sizeof(UI_InfirmaryStats_Item_C_OwnedByLocal) == 0x000003, "Wrong size on UI_InfirmaryStats_Item_C_OwnedByLocal");
static_assert(offsetof(UI_InfirmaryStats_Item_C_OwnedByLocal, ReturnValue) == 0x000000, "Member 'UI_InfirmaryStats_Item_C_OwnedByLocal::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_OwnedByLocal, CallFunc_IsLocallyControlled_ReturnValue) == 0x000001, "Member 'UI_InfirmaryStats_Item_C_OwnedByLocal::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_InfirmaryStats_Item_C_OwnedByLocal, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'UI_InfirmaryStats_Item_C_OwnedByLocal::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

