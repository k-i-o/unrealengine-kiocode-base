#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HazPlus_Row

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function UI_HazPlus_Row.UI_HazPlus_Row_C.ExecuteUbergraph_UI_HazPlus_Row
// 0x0100 (0x0100 - 0x0000)
struct UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10FE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDifficultyMutatorItem                 K2Node_MakeStruct_DifficultyMutatorItem;           // 0x0008(0x0010)(NoDestructor)
	TDelegate<void(struct FGameDifficulty& Setting)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10FF[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameDifficulty                        CallFunc_GetCurrentGameDifficulty_ReturnValue;     // 0x0048(0x0018)(ConstParm)
	class UUI_HazPlus_Icon_C*                     CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue_1;            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameDifficulty                        K2Node_CustomEvent_Setting;                        // 0x0078(0x0018)(ConstParm)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1100[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDifficultyMutatorItem>         K2Node_CustomEvent_Array;                          // 0x0098(0x0010)(ConstParm, ReferenceParm)
	struct FDifficultyMutatorItem                 K2Node_MakeStruct_DifficultyMutatorItem_1;         // 0x00A8(0x0010)(NoDestructor)
	struct FDifficultyMutatorItem                 CallFunc_Array_Get_Item;                           // 0x00B8(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1101[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDifficultyMutatorItem                 K2Node_MakeStruct_DifficultyMutatorItem_2;         // 0x00D0(0x0010)(NoDestructor)
	struct FDifficultyMutatorItem                 K2Node_MakeStruct_DifficultyMutatorItem_3;         // 0x00E0(0x0010)(NoDestructor)
	TArray<struct FDifficultyMutatorItem>         K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row) == 0x000008, "Wrong alignment on UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row");
static_assert(sizeof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row) == 0x000100, "Wrong size on UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, EntryPoint) == 0x000000, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, K2Node_MakeStruct_DifficultyMutatorItem) == 0x000008, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::K2Node_MakeStruct_DifficultyMutatorItem' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, Temp_int_Array_Index_Variable) == 0x000028, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, CallFunc_GetFSDGameState_ReturnValue) == 0x000038, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, CallFunc_GetOwningPlayer_ReturnValue) == 0x000040, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, CallFunc_GetCurrentGameDifficulty_ReturnValue) == 0x000048, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::CallFunc_GetCurrentGameDifficulty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, CallFunc_Create_ReturnValue) == 0x000060, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000068, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, CallFunc_GetFSDGameState_ReturnValue_1) == 0x000070, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::CallFunc_GetFSDGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, K2Node_CustomEvent_Setting) == 0x000078, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::K2Node_CustomEvent_Setting' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, K2Node_Event_IsDesignTime) == 0x000090, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, K2Node_CustomEvent_Array) == 0x000098, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::K2Node_CustomEvent_Array' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, K2Node_MakeStruct_DifficultyMutatorItem_1) == 0x0000A8, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::K2Node_MakeStruct_DifficultyMutatorItem_1' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, K2Node_MakeStruct_DifficultyMutatorItem_2) == 0x0000D0, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::K2Node_MakeStruct_DifficultyMutatorItem_2' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, K2Node_MakeStruct_DifficultyMutatorItem_3) == 0x0000E0, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::K2Node_MakeStruct_DifficultyMutatorItem_3' has a wrong offset!");
static_assert(offsetof(UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row, K2Node_MakeArray_Array) == 0x0000F0, "Member 'UI_HazPlus_Row_C_ExecuteUbergraph_UI_HazPlus_Row::K2Node_MakeArray_Array' has a wrong offset!");

// Function UI_HazPlus_Row.UI_HazPlus_Row_C.SetMutators
// 0x0010 (0x0010 - 0x0000)
struct UI_HazPlus_Row_C_SetMutators final
{
public:
	TArray<struct FDifficultyMutatorItem>         Array;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UI_HazPlus_Row_C_SetMutators) == 0x000008, "Wrong alignment on UI_HazPlus_Row_C_SetMutators");
static_assert(sizeof(UI_HazPlus_Row_C_SetMutators) == 0x000010, "Wrong size on UI_HazPlus_Row_C_SetMutators");
static_assert(offsetof(UI_HazPlus_Row_C_SetMutators, Array) == 0x000000, "Member 'UI_HazPlus_Row_C_SetMutators::Array' has a wrong offset!");

// Function UI_HazPlus_Row.UI_HazPlus_Row_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_HazPlus_Row_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_HazPlus_Row_C_PreConstruct) == 0x000001, "Wrong alignment on UI_HazPlus_Row_C_PreConstruct");
static_assert(sizeof(UI_HazPlus_Row_C_PreConstruct) == 0x000001, "Wrong size on UI_HazPlus_Row_C_PreConstruct");
static_assert(offsetof(UI_HazPlus_Row_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_HazPlus_Row_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_HazPlus_Row.UI_HazPlus_Row_C.OnDifficultyChanged_Event_0
// 0x0018 (0x0018 - 0x0000)
struct UI_HazPlus_Row_C_OnDifficultyChanged_Event_0 final
{
public:
	struct FGameDifficulty                        Setting;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UI_HazPlus_Row_C_OnDifficultyChanged_Event_0) == 0x000008, "Wrong alignment on UI_HazPlus_Row_C_OnDifficultyChanged_Event_0");
static_assert(sizeof(UI_HazPlus_Row_C_OnDifficultyChanged_Event_0) == 0x000018, "Wrong size on UI_HazPlus_Row_C_OnDifficultyChanged_Event_0");
static_assert(offsetof(UI_HazPlus_Row_C_OnDifficultyChanged_Event_0, Setting) == 0x000000, "Member 'UI_HazPlus_Row_C_OnDifficultyChanged_Event_0::Setting' has a wrong offset!");

}
