#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HDCharacterLeanHandler

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.ExecuteUbergraph_BP_HDCharacterLeanHandler
// 0x0018 (0x0018 - 0x0000)
struct BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADFBaseCharacter*                       CallFunc_GetOwningCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19C9[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler) == 0x000008, "Wrong alignment on BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler");
static_assert(sizeof(BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler) == 0x000018, "Wrong size on BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler, EntryPoint) == 0x000000, "Member 'BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler, CallFunc_GetOwningCharacter_ReturnValue) == 0x000008, "Member 'BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler::CallFunc_GetOwningCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler, CallFunc_IsLocallyControlled_ReturnValue) == 0x000010, "Member 'BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler, K2Node_Event_DeltaTime) == 0x000014, "Member 'BP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler::K2Node_Event_DeltaTime' has a wrong offset!");

// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_HDCharacterLeanHandler_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HDCharacterLeanHandler_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_HDCharacterLeanHandler_C_ReceiveTick");
static_assert(sizeof(BP_HDCharacterLeanHandler_C_ReceiveTick) == 0x000004, "Wrong size on BP_HDCharacterLeanHandler_C_ReceiveTick");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'BP_HDCharacterLeanHandler_C_ReceiveTick::DeltaTime' has a wrong offset!");

// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPMeshComp
// 0x0028 (0x0028 - 0x0000)
struct BP_HDCharacterLeanHandler_C_GetFPPMeshComp final
{
public:
	class USkeletalMeshComponent*                 FPPMesh;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19CA[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADFBaseCharacter*                       CallFunc_GetOwningCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADFBasePlayerCharacter*                 K2Node_DynamicCast_AsDFBase_Player_Character;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_HDCharacterLeanHandler_C_GetFPPMeshComp) == 0x000008, "Wrong alignment on BP_HDCharacterLeanHandler_C_GetFPPMeshComp");
static_assert(sizeof(BP_HDCharacterLeanHandler_C_GetFPPMeshComp) == 0x000028, "Wrong size on BP_HDCharacterLeanHandler_C_GetFPPMeshComp");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPMeshComp, FPPMesh) == 0x000000, "Member 'BP_HDCharacterLeanHandler_C_GetFPPMeshComp::FPPMesh' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPMeshComp, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_HDCharacterLeanHandler_C_GetFPPMeshComp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPMeshComp, CallFunc_GetOwningCharacter_ReturnValue) == 0x000010, "Member 'BP_HDCharacterLeanHandler_C_GetFPPMeshComp::CallFunc_GetOwningCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPMeshComp, K2Node_DynamicCast_AsDFBase_Player_Character) == 0x000018, "Member 'BP_HDCharacterLeanHandler_C_GetFPPMeshComp::K2Node_DynamicCast_AsDFBase_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPMeshComp, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_HDCharacterLeanHandler_C_GetFPPMeshComp::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPCameraComp
// 0x0028 (0x0028 - 0x0000)
struct BP_HDCharacterLeanHandler_C_GetFPPCameraComp final
{
public:
	class UCameraComponent*                       FPPCamera;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19CB[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADFBaseCharacter*                       CallFunc_GetOwningCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADFBasePlayerCharacter*                 K2Node_DynamicCast_AsDFBase_Player_Character;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_HDCharacterLeanHandler_C_GetFPPCameraComp) == 0x000008, "Wrong alignment on BP_HDCharacterLeanHandler_C_GetFPPCameraComp");
static_assert(sizeof(BP_HDCharacterLeanHandler_C_GetFPPCameraComp) == 0x000028, "Wrong size on BP_HDCharacterLeanHandler_C_GetFPPCameraComp");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPCameraComp, FPPCamera) == 0x000000, "Member 'BP_HDCharacterLeanHandler_C_GetFPPCameraComp::FPPCamera' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPCameraComp, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_HDCharacterLeanHandler_C_GetFPPCameraComp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPCameraComp, CallFunc_GetOwningCharacter_ReturnValue) == 0x000010, "Member 'BP_HDCharacterLeanHandler_C_GetFPPCameraComp::CallFunc_GetOwningCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPCameraComp, K2Node_DynamicCast_AsDFBase_Player_Character) == 0x000018, "Member 'BP_HDCharacterLeanHandler_C_GetFPPCameraComp::K2Node_DynamicCast_AsDFBase_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPCameraComp, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_HDCharacterLeanHandler_C_GetFPPCameraComp::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPSpringArmComp
// 0x0028 (0x0028 - 0x0000)
struct BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp final
{
public:
	class USpringArmComponent*                    FPPSpringArm;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19CC[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADFBaseCharacter*                       CallFunc_GetOwningCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHDPlayerCharacter*                     K2Node_DynamicCast_AsHDPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp) == 0x000008, "Wrong alignment on BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp");
