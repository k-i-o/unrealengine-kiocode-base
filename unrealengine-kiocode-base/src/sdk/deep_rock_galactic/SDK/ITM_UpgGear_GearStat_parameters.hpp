#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_UpgGear_GearStat

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.ExecuteUbergraph_ITM_UpgGear_GearStat
// 0x00B0 (0x00B0 - 0x0000)
struct ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_373C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0050(0x0028)()
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0088(0x0028)()
};
static_assert(alignof(ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat) == 0x000008, "Wrong alignment on ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat");
static_assert(sizeof(ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat) == 0x0000B0, "Wrong size on ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat");
static_assert(offsetof(ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat, EntryPoint) == 0x000000, "Member 'ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat, CallFunc_MenuColors_OutputColor) == 0x000008, "Member 'ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat, CallFunc_MenuColors_OutputColor_1) == 0x000018, "Member 'ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat, K2Node_MakeStruct_SlateColor_1) == 0x000050, "Member 'ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat, CallFunc_MenuColors_OutputColor_2) == 0x000078, "Member 'ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat, K2Node_MakeStruct_SlateColor_2) == 0x000088, "Member 'ITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");

// Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_UpgGear_GearStat_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_UpgGear_GearStat_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_UpgGear_GearStat_C_PreConstruct");
static_assert(sizeof(ITM_UpgGear_GearStat_C_PreConstruct) == 0x000001, "Wrong size on ITM_UpgGear_GearStat_C_PreConstruct");
static_assert(offsetof(ITM_UpgGear_GearStat_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_UpgGear_GearStat_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetData
// 0x0280 (0x0280 - 0x0000)
struct ITM_UpgGear_GearStat_C_SetData final
{
public:
	class FText                                   InStatName;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InStatValue;                                       // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InStatBaseValue;                                   // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InStatUpgradeValue;                                // 0x0048(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	EItemPreviewStatus                            InItemPreviewStatus;                               // 0x0060(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemPreviewStatus                            Temp_byte_Variable;                                // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemPreviewStatus                            Temp_byte_Variable_6;                              // 0x0067(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemPreviewStatus                            Temp_byte_Variable_7;                              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_8;                              // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_9;                              // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemPreviewStatus                            Temp_byte_Variable_10;                             // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_373D[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00B0(0x0040)(HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00F0(0x0028)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0128(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_373E[0x2];                                     // 0x0142(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_3;                 // 0x0144(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_4;                 // 0x0154(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_2;                           // 0x0164(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_373F[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0178(0x0028)()
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_5;                 // 0x01A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_6;                 // 0x01B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_7;                 // 0x01C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3740[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_3;                           // 0x01D4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3741[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x01E8(0x0028)()
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3742[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0218(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0258(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0268(0x0018)()
};
static_assert(alignof(ITM_UpgGear_GearStat_C_SetData) == 0x000008, "Wrong alignment on ITM_UpgGear_GearStat_C_SetData");
static_assert(sizeof(ITM_UpgGear_GearStat_C_SetData) == 0x000280, "Wrong size on ITM_UpgGear_GearStat_C_SetData");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, InStatName) == 0x000000, "Member 'ITM_UpgGear_GearStat_C_SetData::InStatName' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, InStatValue) == 0x000018, "Member 'ITM_UpgGear_GearStat_C_SetData::InStatValue' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, InStatBaseValue) == 0x000030, "Member 'ITM_UpgGear_GearStat_C_SetData::InStatBaseValue' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, InStatUpgradeValue) == 0x000048, "Member 'ITM_UpgGear_GearStat_C_SetData::InStatUpgradeValue' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, InItemPreviewStatus) == 0x000060, "Member 'ITM_UpgGear_GearStat_C_SetData::InItemPreviewStatus' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, Temp_byte_Variable) == 0x000061, "Member 'ITM_UpgGear_GearStat_C_SetData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, Temp_byte_Variable_1) == 0x000062, "Member 'ITM_UpgGear_GearStat_C_SetData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, Temp_byte_Variable_2) == 0x000063, "Member 'ITM_UpgGear_GearStat_C_SetData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, Temp_byte_Variable_3) == 0x000064, "Member 'ITM_UpgGear_GearStat_C_SetData::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, Temp_byte_Variable_4) == 0x000065, "Member 'ITM_UpgGear_GearStat_C_SetData::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, Temp_byte_Variable_5) == 0x000066, "Member 'ITM_UpgGear_GearStat_C_SetData::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, Temp_byte_Variable_6) == 0x000067, "Member 'ITM_UpgGear_GearStat_C_SetData::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, Temp_byte_Variable_7) == 0x000068, "Member 'ITM_UpgGear_GearStat_C_SetData::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, Temp_bool_Variable) == 0x000069, "Member 'ITM_UpgGear_GearStat_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, Temp_byte_Variable_8) == 0x00006A, "Member 'ITM_UpgGear_GearStat_C_SetData::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, Temp_byte_Variable_9) == 0x00006B, "Member 'ITM_UpgGear_GearStat_C_SetData::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, Temp_byte_Variable_10) == 0x00006C, "Member 'ITM_UpgGear_GearStat_C_SetData::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, CallFunc_MenuColors_OutputColor) == 0x000070, "Member 'ITM_UpgGear_GearStat_C_SetData::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, CallFunc_MenuColors_OutputColor_1) == 0x000080, "Member 'ITM_UpgGear_GearStat_C_SetData::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, CallFunc_MenuColors_OutputColor_2) == 0x000090, "Member 'ITM_UpgGear_GearStat_C_SetData::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, K2Node_Select_Default) == 0x0000A0, "Member 'ITM_UpgGear_GearStat_C_SetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, K2Node_MakeStruct_FormatArgumentData) == 0x0000B0, "Member 'ITM_UpgGear_GearStat_C_SetData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, K2Node_MakeStruct_SlateColor) == 0x0000F0, "Member 'ITM_UpgGear_GearStat_C_SetData::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, K2Node_MakeArray_Array) == 0x000118, "Member 'ITM_UpgGear_GearStat_C_SetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, CallFunc_Format_ReturnValue) == 0x000128, "Member 'ITM_UpgGear_GearStat_C_SetData::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, CallFunc_TextIsEmpty_ReturnValue) == 0x000140, "Member 'ITM_UpgGear_GearStat_C_SetData::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, K2Node_Select_Default_1) == 0x000141, "Member 'ITM_UpgGear_GearStat_C_SetData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, CallFunc_MenuColors_OutputColor_3) == 0x000144, "Member 'ITM_UpgGear_GearStat_C_SetData::CallFunc_MenuColors_OutputColor_3' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, CallFunc_MenuColors_OutputColor_4) == 0x000154, "Member 'ITM_UpgGear_GearStat_C_SetData::CallFunc_MenuColors_OutputColor_4' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, K2Node_Select_Default_2) == 0x000164, "Member 'ITM_UpgGear_GearStat_C_SetData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, K2Node_MakeStruct_SlateColor_1) == 0x000178, "Member 'ITM_UpgGear_GearStat_C_SetData::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, CallFunc_MenuColors_OutputColor_5) == 0x0001A0, "Member 'ITM_UpgGear_GearStat_C_SetData::CallFunc_MenuColors_OutputColor_5' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, CallFunc_MenuColors_OutputColor_6) == 0x0001B0, "Member 'ITM_UpgGear_GearStat_C_SetData::CallFunc_MenuColors_OutputColor_6' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, CallFunc_MenuColors_OutputColor_7) == 0x0001C0, "Member 'ITM_UpgGear_GearStat_C_SetData::CallFunc_MenuColors_OutputColor_7' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, CallFunc_TextIsEmpty_ReturnValue_1) == 0x0001D0, "Member 'ITM_UpgGear_GearStat_C_SetData::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, K2Node_Select_Default_3) == 0x0001D4, "Member 'ITM_UpgGear_GearStat_C_SetData::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, K2Node_MakeStruct_SlateColor_2) == 0x0001E8, "Member 'ITM_UpgGear_GearStat_C_SetData::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, K2Node_Select_Default_4) == 0x000210, "Member 'ITM_UpgGear_GearStat_C_SetData::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, K2Node_MakeStruct_FormatArgumentData_1) == 0x000218, "Member 'ITM_UpgGear_GearStat_C_SetData::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, K2Node_MakeArray_Array_1) == 0x000258, "Member 'ITM_UpgGear_GearStat_C_SetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetData, CallFunc_Format_ReturnValue_1) == 0x000268, "Member 'ITM_UpgGear_GearStat_C_SetData::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetGearStat
// 0x0068 (0x0068 - 0x0000)
struct ITM_UpgGear_GearStat_C_SetGearStat final
{
public:
	struct FGearStatEntry                         InStat;                                            // 0x0000(0x0068)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ITM_UpgGear_GearStat_C_SetGearStat) == 0x000008, "Wrong alignment on ITM_UpgGear_GearStat_C_SetGearStat");
static_assert(sizeof(ITM_UpgGear_GearStat_C_SetGearStat) == 0x000068, "Wrong size on ITM_UpgGear_GearStat_C_SetGearStat");
static_assert(offsetof(ITM_UpgGear_GearStat_C_SetGearStat, InStat) == 0x000000, "Member 'ITM_UpgGear_GearStat_C_SetGearStat::InStat' has a wrong offset!");

}

