#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_Menu_ColorBar

#include "Basic.hpp"

#include "ENUM_PixelWidths_structs.hpp"
#include "ENUM_MenuColors_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.ExecuteUbergraph_Basic_Menu_ColorBar
// 0x0020 (0x0020 - 0x0000)
struct Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_PixelWidths                              K2Node_CustomEvent_Colorbar_Thickness;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               K2Node_CustomEvent_Colorbar_Tint;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E86[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Colorbar_Opacity;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E87[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_CustomEvent_Material;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar) == 0x000008, "Wrong alignment on Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar");
static_assert(sizeof(Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar) == 0x000020, "Wrong size on Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar");
static_assert(offsetof(Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar, EntryPoint) == 0x000000, "Member 'Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar, K2Node_CustomEvent_Colorbar_Thickness) == 0x000004, "Member 'Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar::K2Node_CustomEvent_Colorbar_Thickness' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar, K2Node_CustomEvent_Colorbar_Tint) == 0x000005, "Member 'Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar::K2Node_CustomEvent_Colorbar_Tint' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar, K2Node_CustomEvent_Colorbar_Opacity) == 0x000008, "Member 'Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar::K2Node_CustomEvent_Colorbar_Opacity' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar, K2Node_CustomEvent_Material) == 0x000010, "Member 'Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar::K2Node_CustomEvent_Material' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar, K2Node_Event_IsDesignTime) == 0x000018, "Member 'Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'Basic_Menu_ColorBar_C_ExecuteUbergraph_Basic_Menu_ColorBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct Basic_Menu_ColorBar_C_SetData final
{
public:
	ENUM_PixelWidths                              Param_Colorbar_Thickness;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               Param_Colorbar_Tint;                               // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E88[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Param_Colorbar_Opacity;                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Param_Material;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_Menu_ColorBar_C_SetData) == 0x000008, "Wrong alignment on Basic_Menu_ColorBar_C_SetData");
static_assert(sizeof(Basic_Menu_ColorBar_C_SetData) == 0x000010, "Wrong size on Basic_Menu_ColorBar_C_SetData");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetData, Param_Colorbar_Thickness) == 0x000000, "Member 'Basic_Menu_ColorBar_C_SetData::Param_Colorbar_Thickness' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetData, Param_Colorbar_Tint) == 0x000001, "Member 'Basic_Menu_ColorBar_C_SetData::Param_Colorbar_Tint' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetData, Param_Colorbar_Opacity) == 0x000004, "Member 'Basic_Menu_ColorBar_C_SetData::Param_Colorbar_Opacity' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetData, Param_Material) == 0x000008, "Member 'Basic_Menu_ColorBar_C_SetData::Param_Material' has a wrong offset!");

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Basic_Menu_ColorBar_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_Menu_ColorBar_C_PreConstruct) == 0x000001, "Wrong alignment on Basic_Menu_ColorBar_C_PreConstruct");
static_assert(sizeof(Basic_Menu_ColorBar_C_PreConstruct) == 0x000001, "Wrong size on Basic_Menu_ColorBar_C_PreConstruct");
static_assert(offsetof(Basic_Menu_ColorBar_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Basic_Menu_ColorBar_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetColor
// 0x0014 (0x0014 - 0x0000)
struct Basic_Menu_ColorBar_C_SetColor final
{
public:
	ENUM_MenuColors                               Brush_Color;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E89[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_Menu_ColorBar_C_SetColor) == 0x000004, "Wrong alignment on Basic_Menu_ColorBar_C_SetColor");
static_assert(sizeof(Basic_Menu_ColorBar_C_SetColor) == 0x000014, "Wrong size on Basic_Menu_ColorBar_C_SetColor");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetColor, Brush_Color) == 0x000000, "Member 'Basic_Menu_ColorBar_C_SetColor::Brush_Color' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetColor, CallFunc_MenuColors_OutputColor) == 0x000004, "Member 'Basic_Menu_ColorBar_C_SetColor::CallFunc_MenuColors_OutputColor' has a wrong offset!");

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetThickness
// 0x0018 (0x0018 - 0x0000)
struct Basic_Menu_ColorBar_C_SetThickness final
{
public:
	ENUM_PixelWidths                              Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_PixelWidths                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E8A[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_Menu_ColorBar_C_SetThickness) == 0x000004, "Wrong alignment on Basic_Menu_ColorBar_C_SetThickness");
static_assert(sizeof(Basic_Menu_ColorBar_C_SetThickness) == 0x000018, "Wrong size on Basic_Menu_ColorBar_C_SetThickness");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetThickness, Param_Index) == 0x000000, "Member 'Basic_Menu_ColorBar_C_SetThickness::Param_Index' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetThickness, Temp_byte_Variable) == 0x000001, "Member 'Basic_Menu_ColorBar_C_SetThickness::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetThickness, Temp_int_Variable) == 0x000004, "Member 'Basic_Menu_ColorBar_C_SetThickness::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetThickness, Temp_int_Variable_1) == 0x000008, "Member 'Basic_Menu_ColorBar_C_SetThickness::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetThickness, Temp_int_Variable_2) == 0x00000C, "Member 'Basic_Menu_ColorBar_C_SetThickness::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetThickness, K2Node_Select_Default) == 0x000010, "Member 'Basic_Menu_ColorBar_C_SetThickness::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetThickness, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000014, "Member 'Basic_Menu_ColorBar_C_SetThickness::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetOpacity
// 0x0008 (0x0008 - 0x0000)
struct Basic_Menu_ColorBar_C_SetOpacity final
{
public:
	float                                         Opacity;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OpacityHolder;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_Menu_ColorBar_C_SetOpacity) == 0x000004, "Wrong alignment on Basic_Menu_ColorBar_C_SetOpacity");
static_assert(sizeof(Basic_Menu_ColorBar_C_SetOpacity) == 0x000008, "Wrong size on Basic_Menu_ColorBar_C_SetOpacity");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetOpacity, Opacity) == 0x000000, "Member 'Basic_Menu_ColorBar_C_SetOpacity::Opacity' has a wrong offset!");
static_assert(offsetof(Basic_Menu_ColorBar_C_SetOpacity, OpacityHolder) == 0x000004, "Member 'Basic_Menu_ColorBar_C_SetOpacity::OpacityHolder' has a wrong offset!");

}
