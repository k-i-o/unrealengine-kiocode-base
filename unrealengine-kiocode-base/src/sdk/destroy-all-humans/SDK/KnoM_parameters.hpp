#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KnoM

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function knoM.knoM_C.ExecuteUbergraph_knoM
// 0x0210 (0x0210 - 0x0000)
struct KnoM_C_ExecuteUbergraph_knoM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2391[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AReferenceManager_C*                    CallFunc_GetRefMgr_RefMgr;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerControllerBP_C*                  CallFunc_GetPlayerController_PC;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2392[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAlliedCharacter_C*                     CallFunc_Array_Get_Item;                           // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2393[0xF];                                     // 0x00F1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x0100(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2394[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_1;                          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_DegAtan2_ReturnValue;                     // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2395[0x3];                                     // 0x0201(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KnoM_C_ExecuteUbergraph_knoM) == 0x000010, "Wrong alignment on KnoM_C_ExecuteUbergraph_knoM");
static_assert(sizeof(KnoM_C_ExecuteUbergraph_knoM) == 0x000210, "Wrong size on KnoM_C_ExecuteUbergraph_knoM");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, EntryPoint) == 0x000000, "Member 'KnoM_C_ExecuteUbergraph_knoM::EntryPoint' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_GetRefMgr_RefMgr) == 0x000008, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_GetRefMgr_RefMgr' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_GetPlayerController_PC) == 0x000018, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_GetPlayerController_PC' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_BreakTransform_Location) == 0x000088, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_BreakTransform_Rotation) == 0x0000A0, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_BreakTransform_Scale) == 0x0000B8, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_BreakVector_X) == 0x0000D0, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_BreakVector_Y) == 0x0000D8, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_BreakVector_Z) == 0x0000E0, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_Array_Get_Item) == 0x0000E8, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_IsValid_ReturnValue_1) == 0x0000F0, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_GetTransform_ReturnValue_1) == 0x000100, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_BreakTransform_Location_1) == 0x000160, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_BreakTransform_Rotation_1) == 0x000178, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_BreakTransform_Scale_1) == 0x000190, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, K2Node_Event_DeltaSeconds) == 0x0001A8, "Member 'KnoM_C_ExecuteUbergraph_knoM::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_BreakVector_X_1) == 0x0001B0, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_BreakVector_Y_1) == 0x0001B8, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_BreakVector_Z_1) == 0x0001C0, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0001C8, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0001D0, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_DegAtan2_ReturnValue) == 0x0001D8, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_DegAtan2_ReturnValue' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0001E0, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_MakeRotator_ReturnValue) == 0x0001E8, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000200, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KnoM_C_ExecuteUbergraph_knoM, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000204, "Member 'KnoM_C_ExecuteUbergraph_knoM::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function knoM.knoM_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct KnoM_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KnoM_C_ReceiveTick) == 0x000004, "Wrong alignment on KnoM_C_ReceiveTick");
static_assert(sizeof(KnoM_C_ReceiveTick) == 0x000004, "Wrong size on KnoM_C_ReceiveTick");
static_assert(offsetof(KnoM_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'KnoM_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
