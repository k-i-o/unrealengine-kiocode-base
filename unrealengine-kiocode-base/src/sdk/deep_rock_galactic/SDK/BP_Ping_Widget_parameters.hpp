#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ping_Widget

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Ping_Widget.BP_Ping_Widget_C.ExecuteUbergraph_BP_Ping_Widget
// 0x0010 (0x0010 - 0x0000)
struct BP_Ping_Widget_C_ExecuteUbergraph_BP_Ping_Widget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34B4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ping_Widget_C_ExecuteUbergraph_BP_Ping_Widget) == 0x000008, "Wrong alignment on BP_Ping_Widget_C_ExecuteUbergraph_BP_Ping_Widget");
static_assert(sizeof(BP_Ping_Widget_C_ExecuteUbergraph_BP_Ping_Widget) == 0x000010, "Wrong size on BP_Ping_Widget_C_ExecuteUbergraph_BP_Ping_Widget");
static_assert(offsetof(BP_Ping_Widget_C_ExecuteUbergraph_BP_Ping_Widget, EntryPoint) == 0x000000, "Member 'BP_Ping_Widget_C_ExecuteUbergraph_BP_Ping_Widget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Ping_Widget_C_ExecuteUbergraph_BP_Ping_Widget, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_Ping_Widget_C_ExecuteUbergraph_BP_Ping_Widget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

