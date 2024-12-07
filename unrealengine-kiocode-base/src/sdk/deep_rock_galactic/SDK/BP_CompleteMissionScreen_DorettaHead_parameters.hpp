#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CompleteMissionScreen_DorettaHead

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead
// 0x0068 (0x0068 - 0x0000)
struct BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_351B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObjective*                             CallFunc_GetPrimaryObjective_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharselectionCameraLocation                  K2Node_CustomEvent_selectionLocation;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEscortObjective*                       K2Node_DynamicCast_AsEscort_Objective;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_351D[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_351E[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPhotosensitiveMode_ReturnValue;        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_351F[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UActorComponent*                        K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECharselectionCameraLocation SelectionLocation)> K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead) == 0x000008, "Wrong alignment on BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead");
static_assert(sizeof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead) == 0x000068, "Wrong size on BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, EntryPoint) == 0x000000, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, CallFunc_GetFSDGameState_ReturnValue) == 0x000008, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, CallFunc_GetPrimaryObjective_ReturnValue) == 0x000010, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::CallFunc_GetPrimaryObjective_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, K2Node_CustomEvent_selectionLocation) == 0x000018, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::K2Node_CustomEvent_selectionLocation' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, K2Node_DynamicCast_AsEscort_Objective) == 0x000020, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::K2Node_DynamicCast_AsEscort_Objective' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000029, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000030, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, Temp_bool_Variable) == 0x000038, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, CallFunc_GetFSDGameUserSettings_ReturnValue) == 0x000040, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::CallFunc_GetFSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, CallFunc_GetPhotosensitiveMode_ReturnValue) == 0x000048, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::CallFunc_GetPhotosensitiveMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, K2Node_Select_Default) == 0x000050, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'BP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.StartPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_CompleteMissionScreen_DorettaHead_C_StartPlay final
{
public:
	ECharselectionCameraLocation                  SelectionLocation;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CompleteMissionScreen_DorettaHead_C_StartPlay) == 0x000001, "Wrong alignment on BP_CompleteMissionScreen_DorettaHead_C_StartPlay");
static_assert(sizeof(BP_CompleteMissionScreen_DorettaHead_C_StartPlay) == 0x000001, "Wrong size on BP_CompleteMissionScreen_DorettaHead_C_StartPlay");
static_assert(offsetof(BP_CompleteMissionScreen_DorettaHead_C_StartPlay, SelectionLocation) == 0x000000, "Member 'BP_CompleteMissionScreen_DorettaHead_C_StartPlay::SelectionLocation' has a wrong offset!");

}

