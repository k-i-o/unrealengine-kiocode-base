#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_S05_CoreSpawnTank_Big

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function BP_S05_CoreSpawnTank_Big.BP_S05_CoreSpawnTank_Big_C.GetSeasonBarrelSpawnChance
// 0x000C (0x000C - 0x0000)
struct BP_S05_CoreSpawnTank_Big_C_GetSeasonBarrelSpawnChance final
{
public:
	float                                         Out;                                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_S05_CoreSpawnTank_Big_C_GetSeasonBarrelSpawnChance) == 0x000004, "Wrong alignment on BP_S05_CoreSpawnTank_Big_C_GetSeasonBarrelSpawnChance");
static_assert(sizeof(BP_S05_CoreSpawnTank_Big_C_GetSeasonBarrelSpawnChance) == 0x00000C, "Wrong size on BP_S05_CoreSpawnTank_Big_C_GetSeasonBarrelSpawnChance");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_GetSeasonBarrelSpawnChance, Out) == 0x000000, "Member 'BP_S05_CoreSpawnTank_Big_C_GetSeasonBarrelSpawnChance::Out' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_GetSeasonBarrelSpawnChance, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000004, "Member 'BP_S05_CoreSpawnTank_Big_C_GetSeasonBarrelSpawnChance::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_GetSeasonBarrelSpawnChance, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_S05_CoreSpawnTank_Big_C_GetSeasonBarrelSpawnChance::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_S05_CoreSpawnTank_Big.BP_S05_CoreSpawnTank_Big_C.UpdateMeshesForHolidays
// 0x0370 (0x0370 - 0x0000)
struct BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays final
{
public:
	float                                         CallFunc_GetSeasonBarrelSpawnChance_out;           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSeasonBarrelSpawnChance_out_1;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSeasonBarrelSpawnChance_out_2;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSeasonBarrelSpawnChance_out_3;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSeasonBarrelSpawnChance_out_4;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4781[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	struct FDisplayContent                        K2Node_MakeStruct_DisplayContent;                  // 0x0028(0x0098)()
	TArray<class FText>                           K2Node_MakeArray_Array_1;                          // 0x00C0(0x0010)(ReferenceParm)
	struct FDisplayContent                        K2Node_MakeStruct_DisplayContent_1;                // 0x00D0(0x0098)()
	TArray<class FText>                           K2Node_MakeArray_Array_2;                          // 0x0168(0x0010)(ReferenceParm)
	struct FDisplayContent                        K2Node_MakeStruct_DisplayContent_2;                // 0x0178(0x0098)()
	TArray<class FText>                           K2Node_MakeArray_Array_3;                          // 0x0210(0x0010)(ReferenceParm)
	struct FDisplayContent                        K2Node_MakeStruct_DisplayContent_3;                // 0x0220(0x0098)()
	TArray<class FText>                           K2Node_MakeArray_Array_4;                          // 0x02B8(0x0010)(ReferenceParm)
	struct FDisplayContent                        K2Node_MakeStruct_DisplayContent_4;                // 0x02C8(0x0098)()
	class UFSDEventManager*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEventActive_ReturnValue;                // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventActive_ReturnValue_1;              // 0x0369(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventActive_ReturnValue_2;              // 0x036A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventActive_ReturnValue_3;              // 0x036B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventActive_ReturnValue_4;              // 0x036C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays) == 0x000008, "Wrong alignment on BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays");
static_assert(sizeof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays) == 0x000370, "Wrong size on BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, CallFunc_GetSeasonBarrelSpawnChance_out) == 0x000000, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::CallFunc_GetSeasonBarrelSpawnChance_out' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, CallFunc_GetSeasonBarrelSpawnChance_out_1) == 0x000004, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::CallFunc_GetSeasonBarrelSpawnChance_out_1' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, CallFunc_GetSeasonBarrelSpawnChance_out_2) == 0x000008, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::CallFunc_GetSeasonBarrelSpawnChance_out_2' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, CallFunc_GetSeasonBarrelSpawnChance_out_3) == 0x00000C, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::CallFunc_GetSeasonBarrelSpawnChance_out_3' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, CallFunc_GetSeasonBarrelSpawnChance_out_4) == 0x000010, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::CallFunc_GetSeasonBarrelSpawnChance_out_4' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, K2Node_MakeArray_Array) == 0x000018, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, K2Node_MakeStruct_DisplayContent) == 0x000028, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::K2Node_MakeStruct_DisplayContent' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, K2Node_MakeArray_Array_1) == 0x0000C0, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, K2Node_MakeStruct_DisplayContent_1) == 0x0000D0, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::K2Node_MakeStruct_DisplayContent_1' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, K2Node_MakeArray_Array_2) == 0x000168, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, K2Node_MakeStruct_DisplayContent_2) == 0x000178, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::K2Node_MakeStruct_DisplayContent_2' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, K2Node_MakeArray_Array_3) == 0x000210, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, K2Node_MakeStruct_DisplayContent_3) == 0x000220, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::K2Node_MakeStruct_DisplayContent_3' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, K2Node_MakeArray_Array_4) == 0x0002B8, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, K2Node_MakeStruct_DisplayContent_4) == 0x0002C8, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::K2Node_MakeStruct_DisplayContent_4' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000360, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, CallFunc_IsEventActive_ReturnValue) == 0x000368, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::CallFunc_IsEventActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, CallFunc_IsEventActive_ReturnValue_1) == 0x000369, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::CallFunc_IsEventActive_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, CallFunc_IsEventActive_ReturnValue_2) == 0x00036A, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::CallFunc_IsEventActive_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, CallFunc_IsEventActive_ReturnValue_3) == 0x00036B, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::CallFunc_IsEventActive_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays, CallFunc_IsEventActive_ReturnValue_4) == 0x00036C, "Member 'BP_S05_CoreSpawnTank_Big_C_UpdateMeshesForHolidays::CallFunc_IsEventActive_ReturnValue_4' has a wrong offset!");

// Function BP_S05_CoreSpawnTank_Big.BP_S05_CoreSpawnTank_Big_C.BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_S05_CoreSpawnTank_Big_C_BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature final
{
public:
	class APlayerCharacter*                       User;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputKeys                                    Key;                                               // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_S05_CoreSpawnTank_Big_C_BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_S05_CoreSpawnTank_Big_C_BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
static_assert(sizeof(BP_S05_CoreSpawnTank_Big_C_BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature) == 0x000010, "Wrong size on BP_S05_CoreSpawnTank_Big_C_BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature, User) == 0x000000, "Member 'BP_S05_CoreSpawnTank_Big_C_BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature::User' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature, Key) == 0x000008, "Member 'BP_S05_CoreSpawnTank_Big_C_BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature::Key' has a wrong offset!");

// Function BP_S05_CoreSpawnTank_Big.BP_S05_CoreSpawnTank_Big_C.OnKnock
// 0x0008 (0x0008 - 0x0000)
struct BP_S05_CoreSpawnTank_Big_C_OnKnock final
{
public:
	class APlayerCharacter*                       Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_S05_CoreSpawnTank_Big_C_OnKnock) == 0x000008, "Wrong alignment on BP_S05_CoreSpawnTank_Big_C_OnKnock");
static_assert(sizeof(BP_S05_CoreSpawnTank_Big_C_OnKnock) == 0x000008, "Wrong size on BP_S05_CoreSpawnTank_Big_C_OnKnock");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_OnKnock, Player) == 0x000000, "Member 'BP_S05_CoreSpawnTank_Big_C_OnKnock::Player' has a wrong offset!");

