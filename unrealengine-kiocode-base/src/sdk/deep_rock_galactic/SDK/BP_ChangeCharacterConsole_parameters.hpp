#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChangeCharacterConsole

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function BP_ChangeCharacterConsole.BP_ChangeCharacterConsole_C.IsNewPlayer
// 0x0038 (0x0038 - 0x0000)
struct BP_ChangeCharacterConsole_C_IsNewPlayer final
{
public:
	class ABP_PlayerController_SpaceRig_C*        PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsNewPlayer;                                 // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          FoundController;                                   // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F03[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F04[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F05[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_SpaceRig_C*        CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ChangeCharacterConsole_C_IsNewPlayer) == 0x000008, "Wrong alignment on BP_ChangeCharacterConsole_C_IsNewPlayer");
static_assert(sizeof(BP_ChangeCharacterConsole_C_IsNewPlayer) == 0x000038, "Wrong size on BP_ChangeCharacterConsole_C_IsNewPlayer");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, PlayerController) == 0x000000, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::PlayerController' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, Param_IsNewPlayer) == 0x000008, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::Param_IsNewPlayer' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, FoundController) == 0x000009, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::FoundController' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, Temp_bool_True_if_break_was_hit_Variable) == 0x00000A, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, CallFunc_Array_Add_ReturnValue) == 0x000018, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, CallFunc_Not_PreBool_ReturnValue_1) == 0x000020, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000034, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, CallFunc_Less_IntInt_ReturnValue) == 0x000035, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_IsNewPlayer, CallFunc_BooleanAND_ReturnValue) == 0x000036, "Member 'BP_ChangeCharacterConsole_C_IsNewPlayer::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_ChangeCharacterConsole.BP_ChangeCharacterConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_ChangeCharacterConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature final
{
public:
	class APlayerCharacter*                       User;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputKeys                                    Key;                                               // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChangeCharacterConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_ChangeCharacterConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
static_assert(sizeof(BP_ChangeCharacterConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature) == 0x000010, "Wrong size on BP_ChangeCharacterConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
static_assert(offsetof(BP_ChangeCharacterConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature, User) == 0x000000, "Member 'BP_ChangeCharacterConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature::User' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature, Key) == 0x000008, "Member 'BP_ChangeCharacterConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature::Key' has a wrong offset!");

// Function BP_ChangeCharacterConsole.BP_ChangeCharacterConsole_C.ExecuteUbergraph_BP_ChangeCharacterConsole
// 0x0038 (0x0038 - 0x0000)
struct BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F06[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStatHat*                               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       K2Node_ComponentBoundEvent_user;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputKeys                                    K2Node_ComponentBoundEvent_key;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F07[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_SpaceRig_C*        K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNewPlayer_IsNewPlayer;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole) == 0x000008, "Wrong alignment on BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole");
static_assert(sizeof(BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole) == 0x000038, "Wrong size on BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole");
static_assert(offsetof(BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole, EntryPoint) == 0x000000, "Member 'BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole, K2Node_ComponentBoundEvent_user) == 0x000010, "Member 'BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole::K2Node_ComponentBoundEvent_user' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole, K2Node_ComponentBoundEvent_key) == 0x000018, "Member 'BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole::K2Node_ComponentBoundEvent_key' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole, K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig) == 0x000028, "Member 'BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole::K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole, CallFunc_IsNewPlayer_IsNewPlayer) == 0x000031, "Member 'BP_ChangeCharacterConsole_C_ExecuteUbergraph_BP_ChangeCharacterConsole::CallFunc_IsNewPlayer_IsNewPlayer' has a wrong offset!");

}

