#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PassedOut

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PassedOut.BP_PassedOut_C.ExecuteUbergraph_BP_PassedOut
// 0x01D0 (0x01D0 - 0x0000)
struct BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStateActive_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3615[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3616[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AFSDPlayerController*                   K2Node_DynamicCast_AsFSDPlayer_Controller;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3617[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_PlayPitched_ReturnValue;                  // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0078(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3618[0x5];                                     // 0x0103(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABar_Glass_Physics_Base_C*>      CallFunc_GetAllActorsOfClass_OutActors;            // 0x0108(0x0010)(ReferenceParm)
	class ABar_Glass_Physics_Base_C*              CallFunc_Array_Get_Item;                           // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3619[0x2];                                     // 0x0126(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDGameModeSpaceRig*                   K2Node_DynamicCast_AsFSDGame_Mode_Space_Rig;       // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetStateActive_ReturnValue_1;             // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_361A[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetFreeSpawnOfType_ReturnValue;           // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_361B[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASpacerigStart*                         K2Node_DynamicCast_AsSpacerig_Start;               // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_361C[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x0160(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors;      // 0x0190(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361D[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IIJukebox_C>           K2Node_DynamicCast_AsIJukebox;                     // 0x01B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut) == 0x000010, "Wrong alignment on BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut");
static_assert(sizeof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut) == 0x0001D0, "Wrong size on BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, EntryPoint) == 0x000000, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_GetStateActive_ReturnValue) == 0x000010, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_GetStateActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_GetTransform_ReturnValue) == 0x000030, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, K2Node_DynamicCast_AsFSDPlayer_Controller) == 0x000060, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::K2Node_DynamicCast_AsFSDPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_PlayPitched_ReturnValue) == 0x000070, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_PlayPitched_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000078, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000100, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_IsLocallyControlled_ReturnValue) == 0x000101, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_BooleanAND_ReturnValue) == 0x000102, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_GetAllActorsOfClass_OutActors) == 0x000108, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_Array_Get_Item) == 0x000118, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_Array_Length_ReturnValue) == 0x000120, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_Less_IntInt_ReturnValue) == 0x000124, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_HasAuthority_ReturnValue) == 0x000125, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_GetGameMode_ReturnValue) == 0x000128, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, K2Node_DynamicCast_AsFSDGame_Mode_Space_Rig) == 0x000130, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::K2Node_DynamicCast_AsFSDGame_Mode_Space_Rig' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, K2Node_DynamicCast_bSuccess_1) == 0x000138, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_GetStateActive_ReturnValue_1) == 0x000139, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_GetStateActive_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_GetFreeSpawnOfType_ReturnValue) == 0x000140, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_GetFreeSpawnOfType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_IsValid_ReturnValue) == 0x000148, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, K2Node_DynamicCast_AsSpacerig_Start) == 0x000150, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::K2Node_DynamicCast_AsSpacerig_Start' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, K2Node_DynamicCast_bSuccess_2) == 0x000158, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_GetTransform_ReturnValue_1) == 0x000160, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_GetAllActorsWithInterface_OutActors) == 0x000190, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_GetAllActorsWithInterface_OutActors' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_Array_Get_Item_1) == 0x0001A0, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_Array_Length_ReturnValue_1) == 0x0001A8, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, K2Node_DynamicCast_AsIJukebox) == 0x0001B0, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::K2Node_DynamicCast_AsIJukebox' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, K2Node_DynamicCast_bSuccess_3) == 0x0001C0, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001C1, "Member 'BP_PassedOut_C_ExecuteUbergraph_BP_PassedOut::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_PassedOut.BP_PassedOut_C.AllPassedOut
// 0x0030 (0x0030 - 0x0000)
struct BP_PassedOut_C_AllPassedOut final
{
public:
	bool                                          Param_AllPassedOut;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_361E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361F[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharacterState                               CallFunc_GetCurrentState_ReturnValue;              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PassedOut_C_AllPassedOut) == 0x000008, "Wrong alignment on BP_PassedOut_C_AllPassedOut");
static_assert(sizeof(BP_PassedOut_C_AllPassedOut) == 0x000030, "Wrong size on BP_PassedOut_C_AllPassedOut");
static_assert(offsetof(BP_PassedOut_C_AllPassedOut, Param_AllPassedOut) == 0x000000, "Member 'BP_PassedOut_C_AllPassedOut::Param_AllPassedOut' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_AllPassedOut, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_PassedOut_C_AllPassedOut::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_AllPassedOut, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_PassedOut_C_AllPassedOut::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_AllPassedOut, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_PassedOut_C_AllPassedOut::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_AllPassedOut, CallFunc_GetFSDGameState_ReturnValue) == 0x000010, "Member 'BP_PassedOut_C_AllPassedOut::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_AllPassedOut, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_PassedOut_C_AllPassedOut::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_AllPassedOut, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_PassedOut_C_AllPassedOut::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_AllPassedOut, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'BP_PassedOut_C_AllPassedOut::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_AllPassedOut, CallFunc_GetCurrentState_ReturnValue) == 0x000029, "Member 'BP_PassedOut_C_AllPassedOut::CallFunc_GetCurrentState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassedOut_C_AllPassedOut, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00002A, "Member 'BP_PassedOut_C_AllPassedOut::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

}

