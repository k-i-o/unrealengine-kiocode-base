#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SupplyPod_Marker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.SetMaterials
// 0x0038 (0x0038 - 0x0000)
struct BP_SupplyPod_Marker_C_SetMaterials final
{
public:
	class UMaterial*                              ParentMaterial;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                         Mesh;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5429[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SupplyPod_Marker_C_SetMaterials) == 0x000008, "Wrong alignment on BP_SupplyPod_Marker_C_SetMaterials");
static_assert(sizeof(BP_SupplyPod_Marker_C_SetMaterials) == 0x000038, "Wrong size on BP_SupplyPod_Marker_C_SetMaterials");
static_assert(offsetof(BP_SupplyPod_Marker_C_SetMaterials, ParentMaterial) == 0x000000, "Member 'BP_SupplyPod_Marker_C_SetMaterials::ParentMaterial' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_SetMaterials, Mesh) == 0x000008, "Member 'BP_SupplyPod_Marker_C_SetMaterials::Mesh' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_SetMaterials, DynamicMaterial) == 0x000010, "Member 'BP_SupplyPod_Marker_C_SetMaterials::DynamicMaterial' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_SetMaterials, CallFunc_GetNumMaterials_ReturnValue) == 0x000018, "Member 'BP_SupplyPod_Marker_C_SetMaterials::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_SetMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000020, "Member 'BP_SupplyPod_Marker_C_SetMaterials::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_SetMaterials, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'BP_SupplyPod_Marker_C_SetMaterials::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_SetMaterials, Temp_int_Variable) == 0x00002C, "Member 'BP_SupplyPod_Marker_C_SetMaterials::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_SetMaterials, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'BP_SupplyPod_Marker_C_SetMaterials::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_SetMaterials, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000034, "Member 'BP_SupplyPod_Marker_C_SetMaterials::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.UserConstructionScript
// 0x0018 (0x0018 - 0x0000)
struct BP_SupplyPod_Marker_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_SetMaterials_DynamicMaterial;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SupplyPod_Marker_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_SupplyPod_Marker_C_UserConstructionScript");
static_assert(sizeof(BP_SupplyPod_Marker_C_UserConstructionScript) == 0x000018, "Wrong size on BP_SupplyPod_Marker_C_UserConstructionScript");
static_assert(offsetof(BP_SupplyPod_Marker_C_UserConstructionScript, CallFunc_SetMaterials_DynamicMaterial) == 0x000000, "Member 'BP_SupplyPod_Marker_C_UserConstructionScript::CallFunc_SetMaterials_DynamicMaterial' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_UserConstructionScript, CallFunc_K2_GetVectorParameterValue_ReturnValue) == 0x000008, "Member 'BP_SupplyPod_Marker_C_UserConstructionScript::CallFunc_K2_GetVectorParameterValue_ReturnValue' has a wrong offset!");

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerValidChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_SupplyPod_Marker_C_OnMarkerValidChanged final
{
public:
	bool                                          Valid;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SupplyPod_Marker_C_OnMarkerValidChanged) == 0x000001, "Wrong alignment on BP_SupplyPod_Marker_C_OnMarkerValidChanged");
static_assert(sizeof(BP_SupplyPod_Marker_C_OnMarkerValidChanged) == 0x000001, "Wrong size on BP_SupplyPod_Marker_C_OnMarkerValidChanged");
static_assert(offsetof(BP_SupplyPod_Marker_C_OnMarkerValidChanged, Valid) == 0x000000, "Member 'BP_SupplyPod_Marker_C_OnMarkerValidChanged::Valid' has a wrong offset!");

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerVisibilityChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_SupplyPod_Marker_C_OnMarkerVisibilityChanged final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SupplyPod_Marker_C_OnMarkerVisibilityChanged) == 0x000001, "Wrong alignment on BP_SupplyPod_Marker_C_OnMarkerVisibilityChanged");
static_assert(sizeof(BP_SupplyPod_Marker_C_OnMarkerVisibilityChanged) == 0x000001, "Wrong size on BP_SupplyPod_Marker_C_OnMarkerVisibilityChanged");
static_assert(offsetof(BP_SupplyPod_Marker_C_OnMarkerVisibilityChanged, Visible) == 0x000000, "Member 'BP_SupplyPod_Marker_C_OnMarkerVisibilityChanged::Visible' has a wrong offset!");

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ExecuteUbergraph_BP_SupplyPod_Marker
// 0x0050 (0x0050 - 0x0000)
struct BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_542A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Valid;                                // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_Visible;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_542B[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_542C[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_1;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHUDVisible_ReturnValue;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker) == 0x000008, "Wrong alignment on BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker");
static_assert(sizeof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker) == 0x000050, "Wrong size on BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, EntryPoint) == 0x000000, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, Temp_bool_Variable) == 0x000004, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000008, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, Temp_struct_Variable) == 0x000010, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, Temp_bool_Variable_1) == 0x000020, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, Temp_byte_Variable) == 0x000021, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, Temp_byte_Variable_1) == 0x000022, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, K2Node_Event_Valid) == 0x000023, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::K2Node_Event_Valid' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, K2Node_Event_Visible) == 0x000024, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::K2Node_Event_Visible' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, K2Node_Select_Default) == 0x000028, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, K2Node_Select_Default_1) == 0x000038, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, CallFunc_GetUserWidgetObject_ReturnValue_1) == 0x000040, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::CallFunc_GetUserWidgetObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker, CallFunc_IsHUDVisible_ReturnValue) == 0x000048, "Member 'BP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker::CallFunc_IsHUDVisible_ReturnValue' has a wrong offset!");

}
