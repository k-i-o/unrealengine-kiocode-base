#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_HDUI

#include "Basic.hpp"

#include "FServerBadgeUIDefinition_structs.hpp"
#include "HDMain_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPFL_HDUI.BPFL_HDUI_C.GetHealthColorByRatio
// 0x0038 (0x0038 - 0x0000)
struct BPFL_HDUI_C_GetHealthColorByRatio final
{
public:
	float                                         Health;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHealth;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColorToUse;                                        // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetNormHealthColorByRatio_ColorToUse;     // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_HDUI_C_GetHealthColorByRatio) == 0x000008, "Wrong alignment on BPFL_HDUI_C_GetHealthColorByRatio");
static_assert(sizeof(BPFL_HDUI_C_GetHealthColorByRatio) == 0x000038, "Wrong size on BPFL_HDUI_C_GetHealthColorByRatio");
static_assert(offsetof(BPFL_HDUI_C_GetHealthColorByRatio, Health) == 0x000000, "Member 'BPFL_HDUI_C_GetHealthColorByRatio::Health' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetHealthColorByRatio, MaxHealth) == 0x000004, "Member 'BPFL_HDUI_C_GetHealthColorByRatio::MaxHealth' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetHealthColorByRatio, __WorldContext) == 0x000008, "Member 'BPFL_HDUI_C_GetHealthColorByRatio::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetHealthColorByRatio, ColorToUse) == 0x000010, "Member 'BPFL_HDUI_C_GetHealthColorByRatio::ColorToUse' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetHealthColorByRatio, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'BPFL_HDUI_C_GetHealthColorByRatio::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetHealthColorByRatio, CallFunc_GetNormHealthColorByRatio_ColorToUse) == 0x000024, "Member 'BPFL_HDUI_C_GetHealthColorByRatio::CallFunc_GetNormHealthColorByRatio_ColorToUse' has a wrong offset!");

// Function BPFL_HDUI.BPFL_HDUI_C.GetNormHealthColorByRatio
// 0x0038 (0x0038 - 0x0000)
struct BPFL_HDUI_C_GetNormHealthColorByRatio final
{
public:
	float                                         HealthValueNorm;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D60[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColorToUse;                                        // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D61[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D62[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPFL_HDUI_C_GetNormHealthColorByRatio) == 0x000008, "Wrong alignment on BPFL_HDUI_C_GetNormHealthColorByRatio");
static_assert(sizeof(BPFL_HDUI_C_GetNormHealthColorByRatio) == 0x000038, "Wrong size on BPFL_HDUI_C_GetNormHealthColorByRatio");
static_assert(offsetof(BPFL_HDUI_C_GetNormHealthColorByRatio, HealthValueNorm) == 0x000000, "Member 'BPFL_HDUI_C_GetNormHealthColorByRatio::HealthValueNorm' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetNormHealthColorByRatio, __WorldContext) == 0x000008, "Member 'BPFL_HDUI_C_GetNormHealthColorByRatio::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetNormHealthColorByRatio, ColorToUse) == 0x000010, "Member 'BPFL_HDUI_C_GetNormHealthColorByRatio::ColorToUse' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetNormHealthColorByRatio, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000020, "Member 'BPFL_HDUI_C_GetNormHealthColorByRatio::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetNormHealthColorByRatio, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'BPFL_HDUI_C_GetNormHealthColorByRatio::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetNormHealthColorByRatio, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x000028, "Member 'BPFL_HDUI_C_GetNormHealthColorByRatio::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetNormHealthColorByRatio, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00002C, "Member 'BPFL_HDUI_C_GetNormHealthColorByRatio::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetNormHealthColorByRatio, CallFunc_GreaterEqual_FloatFloat_ReturnValue_2) == 0x000030, "Member 'BPFL_HDUI_C_GetNormHealthColorByRatio::CallFunc_GreaterEqual_FloatFloat_ReturnValue_2' has a wrong offset!");

// Function BPFL_HDUI.BPFL_HDUI_C.GetIconTextureForStanceState
// 0x0068 (0x0068 - 0x0000)
struct BPFL_HDUI_C_GetIconTextureForStanceState final
{
public:
	EHDUICharacterStanceState                     State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D63[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             IconTex;                                           // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHDUICharacterStanceState                     Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D64[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_6;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_7;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_HDUI_C_GetIconTextureForStanceState) == 0x000008, "Wrong alignment on BPFL_HDUI_C_GetIconTextureForStanceState");
static_assert(sizeof(BPFL_HDUI_C_GetIconTextureForStanceState) == 0x000068, "Wrong size on BPFL_HDUI_C_GetIconTextureForStanceState");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, State) == 0x000000, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::State' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, __WorldContext) == 0x000008, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, IconTex) == 0x000010, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::IconTex' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, Temp_byte_Variable) == 0x000018, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, Temp_object_Variable) == 0x000020, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, Temp_object_Variable_1) == 0x000028, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, Temp_object_Variable_2) == 0x000030, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, Temp_object_Variable_3) == 0x000038, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, Temp_object_Variable_4) == 0x000040, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, Temp_object_Variable_5) == 0x000048, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, Temp_object_Variable_6) == 0x000050, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, Temp_object_Variable_7) == 0x000058, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconTextureForStanceState, K2Node_Select_Default) == 0x000060, "Member 'BPFL_HDUI_C_GetIconTextureForStanceState::K2Node_Select_Default' has a wrong offset!");

