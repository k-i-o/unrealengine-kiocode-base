#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TOOLTIP_UpgGear_GearTab

#include "Basic.hpp"

#include "ENU_TextCase_structs.hpp"


namespace SDK::Params
{

// Function TOOLTIP_UpgGear_GearTab.TOOLTIP_UpgGear_GearTab_C.SetText
// 0x0020 (0x0020 - 0x0000)
struct TOOLTIP_UpgGear_GearTab_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ENU_TextCase                                  Text_Case;                                         // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TOOLTIP_UpgGear_GearTab_C_SetText) == 0x000008, "Wrong alignment on TOOLTIP_UpgGear_GearTab_C_SetText");
static_assert(sizeof(TOOLTIP_UpgGear_GearTab_C_SetText) == 0x000020, "Wrong size on TOOLTIP_UpgGear_GearTab_C_SetText");
static_assert(offsetof(TOOLTIP_UpgGear_GearTab_C_SetText, InText) == 0x000000, "Member 'TOOLTIP_UpgGear_GearTab_C_SetText::InText' has a wrong offset!");
static_assert(offsetof(TOOLTIP_UpgGear_GearTab_C_SetText, Text_Case) == 0x000018, "Member 'TOOLTIP_UpgGear_GearTab_C_SetText::Text_Case' has a wrong offset!");

}
