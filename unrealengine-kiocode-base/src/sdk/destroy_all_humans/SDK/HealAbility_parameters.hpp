#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HealAbility

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function HealAbility.HealAbility_C.ContinueAction
// 0x0010 (0x0010 - 0x0000)
struct HealAbility_C_ContinueAction final
{
public:
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B60[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HealAbility_C_ContinueAction) == 0x000008, "Wrong alignment on HealAbility_C_ContinueAction");
static_assert(sizeof(HealAbility_C_ContinueAction) == 0x000010, "Wrong size on HealAbility_C_ContinueAction");
static_assert(offsetof(HealAbility_C_ContinueAction, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000000, "Member 'HealAbility_C_ContinueAction::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ContinueAction, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000008, "Member 'HealAbility_C_ContinueAction::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

// Function HealAbility.HealAbility_C.OnAbilitySelected
// 0x0060 (0x0060 - 0x0000)
struct HealAbility_C_OnAbilitySelected final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AReferenceManager_C*                    CallFunc_GetRefMgr_RefMgr;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMinion3_C*                             K2Node_DynamicCast_AsMinion_3;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B61[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADisplayManager_C*                      CallFunc_GetDisplayManager_NewParam;               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B62[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AReferenceManager_C*                    CallFunc_GetRefMgr_RefMgr_1;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADisplayManager_C*                      CallFunc_GetDisplayManager_NewParam_1;             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HealAbility_C_OnAbilitySelected) == 0x000008, "Wrong alignment on HealAbility_C_OnAbilitySelected");
static_assert(sizeof(HealAbility_C_OnAbilitySelected) == 0x000060, "Wrong size on HealAbility_C_OnAbilitySelected");
static_assert(offsetof(HealAbility_C_OnAbilitySelected, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'HealAbility_C_OnAbilitySelected::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnAbilitySelected, CallFunc_GetRefMgr_RefMgr) == 0x000008, "Member 'HealAbility_C_OnAbilitySelected::CallFunc_GetRefMgr_RefMgr' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnAbilitySelected, K2Node_DynamicCast_AsMinion_3) == 0x000010, "Member 'HealAbility_C_OnAbilitySelected::K2Node_DynamicCast_AsMinion_3' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnAbilitySelected, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'HealAbility_C_OnAbilitySelected::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnAbilitySelected, CallFunc_GetDisplayManager_NewParam) == 0x000020, "Member 'HealAbility_C_OnAbilitySelected::CallFunc_GetDisplayManager_NewParam' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnAbilitySelected, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'HealAbility_C_OnAbilitySelected::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnAbilitySelected, CallFunc_GetRefMgr_RefMgr_1) == 0x000030, "Member 'HealAbility_C_OnAbilitySelected::CallFunc_GetRefMgr_RefMgr_1' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnAbilitySelected, CallFunc_GetOwner_ReturnValue_1) == 0x000038, "Member 'HealAbility_C_OnAbilitySelected::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnAbilitySelected, CallFunc_GetDisplayManager_NewParam_1) == 0x000040, "Member 'HealAbility_C_OnAbilitySelected::CallFunc_GetDisplayManager_NewParam_1' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnAbilitySelected, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'HealAbility_C_OnAbilitySelected::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function HealAbility.HealAbility_C.OnEnd
// 0x0058 (0x0058 - 0x0000)
struct HealAbility_C_OnEnd final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AReferenceManager_C*                    CallFunc_GetRefMgr_RefMgr;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMinion3_C*                             K2Node_DynamicCast_AsMinion_3;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B63[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerControllerBP_C*                  CallFunc_GetPlayerController_PC;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B64[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGridManagerBP_C*                       CallFunc_GetGridMgr_GM;                            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetEntityFromWorldPos_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B65[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAlliedCharacter_C*                     K2Node_DynamicCast_AsAllied_Character;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HealAbility_C_OnEnd) == 0x000008, "Wrong alignment on HealAbility_C_OnEnd");
static_assert(sizeof(HealAbility_C_OnEnd) == 0x000058, "Wrong size on HealAbility_C_OnEnd");
static_assert(offsetof(HealAbility_C_OnEnd, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'HealAbility_C_OnEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnEnd, CallFunc_GetRefMgr_RefMgr) == 0x000008, "Member 'HealAbility_C_OnEnd::CallFunc_GetRefMgr_RefMgr' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnEnd, K2Node_DynamicCast_AsMinion_3) == 0x000010, "Member 'HealAbility_C_OnEnd::K2Node_DynamicCast_AsMinion_3' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnEnd, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'HealAbility_C_OnEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnEnd, CallFunc_GetPlayerController_PC) == 0x000020, "Member 'HealAbility_C_OnEnd::CallFunc_GetPlayerController_PC' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnEnd, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'HealAbility_C_OnEnd::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnEnd, CallFunc_GetGridMgr_GM) == 0x000030, "Member 'HealAbility_C_OnEnd::CallFunc_GetGridMgr_GM' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnEnd, CallFunc_GetEntityFromWorldPos_ReturnValue) == 0x000038, "Member 'HealAbility_C_OnEnd::CallFunc_GetEntityFromWorldPos_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnEnd, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'HealAbility_C_OnEnd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnEnd, K2Node_DynamicCast_AsAllied_Character) == 0x000048, "Member 'HealAbility_C_OnEnd::K2Node_DynamicCast_AsAllied_Character' has a wrong offset!");
static_assert(offsetof(HealAbility_C_OnEnd, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'HealAbility_C_OnEnd::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function HealAbility.HealAbility_C.PreDisplayTarget
// 0x0020 (0x0020 - 0x0000)
struct HealAbility_C_PreDisplayTarget final
{
public:
	struct FVector                                Param_Target;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReferenceManager_C*                    CallFunc_GetRefMgr_RefMgr;                         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HealAbility_C_PreDisplayTarget) == 0x000008, "Wrong alignment on HealAbility_C_PreDisplayTarget");
static_assert(sizeof(HealAbility_C_PreDisplayTarget) == 0x000020, "Wrong size on HealAbility_C_PreDisplayTarget");
static_assert(offsetof(HealAbility_C_PreDisplayTarget, Param_Target) == 0x000000, "Member 'HealAbility_C_PreDisplayTarget::Param_Target' has a wrong offset!");
static_assert(offsetof(HealAbility_C_PreDisplayTarget, CallFunc_GetRefMgr_RefMgr) == 0x000018, "Member 'HealAbility_C_PreDisplayTarget::CallFunc_GetRefMgr_RefMgr' has a wrong offset!");

// Function HealAbility.HealAbility_C.Use
// 0x0050 (0x0050 - 0x0000)
struct HealAbility_C_Use final
{
public:
	struct FVector                                AbilityTarget;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                        NewLocalVar;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMinion3_C*                             K2Node_DynamicCast_AsMinion_3;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HealAbility_C_Use) == 0x000008, "Wrong alignment on HealAbility_C_Use");
static_assert(sizeof(HealAbility_C_Use) == 0x000050, "Wrong size on HealAbility_C_Use");
static_assert(offsetof(HealAbility_C_Use, AbilityTarget) == 0x000000, "Member 'HealAbility_C_Use::AbilityTarget' has a wrong offset!");
static_assert(offsetof(HealAbility_C_Use, NewLocalVar) == 0x000018, "Member 'HealAbility_C_Use::NewLocalVar' has a wrong offset!");
static_assert(offsetof(HealAbility_C_Use, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'HealAbility_C_Use::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_Use, CallFunc_Add_VectorVector_ReturnValue) == 0x000028, "Member 'HealAbility_C_Use::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_Use, K2Node_DynamicCast_AsMinion_3) == 0x000040, "Member 'HealAbility_C_Use::K2Node_DynamicCast_AsMinion_3' has a wrong offset!");
static_assert(offsetof(HealAbility_C_Use, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'HealAbility_C_Use::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function HealAbility.HealAbility_C.ValidateTarget
// 0x0080 (0x0080 - 0x0000)
struct HealAbility_C_ValidateTarget final
{
public:
	struct FVector                                Param_Target;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Valid_;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B66[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMinion3_C*                             K2Node_DynamicCast_AsMinion_3;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B67[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGridManagerBP_C*                       CallFunc_GetGridMgr_GM;                            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGridManagerBP_C*                       CallFunc_GetGridMgr_GM_1;                          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetEntityFromWorldPos_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B68[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAlliedCharacter_C*                     K2Node_DynamicCast_AsAllied_Character;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B69[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCellDistanceActor_ReturnValue;         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMinion3_C*                             K2Node_DynamicCast_AsMinion_3_1;                   // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HealAbility_C_ValidateTarget) == 0x000008, "Wrong alignment on HealAbility_C_ValidateTarget");
static_assert(sizeof(HealAbility_C_ValidateTarget) == 0x000080, "Wrong size on HealAbility_C_ValidateTarget");
static_assert(offsetof(HealAbility_C_ValidateTarget, Param_Target) == 0x000000, "Member 'HealAbility_C_ValidateTarget::Param_Target' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, Valid_) == 0x000018, "Member 'HealAbility_C_ValidateTarget::Valid_' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'HealAbility_C_ValidateTarget::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, CallFunc_GetOwner_ReturnValue_1) == 0x000028, "Member 'HealAbility_C_ValidateTarget::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, K2Node_DynamicCast_AsMinion_3) == 0x000030, "Member 'HealAbility_C_ValidateTarget::K2Node_DynamicCast_AsMinion_3' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'HealAbility_C_ValidateTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, CallFunc_GetGridMgr_GM) == 0x000040, "Member 'HealAbility_C_ValidateTarget::CallFunc_GetGridMgr_GM' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, CallFunc_GetGridMgr_GM_1) == 0x000048, "Member 'HealAbility_C_ValidateTarget::CallFunc_GetGridMgr_GM_1' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, CallFunc_GetEntityFromWorldPos_ReturnValue) == 0x000050, "Member 'HealAbility_C_ValidateTarget::CallFunc_GetEntityFromWorldPos_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'HealAbility_C_ValidateTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, K2Node_DynamicCast_AsAllied_Character) == 0x000060, "Member 'HealAbility_C_ValidateTarget::K2Node_DynamicCast_AsAllied_Character' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'HealAbility_C_ValidateTarget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, CallFunc_GetCellDistanceActor_ReturnValue) == 0x00006C, "Member 'HealAbility_C_ValidateTarget::CallFunc_GetCellDistanceActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, K2Node_DynamicCast_AsMinion_3_1) == 0x000070, "Member 'HealAbility_C_ValidateTarget::K2Node_DynamicCast_AsMinion_3_1' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'HealAbility_C_ValidateTarget::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(HealAbility_C_ValidateTarget, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000079, "Member 'HealAbility_C_ValidateTarget::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}