// Function BP_S05_CoreSpawnTank_Big.BP_S05_CoreSpawnTank_Big_C.All_BindGenericDelegate
// 0x0010 (0x0010 - 0x0000)
struct BP_S05_CoreSpawnTank_Big_C_All_BindGenericDelegate final
{
public:
	class APlayerCharacter*                       Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldReact;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShouldStartMC;                                     // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_S05_CoreSpawnTank_Big_C_All_BindGenericDelegate) == 0x000008, "Wrong alignment on BP_S05_CoreSpawnTank_Big_C_All_BindGenericDelegate");
static_assert(sizeof(BP_S05_CoreSpawnTank_Big_C_All_BindGenericDelegate) == 0x000010, "Wrong size on BP_S05_CoreSpawnTank_Big_C_All_BindGenericDelegate");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_All_BindGenericDelegate, Player) == 0x000000, "Member 'BP_S05_CoreSpawnTank_Big_C_All_BindGenericDelegate::Player' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_All_BindGenericDelegate, ShouldReact) == 0x000008, "Member 'BP_S05_CoreSpawnTank_Big_C_All_BindGenericDelegate::ShouldReact' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_All_BindGenericDelegate, ShouldStartMC) == 0x000009, "Member 'BP_S05_CoreSpawnTank_Big_C_All_BindGenericDelegate::ShouldStartMC' has a wrong offset!");

