#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_LaserPointerScanProgress

#include "Basic.hpp"


namespace SDK::Params
{

// Function HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C.SetProgress
// 0x0004 (0x0004 - 0x0000)
struct HUD_LaserPointerScanProgress_C_SetProgress final
{
public:
	float                                         Progress;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_LaserPointerScanProgress_C_SetProgress) == 0x000004, "Wrong alignment on HUD_LaserPointerScanProgress_C_SetProgress");
static_assert(sizeof(HUD_LaserPointerScanProgress_C_SetProgress) == 0x000004, "Wrong size on HUD_LaserPointerScanProgress_C_SetProgress");
static_assert(offsetof(HUD_LaserPointerScanProgress_C_SetProgress, Progress) == 0x000000, "Member 'HUD_LaserPointerScanProgress_C_SetProgress::Progress' has a wrong offset!");

// Function HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C.ExecuteUbergraph_HUD_LaserPointerScanProgress
// 0x0008 (0x0008 - 0x0000)
struct HUD_LaserPointerScanProgress_C_ExecuteUbergraph_HUD_LaserPointerScanProgress final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Progress;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_LaserPointerScanProgress_C_ExecuteUbergraph_HUD_LaserPointerScanProgress) == 0x000004, "Wrong alignment on HUD_LaserPointerScanProgress_C_ExecuteUbergraph_HUD_LaserPointerScanProgress");
static_assert(sizeof(HUD_LaserPointerScanProgress_C_ExecuteUbergraph_HUD_LaserPointerScanProgress) == 0x000008, "Wrong size on HUD_LaserPointerScanProgress_C_ExecuteUbergraph_HUD_LaserPointerScanProgress");
static_assert(offsetof(HUD_LaserPointerScanProgress_C_ExecuteUbergraph_HUD_LaserPointerScanProgress, EntryPoint) == 0x000000, "Member 'HUD_LaserPointerScanProgress_C_ExecuteUbergraph_HUD_LaserPointerScanProgress::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUD_LaserPointerScanProgress_C_ExecuteUbergraph_HUD_LaserPointerScanProgress, K2Node_CustomEvent_Progress) == 0x000004, "Member 'HUD_LaserPointerScanProgress_C_ExecuteUbergraph_HUD_LaserPointerScanProgress::K2Node_CustomEvent_Progress' has a wrong offset!");

}
