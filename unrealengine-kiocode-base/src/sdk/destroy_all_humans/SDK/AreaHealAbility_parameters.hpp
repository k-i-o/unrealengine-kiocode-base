#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AreaHealAbility

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AreaHealAbility.AreaHealAbility_C.ContinueAction
// 0x0018 (0x0018 - 0x0000)
struct AreaHealAbility_C_ContinueAction final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMinion3_C*                             K2Node_DynamicCast_AsMinion_3;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AreaHealAbility_C_ContinueAction) == 0x000008, "Wrong alignment on AreaHealAbility_C_ContinueAction");
static_assert(sizeof(AreaHealAbility_C_ContinueAction) == 0x000018, "Wrong size on AreaHealAbility_C_ContinueAction");
static_assert(offsetof(AreaHealAbility_C_ContinueAction, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'AreaHealAbility_C_ContinueAction::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_ContinueAction, K2Node_DynamicCast_AsMinion_3) == 0x000008, "Member 'AreaHealAbility_C_ContinueAction::K2Node_DynamicCast_AsMinion_3' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_ContinueAction, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'AreaHealAbility_C_ContinueAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function AreaHealAbility.AreaHealAbility_C.OnAbilitySelected
// 0x0060 (0x0060 - 0x0000)
struct AreaHealAbility_C_OnAbilitySelected final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AReferenceManager_C*                    CallFunc_GetRefMgr_RefMgr;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMinion3_C*                             K2Node_DynamicCast_AsMinion_3;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2708[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADisplayManager_C*                      CallFunc_GetDisplayManager_NewParam;               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2709[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AReferenceManager_C*                    CallFunc_GetRefMgr_RefMgr_1;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADisplayManager_C*                      CallFunc_GetDisplayManager_NewParam_1;             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AreaHealAbility_C_OnAbilitySelected) == 0x000008, "Wrong alignment on AreaHealAbility_C_OnAbilitySelected");
static_assert(sizeof(AreaHealAbility_C_OnAbilitySelected) == 0x000060, "Wrong size on AreaHealAbility_C_OnAbilitySelected");
static_assert(offsetof(AreaHealAbility_C_OnAbilitySelected, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'AreaHealAbility_C_OnAbilitySelected::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnAbilitySelected, CallFunc_GetRefMgr_RefMgr) == 0x000008, "Member 'AreaHealAbility_C_OnAbilitySelected::CallFunc_GetRefMgr_RefMgr' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnAbilitySelected, K2Node_DynamicCast_AsMinion_3) == 0x000010, "Member 'AreaHealAbility_C_OnAbilitySelected::K2Node_DynamicCast_AsMinion_3' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnAbilitySelected, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'AreaHealAbility_C_OnAbilitySelected::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnAbilitySelected, CallFunc_GetDisplayManager_NewParam) == 0x000020, "Member 'AreaHealAbility_C_OnAbilitySelected::CallFunc_GetDisplayManager_NewParam' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnAbilitySelected, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'AreaHealAbility_C_OnAbilitySelected::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnAbilitySelected, CallFunc_GetRefMgr_RefMgr_1) == 0x000030, "Member 'AreaHealAbility_C_OnAbilitySelected::CallFunc_GetRefMgr_RefMgr_1' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnAbilitySelected, CallFunc_GetOwner_ReturnValue_1) == 0x000038, "Member 'AreaHealAbility_C_OnAbilitySelected::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnAbilitySelected, CallFunc_GetDisplayManager_NewParam_1) == 0x000040, "Member 'AreaHealAbility_C_OnAbilitySelected::CallFunc_GetDisplayManager_NewParam_1' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnAbilitySelected, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'AreaHealAbility_C_OnAbilitySelected::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function AreaHealAbility.AreaHealAbility_C.OnEnd
// 0x00B8 (0x00B8 - 0x0000)
struct AreaHealAbility_C_OnEnd final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_270A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AReferenceManager_C*                    CallFunc_GetRefMgr_RefMgr;                         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMinion3_C*                             K2Node_DynamicCast_AsMinion_3;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_270B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerControllerBP_C*                  CallFunc_GetPlayerController_PC;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_270C[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGridManagerBP_C*                       CallFunc_GetGridMgr_GM;                            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetEntitiesAroundWordPos_ReturnValue;     // 0x0070(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_270D[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_270E[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMyCharacter_C*                         K2Node_DynamicCast_AsMy_Character;                 // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_270F[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAlliedCharacter_C*                     K2Node_DynamicCast_AsAllied_Character;             // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AreaHealAbility_C_OnEnd) == 0x000008, "Wrong alignment on AreaHealAbility_C_OnEnd");
static_assert(sizeof(AreaHealAbility_C_OnEnd) == 0x0000B8, "Wrong size on AreaHealAbility_C_OnEnd");
static_assert(offsetof(AreaHealAbility_C_OnEnd, Temp_int_Array_Index_Variable) == 0x000000, "Member 'AreaHealAbility_C_OnEnd::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'AreaHealAbility_C_OnEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_GetRefMgr_RefMgr) == 0x000010, "Member 'AreaHealAbility_C_OnEnd::CallFunc_GetRefMgr_RefMgr' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, K2Node_DynamicCast_AsMinion_3) == 0x000018, "Member 'AreaHealAbility_C_OnEnd::K2Node_DynamicCast_AsMinion_3' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'AreaHealAbility_C_OnEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_GetPlayerController_PC) == 0x000028, "Member 'AreaHealAbility_C_OnEnd::CallFunc_GetPlayerController_PC' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_Subtract_IntInt_ReturnValue) == 0x000030, "Member 'AreaHealAbility_C_OnEnd::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_GetOwner_ReturnValue_1) == 0x000038, "Member 'AreaHealAbility_C_OnEnd::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'AreaHealAbility_C_OnEnd::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'AreaHealAbility_C_OnEnd::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_GetOwner_ReturnValue_2) == 0x000048, "Member 'AreaHealAbility_C_OnEnd::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_GetGridMgr_GM) == 0x000050, "Member 'AreaHealAbility_C_OnEnd::CallFunc_GetGridMgr_GM' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'AreaHealAbility_C_OnEnd::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_GetEntitiesAroundWordPos_ReturnValue) == 0x000070, "Member 'AreaHealAbility_C_OnEnd::CallFunc_GetEntitiesAroundWordPos_ReturnValue' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'AreaHealAbility_C_OnEnd::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_Array_Get_Item) == 0x000088, "Member 'AreaHealAbility_C_OnEnd::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'AreaHealAbility_C_OnEnd::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, K2Node_DynamicCast_AsMy_Character) == 0x000098, "Member 'AreaHealAbility_C_OnEnd::K2Node_DynamicCast_AsMy_Character' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'AreaHealAbility_C_OnEnd::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, K2Node_DynamicCast_AsAllied_Character) == 0x0000A8, "Member 'AreaHealAbility_C_OnEnd::K2Node_DynamicCast_AsAllied_Character' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_OnEnd, K2Node_DynamicCast_bSuccess_2) == 0x0000B0, "Member 'AreaHealAbility_C_OnEnd::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function AreaHealAbility.AreaHealAbility_C.Use
// 0x0030 (0x0030 - 0x0000)
struct AreaHealAbility_C_Use final
{
public:
	struct FVector                                AbilityTarget;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMinion3_C*                             K2Node_DynamicCast_AsMinion_3;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AreaHealAbility_C_Use) == 0x000008, "Wrong alignment on AreaHealAbility_C_Use");
static_assert(sizeof(AreaHealAbility_C_Use) == 0x000030, "Wrong size on AreaHealAbility_C_Use");
static_assert(offsetof(AreaHealAbility_C_Use, AbilityTarget) == 0x000000, "Member 'AreaHealAbility_C_Use::AbilityTarget' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_Use, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AreaHealAbility_C_Use::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_Use, K2Node_DynamicCast_AsMinion_3) == 0x000020, "Member 'AreaHealAbility_C_Use::K2Node_DynamicCast_AsMinion_3' has a wrong offset!");
static_assert(offsetof(AreaHealAbility_C_Use, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AreaHealAbility_C_Use::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
