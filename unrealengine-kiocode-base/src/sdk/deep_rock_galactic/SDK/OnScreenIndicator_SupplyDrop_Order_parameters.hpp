#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnScreenIndicator_SupplyDrop_Order

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.SetDetails
// 0x0028 (0x0028 - 0x0000)
struct OnScreenIndicator_SupplyDrop_Order_C_SetDetails final
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Cost;                                              // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F69[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UResourceData*                          ResourceRequired;                                  // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OnScreenIndicator_SupplyDrop_Order_C_SetDetails) == 0x000008, "Wrong alignment on OnScreenIndicator_SupplyDrop_Order_C_SetDetails");
static_assert(sizeof(OnScreenIndicator_SupplyDrop_Order_C_SetDetails) == 0x000028, "Wrong size on OnScreenIndicator_SupplyDrop_Order_C_SetDetails");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_SetDetails, Param_Name) == 0x000000, "Member 'OnScreenIndicator_SupplyDrop_Order_C_SetDetails::Param_Name' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_SetDetails, Cost) == 0x000018, "Member 'OnScreenIndicator_SupplyDrop_Order_C_SetDetails::Cost' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_SetDetails, ResourceRequired) == 0x000020, "Member 'OnScreenIndicator_SupplyDrop_Order_C_SetDetails::ResourceRequired' has a wrong offset!");

// Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct OnScreenIndicator_SupplyDrop_Order_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OnScreenIndicator_SupplyDrop_Order_C_PreConstruct) == 0x000001, "Wrong alignment on OnScreenIndicator_SupplyDrop_Order_C_PreConstruct");
static_assert(sizeof(OnScreenIndicator_SupplyDrop_Order_C_PreConstruct) == 0x000001, "Wrong size on OnScreenIndicator_SupplyDrop_Order_C_PreConstruct");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'OnScreenIndicator_SupplyDrop_Order_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order
// 0x0168 (0x0168 - 0x0000)
struct OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F6A[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	class FText                                   K2Node_CustomEvent_Name;                           // 0x0040(0x0018)()
	int32                                         K2Node_CustomEvent_Cost;                           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F6B[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UResourceData*                          K2Node_CustomEvent_ResourceRequired;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0068(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00C0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ReferenceParm)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F6C[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0118(0x0018)()
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0130(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0140(0x0028)()
};
static_assert(alignof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order) == 0x000008, "Wrong alignment on OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order");
static_assert(sizeof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order) == 0x000168, "Wrong size on OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, EntryPoint) == 0x000000, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::EntryPoint' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, CallFunc_MenuColors_OutputColor) == 0x000004, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, K2Node_CustomEvent_Name) == 0x000040, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, K2Node_CustomEvent_Cost) == 0x000058, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::K2Node_CustomEvent_Cost' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, K2Node_CustomEvent_ResourceRequired) == 0x000060, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::K2Node_CustomEvent_ResourceRequired' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, CallFunc_TextToUpper_ReturnValue) == 0x000068, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C0, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, K2Node_MakeArray_Array) == 0x000100, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, K2Node_Event_IsDesignTime) == 0x000110, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, CallFunc_Format_ReturnValue) == 0x000118, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, CallFunc_MenuColors_OutputColor_1) == 0x000130, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order, K2Node_MakeStruct_SlateColor_1) == 0x000140, "Member 'OnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}
