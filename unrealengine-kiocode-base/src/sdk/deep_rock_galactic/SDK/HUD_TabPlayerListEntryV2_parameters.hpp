#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_TabPlayerListEntryV2

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ExecuteUbergraph_HUD_TabPlayerListEntryV2
// 0x00B0 (0x00B0 - 0x0000)
struct HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C61[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C62[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0058(0x0028)()
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShouldShow;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C63[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_CustomEvent_PlayerCharacter;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2) == 0x000008, "Wrong alignment on HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2");
static_assert(sizeof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2) == 0x0000B0, "Wrong size on HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, EntryPoint) == 0x000000, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, Temp_bool_Variable) == 0x000004, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, Temp_byte_Variable) == 0x000005, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, Temp_byte_Variable_1) == 0x000006, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, K2Node_Event_MyGeometry) == 0x000008, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, K2Node_Event_InDeltaTime) == 0x000040, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, K2Node_Event_IsDesignTime) == 0x000044, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, CallFunc_MenuColors_OutputColor) == 0x000048, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, K2Node_MakeStruct_SlateColor) == 0x000058, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, CallFunc_MenuColors_OutputColor_1) == 0x000080, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, CallFunc_MenuColors_OutputColor_2) == 0x000090, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, K2Node_CustomEvent_ShouldShow) == 0x0000A0, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::K2Node_CustomEvent_ShouldShow' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, K2Node_Select_Default) == 0x0000A1, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2, K2Node_CustomEvent_PlayerCharacter) == 0x0000A8, "Member 'HUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2::K2Node_CustomEvent_PlayerCharacter' has a wrong offset!");

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.CharacterChanged
// 0x0008 (0x0008 - 0x0000)
struct HUD_TabPlayerListEntryV2_C_CharacterChanged final
{
public:
	class APlayerCharacter*                       PlayerCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_TabPlayerListEntryV2_C_CharacterChanged) == 0x000008, "Wrong alignment on HUD_TabPlayerListEntryV2_C_CharacterChanged");
static_assert(sizeof(HUD_TabPlayerListEntryV2_C_CharacterChanged) == 0x000008, "Wrong size on HUD_TabPlayerListEntryV2_C_CharacterChanged");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_CharacterChanged, PlayerCharacter) == 0x000000, "Member 'HUD_TabPlayerListEntryV2_C_CharacterChanged::PlayerCharacter' has a wrong offset!");

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ShowInfoBar
// 0x0001 (0x0001 - 0x0000)
struct HUD_TabPlayerListEntryV2_C_ShowInfoBar final
{
public:
	bool                                          ShouldShow;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_TabPlayerListEntryV2_C_ShowInfoBar) == 0x000001, "Wrong alignment on HUD_TabPlayerListEntryV2_C_ShowInfoBar");