// Function BPFL_HDUI.BPFL_HDUI_C.GetIconBrushForStanceState
// 0x0128 (0x0128 - 0x0000)
struct BPFL_HDUI_C_GetIconBrushForStanceState final
{
public:
	EHDUICharacterStanceState                     State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D65[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            IconBrush;                                         // 0x0010(0x0088)(Parm, OutParm)
	class UTexture2D*                             CallFunc_GetIconTextureForStanceState_IconTex;     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x00A0(0x0088)()
};
static_assert(alignof(BPFL_HDUI_C_GetIconBrushForStanceState) == 0x000008, "Wrong alignment on BPFL_HDUI_C_GetIconBrushForStanceState");
static_assert(sizeof(BPFL_HDUI_C_GetIconBrushForStanceState) == 0x000128, "Wrong size on BPFL_HDUI_C_GetIconBrushForStanceState");
static_assert(offsetof(BPFL_HDUI_C_GetIconBrushForStanceState, State) == 0x000000, "Member 'BPFL_HDUI_C_GetIconBrushForStanceState::State' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconBrushForStanceState, __WorldContext) == 0x000008, "Member 'BPFL_HDUI_C_GetIconBrushForStanceState::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconBrushForStanceState, IconBrush) == 0x000010, "Member 'BPFL_HDUI_C_GetIconBrushForStanceState::IconBrush' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconBrushForStanceState, CallFunc_GetIconTextureForStanceState_IconTex) == 0x000098, "Member 'BPFL_HDUI_C_GetIconBrushForStanceState::CallFunc_GetIconTextureForStanceState_IconTex' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_GetIconBrushForStanceState, CallFunc_MakeBrushFromTexture_ReturnValue) == 0x0000A0, "Member 'BPFL_HDUI_C_GetIconBrushForStanceState::CallFunc_MakeBrushFromTexture_ReturnValue' has a wrong offset!");

// Function BPFL_HDUI.BPFL_HDUI_C.ParseServerBadgesFromTable
// 0x02A0 (0x02A0 - 0x0000)
struct BPFL_HDUI_C_ParseServerBadgesFromTable final
{
public:
	class UDataTable*                             BadgeTable;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFServerBadgeUIDefinition>      SortedBadgeDefs;                                   // 0x0010(0x0010)(Parm, OutParm, HasGetValueTypeHash)
	TArray<int32>                                 BadgeOrderingIdxs;                                 // 0x0020(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FFServerBadgeUIDefinition>      BadgeDefsSorted;                                   // 0x0030(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FFServerBadgeUIDefinition>      BadgeDefs;                                         // 0x0040(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D66[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0058(0x0010)(ReferenceParm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D67[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D68[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFServerBadgeUIDefinition              CallFunc_Array_Get_Item_1;                         // 0x00A8(0x0098)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_2;                         // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D69[0x2];                                     // 0x014E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D6A[0x2];                                     // 0x0156(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFServerBadgeUIDefinition              CallFunc_Array_Get_Item_3;                         // 0x0158(0x0098)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D6B[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFServerBadgeUIDefinition              CallFunc_GetDataTableRowFromName_OutRow;           // 0x0200(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D6C[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_HDUI_C_ParseServerBadgesFromTable) == 0x000008, "Wrong alignment on BPFL_HDUI_C_ParseServerBadgesFromTable");
static_assert(sizeof(BPFL_HDUI_C_ParseServerBadgesFromTable) == 0x0002A0, "Wrong size on BPFL_HDUI_C_ParseServerBadgesFromTable");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, BadgeTable) == 0x000000, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::BadgeTable' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, __WorldContext) == 0x000008, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, SortedBadgeDefs) == 0x000010, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::SortedBadgeDefs' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, BadgeOrderingIdxs) == 0x000020, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::BadgeOrderingIdxs' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, BadgeDefsSorted) == 0x000030, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::BadgeDefsSorted' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, BadgeDefs) == 0x000040, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::BadgeDefs' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, Temp_int_Array_Index_Variable) == 0x000050, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000058, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, Temp_int_Loop_Counter_Variable) == 0x00006C, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, Temp_int_Array_Index_Variable_1) == 0x000074, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, Temp_bool_True_if_break_was_hit_Variable) == 0x000078, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Not_PreBool_ReturnValue) == 0x000079, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, Temp_int_Loop_Counter_Variable_1) == 0x00007C, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Add_IntInt_ReturnValue_1) == 0x000084, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, Temp_int_Array_Index_Variable_2) == 0x000088, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Array_Get_Item) == 0x00008C, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, Temp_int_Loop_Counter_Variable_2) == 0x000094, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Add_IntInt_ReturnValue_2) == 0x000098, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, Temp_int_Array_Index_Variable_3) == 0x00009C, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, Temp_int_Loop_Counter_Variable_3) == 0x0000A0, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000A4, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Array_Get_Item_1) == 0x0000A8, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Array_Get_Item_2) == 0x000140, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Array_Add_ReturnValue) == 0x000144, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Array_Length_ReturnValue_1) == 0x000148, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00014C, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Less_IntInt_ReturnValue_1) == 0x00014D, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Array_Length_ReturnValue_2) == 0x000150, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Less_IntInt_ReturnValue_2) == 0x000154, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_BooleanAND_ReturnValue) == 0x000155, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Array_Get_Item_3) == 0x000158, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Array_Length_ReturnValue_3) == 0x0001F0, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Array_Add_ReturnValue_1) == 0x0001F4, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Less_IntInt_ReturnValue_3) == 0x0001F8, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_GetDataTableRowFromName_OutRow) == 0x000200, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000298, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_HDUI_C_ParseServerBadgesFromTable, CallFunc_Array_Add_ReturnValue_2) == 0x00029C, "Member 'BPFL_HDUI_C_ParseServerBadgesFromTable::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

}