static_assert(sizeof(BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp) == 0x000028, "Wrong size on BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp, FPPSpringArm) == 0x000000, "Member 'BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp::FPPSpringArm' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp, CallFunc_GetOwningCharacter_ReturnValue) == 0x000010, "Member 'BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp::CallFunc_GetOwningCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp, K2Node_DynamicCast_AsHDPlayer_Character) == 0x000018, "Member 'BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp::K2Node_DynamicCast_AsHDPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_HDCharacterLeanHandler_C_GetFPPSpringArmComp::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickXOffset
// 0x00C0 (0x00C0 - 0x0000)
struct BP_HDCharacterLeanHandler_C_TickXOffset final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19CD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USpringArmComponent*                    CallFunc_GetFPPSpringArmComp_FPPSpringArm;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLeanXOffset_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0034(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_HDCharacterLeanHandler_C_TickXOffset) == 0x000008, "Wrong alignment on BP_HDCharacterLeanHandler_C_TickXOffset");
static_assert(sizeof(BP_HDCharacterLeanHandler_C_TickXOffset) == 0x0000C0, "Wrong size on BP_HDCharacterLeanHandler_C_TickXOffset");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickXOffset, DeltaTime) == 0x000000, "Member 'BP_HDCharacterLeanHandler_C_TickXOffset::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickXOffset, CallFunc_GetFPPSpringArmComp_FPPSpringArm) == 0x000008, "Member 'BP_HDCharacterLeanHandler_C_TickXOffset::CallFunc_GetFPPSpringArmComp_FPPSpringArm' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickXOffset, CallFunc_GetLeanXOffset_ReturnValue) == 0x000010, "Member 'BP_HDCharacterLeanHandler_C_TickXOffset::CallFunc_GetLeanXOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickXOffset, CallFunc_Add_FloatFloat_ReturnValue) == 0x000014, "Member 'BP_HDCharacterLeanHandler_C_TickXOffset::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickXOffset, CallFunc_BreakVector_X) == 0x000018, "Member 'BP_HDCharacterLeanHandler_C_TickXOffset::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickXOffset, CallFunc_BreakVector_Y) == 0x00001C, "Member 'BP_HDCharacterLeanHandler_C_TickXOffset::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickXOffset, CallFunc_BreakVector_Z) == 0x000020, "Member 'BP_HDCharacterLeanHandler_C_TickXOffset::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickXOffset, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_HDCharacterLeanHandler_C_TickXOffset::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickXOffset, CallFunc_MakeVector_ReturnValue) == 0x000028, "Member 'BP_HDCharacterLeanHandler_C_TickXOffset::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickXOffset, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000034, "Member 'BP_HDCharacterLeanHandler_C_TickXOffset::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickYOffset
// 0x00F0 (0x00F0 - 0x0000)
struct BP_HDCharacterLeanHandler_C_TickYOffset final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19CE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADFBaseCharacter*                       CallFunc_GetOwningCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLeanYOffset_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19CF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_HDPlayerCharacterBase_C*            K2Node_DynamicCast_AsBP_HDPlayer_Character_Base;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19D0[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USpringArmComponent*                    CallFunc_GetFPPSpringArmComp_FPPSpringArm;         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0064(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_HDCharacterLeanHandler_C_TickYOffset) == 0x000008, "Wrong alignment on BP_HDCharacterLeanHandler_C_TickYOffset");
static_assert(sizeof(BP_HDCharacterLeanHandler_C_TickYOffset) == 0x0000F0, "Wrong size on BP_HDCharacterLeanHandler_C_TickYOffset");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, DeltaTime) == 0x000000, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_GetOwningCharacter_ReturnValue) == 0x000008, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_GetOwningCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_GetLeanYOffset_ReturnValue) == 0x000010, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_GetLeanYOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, K2Node_DynamicCast_AsBP_HDPlayer_Character_Base) == 0x000018, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::K2Node_DynamicCast_AsBP_HDPlayer_Character_Base' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_GetFPPSpringArmComp_FPPSpringArm) == 0x000028, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_GetFPPSpringArmComp_FPPSpringArm' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_BreakVector_X) == 0x000030, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_BreakVector_Y) == 0x000034, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_BreakVector_Z) == 0x000038, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_BreakVector_X_1) == 0x00003C, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_BreakVector_Y_1) == 0x000040, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_BreakVector_Z_1) == 0x000044, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_Abs_ReturnValue) == 0x000048, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_FClamp_ReturnValue) == 0x00004C, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000050, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_Add_FloatFloat_ReturnValue) == 0x000054, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_MakeVector_ReturnValue) == 0x000058, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickYOffset, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000064, "Member 'BP_HDCharacterLeanHandler_C_TickYOffset::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

// Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickRot
// 0x00B0 (0x00B0 - 0x0000)
struct BP_HDCharacterLeanHandler_C_TickRot final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19D1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USpringArmComponent*                    CallFunc_GetFPPSpringArmComp_FPPSpringArm;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLeanRollRot_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19D2[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddRelativeRotation_SweepHitResult;    // 0x0028(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_HDCharacterLeanHandler_C_TickRot) == 0x000008, "Wrong alignment on BP_HDCharacterLeanHandler_C_TickRot");
static_assert(sizeof(BP_HDCharacterLeanHandler_C_TickRot) == 0x0000B0, "Wrong size on BP_HDCharacterLeanHandler_C_TickRot");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickRot, DeltaTime) == 0x000000, "Member 'BP_HDCharacterLeanHandler_C_TickRot::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickRot, CallFunc_GetFPPSpringArmComp_FPPSpringArm) == 0x000008, "Member 'BP_HDCharacterLeanHandler_C_TickRot::CallFunc_GetFPPSpringArmComp_FPPSpringArm' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickRot, CallFunc_GetLeanRollRot_ReturnValue) == 0x000010, "Member 'BP_HDCharacterLeanHandler_C_TickRot::CallFunc_GetLeanRollRot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickRot, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000014, "Member 'BP_HDCharacterLeanHandler_C_TickRot::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickRot, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_HDCharacterLeanHandler_C_TickRot::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickRot, CallFunc_MakeRotator_ReturnValue) == 0x00001C, "Member 'BP_HDCharacterLeanHandler_C_TickRot::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HDCharacterLeanHandler_C_TickRot, CallFunc_K2_AddRelativeRotation_SweepHitResult) == 0x000028, "Member 'BP_HDCharacterLeanHandler_C_TickRot::CallFunc_K2_AddRelativeRotation_SweepHitResult' has a wrong offset!");

}
