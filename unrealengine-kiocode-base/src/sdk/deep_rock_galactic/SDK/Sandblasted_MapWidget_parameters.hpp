#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sandblasted_MapWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function Sandblasted_MapWidget.Sandblasted_MapWidget_C.GetBasePanel
// 0x0008 (0x0008 - 0x0000)
struct Sandblasted_MapWidget_C_GetBasePanel final
{
public:
	class UCanvasPanel*                           Panel;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sandblasted_MapWidget_C_GetBasePanel) == 0x000008, "Wrong alignment on Sandblasted_MapWidget_C_GetBasePanel");
static_assert(sizeof(Sandblasted_MapWidget_C_GetBasePanel) == 0x000008, "Wrong size on Sandblasted_MapWidget_C_GetBasePanel");
static_assert(offsetof(Sandblasted_MapWidget_C_GetBasePanel, Panel) == 0x000000, "Member 'Sandblasted_MapWidget_C_GetBasePanel::Panel' has a wrong offset!");

}
