#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WidgetCabinPlayerName

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WidgetCabinPlayerName.WidgetCabinPlayerName_C.SetPlayerName
// 0x0018 (0x0018 - 0x0000)
struct WidgetCabinPlayerName_C_SetPlayerName final
{
public:
	class FText                                   NewName;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WidgetCabinPlayerName_C_SetPlayerName) == 0x000008, "Wrong alignment on WidgetCabinPlayerName_C_SetPlayerName");
static_assert(sizeof(WidgetCabinPlayerName_C_SetPlayerName) == 0x000018, "Wrong size on WidgetCabinPlayerName_C_SetPlayerName");
static_assert(offsetof(WidgetCabinPlayerName_C_SetPlayerName, NewName) == 0x000000, "Member 'WidgetCabinPlayerName_C_SetPlayerName::NewName' has a wrong offset!");

// Function WidgetCabinPlayerName.WidgetCabinPlayerName_C.SetColor
// 0x0038 (0x0038 - 0x0000)
struct WidgetCabinPlayerName_C_SetColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
};
static_assert(alignof(WidgetCabinPlayerName_C_SetColor) == 0x000008, "Wrong alignment on WidgetCabinPlayerName_C_SetColor");
static_assert(sizeof(WidgetCabinPlayerName_C_SetColor) == 0x000038, "Wrong size on WidgetCabinPlayerName_C_SetColor");
static_assert(offsetof(WidgetCabinPlayerName_C_SetColor, Color) == 0x000000, "Member 'WidgetCabinPlayerName_C_SetColor::Color' has a wrong offset!");
static_assert(offsetof(WidgetCabinPlayerName_C_SetColor, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'WidgetCabinPlayerName_C_SetColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}

