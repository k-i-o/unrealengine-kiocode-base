#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GradientMasked_Canvas

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_GradientMasked_Canvas.UI_GradientMasked_Canvas_C.ExecuteUbergraph_UI_GradientMasked_Canvas
// 0x0010 (0x0010 - 0x0000)
struct UI_GradientMasked_Canvas_C_ExecuteUbergraph_UI_GradientMasked_Canvas final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_546B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_Material;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GradientMasked_Canvas_C_ExecuteUbergraph_UI_GradientMasked_Canvas) == 0x000008, "Wrong alignment on UI_GradientMasked_Canvas_C_ExecuteUbergraph_UI_GradientMasked_Canvas");
static_assert(sizeof(UI_GradientMasked_Canvas_C_ExecuteUbergraph_UI_GradientMasked_Canvas) == 0x000010, "Wrong size on UI_GradientMasked_Canvas_C_ExecuteUbergraph_UI_GradientMasked_Canvas");
static_assert(offsetof(UI_GradientMasked_Canvas_C_ExecuteUbergraph_UI_GradientMasked_Canvas, EntryPoint) == 0x000000, "Member 'UI_GradientMasked_Canvas_C_ExecuteUbergraph_UI_GradientMasked_Canvas::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GradientMasked_Canvas_C_ExecuteUbergraph_UI_GradientMasked_Canvas, CallFunc_GetDynamicMaterial_Material) == 0x000008, "Member 'UI_GradientMasked_Canvas_C_ExecuteUbergraph_UI_GradientMasked_Canvas::CallFunc_GetDynamicMaterial_Material' has a wrong offset!");

}
