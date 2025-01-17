#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OverheadWidgetSpawner_Pickup_DNABrain

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_OverheadWidgetSpawner_Pickup_DNABrain.BP_OverheadWidgetSpawner_Pickup_DNABrain_C.ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain
// 0x0100 (0x0100 - 0x0000)
struct BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21FA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0008(0x0018)()
	class UBFGActorComponent_Effect*              CallFunc_GetEffectComponent_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21FB[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBFGEffectBlackboard*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloat_ReturnValue;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21FC[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0080(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x0098(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E8(0x0018)()
};
static_assert(alignof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain) == 0x000008, "Wrong alignment on BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain");
static_assert(sizeof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain) == 0x000100, "Wrong size on BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain");
static_assert(offsetof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain, EntryPoint) == 0x000000, "Member 'BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain, CallFunc_GetEffectComponent_ReturnValue) == 0x000020, "Member 'BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain::CallFunc_GetEffectComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain, CallFunc_GetBlackboard_ReturnValue) == 0x000070, "Member 'BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain, CallFunc_GetFloat_ReturnValue) == 0x000078, "Member 'BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain::CallFunc_GetFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain, CallFunc_Conv_FloatToText_ReturnValue) == 0x000080, "Member 'BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain, K2Node_MakeStruct_FormatArgumentData1) == 0x000098, "Member 'BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain, K2Node_MakeArray_Array) == 0x0000D8, "Member 'BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'BP_OverheadWidgetSpawner_Pickup_DNABrain_C_ExecuteUbergraph_BP_OverheadWidgetSpawner_Pickup_DNABrain::CallFunc_Format_ReturnValue' has a wrong offset!");

}

