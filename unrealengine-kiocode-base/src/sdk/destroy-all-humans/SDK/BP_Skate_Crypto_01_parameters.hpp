#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Skate_Crypto_01

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Skate_Crypto_01.BP_Skate_Crypto_01_C.ExecuteUbergraph_BP_Skate_Crypto_01
// 0x0270 (0x0270 - 0x0000)
struct BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_212F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABFGPlayerCharacter*                    K2Node_DynamicCast_AsBFGPlayer_Character;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2130[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue1;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABFGPlayerCharacter*                    K2Node_DynamicCast_AsBFGPlayer_Character1;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2131[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2132[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotFromY_ReturnValue;                 // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x006C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue1; // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_ReturnValue;                    // 0x0144(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2133[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2134[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult1;      // 0x0164(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_2135[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue1;        // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue2;        // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue3;        // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue4;        // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue5;        // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue6;        // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue7;        // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue8;        // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue9;        // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue10;       // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue1; // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0258(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;           // 0x0264(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01) == 0x000008, "Wrong alignment on BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01");
static_assert(sizeof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01) == 0x000270, "Wrong size on BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, EntryPoint) == 0x000000, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_RandomFloat_ReturnValue) == 0x000004, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_Add_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_GetPlayerPawn_ReturnValue) == 0x000010, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, K2Node_DynamicCast_AsBFGPlayer_Character) == 0x000018, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::K2Node_DynamicCast_AsBFGPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_GetPlayerPawn_ReturnValue1) == 0x000028, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_GetPlayerPawn_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, K2Node_DynamicCast_AsBFGPlayer_Character1) == 0x000030, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::K2Node_DynamicCast_AsBFGPlayer_Character1' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, K2Node_DynamicCast_bSuccess1) == 0x000038, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_GetActorForwardVector_ReturnValue) == 0x00003C, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_GetMovementComponent_ReturnValue) == 0x000048, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_IsValid_ReturnValue1) == 0x000051, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_MakeRotFromY_ReturnValue) == 0x000054, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_MakeRotFromY_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_Normal_ReturnValue) == 0x000060, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x00006C, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_Dot_VectorVector_ReturnValue) == 0x0000F4, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_VSize_ReturnValue) == 0x0000F8, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_Abs_ReturnValue) == 0x0000FC, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000100, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000104, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_FClamp_ReturnValue) == 0x000108, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x00010C, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_Multiply_FloatFloat_ReturnValue1) == 0x000110, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_Multiply_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue1) == 0x000114, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_Multiply_FloatFloat_ReturnValue2) == 0x000118, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_Multiply_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00011C, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_VLerp_ReturnValue) == 0x000128, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_Add_VectorVector_ReturnValue) == 0x000134, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, K2Node_Event_DeltaSeconds) == 0x000140, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_VInterpTo_ReturnValue) == 0x000144, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_VInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_IsValid_ReturnValue2) == 0x000150, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_MakeRotFromX_ReturnValue) == 0x000154, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_IsValid_ReturnValue3) == 0x000160, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_K2_SetWorldRotation_SweepHitResult1) == 0x000164, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_K2_SetWorldRotation_SweepHitResult1' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0001F0, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_SpawnEmitterAttached_ReturnValue1) == 0x0001F8, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_SpawnEmitterAttached_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_SpawnEmitterAttached_ReturnValue2) == 0x000200, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_SpawnEmitterAttached_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_SpawnEmitterAttached_ReturnValue3) == 0x000208, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_SpawnEmitterAttached_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_SpawnEmitterAttached_ReturnValue4) == 0x000210, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_SpawnEmitterAttached_ReturnValue4' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_SpawnEmitterAttached_ReturnValue5) == 0x000218, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_SpawnEmitterAttached_ReturnValue5' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_SpawnEmitterAttached_ReturnValue6) == 0x000220, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_SpawnEmitterAttached_ReturnValue6' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_SpawnEmitterAttached_ReturnValue7) == 0x000228, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_SpawnEmitterAttached_ReturnValue7' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_SpawnEmitterAttached_ReturnValue8) == 0x000230, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_SpawnEmitterAttached_ReturnValue8' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_SpawnEmitterAttached_ReturnValue9) == 0x000238, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_SpawnEmitterAttached_ReturnValue9' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_SpawnEmitterAttached_ReturnValue10) == 0x000240, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_SpawnEmitterAttached_ReturnValue10' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000248, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_CreateDynamicMaterialInstance_ReturnValue1) == 0x000250, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_CreateDynamicMaterialInstance_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000258, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01, CallFunc_Divide_VectorFloat_ReturnValue) == 0x000264, "Member 'BP_Skate_Crypto_01_C_ExecuteUbergraph_BP_Skate_Crypto_01::CallFunc_Divide_VectorFloat_ReturnValue' has a wrong offset!");

// Function BP_Skate_Crypto_01.BP_Skate_Crypto_01_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Skate_Crypto_01_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skate_Crypto_01_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Skate_Crypto_01_C_ReceiveTick");
static_assert(sizeof(BP_Skate_Crypto_01_C_ReceiveTick) == 0x000004, "Wrong size on BP_Skate_Crypto_01_C_ReceiveTick");
static_assert(offsetof(BP_Skate_Crypto_01_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Skate_Crypto_01_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_Skate_Crypto_01.BP_Skate_Crypto_01_C.InitializeStaticMeshes
// 0x00C0 (0x00C0 - 0x0000)
struct BP_Skate_Crypto_01_C_InitializeStaticMeshes final
{
public:
	struct FTransform                             Temp_struct_Variable;                              // 0x0000(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2136[0x8];                                     // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable1;                             // 0x0040(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             Temp_struct_Variable2;                             // 0x0070(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue1;                // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue2;                // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue1;        // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue2;        // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Skate_Crypto_01_C_InitializeStaticMeshes) == 0x000010, "Wrong alignment on BP_Skate_Crypto_01_C_InitializeStaticMeshes");
static_assert(sizeof(BP_Skate_Crypto_01_C_InitializeStaticMeshes) == 0x0000C0, "Wrong size on BP_Skate_Crypto_01_C_InitializeStaticMeshes");
static_assert(offsetof(BP_Skate_Crypto_01_C_InitializeStaticMeshes, Temp_struct_Variable) == 0x000000, "Member 'BP_Skate_Crypto_01_C_InitializeStaticMeshes::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_InitializeStaticMeshes, CallFunc_AddComponent_ReturnValue) == 0x000030, "Member 'BP_Skate_Crypto_01_C_InitializeStaticMeshes::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_InitializeStaticMeshes, Temp_struct_Variable1) == 0x000040, "Member 'BP_Skate_Crypto_01_C_InitializeStaticMeshes::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_InitializeStaticMeshes, Temp_struct_Variable2) == 0x000070, "Member 'BP_Skate_Crypto_01_C_InitializeStaticMeshes::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_InitializeStaticMeshes, CallFunc_AddComponent_ReturnValue1) == 0x0000A0, "Member 'BP_Skate_Crypto_01_C_InitializeStaticMeshes::CallFunc_AddComponent_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_InitializeStaticMeshes, CallFunc_AddComponent_ReturnValue2) == 0x0000A8, "Member 'BP_Skate_Crypto_01_C_InitializeStaticMeshes::CallFunc_AddComponent_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_InitializeStaticMeshes, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0000B0, "Member 'BP_Skate_Crypto_01_C_InitializeStaticMeshes::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_InitializeStaticMeshes, CallFunc_K2_AttachToComponent_ReturnValue1) == 0x0000B1, "Member 'BP_Skate_Crypto_01_C_InitializeStaticMeshes::CallFunc_K2_AttachToComponent_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_Skate_Crypto_01_C_InitializeStaticMeshes, CallFunc_K2_AttachToComponent_ReturnValue2) == 0x0000B2, "Member 'BP_Skate_Crypto_01_C_InitializeStaticMeshes::CallFunc_K2_AttachToComponent_ReturnValue2' has a wrong offset!");

}
