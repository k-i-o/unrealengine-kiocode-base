#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaitingForPlayersUI

#include "Basic.hpp"


namespace SDK::Params
{

// Function WaitingForPlayersUI.WaitingForPlayersUI_C.ExecuteUbergraph_WaitingForPlayersUI
// 0x0050 (0x0050 - 0x0000)
struct WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URobberGI_C*                            K2Node_DynamicCast_AsRobber_GI;                    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APlayerCharacter_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI) == 0x000008, "Wrong alignment on WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI");
static_assert(sizeof(WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI) == 0x000050, "Wrong size on WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI");
static_assert(offsetof(WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI, EntryPoint) == 0x000000, "Member 'WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000008, "Member 'WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI, K2Node_DynamicCast_AsPlayer_Character) == 0x000010, "Member 'WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI, CallFunc_GetGameInstance_ReturnValue) == 0x000020, "Member 'WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI, K2Node_DynamicCast_AsRobber_GI) == 0x000028, "Member 'WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI::K2Node_DynamicCast_AsRobber_GI' has a wrong offset!");
static_assert(offsetof(WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI, CallFunc_GetAllActorsOfClass_OutActors) == 0x000038, "Member 'WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00004C, "Member 'WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}
