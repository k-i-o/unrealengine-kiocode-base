#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_InputKeyHandler

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BPI_InputKeyHandler.BPI_InputKeyHandler_C.HandleKeyInput
// 0x00F8 (0x00F8 - 0x0000)
struct BPI_InputKeyHandler_C_HandleKeyInput final
{
public:
	struct FKeyEvent                              InKeyEvent;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          InPressed;                                         // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C63[0x7];                                      // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            OutReply;                                          // 0x0040(0x00B8)(Parm, OutParm)
};
static_assert(alignof(BPI_InputKeyHandler_C_HandleKeyInput) == 0x000008, "Wrong alignment on BPI_InputKeyHandler_C_HandleKeyInput");
static_assert(sizeof(BPI_InputKeyHandler_C_HandleKeyInput) == 0x0000F8, "Wrong size on BPI_InputKeyHandler_C_HandleKeyInput");
static_assert(offsetof(BPI_InputKeyHandler_C_HandleKeyInput, InKeyEvent) == 0x000000, "Member 'BPI_InputKeyHandler_C_HandleKeyInput::InKeyEvent' has a wrong offset!");
static_assert(offsetof(BPI_InputKeyHandler_C_HandleKeyInput, InPressed) == 0x000038, "Member 'BPI_InputKeyHandler_C_HandleKeyInput::InPressed' has a wrong offset!");
static_assert(offsetof(BPI_InputKeyHandler_C_HandleKeyInput, OutReply) == 0x000040, "Member 'BPI_InputKeyHandler_C_HandleKeyInput::OutReply' has a wrong offset!");

}