// Function BP_S05_CoreSpawnTank_Big.BP_S05_CoreSpawnTank_Big_C.ExecuteUbergraph_BP_S05_CoreSpawnTank_Big
// 0x0068 (0x0068 - 0x0000)
struct BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4782[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class APlayerCharacter* Player)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4783[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetWidget_ReturnValue;                    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       K2Node_ComponentBoundEvent_user;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputKeys                                    K2Node_ComponentBoundEvent_key;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4784[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget_Biotank_DisplayName_C*          K2Node_DynamicCast_AsWidget_Biotank_Display_Name;  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4785[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_CustomEvent_Player_1;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PercentageCheck_ReturnValue;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PercentageCheck_ReturnValue_1;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4786[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_CustomEvent_Player;                         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShouldReact;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_ShouldStartMC;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSpecialContent_ReturnValue;             // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big) == 0x000008, "Wrong alignment on BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big");
static_assert(sizeof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big) == 0x000068, "Wrong size on BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, EntryPoint) == 0x000000, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, CallFunc_HasAuthority_ReturnValue) == 0x000005, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, CallFunc_HasAuthority_ReturnValue_1) == 0x000018, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, CallFunc_GetWidget_ReturnValue) == 0x000020, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::CallFunc_GetWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, K2Node_ComponentBoundEvent_user) == 0x000028, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::K2Node_ComponentBoundEvent_user' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, K2Node_ComponentBoundEvent_key) == 0x000030, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::K2Node_ComponentBoundEvent_key' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, K2Node_DynamicCast_AsWidget_Biotank_Display_Name) == 0x000038, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::K2Node_DynamicCast_AsWidget_Biotank_Display_Name' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, K2Node_CustomEvent_Player_1) == 0x000048, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::K2Node_CustomEvent_Player_1' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, CallFunc_PercentageCheck_ReturnValue) == 0x000050, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::CallFunc_PercentageCheck_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, CallFunc_PercentageCheck_ReturnValue_1) == 0x000051, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::CallFunc_PercentageCheck_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, Temp_bool_IsClosed_Variable) == 0x000052, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, K2Node_CustomEvent_Player) == 0x000058, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, K2Node_CustomEvent_ShouldReact) == 0x000060, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::K2Node_CustomEvent_ShouldReact' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, K2Node_CustomEvent_ShouldStartMC) == 0x000061, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::K2Node_CustomEvent_ShouldStartMC' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, CallFunc_IsSpecialContent_ReturnValue) == 0x000062, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::CallFunc_IsSpecialContent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, CallFunc_Not_PreBool_ReturnValue) == 0x000063, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big, CallFunc_BooleanAND_ReturnValue) == 0x000064, "Member 'BP_S05_CoreSpawnTank_Big_C_ExecuteUbergraph_BP_S05_CoreSpawnTank_Big::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