static_assert(sizeof(HUD_TabPlayerListEntryV2_C_ShowInfoBar) == 0x000001, "Wrong size on HUD_TabPlayerListEntryV2_C_ShowInfoBar");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_ShowInfoBar, ShouldShow) == 0x000000, "Member 'HUD_TabPlayerListEntryV2_C_ShowInfoBar::ShouldShow' has a wrong offset!");

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HUD_TabPlayerListEntryV2_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_TabPlayerListEntryV2_C_PreConstruct) == 0x000001, "Wrong alignment on HUD_TabPlayerListEntryV2_C_PreConstruct");
static_assert(sizeof(HUD_TabPlayerListEntryV2_C_PreConstruct) == 0x000001, "Wrong size on HUD_TabPlayerListEntryV2_C_PreConstruct");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HUD_TabPlayerListEntryV2_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Tick
// 0x003C (0x003C - 0x0000)
struct HUD_TabPlayerListEntryV2_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_TabPlayerListEntryV2_C_Tick) == 0x000004, "Wrong alignment on HUD_TabPlayerListEntryV2_C_Tick");
static_assert(sizeof(HUD_TabPlayerListEntryV2_C_Tick) == 0x00003C, "Wrong size on HUD_TabPlayerListEntryV2_C_Tick");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Tick, MyGeometry) == 0x000000, "Member 'HUD_TabPlayerListEntryV2_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Tick, InDeltaTime) == 0x000038, "Member 'HUD_TabPlayerListEntryV2_C_Tick::InDeltaTime' has a wrong offset!");

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Set Data
// 0x01A8 (0x01A8 - 0x0000)
struct HUD_TabPlayerListEntryV2_C_Set_Data final
{
public:
	class AFSDPlayerState*                        State;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       PlayerCharacter;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C64[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0030(0x0018)()
	TDelegate<void(class APlayerCharacter* PlayerCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class APlayerCharacter* PlayerCharacter)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	EFSDTargetPlatform                            CallFunc_FSDTargetPlatform_ReturnValue;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C65[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0098(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGameOwnerStatus_ReturnValue;           // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C66[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerName_ReturnValue_1;              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x00F0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0108(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0120(0x0040)(HasGetValueTypeHash)
	EFSDTargetPlatform                            Temp_byte_Variable;                                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C67[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0168(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0178(0x0018)()
	bool                                          K2Node_Select_Default_1;                           // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C68[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x01A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_TabPlayerListEntryV2_C_Set_Data) == 0x000008, "Wrong alignment on HUD_TabPlayerListEntryV2_C_Set_Data");
static_assert(sizeof(HUD_TabPlayerListEntryV2_C_Set_Data) == 0x0001A8, "Wrong size on HUD_TabPlayerListEntryV2_C_Set_Data");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, State) == 0x000000, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::State' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, PlayerCharacter) == 0x000008, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, Temp_bool_Variable) == 0x000010, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, Temp_bool_Variable_1) == 0x000011, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, Temp_bool_Variable_2) == 0x000012, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, Temp_bool_Variable_3) == 0x000013, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, Temp_bool_Variable_4) == 0x000014, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, Temp_bool_Variable_5) == 0x000015, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, Temp_text_Variable) == 0x000018, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, Temp_text_Variable_1) == 0x000030, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, K2Node_CreateDelegate_OutputDelegate_1) == 0x000058, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_GetPlayerName_ReturnValue) == 0x000068, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_FSDTargetPlatform_ReturnValue) == 0x000090, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_FSDTargetPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, K2Node_MakeStruct_FormatArgumentData) == 0x000098, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_GetGameOwnerStatus_ReturnValue) == 0x0000D9, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_GetGameOwnerStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_GetPlayerName_ReturnValue_1) == 0x0000E0, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_GetPlayerName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, K2Node_Select_Default) == 0x0000F0, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000108, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, K2Node_MakeStruct_FormatArgumentData_1) == 0x000120, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, Temp_byte_Variable) == 0x000160, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, K2Node_MakeArray_Array) == 0x000168, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_Format_ReturnValue) == 0x000178, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, K2Node_Select_Default_1) == 0x000190, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_GetFSDGameState_ReturnValue) == 0x000198, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0001A0, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_Not_PreBool_ReturnValue) == 0x0001A1, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_BooleanAND_ReturnValue) == 0x0001A2, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_IsValid_ReturnValue_1) == 0x0001A3, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_SelectVisibility_IsVisible) == 0x0001A4, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_SelectVisibility_VisibilityChanged) == 0x0001A5, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_Set_Data, CallFunc_SelectVisibility_New_Visibility) == 0x0001A6, "Member 'HUD_TabPlayerListEntryV2_C_Set_Data::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdateVolatileStats
// 0x0130 (0x0130 - 0x0000)
struct HUD_TabPlayerListEntryV2_C_UpdateVolatileStats final
{
public:
	class UPlayerHealthComponent*                 HealthComponent;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       PlayerCharacter;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C69[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetHealthPct_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C6A[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSupplyAmmoStatus_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C6B[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C6C[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimeSeconds_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PingPong_ReturnValue;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUiPing_ReturnValue;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0118(0x0018)()
};
static_assert(alignof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats) == 0x000008, "Wrong alignment on HUD_TabPlayerListEntryV2_C_UpdateVolatileStats");
static_assert(sizeof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats) == 0x000130, "Wrong size on HUD_TabPlayerListEntryV2_C_UpdateVolatileStats");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, HealthComponent) == 0x000000, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::HealthComponent' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, PlayerCharacter) == 0x000008, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, Temp_byte_Variable) == 0x000010, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, Temp_byte_Variable_1) == 0x000011, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, Temp_bool_Variable) == 0x000012, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, Temp_struct_Variable) == 0x000014, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_IsValid_ReturnValue_1) == 0x000025, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, Temp_bool_Variable_1) == 0x000026, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_IsDead_ReturnValue) == 0x000027, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_GetHealthPct_ReturnValue) == 0x000028, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_GetHealthPct_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_IsValid_ReturnValue_2) == 0x00002C, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_GetSupplyAmmoStatus_ReturnValue) == 0x000030, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_GetSupplyAmmoStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_GetFSDGameState_ReturnValue) == 0x000038, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, K2Node_Select_Default) == 0x000040, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_GetTimeSeconds_ReturnValue) == 0x000044, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_PingPong_ReturnValue) == 0x000048, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_PingPong_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_LinearColorLerp_ReturnValue) == 0x00004C, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_GetUiPing_ReturnValue) == 0x00005C, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_GetUiPing_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, K2Node_Select_Default_1) == 0x000060, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_MakeLiteralText_ReturnValue) == 0x0000B0, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C8, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, K2Node_MakeArray_Array) == 0x000108, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdateVolatileStats, CallFunc_Format_ReturnValue) == 0x000118, "Member 'HUD_TabPlayerListEntryV2_C_UpdateVolatileStats::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdatePlayerClass
// 0x0038 (0x0038 - 0x0000)
struct HUD_TabPlayerListEntryV2_C_UpdatePlayerClass final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C6D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     CallFunc_GetSelectedCharacterID_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterData*                   CallFunc_GetCharacterData_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C6E[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetName_ReturnValue;                      // 0x0020(0x0018)(ConstParm)
};
static_assert(alignof(HUD_TabPlayerListEntryV2_C_UpdatePlayerClass) == 0x000008, "Wrong alignment on HUD_TabPlayerListEntryV2_C_UpdatePlayerClass");
static_assert(sizeof(HUD_TabPlayerListEntryV2_C_UpdatePlayerClass) == 0x000038, "Wrong size on HUD_TabPlayerListEntryV2_C_UpdatePlayerClass");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdatePlayerClass, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'HUD_TabPlayerListEntryV2_C_UpdatePlayerClass::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdatePlayerClass, CallFunc_GetSelectedCharacterID_ReturnValue) == 0x000008, "Member 'HUD_TabPlayerListEntryV2_C_UpdatePlayerClass::CallFunc_GetSelectedCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdatePlayerClass, CallFunc_GetCharacterData_ReturnValue) == 0x000010, "Member 'HUD_TabPlayerListEntryV2_C_UpdatePlayerClass::CallFunc_GetCharacterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdatePlayerClass, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'HUD_TabPlayerListEntryV2_C_UpdatePlayerClass::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_TabPlayerListEntryV2_C_UpdatePlayerClass, CallFunc_GetName_ReturnValue) == 0x000020, "Member 'HUD_TabPlayerListEntryV2_C_UpdatePlayerClass::CallFunc_GetName_ReturnValue' has a wrong offset!");

}
