#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_Keycard

#include "Basic.hpp"


namespace SDK::Params
{

// Function Item_Keycard.Item_Keycard_C.ExecuteUbergraph_Item_Keycard
// 0x0050 (0x0050 - 0x0000)
struct Item_Keycard_C_ExecuteUbergraph_Item_Keycard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UActorComponent*>                CallFunc_GetComponentsByTag_ReturnValue;           // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UActorComponent*                        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInstructionInterface_C> K2Node_DynamicCast_AsInstruction_Interface;        // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard) == 0x000008, "Wrong alignment on Item_Keycard_C_ExecuteUbergraph_Item_Keycard");
static_assert(sizeof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard) == 0x000050, "Wrong size on Item_Keycard_C_ExecuteUbergraph_Item_Keycard");
static_assert(offsetof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard, EntryPoint) == 0x000000, "Member 'Item_Keycard_C_ExecuteUbergraph_Item_Keycard::EntryPoint' has a wrong offset!");
static_assert(offsetof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Item_Keycard_C_ExecuteUbergraph_Item_Keycard::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'Item_Keycard_C_ExecuteUbergraph_Item_Keycard::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Item_Keycard_C_ExecuteUbergraph_Item_Keycard::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard, CallFunc_GetComponentsByTag_ReturnValue) == 0x000010, "Member 'Item_Keycard_C_ExecuteUbergraph_Item_Keycard::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard, CallFunc_Array_Get_Item) == 0x000020, "Member 'Item_Keycard_C_ExecuteUbergraph_Item_Keycard::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'Item_Keycard_C_ExecuteUbergraph_Item_Keycard::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard, K2Node_DynamicCast_AsInstruction_Interface) == 0x000030, "Member 'Item_Keycard_C_ExecuteUbergraph_Item_Keycard::K2Node_DynamicCast_AsInstruction_Interface' has a wrong offset!");
static_assert(offsetof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'Item_Keycard_C_ExecuteUbergraph_Item_Keycard::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard, CallFunc_Less_IntInt_ReturnValue) == 0x000041, "Member 'Item_Keycard_C_ExecuteUbergraph_Item_Keycard::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard, CallFunc_Array_Length_ReturnValue_1) == 0x000044, "Member 'Item_Keycard_C_ExecuteUbergraph_Item_Keycard::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Item_Keycard_C_ExecuteUbergraph_Item_Keycard, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'Item_Keycard_C_ExecuteUbergraph_Item_Keycard::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

