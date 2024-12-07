#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SelectCharacterOnlyConsole

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function BP_SelectCharacterOnlyConsole.BP_SelectCharacterOnlyConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_SelectCharacterOnlyConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature final
{
public:
	class APlayerCharacter*                       User;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputKeys                                    Key;                                               // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SelectCharacterOnlyConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SelectCharacterOnlyConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
static_assert(sizeof(BP_SelectCharacterOnlyConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature) == 0x000010, "Wrong size on BP_SelectCharacterOnlyConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
static_assert(offsetof(BP_SelectCharacterOnlyConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature, User) == 0x000000, "Member 'BP_SelectCharacterOnlyConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature::User' has a wrong offset!");
static_assert(offsetof(BP_SelectCharacterOnlyConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature, Key) == 0x000008, "Member 'BP_SelectCharacterOnlyConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature::Key' has a wrong offset!");

// Function BP_SelectCharacterOnlyConsole.BP_SelectCharacterOnlyConsole_C.ExecuteUbergraph_BP_SelectCharacterOnlyConsole
// 0x0030 (0x0030 - 0x0000)
struct BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F23[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_ComponentBoundEvent_user;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputKeys                                    K2Node_ComponentBoundEvent_key;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F24[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_SpaceRig_C*        K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole) == 0x000008, "Wrong alignment on BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole");
static_assert(sizeof(BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole) == 0x000030, "Wrong size on BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole");
static_assert(offsetof(BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole, EntryPoint) == 0x000000, "Member 'BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole, K2Node_ComponentBoundEvent_user) == 0x000008, "Member 'BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole::K2Node_ComponentBoundEvent_user' has a wrong offset!");
static_assert(offsetof(BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole, K2Node_ComponentBoundEvent_key) == 0x000010, "Member 'BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole::K2Node_ComponentBoundEvent_key' has a wrong offset!");
static_assert(offsetof(BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole, CallFunc_GetController_ReturnValue) == 0x000018, "Member 'BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole, K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig) == 0x000020, "Member 'BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole::K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig' has a wrong offset!");
static_assert(offsetof(BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole, CallFunc_HasAuthority_ReturnValue) == 0x000029, "Member 'BP_SelectCharacterOnlyConsole_C_ExecuteUbergraph_BP_SelectCharacterOnlyConsole::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

}

