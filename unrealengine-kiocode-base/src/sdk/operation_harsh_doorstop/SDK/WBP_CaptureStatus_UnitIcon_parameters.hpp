#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CaptureStatus_UnitIcon

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "ECaptureUnitType_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.ExecuteUbergraph_WBP_CaptureStatus_UnitIcon
// 0x0018 (0x0018 - 0x0000)
struct WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F53[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon) == 0x000004, "Wrong alignment on WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon");
static_assert(sizeof(WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon) == 0x000018, "Wrong size on WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon, EntryPoint) == 0x000000, "Member 'WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon, Temp_bool_Variable) == 0x000005, "Member 'WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon, K2Node_Select_Default) == 0x000008, "Member 'WBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon::K2Node_Select_Default' has a wrong offset!");

// Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CaptureStatus_UnitIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CaptureStatus_UnitIcon_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CaptureStatus_UnitIcon_C_PreConstruct");
static_assert(sizeof(WBP_CaptureStatus_UnitIcon_C_PreConstruct) == 0x000001, "Wrong size on WBP_CaptureStatus_UnitIcon_C_PreConstruct");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CaptureStatus_UnitIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.SetUnitType
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_CaptureStatus_UnitIcon_C_SetUnitType final
{
public:
	ECaptureUnitType                              NewUnitType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECaptureUnitType                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECaptureUnitType                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F54[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Select_Default;                             // 0x0008(0x0088)(ConstParm)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureStatus_UnitIcon_C_SetUnitType) == 0x000008, "Wrong alignment on WBP_CaptureStatus_UnitIcon_C_SetUnitType");
static_assert(sizeof(WBP_CaptureStatus_UnitIcon_C_SetUnitType) == 0x0000A0, "Wrong size on WBP_CaptureStatus_UnitIcon_C_SetUnitType");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_SetUnitType, NewUnitType) == 0x000000, "Member 'WBP_CaptureStatus_UnitIcon_C_SetUnitType::NewUnitType' has a wrong offset!");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_SetUnitType, Temp_byte_Variable) == 0x000001, "Member 'WBP_CaptureStatus_UnitIcon_C_SetUnitType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_SetUnitType, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_CaptureStatus_UnitIcon_C_SetUnitType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_SetUnitType, K2Node_Select_Default) == 0x000008, "Member 'WBP_CaptureStatus_UnitIcon_C_SetUnitType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_SetUnitType, K2Node_Select_Default_1) == 0x000090, "Member 'WBP_CaptureStatus_UnitIcon_C_SetUnitType::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.SetIsMultipleUnit
// 0x0118 (0x0118 - 0x0000)
struct WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit final
{
public:
	bool                                          bNewUnitMultiple;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECaptureUnitType                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F55[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Select_Default;                             // 0x0008(0x0088)(ConstParm)
	struct FSlateBrush                            K2Node_Select_Default_1;                           // 0x0090(0x0088)(ConstParm)
};
static_assert(alignof(WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit) == 0x000008, "Wrong alignment on WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit");
static_assert(sizeof(WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit) == 0x000118, "Wrong size on WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit, bNewUnitMultiple) == 0x000000, "Member 'WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit::bNewUnitMultiple' has a wrong offset!");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit, Temp_byte_Variable) == 0x000001, "Member 'WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit, Temp_bool_Variable) == 0x000002, "Member 'WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit, K2Node_Select_Default) == 0x000008, "Member 'WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit, K2Node_Select_Default_1) == 0x000090, "Member 'WBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit::K2Node_Select_Default_1' has a wrong offset!");

}
