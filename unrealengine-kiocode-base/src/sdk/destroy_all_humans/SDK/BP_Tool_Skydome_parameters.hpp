#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tool_Skydome

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BP_Struct_Skylight_params_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Tool_Skydome.BP_Tool_Skydome_C.ExecuteUbergraph_BP_Tool_Skydome
// 0x0080 (0x0080 - 0x0000)
struct BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_Struct_Skylight_params             CallFunc_BlendProfiles_BlendedParameters;          // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	const class ABP_Tool_Skydome_C*               Temp_object_Variable;                              // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class ABP_Tool_Skydome_C*               Temp_object_Variable1;                             // 0x0048(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bImmediateSwitch;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bForward;                       // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22B7[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_C*                        K2Node_DynamicCast_AsBP_Game_State;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22B8[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Component_PortalAssignator_C*       CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome) == 0x000008, "Wrong alignment on BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome");
static_assert(sizeof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome) == 0x000080, "Wrong size on BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, EntryPoint) == 0x000000, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000004, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000010, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, CallFunc_Normal_ReturnValue) == 0x00001C, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000028, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, CallFunc_BlendProfiles_BlendedParameters) == 0x000038, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::CallFunc_BlendProfiles_BlendedParameters' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, Temp_object_Variable) == 0x000040, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, Temp_object_Variable1) == 0x000048, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::Temp_object_Variable1' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, K2Node_CustomEvent_bImmediateSwitch) == 0x000050, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::K2Node_CustomEvent_bImmediateSwitch' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, K2Node_CustomEvent_bForward) == 0x000051, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::K2Node_CustomEvent_bForward' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, CallFunc_GetGameState_ReturnValue) == 0x000058, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, K2Node_DynamicCast_AsBP_Game_State) == 0x000060, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::K2Node_DynamicCast_AsBP_Game_State' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome, K2Node_Event_EndPlayReason) == 0x000078, "Member 'BP_Tool_Skydome_C_ExecuteUbergraph_BP_Tool_Skydome::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function BP_Tool_Skydome.BP_Tool_Skydome_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_Tool_Skydome_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Tool_Skydome_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_Tool_Skydome_C_ReceiveEndPlay");
static_assert(sizeof(BP_Tool_Skydome_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_Tool_Skydome_C_ReceiveEndPlay");
static_assert(offsetof(BP_Tool_Skydome_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_Tool_Skydome_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_Tool_Skydome.BP_Tool_Skydome_C.MoodTransitionning
// 0x0002 (0x0002 - 0x0000)
struct BP_Tool_Skydome_C_MoodTransitionning final
{
public:
	bool                                          bImmediateSwitch;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bForward;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Tool_Skydome_C_MoodTransitionning) == 0x000001, "Wrong alignment on BP_Tool_Skydome_C_MoodTransitionning");
static_assert(sizeof(BP_Tool_Skydome_C_MoodTransitionning) == 0x000002, "Wrong size on BP_Tool_Skydome_C_MoodTransitionning");
static_assert(offsetof(BP_Tool_Skydome_C_MoodTransitionning, bImmediateSwitch) == 0x000000, "Member 'BP_Tool_Skydome_C_MoodTransitionning::bImmediateSwitch' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_MoodTransitionning, bForward) == 0x000001, "Member 'BP_Tool_Skydome_C_MoodTransitionning::bForward' has a wrong offset!");

// Function BP_Tool_Skydome.BP_Tool_Skydome_C.UserConstructionScript
// 0x0170 (0x0170 - 0x0000)
struct BP_Tool_Skydome_C_UserConstructionScript final
{
public:
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0000(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22B9[0x8];                                     // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue;            // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x00E0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Tool_Skydome_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_Tool_Skydome_C_UserConstructionScript");
static_assert(sizeof(BP_Tool_Skydome_C_UserConstructionScript) == 0x000170, "Wrong size on BP_Tool_Skydome_C_UserConstructionScript");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_GetTransform_ReturnValue) == 0x000000, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000030, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00003C, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_ComposeTransforms_ReturnValue) == 0x000050, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_ComposeTransforms_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_BreakTransform_Location) == 0x000080, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_BreakTransform_Rotation) == 0x00008C, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_BreakTransform_Scale) == 0x000098, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000A4, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_Normal_ReturnValue) == 0x0000B0, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000BC, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue) == 0x0000C8, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_FindLookAtRotation_ReturnValue) == 0x0000D4, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_UserConstructionScript, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0000E0, "Member 'BP_Tool_Skydome_C_UserConstructionScript::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function BP_Tool_Skydome.BP_Tool_Skydome_C.SaveProfile_Outdoor
// 0x0008 (0x0008 - 0x0000)
struct BP_Tool_Skydome_C_SaveProfile_Outdoor final
{
public:
	struct FBP_Struct_Skylight_params             K2Node_MakeStruct_BP_Struct_Skylight_params;       // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Tool_Skydome_C_SaveProfile_Outdoor) == 0x000004, "Wrong alignment on BP_Tool_Skydome_C_SaveProfile_Outdoor");
static_assert(sizeof(BP_Tool_Skydome_C_SaveProfile_Outdoor) == 0x000008, "Wrong size on BP_Tool_Skydome_C_SaveProfile_Outdoor");
static_assert(offsetof(BP_Tool_Skydome_C_SaveProfile_Outdoor, K2Node_MakeStruct_BP_Struct_Skylight_params) == 0x000000, "Member 'BP_Tool_Skydome_C_SaveProfile_Outdoor::K2Node_MakeStruct_BP_Struct_Skylight_params' has a wrong offset!");

// Function BP_Tool_Skydome.BP_Tool_Skydome_C.SaveProfile_IndoorA
// 0x0008 (0x0008 - 0x0000)
struct BP_Tool_Skydome_C_SaveProfile_IndoorA final
{
public:
	struct FBP_Struct_Skylight_params             K2Node_MakeStruct_BP_Struct_Skylight_params;       // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Tool_Skydome_C_SaveProfile_IndoorA) == 0x000004, "Wrong alignment on BP_Tool_Skydome_C_SaveProfile_IndoorA");
static_assert(sizeof(BP_Tool_Skydome_C_SaveProfile_IndoorA) == 0x000008, "Wrong size on BP_Tool_Skydome_C_SaveProfile_IndoorA");
static_assert(offsetof(BP_Tool_Skydome_C_SaveProfile_IndoorA, K2Node_MakeStruct_BP_Struct_Skylight_params) == 0x000000, "Member 'BP_Tool_Skydome_C_SaveProfile_IndoorA::K2Node_MakeStruct_BP_Struct_Skylight_params' has a wrong offset!");

// Function BP_Tool_Skydome.BP_Tool_Skydome_C.LoadProfile_Outdoor
// 0x0010 (0x0010 - 0x0000)
struct BP_Tool_Skydome_C_LoadProfile_Outdoor final
{
public:
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Tool_Skydome_C_LoadProfile_Outdoor) == 0x000004, "Wrong alignment on BP_Tool_Skydome_C_LoadProfile_Outdoor");
static_assert(sizeof(BP_Tool_Skydome_C_LoadProfile_Outdoor) == 0x000010, "Wrong size on BP_Tool_Skydome_C_LoadProfile_Outdoor");
static_assert(offsetof(BP_Tool_Skydome_C_LoadProfile_Outdoor, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000000, "Member 'BP_Tool_Skydome_C_LoadProfile_Outdoor::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");

// Function BP_Tool_Skydome.BP_Tool_Skydome_C.LoadProfile_IndoorA
// 0x0010 (0x0010 - 0x0000)
struct BP_Tool_Skydome_C_LoadProfile_IndoorA final
{
public:
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Tool_Skydome_C_LoadProfile_IndoorA) == 0x000004, "Wrong alignment on BP_Tool_Skydome_C_LoadProfile_IndoorA");
static_assert(sizeof(BP_Tool_Skydome_C_LoadProfile_IndoorA) == 0x000010, "Wrong size on BP_Tool_Skydome_C_LoadProfile_IndoorA");
static_assert(offsetof(BP_Tool_Skydome_C_LoadProfile_IndoorA, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000000, "Member 'BP_Tool_Skydome_C_LoadProfile_IndoorA::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");

// Function BP_Tool_Skydome.BP_Tool_Skydome_C.BlendProfiles
// 0x004C (0x004C - 0x0000)
struct BP_Tool_Skydome_C_BlendProfiles final
{
public:
	float                                         WeightIn;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_Struct_Skylight_params             BlendedParameters;                                 // 0x0004(0x0008)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x000C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue1;     // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_Struct_Skylight_params             K2Node_MakeStruct_BP_Struct_Skylight_params;       // 0x0044(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Tool_Skydome_C_BlendProfiles) == 0x000004, "Wrong alignment on BP_Tool_Skydome_C_BlendProfiles");
static_assert(sizeof(BP_Tool_Skydome_C_BlendProfiles) == 0x00004C, "Wrong size on BP_Tool_Skydome_C_BlendProfiles");
static_assert(offsetof(BP_Tool_Skydome_C_BlendProfiles, WeightIn) == 0x000000, "Member 'BP_Tool_Skydome_C_BlendProfiles::WeightIn' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_BlendProfiles, BlendedParameters) == 0x000004, "Member 'BP_Tool_Skydome_C_BlendProfiles::BlendedParameters' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_BlendProfiles, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x00000C, "Member 'BP_Tool_Skydome_C_BlendProfiles::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_BlendProfiles, CallFunc_Conv_ColorToLinearColor_ReturnValue1) == 0x00001C, "Member 'BP_Tool_Skydome_C_BlendProfiles::CallFunc_Conv_ColorToLinearColor_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_BlendProfiles, CallFunc_Lerp_ReturnValue) == 0x00002C, "Member 'BP_Tool_Skydome_C_BlendProfiles::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_BlendProfiles, CallFunc_LinearColorLerp_ReturnValue) == 0x000030, "Member 'BP_Tool_Skydome_C_BlendProfiles::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_BlendProfiles, CallFunc_Conv_LinearColorToColor_ReturnValue) == 0x000040, "Member 'BP_Tool_Skydome_C_BlendProfiles::CallFunc_Conv_LinearColorToColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_BlendProfiles, K2Node_MakeStruct_BP_Struct_Skylight_params) == 0x000044, "Member 'BP_Tool_Skydome_C_BlendProfiles::K2Node_MakeStruct_BP_Struct_Skylight_params' has a wrong offset!");

// Function BP_Tool_Skydome.BP_Tool_Skydome_C.SetProfile_Blended
// 0x0018 (0x0018 - 0x0000)
struct BP_Tool_Skydome_C_SetProfile_Blended final
{
public:
	struct FBP_Struct_Skylight_params             SkylightParams;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Tool_Skydome_C_SetProfile_Blended) == 0x000004, "Wrong alignment on BP_Tool_Skydome_C_SetProfile_Blended");
static_assert(sizeof(BP_Tool_Skydome_C_SetProfile_Blended) == 0x000018, "Wrong size on BP_Tool_Skydome_C_SetProfile_Blended");
static_assert(offsetof(BP_Tool_Skydome_C_SetProfile_Blended, SkylightParams) == 0x000000, "Member 'BP_Tool_Skydome_C_SetProfile_Blended::SkylightParams' has a wrong offset!");
static_assert(offsetof(BP_Tool_Skydome_C_SetProfile_Blended, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000008, "Member 'BP_Tool_Skydome_C_SetProfile_Blended::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");

}

