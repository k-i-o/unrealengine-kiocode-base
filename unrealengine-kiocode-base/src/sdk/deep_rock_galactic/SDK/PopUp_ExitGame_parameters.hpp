#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PopUp_ExitGame

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PopUp_ExitGame.Popup_ExitGame_C.ExecuteUbergraph_Popup_ExitGame
// 0x00F0 (0x00F0 - 0x0000)
struct Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4913[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Title;                                // 0x0008(0x0018)(ConstParm)
	class FText                                   K2Node_Event_Message;                              // 0x0020(0x0018)(ConstParm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0038(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4914[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4915[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0068(0x0028)()
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00A0(0x0028)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWindowManager*                         CallFunc_GetWindowManager_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AllowLinkToExternalFeedback_ReturnValue;  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4916[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x00DC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame) == 0x000008, "Wrong alignment on Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame");
static_assert(sizeof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame) == 0x0000F0, "Wrong size on Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, EntryPoint) == 0x000000, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::EntryPoint' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, Temp_bool_Variable) == 0x000004, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, Temp_byte_Variable) == 0x000005, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, Temp_byte_Variable_1) == 0x000006, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, K2Node_Event_Title) == 0x000008, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::K2Node_Event_Title' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, K2Node_Event_Message) == 0x000020, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::K2Node_Event_Message' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, CallFunc_TextToUpper_ReturnValue) == 0x000038, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, K2Node_Event_IsDesignTime) == 0x000050, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, CallFunc_MenuColors_OutputColor) == 0x000054, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, K2Node_MakeStruct_SlateColor) == 0x000068, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, CallFunc_MenuColors_OutputColor_1) == 0x000090, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, K2Node_MakeStruct_SlateColor_1) == 0x0000A0, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000C8, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, CallFunc_GetWindowManager_ReturnValue) == 0x0000D0, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::CallFunc_GetWindowManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, CallFunc_AllowLinkToExternalFeedback_ReturnValue) == 0x0000D8, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::CallFunc_AllowLinkToExternalFeedback_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, K2Node_Select_Default) == 0x0000D9, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame, CallFunc_MenuColors_OutputColor_2) == 0x0000DC, "Member 'Popup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");

// Function PopUp_ExitGame.Popup_ExitGame_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Popup_ExitGame_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Popup_ExitGame_C_PreConstruct) == 0x000001, "Wrong alignment on Popup_ExitGame_C_PreConstruct");
static_assert(sizeof(Popup_ExitGame_C_PreConstruct) == 0x000001, "Wrong size on Popup_ExitGame_C_PreConstruct");
static_assert(offsetof(Popup_ExitGame_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Popup_ExitGame_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PopUp_ExitGame.Popup_ExitGame_C.OnShow
// 0x0030 (0x0030 - 0x0000)
struct Popup_ExitGame_C_OnShow final
{
public:
	class FText                                   Title;                                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   Message;                                           // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Popup_ExitGame_C_OnShow) == 0x000008, "Wrong alignment on Popup_ExitGame_C_OnShow");
static_assert(sizeof(Popup_ExitGame_C_OnShow) == 0x000030, "Wrong size on Popup_ExitGame_C_OnShow");
static_assert(offsetof(Popup_ExitGame_C_OnShow, Title) == 0x000000, "Member 'Popup_ExitGame_C_OnShow::Title' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_OnShow, Message) == 0x000018, "Member 'Popup_ExitGame_C_OnShow::Message' has a wrong offset!");

// Function PopUp_ExitGame.Popup_ExitGame_C.OnKeyUp
// 0x02B8 (0x02B8 - 0x0000)
struct Popup_ExitGame_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0128(0x00B8)()
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsKeyEventAction_ReturnValue;             // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4917[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01F0(0x00B8)()
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsKeyEventAction_ReturnValue_1;           // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Popup_ExitGame_C_OnKeyUp) == 0x000008, "Wrong alignment on Popup_ExitGame_C_OnKeyUp");
static_assert(sizeof(Popup_ExitGame_C_OnKeyUp) == 0x0002B8, "Wrong size on Popup_ExitGame_C_OnKeyUp");
static_assert(offsetof(Popup_ExitGame_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'Popup_ExitGame_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_OnKeyUp, InKeyEvent) == 0x000038, "Member 'Popup_ExitGame_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_OnKeyUp, ReturnValue) == 0x000070, "Member 'Popup_ExitGame_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_OnKeyUp, CallFunc_Unhandled_ReturnValue) == 0x000128, "Member 'Popup_ExitGame_C_OnKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_OnKeyUp, CallFunc_MakeLiteralName_ReturnValue) == 0x0001E0, "Member 'Popup_ExitGame_C_OnKeyUp::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_OnKeyUp, CallFunc_IsKeyEventAction_ReturnValue) == 0x0001E8, "Member 'Popup_ExitGame_C_OnKeyUp::CallFunc_IsKeyEventAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_OnKeyUp, CallFunc_Handled_ReturnValue) == 0x0001F0, "Member 'Popup_ExitGame_C_OnKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_OnKeyUp, CallFunc_MakeLiteralName_ReturnValue_1) == 0x0002A8, "Member 'Popup_ExitGame_C_OnKeyUp::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Popup_ExitGame_C_OnKeyUp, CallFunc_IsKeyEventAction_ReturnValue_1) == 0x0002B0, "Member 'Popup_ExitGame_C_OnKeyUp::CallFunc_IsKeyEventAction_ReturnValue_1' has a wrong offset!");

}
