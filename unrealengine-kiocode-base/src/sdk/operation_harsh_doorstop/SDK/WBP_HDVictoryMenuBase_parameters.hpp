#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDVictoryMenuBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HDMain_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.ExecuteUbergraph_WBP_HDVictoryMenuBase
// 0x0040 (0x0040 - 0x0000)
struct WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FCD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHDTeamState*                           CallFunc_GetHDTeamStateForTeam_HDTeamState;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHDTeamState*                           CallFunc_GetHDTeamStateForTeam_HDTeamState_1;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHDTeamState*                           CallFunc_GetHDTeamStateForTeam_HDTeamState_2;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base;  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FCE[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base_1; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase) == 0x000008, "Wrong alignment on WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase");
static_assert(sizeof(WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase) == 0x000040, "Wrong size on WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase, EntryPoint) == 0x000000, "Member 'WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase, CallFunc_GetHDTeamStateForTeam_HDTeamState) == 0x000008, "Member 'WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase::CallFunc_GetHDTeamStateForTeam_HDTeamState' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase, CallFunc_GetHDTeamStateForTeam_HDTeamState_1) == 0x000010, "Member 'WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase::CallFunc_GetHDTeamStateForTeam_HDTeamState_1' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase, CallFunc_GetHDTeamStateForTeam_HDTeamState_2) == 0x000018, "Member 'WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase::CallFunc_GetHDTeamStateForTeam_HDTeamState_2' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase, K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base) == 0x000020, "Member 'WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase::K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase, K2Node_ClassDynamicCast_bSuccess) == 0x000028, "Member 'WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase, K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base_1) == 0x000030, "Member 'WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase::K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base_1' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase, K2Node_ClassDynamicCast_bSuccess_1) == 0x000038, "Member 'WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");

// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnMouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct WBP_HDVictoryMenuBase_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
static_assert(alignof(WBP_HDVictoryMenuBase_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WBP_HDVictoryMenuBase_C_OnMouseButtonDown");
static_assert(sizeof(WBP_HDVictoryMenuBase_C_OnMouseButtonDown) == 0x000218, "Wrong size on WBP_HDVictoryMenuBase_C_OnMouseButtonDown");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_HDVictoryMenuBase_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'WBP_HDVictoryMenuBase_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'WBP_HDVictoryMenuBase_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000160, "Member 'WBP_HDVictoryMenuBase_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnMouseButtonDoubleClick
// 0x0218 (0x0218 - 0x0000)
struct WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick final
{
public:
	struct FGeometry                              InMyGeometry;                                      // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          InMouseEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
static_assert(alignof(WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick) == 0x000008, "Wrong alignment on WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick");
static_assert(sizeof(WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick) == 0x000218, "Wrong size on WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick, InMyGeometry) == 0x000000, "Member 'WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick::InMyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick, InMouseEvent) == 0x000038, "Member 'WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick::InMouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick, ReturnValue) == 0x0000A8, "Member 'WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick, CallFunc_Handled_ReturnValue) == 0x000160, "Member 'WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupVictoryText
// 0x0038 (0x0038 - 0x0000)
struct WBP_HDVictoryMenuBase_C_SetupVictoryText final
{
public:
	EHDTeam                                       Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FCF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0008(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0020(0x0018)()
};
static_assert(alignof(WBP_HDVictoryMenuBase_C_SetupVictoryText) == 0x000008, "Wrong alignment on WBP_HDVictoryMenuBase_C_SetupVictoryText");
static_assert(sizeof(WBP_HDVictoryMenuBase_C_SetupVictoryText) == 0x000038, "Wrong size on WBP_HDVictoryMenuBase_C_SetupVictoryText");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupVictoryText, Temp_byte_Variable) == 0x000000, "Member 'WBP_HDVictoryMenuBase_C_SetupVictoryText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupVictoryText, K2Node_Select_Default) == 0x000008, "Member 'WBP_HDVictoryMenuBase_C_SetupVictoryText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupVictoryText, CallFunc_TextToUpper_ReturnValue) == 0x000020, "Member 'WBP_HDVictoryMenuBase_C_SetupVictoryText::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupMapNameText
// 0x0078 (0x0078 - 0x0000)
struct WBP_HDVictoryMenuBase_C_SetupMapNameText final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMapName_ReturnValue;                   // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AWorldSettings*                         CallFunc_GetWorldSettings_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class ATBWorldSettings*                       K2Node_DynamicCast_AsTBWorld_Settings;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD1[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0048(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0060(0x0018)()
};
static_assert(alignof(WBP_HDVictoryMenuBase_C_SetupMapNameText) == 0x000008, "Wrong alignment on WBP_HDVictoryMenuBase_C_SetupMapNameText");
static_assert(sizeof(WBP_HDVictoryMenuBase_C_SetupMapNameText) == 0x000078, "Wrong size on WBP_HDVictoryMenuBase_C_SetupMapNameText");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupMapNameText, Temp_bool_Variable) == 0x000000, "Member 'WBP_HDVictoryMenuBase_C_SetupMapNameText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupMapNameText, CallFunc_GetMapName_ReturnValue) == 0x000008, "Member 'WBP_HDVictoryMenuBase_C_SetupMapNameText::CallFunc_GetMapName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupMapNameText, CallFunc_GetWorldSettings_ReturnValue) == 0x000018, "Member 'WBP_HDVictoryMenuBase_C_SetupMapNameText::CallFunc_GetWorldSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupMapNameText, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_HDVictoryMenuBase_C_SetupMapNameText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupMapNameText, K2Node_DynamicCast_AsTBWorld_Settings) == 0x000038, "Member 'WBP_HDVictoryMenuBase_C_SetupMapNameText::K2Node_DynamicCast_AsTBWorld_Settings' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupMapNameText, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_HDVictoryMenuBase_C_SetupMapNameText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupMapNameText, CallFunc_TextIsEmpty_ReturnValue) == 0x000041, "Member 'WBP_HDVictoryMenuBase_C_SetupMapNameText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupMapNameText, K2Node_Select_Default) == 0x000048, "Member 'WBP_HDVictoryMenuBase_C_SetupMapNameText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupMapNameText, CallFunc_TextToUpper_ReturnValue) == 0x000060, "Member 'WBP_HDVictoryMenuBase_C_SetupMapNameText::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupElapsedTimeText
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_HDVictoryMenuBase_C_SetupElapsedTimeText final
{
public:
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0078(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
};
static_assert(alignof(WBP_HDVictoryMenuBase_C_SetupElapsedTimeText) == 0x000008, "Wrong alignment on WBP_HDVictoryMenuBase_C_SetupElapsedTimeText");
static_assert(sizeof(WBP_HDVictoryMenuBase_C_SetupElapsedTimeText) == 0x0000E0, "Wrong size on WBP_HDVictoryMenuBase_C_SetupElapsedTimeText");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupElapsedTimeText, CallFunc_Divide_IntInt_ReturnValue) == 0x000000, "Member 'WBP_HDVictoryMenuBase_C_SetupElapsedTimeText::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupElapsedTimeText, CallFunc_Percent_IntInt_ReturnValue) == 0x000004, "Member 'WBP_HDVictoryMenuBase_C_SetupElapsedTimeText::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupElapsedTimeText, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_HDVictoryMenuBase_C_SetupElapsedTimeText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupElapsedTimeText, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000020, "Member 'WBP_HDVictoryMenuBase_C_SetupElapsedTimeText::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupElapsedTimeText, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'WBP_HDVictoryMenuBase_C_SetupElapsedTimeText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupElapsedTimeText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000078, "Member 'WBP_HDVictoryMenuBase_C_SetupElapsedTimeText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupElapsedTimeText, K2Node_MakeArray_Array) == 0x0000B8, "Member 'WBP_HDVictoryMenuBase_C_SetupElapsedTimeText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupElapsedTimeText, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'WBP_HDVictoryMenuBase_C_SetupElapsedTimeText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupGameModeNameText
// 0x0080 (0x0080 - 0x0000)
struct WBP_HDVictoryMenuBase_C_SetupGameModeNameText final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsDFBase_Game_Mode;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD3[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD4[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0050(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0068(0x0018)()
};
static_assert(alignof(WBP_HDVictoryMenuBase_C_SetupGameModeNameText) == 0x000008, "Wrong alignment on WBP_HDVictoryMenuBase_C_SetupGameModeNameText");
static_assert(sizeof(WBP_HDVictoryMenuBase_C_SetupGameModeNameText) == 0x000080, "Wrong size on WBP_HDVictoryMenuBase_C_SetupGameModeNameText");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupGameModeNameText, Temp_bool_Variable) == 0x000000, "Member 'WBP_HDVictoryMenuBase_C_SetupGameModeNameText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupGameModeNameText, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'WBP_HDVictoryMenuBase_C_SetupGameModeNameText::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupGameModeNameText, K2Node_ClassDynamicCast_AsDFBase_Game_Mode) == 0x000010, "Member 'WBP_HDVictoryMenuBase_C_SetupGameModeNameText::K2Node_ClassDynamicCast_AsDFBase_Game_Mode' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupGameModeNameText, K2Node_ClassDynamicCast_bSuccess) == 0x000018, "Member 'WBP_HDVictoryMenuBase_C_SetupGameModeNameText::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupGameModeNameText, CallFunc_GetClassDisplayName_ReturnValue) == 0x000020, "Member 'WBP_HDVictoryMenuBase_C_SetupGameModeNameText::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupGameModeNameText, CallFunc_TextIsEmpty_ReturnValue) == 0x000030, "Member 'WBP_HDVictoryMenuBase_C_SetupGameModeNameText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupGameModeNameText, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'WBP_HDVictoryMenuBase_C_SetupGameModeNameText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupGameModeNameText, K2Node_Select_Default) == 0x000050, "Member 'WBP_HDVictoryMenuBase_C_SetupGameModeNameText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupGameModeNameText, CallFunc_TextToUpper_ReturnValue) == 0x000068, "Member 'WBP_HDVictoryMenuBase_C_SetupGameModeNameText::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupTeamScoreText
// 0x0030 (0x0030 - 0x0000)
struct WBP_HDVictoryMenuBase_C_SetupTeamScoreText final
{
public:
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0000(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0018(0x0018)()
};
static_assert(alignof(WBP_HDVictoryMenuBase_C_SetupTeamScoreText) == 0x000008, "Wrong alignment on WBP_HDVictoryMenuBase_C_SetupTeamScoreText");
static_assert(sizeof(WBP_HDVictoryMenuBase_C_SetupTeamScoreText) == 0x000030, "Wrong size on WBP_HDVictoryMenuBase_C_SetupTeamScoreText");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupTeamScoreText, CallFunc_Conv_IntToText_ReturnValue) == 0x000000, "Member 'WBP_HDVictoryMenuBase_C_SetupTeamScoreText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_SetupTeamScoreText, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000018, "Member 'WBP_HDVictoryMenuBase_C_SetupTeamScoreText::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.PlayWinLossMenuMusic
// 0x0050 (0x0050 - 0x0000)
struct WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EHDTeam                                       CallFunc_GetPlayerTeam_PlayerTeam;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FD6[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USoundBase*                             CallFunc_GetMusicTrackToUse_SoundToUse;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic) == 0x000008, "Wrong alignment on WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic");
static_assert(sizeof(WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic) == 0x000050, "Wrong size on WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic, CallFunc_GetDisplayName_ReturnValue) == 0x000008, "Member 'WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic, CallFunc_GetPlayerTeam_PlayerTeam) == 0x000028, "Member 'WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic::CallFunc_GetPlayerTeam_PlayerTeam' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000030, "Member 'WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic, CallFunc_GetMusicTrackToUse_SoundToUse) == 0x000040, "Member 'WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic::CallFunc_GetMusicTrackToUse_SoundToUse' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic, CallFunc_SpawnSound2D_ReturnValue) == 0x000048, "Member 'WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");

// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.GetMusicTrackToUse
// 0x0048 (0x0048 - 0x0000)
struct WBP_HDVictoryMenuBase_C_GetMusicTrackToUse final
{
public:
	EHDTeam                                       PlayerTeam;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayerWon;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD7[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SoundToUse;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHDTeam                                       Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FD8[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable_1;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EHDTeam                                       Temp_byte_Variable_1;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FD9[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_Select_Default_1;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_Select_Default_2;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse) == 0x000008, "Wrong alignment on WBP_HDVictoryMenuBase_C_GetMusicTrackToUse");
static_assert(sizeof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse) == 0x000048, "Wrong size on WBP_HDVictoryMenuBase_C_GetMusicTrackToUse");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse, PlayerTeam) == 0x000000, "Member 'WBP_HDVictoryMenuBase_C_GetMusicTrackToUse::PlayerTeam' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse, bPlayerWon) == 0x000001, "Member 'WBP_HDVictoryMenuBase_C_GetMusicTrackToUse::bPlayerWon' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse, SoundToUse) == 0x000008, "Member 'WBP_HDVictoryMenuBase_C_GetMusicTrackToUse::SoundToUse' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse, Temp_object_Variable) == 0x000010, "Member 'WBP_HDVictoryMenuBase_C_GetMusicTrackToUse::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse, Temp_byte_Variable) == 0x000018, "Member 'WBP_HDVictoryMenuBase_C_GetMusicTrackToUse::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse, Temp_object_Variable_1) == 0x000020, "Member 'WBP_HDVictoryMenuBase_C_GetMusicTrackToUse::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse, Temp_bool_Variable) == 0x000028, "Member 'WBP_HDVictoryMenuBase_C_GetMusicTrackToUse::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse, Temp_byte_Variable_1) == 0x000029, "Member 'WBP_HDVictoryMenuBase_C_GetMusicTrackToUse::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse, K2Node_Select_Default) == 0x000030, "Member 'WBP_HDVictoryMenuBase_C_GetMusicTrackToUse::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse, K2Node_Select_Default_1) == 0x000038, "Member 'WBP_HDVictoryMenuBase_C_GetMusicTrackToUse::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetMusicTrackToUse, K2Node_Select_Default_2) == 0x000040, "Member 'WBP_HDVictoryMenuBase_C_GetMusicTrackToUse::K2Node_Select_Default_2' has a wrong offset!");

// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.GetPlayerTeam
// 0x000C (0x000C - 0x0000)
struct WBP_HDVictoryMenuBase_C_GetPlayerTeam final
{
public:
	EHDTeam                                       PlayerTeam;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EHDTeam                                       Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHDTeam                                       Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EHDTeam                                       Temp_byte_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EHDTeam                                       K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHDTeam                                       K2Node_Select_Default_1;                           // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHDTeam                                       K2Node_Select_Default_2;                           // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HDVictoryMenuBase_C_GetPlayerTeam) == 0x000001, "Wrong alignment on WBP_HDVictoryMenuBase_C_GetPlayerTeam");
static_assert(sizeof(WBP_HDVictoryMenuBase_C_GetPlayerTeam) == 0x00000C, "Wrong size on WBP_HDVictoryMenuBase_C_GetPlayerTeam");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetPlayerTeam, PlayerTeam) == 0x000000, "Member 'WBP_HDVictoryMenuBase_C_GetPlayerTeam::PlayerTeam' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetPlayerTeam, Temp_bool_Variable) == 0x000001, "Member 'WBP_HDVictoryMenuBase_C_GetPlayerTeam::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetPlayerTeam, Temp_byte_Variable) == 0x000002, "Member 'WBP_HDVictoryMenuBase_C_GetPlayerTeam::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetPlayerTeam, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_HDVictoryMenuBase_C_GetPlayerTeam::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetPlayerTeam, Temp_bool_Variable_1) == 0x000004, "Member 'WBP_HDVictoryMenuBase_C_GetPlayerTeam::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetPlayerTeam, Temp_bool_Variable_2) == 0x000005, "Member 'WBP_HDVictoryMenuBase_C_GetPlayerTeam::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetPlayerTeam, Temp_byte_Variable_2) == 0x000006, "Member 'WBP_HDVictoryMenuBase_C_GetPlayerTeam::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetPlayerTeam, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000007, "Member 'WBP_HDVictoryMenuBase_C_GetPlayerTeam::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetPlayerTeam, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000008, "Member 'WBP_HDVictoryMenuBase_C_GetPlayerTeam::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetPlayerTeam, K2Node_Select_Default) == 0x000009, "Member 'WBP_HDVictoryMenuBase_C_GetPlayerTeam::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetPlayerTeam, K2Node_Select_Default_1) == 0x00000A, "Member 'WBP_HDVictoryMenuBase_C_GetPlayerTeam::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_HDVictoryMenuBase_C_GetPlayerTeam, K2Node_Select_Default_2) == 0x00000B, "Member 'WBP_HDVictoryMenuBase_C_GetPlayerTeam::K2Node_Select_Default_2' has a wrong offset!");

}
