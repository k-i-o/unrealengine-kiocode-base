#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CircularProgressBar01

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.ExecuteUbergraph_W_CircularProgressBar01
// 0x0008 (0x0008 - 0x0000)
struct W_CircularProgressBar01_C_ExecuteUbergraph_W_CircularProgressBar01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_CircularProgressBar01_C_ExecuteUbergraph_W_CircularProgressBar01) == 0x000004, "Wrong alignment on W_CircularProgressBar01_C_ExecuteUbergraph_W_CircularProgressBar01");
static_assert(sizeof(W_CircularProgressBar01_C_ExecuteUbergraph_W_CircularProgressBar01) == 0x000008, "Wrong size on W_CircularProgressBar01_C_ExecuteUbergraph_W_CircularProgressBar01");
static_assert(offsetof(W_CircularProgressBar01_C_ExecuteUbergraph_W_CircularProgressBar01, EntryPoint) == 0x000000, "Member 'W_CircularProgressBar01_C_ExecuteUbergraph_W_CircularProgressBar01::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_ExecuteUbergraph_W_CircularProgressBar01, K2Node_Event_IsDesignTime) == 0x000004, "Member 'W_CircularProgressBar01_C_ExecuteUbergraph_W_CircularProgressBar01::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_CircularProgressBar01_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_CircularProgressBar01_C_PreConstruct) == 0x000001, "Wrong alignment on W_CircularProgressBar01_C_PreConstruct");
static_assert(sizeof(W_CircularProgressBar01_C_PreConstruct) == 0x000001, "Wrong size on W_CircularProgressBar01_C_PreConstruct");
static_assert(offsetof(W_CircularProgressBar01_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_CircularProgressBar01_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetPercent
// 0x0010 (0x0010 - 0x0000)
struct W_CircularProgressBar01_C_SetPercent final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CircularProgressBar01_C_SetPercent) == 0x000008, "Wrong alignment on W_CircularProgressBar01_C_SetPercent");
static_assert(sizeof(W_CircularProgressBar01_C_SetPercent) == 0x000010, "Wrong size on W_CircularProgressBar01_C_SetPercent");
static_assert(offsetof(W_CircularProgressBar01_C_SetPercent, Value) == 0x000000, "Member 'W_CircularProgressBar01_C_SetPercent::Value' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_SetPercent, CallFunc_FClamp_ReturnValue) == 0x000004, "Member 'W_CircularProgressBar01_C_SetPercent::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_SetPercent, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'W_CircularProgressBar01_C_SetPercent::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.CreateMaterial
// 0x00D0 (0x00D0 - 0x0000)
struct W_CircularProgressBar01_C_CreateMaterial final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>      SoftMaterial;                                      // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45C9[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UMaterialInterface>      Temp_softobject_Variable;                          // 0x0038(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>      Temp_softobject_Variable_1;                        // 0x0060(0x0028)(HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_DynamicCast_AsMaterial_Interface;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45CA[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>      K2Node_Select_Default;                             // 0x00A8(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(W_CircularProgressBar01_C_CreateMaterial) == 0x000008, "Wrong alignment on W_CircularProgressBar01_C_CreateMaterial");
static_assert(sizeof(W_CircularProgressBar01_C_CreateMaterial) == 0x0000D0, "Wrong size on W_CircularProgressBar01_C_CreateMaterial");
static_assert(offsetof(W_CircularProgressBar01_C_CreateMaterial, Material) == 0x000000, "Member 'W_CircularProgressBar01_C_CreateMaterial::Material' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_CreateMaterial, SoftMaterial) == 0x000008, "Member 'W_CircularProgressBar01_C_CreateMaterial::SoftMaterial' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_CreateMaterial, Temp_bool_Variable) == 0x000030, "Member 'W_CircularProgressBar01_C_CreateMaterial::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_CreateMaterial, Temp_softobject_Variable) == 0x000038, "Member 'W_CircularProgressBar01_C_CreateMaterial::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_CreateMaterial, Temp_softobject_Variable_1) == 0x000060, "Member 'W_CircularProgressBar01_C_CreateMaterial::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_CreateMaterial, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000088, "Member 'W_CircularProgressBar01_C_CreateMaterial::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_CreateMaterial, K2Node_DynamicCast_AsMaterial_Interface) == 0x000090, "Member 'W_CircularProgressBar01_C_CreateMaterial::K2Node_DynamicCast_AsMaterial_Interface' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_CreateMaterial, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'W_CircularProgressBar01_C_CreateMaterial::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_CreateMaterial, CallFunc_IsValid_ReturnValue) == 0x000099, "Member 'W_CircularProgressBar01_C_CreateMaterial::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_CreateMaterial, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000A0, "Member 'W_CircularProgressBar01_C_CreateMaterial::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_CreateMaterial, K2Node_Select_Default) == 0x0000A8, "Member 'W_CircularProgressBar01_C_CreateMaterial::K2Node_Select_Default' has a wrong offset!");

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetStartAngle
// 0x0010 (0x0010 - 0x0000)
struct W_CircularProgressBar01_C_SetStartAngle final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45CB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CircularProgressBar01_C_SetStartAngle) == 0x000008, "Wrong alignment on W_CircularProgressBar01_C_SetStartAngle");
static_assert(sizeof(W_CircularProgressBar01_C_SetStartAngle) == 0x000010, "Wrong size on W_CircularProgressBar01_C_SetStartAngle");
static_assert(offsetof(W_CircularProgressBar01_C_SetStartAngle, Value) == 0x000000, "Member 'W_CircularProgressBar01_C_SetStartAngle::Value' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_SetStartAngle, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'W_CircularProgressBar01_C_SetStartAngle::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetCompleteRange
// 0x0010 (0x0010 - 0x0000)
struct W_CircularProgressBar01_C_SetCompleteRange final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45CC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CircularProgressBar01_C_SetCompleteRange) == 0x000008, "Wrong alignment on W_CircularProgressBar01_C_SetCompleteRange");
static_assert(sizeof(W_CircularProgressBar01_C_SetCompleteRange) == 0x000010, "Wrong size on W_CircularProgressBar01_C_SetCompleteRange");
static_assert(offsetof(W_CircularProgressBar01_C_SetCompleteRange, Value) == 0x000000, "Member 'W_CircularProgressBar01_C_SetCompleteRange::Value' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_SetCompleteRange, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'W_CircularProgressBar01_C_SetCompleteRange::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetRingRadius
// 0x0010 (0x0010 - 0x0000)
struct W_CircularProgressBar01_C_SetRingRadius final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45CD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CircularProgressBar01_C_SetRingRadius) == 0x000008, "Wrong alignment on W_CircularProgressBar01_C_SetRingRadius");
static_assert(sizeof(W_CircularProgressBar01_C_SetRingRadius) == 0x000010, "Wrong size on W_CircularProgressBar01_C_SetRingRadius");
static_assert(offsetof(W_CircularProgressBar01_C_SetRingRadius, Value) == 0x000000, "Member 'W_CircularProgressBar01_C_SetRingRadius::Value' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_SetRingRadius, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'W_CircularProgressBar01_C_SetRingRadius::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetRingThickness
// 0x0010 (0x0010 - 0x0000)
struct W_CircularProgressBar01_C_SetRingThickness final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45CE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CircularProgressBar01_C_SetRingThickness) == 0x000008, "Wrong alignment on W_CircularProgressBar01_C_SetRingThickness");
static_assert(sizeof(W_CircularProgressBar01_C_SetRingThickness) == 0x000010, "Wrong size on W_CircularProgressBar01_C_SetRingThickness");
static_assert(offsetof(W_CircularProgressBar01_C_SetRingThickness, Value) == 0x000000, "Member 'W_CircularProgressBar01_C_SetRingThickness::Value' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_SetRingThickness, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'W_CircularProgressBar01_C_SetRingThickness::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetClockwise
// 0x0020 (0x0020 - 0x0000)
struct W_CircularProgressBar01_C_SetClockwise final
{
public:
	bool                                          ShowClockwise;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45CF[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45D0[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CircularProgressBar01_C_SetClockwise) == 0x000008, "Wrong alignment on W_CircularProgressBar01_C_SetClockwise");
static_assert(sizeof(W_CircularProgressBar01_C_SetClockwise) == 0x000020, "Wrong size on W_CircularProgressBar01_C_SetClockwise");
static_assert(offsetof(W_CircularProgressBar01_C_SetClockwise, ShowClockwise) == 0x000000, "Member 'W_CircularProgressBar01_C_SetClockwise::ShowClockwise' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_SetClockwise, Temp_bool_Variable) == 0x000001, "Member 'W_CircularProgressBar01_C_SetClockwise::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_SetClockwise, Temp_float_Variable) == 0x000004, "Member 'W_CircularProgressBar01_C_SetClockwise::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_SetClockwise, Temp_float_Variable_1) == 0x000008, "Member 'W_CircularProgressBar01_C_SetClockwise::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_SetClockwise, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'W_CircularProgressBar01_C_SetClockwise::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_SetClockwise, K2Node_Select_Default) == 0x000018, "Member 'W_CircularProgressBar01_C_SetClockwise::K2Node_Select_Default' has a wrong offset!");

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.GetPercent
// 0x0004 (0x0004 - 0x0000)
struct W_CircularProgressBar01_C_GetPercent final
{
public:
	float                                         Param_Percent;                                     // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CircularProgressBar01_C_GetPercent) == 0x000004, "Wrong alignment on W_CircularProgressBar01_C_GetPercent");
static_assert(sizeof(W_CircularProgressBar01_C_GetPercent) == 0x000004, "Wrong size on W_CircularProgressBar01_C_GetPercent");
static_assert(offsetof(W_CircularProgressBar01_C_GetPercent, Param_Percent) == 0x000000, "Member 'W_CircularProgressBar01_C_GetPercent::Param_Percent' has a wrong offset!");

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.IncPercent
// 0x000C (0x000C - 0x0000)
struct W_CircularProgressBar01_C_IncPercent final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_Percent;                                     // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CircularProgressBar01_C_IncPercent) == 0x000004, "Wrong alignment on W_CircularProgressBar01_C_IncPercent");
static_assert(sizeof(W_CircularProgressBar01_C_IncPercent) == 0x00000C, "Wrong size on W_CircularProgressBar01_C_IncPercent");
static_assert(offsetof(W_CircularProgressBar01_C_IncPercent, Value) == 0x000000, "Member 'W_CircularProgressBar01_C_IncPercent::Value' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_IncPercent, Param_Percent) == 0x000004, "Member 'W_CircularProgressBar01_C_IncPercent::Param_Percent' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_IncPercent, CallFunc_Add_FloatFloat_ReturnValue) == 0x000008, "Member 'W_CircularProgressBar01_C_IncPercent::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetTint
// 0x0014 (0x0014 - 0x0000)
struct W_CircularProgressBar01_C_SetTint final
{
public:
	ENUM_MenuColors                               Param_Tint;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45D1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColorsAndOpacity_OutputColor;         // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CircularProgressBar01_C_SetTint) == 0x000004, "Wrong alignment on W_CircularProgressBar01_C_SetTint");
static_assert(sizeof(W_CircularProgressBar01_C_SetTint) == 0x000014, "Wrong size on W_CircularProgressBar01_C_SetTint");
static_assert(offsetof(W_CircularProgressBar01_C_SetTint, Param_Tint) == 0x000000, "Member 'W_CircularProgressBar01_C_SetTint::Param_Tint' has a wrong offset!");
static_assert(offsetof(W_CircularProgressBar01_C_SetTint, CallFunc_MenuColorsAndOpacity_OutputColor) == 0x000004, "Member 'W_CircularProgressBar01_C_SetTint::CallFunc_MenuColorsAndOpacity_OutputColor' has a wrong offset!");

// Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetTintOpacity
// 0x0004 (0x0004 - 0x0000)
struct W_CircularProgressBar01_C_SetTintOpacity final
{
public:
	float                                         Param_TintOpacity;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CircularProgressBar01_C_SetTintOpacity) == 0x000004, "Wrong alignment on W_CircularProgressBar01_C_SetTintOpacity");
static_assert(sizeof(W_CircularProgressBar01_C_SetTintOpacity) == 0x000004, "Wrong size on W_CircularProgressBar01_C_SetTintOpacity");
static_assert(offsetof(W_CircularProgressBar01_C_SetTintOpacity, Param_TintOpacity) == 0x000000, "Member 'W_CircularProgressBar01_C_SetTintOpacity::Param_TintOpacity' has a wrong offset!");

}

