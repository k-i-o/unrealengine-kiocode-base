#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Promotion_Console

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Promotion_Console.BP_Promotion_Console_C.OnOpenConsole
// 0x0008 (0x0008 - 0x0000)
struct BP_Promotion_Console_C_OnOpenConsole final
{
public:
	class ABP_PlayerController_SpaceRig_C*        InPlayerController;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Promotion_Console_C_OnOpenConsole) == 0x000008, "Wrong alignment on BP_Promotion_Console_C_OnOpenConsole");
static_assert(sizeof(BP_Promotion_Console_C_OnOpenConsole) == 0x000008, "Wrong size on BP_Promotion_Console_C_OnOpenConsole");
static_assert(offsetof(BP_Promotion_Console_C_OnOpenConsole, InPlayerController) == 0x000000, "Member 'BP_Promotion_Console_C_OnOpenConsole::InPlayerController' has a wrong offset!");

// Function BP_Promotion_Console.BP_Promotion_Console_C.ExecuteUbergraph_BP_Promotion_Console
// 0x0010 (0x0010 - 0x0000)
struct BP_Promotion_Console_C_ExecuteUbergraph_BP_Promotion_Console final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C16[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_SpaceRig_C*        K2Node_Event_InPlayerController;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Promotion_Console_C_ExecuteUbergraph_BP_Promotion_Console) == 0x000008, "Wrong alignment on BP_Promotion_Console_C_ExecuteUbergraph_BP_Promotion_Console");
static_assert(sizeof(BP_Promotion_Console_C_ExecuteUbergraph_BP_Promotion_Console) == 0x000010, "Wrong size on BP_Promotion_Console_C_ExecuteUbergraph_BP_Promotion_Console");
static_assert(offsetof(BP_Promotion_Console_C_ExecuteUbergraph_BP_Promotion_Console, EntryPoint) == 0x000000, "Member 'BP_Promotion_Console_C_ExecuteUbergraph_BP_Promotion_Console::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Promotion_Console_C_ExecuteUbergraph_BP_Promotion_Console, K2Node_Event_InPlayerController) == 0x000008, "Member 'BP_Promotion_Console_C_ExecuteUbergraph_BP_Promotion_Console::K2Node_Event_InPlayerController' has a wrong offset!");

}
