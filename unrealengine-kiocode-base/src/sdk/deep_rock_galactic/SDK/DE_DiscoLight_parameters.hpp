#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DE_DiscoLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function DE_DiscoLight.DE_DiscoLight_C.ExecuteUbergraph_DE_DiscoLight
// 0x0210 (0x0210 - 0x0000)
struct DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_DynamicCast_AsSound_Base;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_419C[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UObject>                 Temp_softobject_Variable;                          // 0x0038(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                 Temp_softobject_Variable_1;                        // 0x0060(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                 K2Node_Select_Default;                             // 0x0088(0x0028)(HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419D[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_Event_character;                            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_419E[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x00C8(0x0010)(ZeroConstructor, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorRelativeLocation_SweepHitResult; // 0x00D8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0160(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APointLight*                            CallFunc_FinishSpawningActor_ReturnValue;          // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_419F[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41A0[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDPlayerController*                   CallFunc_GetPlayerController_ReturnValue;          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41A1[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41A2[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetClampedLinearColorValue_ReturnValue;   // 0x01EC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight) == 0x000010, "Wrong alignment on DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight");
static_assert(sizeof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight) == 0x000210, "Wrong size on DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, EntryPoint) == 0x000000, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::EntryPoint' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_GetFSDGameUserSettings_ReturnValue) == 0x000008, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_GetFSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, Temp_float_Variable) == 0x000010, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, K2Node_CustomEvent_Loaded) == 0x000018, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, Temp_object_Variable) == 0x000020, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, K2Node_DynamicCast_AsSound_Base) == 0x000028, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::K2Node_DynamicCast_AsSound_Base' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, Temp_bool_Variable) == 0x000031, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, Temp_softobject_Variable) == 0x000038, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, Temp_softobject_Variable_1) == 0x000060, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, K2Node_Select_Default) == 0x000088, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, K2Node_Event_DeltaSeconds) == 0x0000B0, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, K2Node_Event_character) == 0x0000B8, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::K2Node_Event_character' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000C0, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_Less_FloatFloat_ReturnValue) == 0x0000C4, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, K2Node_CreateDelegate_OutputDelegate) == 0x0000C8, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_K2_SetActorRelativeLocation_SweepHitResult) == 0x0000D8, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_K2_SetActorRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_GetTransform_ReturnValue) == 0x000160, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000190, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_FinishSpawningActor_ReturnValue) == 0x000198, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_Not_PreBool_ReturnValue) == 0x0001A0, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_SpawnSoundAttached_ReturnValue) == 0x0001A8, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_IsLocallyControlled_ReturnValue) == 0x0001B0, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_GetPlayerController_ReturnValue) == 0x0001B8, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x0001C0, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x0001C8, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0001D0, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_SpawnSoundAttached_ReturnValue_2) == 0x0001D8, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_SpawnSoundAttached_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_SpawnEmitterAttached_ReturnValue_1) == 0x0001E0, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_SpawnEmitterAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, Temp_bool_Variable_1) == 0x0001E8, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_GetClampedLinearColorValue_ReturnValue) == 0x0001EC, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_GetClampedLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, K2Node_Select_Default_1) == 0x0001FC, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_IsValid_ReturnValue) == 0x000200, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_BooleanAND_ReturnValue) == 0x000201, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000202, "Member 'DE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function DE_DiscoLight.DE_DiscoLight_C.OnStartEffect
// 0x0008 (0x0008 - 0x0000)
struct DE_DiscoLight_C_OnStartEffect final
{
public:
	class APlayerCharacter*                       Param_Character;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DE_DiscoLight_C_OnStartEffect) == 0x000008, "Wrong alignment on DE_DiscoLight_C_OnStartEffect");
static_assert(sizeof(DE_DiscoLight_C_OnStartEffect) == 0x000008, "Wrong size on DE_DiscoLight_C_OnStartEffect");
static_assert(offsetof(DE_DiscoLight_C_OnStartEffect, Param_Character) == 0x000000, "Member 'DE_DiscoLight_C_OnStartEffect::Param_Character' has a wrong offset!");

// Function DE_DiscoLight.DE_DiscoLight_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct DE_DiscoLight_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DE_DiscoLight_C_ReceiveTick) == 0x000004, "Wrong alignment on DE_DiscoLight_C_ReceiveTick");
static_assert(sizeof(DE_DiscoLight_C_ReceiveTick) == 0x000004, "Wrong size on DE_DiscoLight_C_ReceiveTick");
static_assert(offsetof(DE_DiscoLight_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'DE_DiscoLight_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function DE_DiscoLight.DE_DiscoLight_C.OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC
// 0x0008 (0x0008 - 0x0000)
struct DE_DiscoLight_C_OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DE_DiscoLight_C_OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC) == 0x000008, "Wrong alignment on DE_DiscoLight_C_OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC");
static_assert(sizeof(DE_DiscoLight_C_OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC) == 0x000008, "Wrong size on DE_DiscoLight_C_OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC");
static_assert(offsetof(DE_DiscoLight_C_OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC, Loaded) == 0x000000, "Member 'DE_DiscoLight_C_OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC::Loaded' has a wrong offset!");

}
