#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbienceSoundController

#include "Basic.hpp"


namespace SDK::Params
{

// Function AmbienceSoundController.AmbienceSoundController_C.ExecuteUbergraph_AmbienceSoundController
// 0x0060 (0x0060 - 0x0000)
struct AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter_C*                     K2Node_CustomEvent_Player_1;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_C*                     K2Node_CustomEvent_Player;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_1;               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_2;               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController) == 0x000008, "Wrong alignment on AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController");
static_assert(sizeof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController) == 0x000060, "Wrong size on AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, EntryPoint) == 0x000000, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::EntryPoint' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, K2Node_CustomEvent_Player_1) == 0x000008, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::K2Node_CustomEvent_Player_1' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_IsLocallyControlled_ReturnValue) == 0x000010, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_SpawnSound2D_ReturnValue) == 0x000018, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, K2Node_CustomEvent_Player) == 0x000020, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000030, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x000044, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000045, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_IsValid_ReturnValue_1) == 0x000046, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_IsValid_ReturnValue_2) == 0x000047, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_SpawnSound2D_ReturnValue_1) == 0x000048, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_SpawnSound2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_SpawnSound2D_ReturnValue_2) == 0x000050, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_SpawnSound2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_IsValid_ReturnValue_3) == 0x000058, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController, CallFunc_IsValid_ReturnValue_4) == 0x000059, "Member 'AmbienceSoundController_C_ExecuteUbergraph_AmbienceSoundController::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

// Function AmbienceSoundController.AmbienceSoundController_C.StartSound
// 0x0008 (0x0008 - 0x0000)
struct AmbienceSoundController_C_StartSound final
{
public:
	class APlayerCharacter_C*                     Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AmbienceSoundController_C_StartSound) == 0x000008, "Wrong alignment on AmbienceSoundController_C_StartSound");
static_assert(sizeof(AmbienceSoundController_C_StartSound) == 0x000008, "Wrong size on AmbienceSoundController_C_StartSound");
static_assert(offsetof(AmbienceSoundController_C_StartSound, Player) == 0x000000, "Member 'AmbienceSoundController_C_StartSound::Player' has a wrong offset!");

// Function AmbienceSoundController.AmbienceSoundController_C.StopOutsideSound
// 0x0008 (0x0008 - 0x0000)
struct AmbienceSoundController_C_StopOutsideSound final
{
public:
	class APlayerCharacter_C*                     Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AmbienceSoundController_C_StopOutsideSound) == 0x000008, "Wrong alignment on AmbienceSoundController_C_StopOutsideSound");
static_assert(sizeof(AmbienceSoundController_C_StopOutsideSound) == 0x000008, "Wrong size on AmbienceSoundController_C_StopOutsideSound");
static_assert(offsetof(AmbienceSoundController_C_StopOutsideSound, Player) == 0x000000, "Member 'AmbienceSoundController_C_StopOutsideSound::Player' has a wrong offset!");

}
