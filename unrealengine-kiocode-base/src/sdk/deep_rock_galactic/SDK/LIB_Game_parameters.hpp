#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LIB_Game

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function LIB_Game.LIB_Game_C.IsKickReason
// 0x0018 (0x0018 - 0x0000)
struct LIB_Game_C_IsKickReason final
{
public:
	EDisconnectReason                             DisconnectReason;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DF7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Kicked;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LIB_Game_C_IsKickReason) == 0x000008, "Wrong alignment on LIB_Game_C_IsKickReason");
static_assert(sizeof(LIB_Game_C_IsKickReason) == 0x000018, "Wrong size on LIB_Game_C_IsKickReason");
static_assert(offsetof(LIB_Game_C_IsKickReason, DisconnectReason) == 0x000000, "Member 'LIB_Game_C_IsKickReason::DisconnectReason' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsKickReason, __WorldContext) == 0x000008, "Member 'LIB_Game_C_IsKickReason::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsKickReason, Kicked) == 0x000010, "Member 'LIB_Game_C_IsKickReason::Kicked' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsKickReason, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'LIB_Game_C_IsKickReason::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsKickReason, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000012, "Member 'LIB_Game_C_IsKickReason::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsKickReason, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000013, "Member 'LIB_Game_C_IsKickReason::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsKickReason, CallFunc_BooleanOR_ReturnValue) == 0x000014, "Member 'LIB_Game_C_IsKickReason::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsKickReason, CallFunc_BooleanOR_ReturnValue_1) == 0x000015, "Member 'LIB_Game_C_IsKickReason::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function LIB_Game.LIB_Game_C.SelectVisibility
// 0x0028 (0x0028 - 0x0000)
struct LIB_Game_C_SelectVisibility final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              FLASE;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              TURR;                                              // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_Index;                                       // 0x000A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DF8[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsVisible;                                         // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          VisibilityChanged;                                 // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              New_Visibility;                                    // 0x001A(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Previous;                                          // 0x001B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_1;              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_2;              // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFlaggedVisible_IsFlaggedVisible;        // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LIB_Game_C_SelectVisibility) == 0x000008, "Wrong alignment on LIB_Game_C_SelectVisibility");
static_assert(sizeof(LIB_Game_C_SelectVisibility) == 0x000028, "Wrong size on LIB_Game_C_SelectVisibility");
static_assert(offsetof(LIB_Game_C_SelectVisibility, Widget) == 0x000000, "Member 'LIB_Game_C_SelectVisibility::Widget' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, FLASE) == 0x000008, "Member 'LIB_Game_C_SelectVisibility::FLASE' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, TURR) == 0x000009, "Member 'LIB_Game_C_SelectVisibility::TURR' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, Param_Index) == 0x00000A, "Member 'LIB_Game_C_SelectVisibility::Param_Index' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, __WorldContext) == 0x000010, "Member 'LIB_Game_C_SelectVisibility::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, IsVisible) == 0x000018, "Member 'LIB_Game_C_SelectVisibility::IsVisible' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, VisibilityChanged) == 0x000019, "Member 'LIB_Game_C_SelectVisibility::VisibilityChanged' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, New_Visibility) == 0x00001A, "Member 'LIB_Game_C_SelectVisibility::New_Visibility' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, Previous) == 0x00001B, "Member 'LIB_Game_C_SelectVisibility::Previous' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, Temp_bool_Variable) == 0x00001C, "Member 'LIB_Game_C_SelectVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, CallFunc_GetVisibility_ReturnValue) == 0x00001D, "Member 'LIB_Game_C_SelectVisibility::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, CallFunc_GetVisibility_ReturnValue_1) == 0x00001E, "Member 'LIB_Game_C_SelectVisibility::CallFunc_GetVisibility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, CallFunc_GetVisibility_ReturnValue_2) == 0x00001F, "Member 'LIB_Game_C_SelectVisibility::CallFunc_GetVisibility_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000020, "Member 'LIB_Game_C_SelectVisibility::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, K2Node_Select_Default) == 0x000021, "Member 'LIB_Game_C_SelectVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SelectVisibility, CallFunc_IsFlaggedVisible_IsFlaggedVisible) == 0x000022, "Member 'LIB_Game_C_SelectVisibility::CallFunc_IsFlaggedVisible_IsFlaggedVisible' has a wrong offset!");

// Function LIB_Game.LIB_Game_C.LoadMission
// 0x0020 (0x0020 - 0x0000)
struct LIB_Game_C_LoadMission final
{
public:
	struct FSoftObjectPath                        NewParam;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LIB_Game_C_LoadMission) == 0x000008, "Wrong alignment on LIB_Game_C_LoadMission");
static_assert(sizeof(LIB_Game_C_LoadMission) == 0x000020, "Wrong size on LIB_Game_C_LoadMission");
static_assert(offsetof(LIB_Game_C_LoadMission, NewParam) == 0x000000, "Member 'LIB_Game_C_LoadMission::NewParam' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_LoadMission, __WorldContext) == 0x000018, "Member 'LIB_Game_C_LoadMission::__WorldContext' has a wrong offset!");

// Function LIB_Game.LIB_Game_C.SetVisibilityIf
// 0x0020 (0x0020 - 0x0000)
struct LIB_Game_C_SetVisibilityIf final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Visibility;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Condition;                                         // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DF9[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsVisible;                                         // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Previous;                                          // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LIB_Game_C_SetVisibilityIf) == 0x000008, "Wrong alignment on LIB_Game_C_SetVisibilityIf");
static_assert(sizeof(LIB_Game_C_SetVisibilityIf) == 0x000020, "Wrong size on LIB_Game_C_SetVisibilityIf");
static_assert(offsetof(LIB_Game_C_SetVisibilityIf, Widget) == 0x000000, "Member 'LIB_Game_C_SetVisibilityIf::Widget' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetVisibilityIf, Visibility) == 0x000008, "Member 'LIB_Game_C_SetVisibilityIf::Visibility' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetVisibilityIf, Condition) == 0x000009, "Member 'LIB_Game_C_SetVisibilityIf::Condition' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetVisibilityIf, __WorldContext) == 0x000010, "Member 'LIB_Game_C_SetVisibilityIf::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetVisibilityIf, IsVisible) == 0x000018, "Member 'LIB_Game_C_SetVisibilityIf::IsVisible' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetVisibilityIf, Previous) == 0x000019, "Member 'LIB_Game_C_SetVisibilityIf::Previous' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetVisibilityIf, CallFunc_IsVisible_ReturnValue) == 0x00001A, "Member 'LIB_Game_C_SetVisibilityIf::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function LIB_Game.LIB_Game_C.UpdateBool
// 0x0018 (0x0018 - 0x0000)
struct LIB_Game_C_UpdateBool final
{
public:
	bool                                          Variable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                          InValue;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DFA[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ValueChanged;                                      // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OutValue;                                          // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Changed;                                           // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LIB_Game_C_UpdateBool) == 0x000008, "Wrong alignment on LIB_Game_C_UpdateBool");
static_assert(sizeof(LIB_Game_C_UpdateBool) == 0x000018, "Wrong size on LIB_Game_C_UpdateBool");
static_assert(offsetof(LIB_Game_C_UpdateBool, Variable) == 0x000000, "Member 'LIB_Game_C_UpdateBool::Variable' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_UpdateBool, InValue) == 0x000001, "Member 'LIB_Game_C_UpdateBool::InValue' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_UpdateBool, __WorldContext) == 0x000008, "Member 'LIB_Game_C_UpdateBool::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_UpdateBool, ValueChanged) == 0x000010, "Member 'LIB_Game_C_UpdateBool::ValueChanged' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_UpdateBool, OutValue) == 0x000011, "Member 'LIB_Game_C_UpdateBool::OutValue' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_UpdateBool, Changed) == 0x000012, "Member 'LIB_Game_C_UpdateBool::Changed' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_UpdateBool, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000013, "Member 'LIB_Game_C_UpdateBool::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function LIB_Game.LIB_Game_C.SetTextureAndTint
// 0x0058 (0x0058 - 0x0000)
struct LIB_Game_C_SetTextureAndTint final
{
public:
	class UImage*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMatchSize;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DFB[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Tint;                                              // 0x0014(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DFC[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
};
static_assert(alignof(LIB_Game_C_SetTextureAndTint) == 0x000008, "Wrong alignment on LIB_Game_C_SetTextureAndTint");
static_assert(sizeof(LIB_Game_C_SetTextureAndTint) == 0x000058, "Wrong size on LIB_Game_C_SetTextureAndTint");
static_assert(offsetof(LIB_Game_C_SetTextureAndTint, Target) == 0x000000, "Member 'LIB_Game_C_SetTextureAndTint::Target' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetTextureAndTint, Texture) == 0x000008, "Member 'LIB_Game_C_SetTextureAndTint::Texture' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetTextureAndTint, bMatchSize) == 0x000010, "Member 'LIB_Game_C_SetTextureAndTint::bMatchSize' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetTextureAndTint, Tint) == 0x000014, "Member 'LIB_Game_C_SetTextureAndTint::Tint' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetTextureAndTint, __WorldContext) == 0x000028, "Member 'LIB_Game_C_SetTextureAndTint::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetTextureAndTint, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'LIB_Game_C_SetTextureAndTint::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function LIB_Game.LIB_Game_C.SetSoftTextureAndTint
// 0x0078 (0x0078 - 0x0000)
struct LIB_Game_C_SetSoftTextureAndTint final
{
public:
	class UImage*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          bMatchSize;                                        // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DFD[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Tint;                                              // 0x0034(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DFE[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0050(0x0028)()
};
static_assert(alignof(LIB_Game_C_SetSoftTextureAndTint) == 0x000008, "Wrong alignment on LIB_Game_C_SetSoftTextureAndTint");
static_assert(sizeof(LIB_Game_C_SetSoftTextureAndTint) == 0x000078, "Wrong size on LIB_Game_C_SetSoftTextureAndTint");
static_assert(offsetof(LIB_Game_C_SetSoftTextureAndTint, Target) == 0x000000, "Member 'LIB_Game_C_SetSoftTextureAndTint::Target' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetSoftTextureAndTint, Texture) == 0x000008, "Member 'LIB_Game_C_SetSoftTextureAndTint::Texture' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetSoftTextureAndTint, bMatchSize) == 0x000030, "Member 'LIB_Game_C_SetSoftTextureAndTint::bMatchSize' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetSoftTextureAndTint, Tint) == 0x000034, "Member 'LIB_Game_C_SetSoftTextureAndTint::Tint' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetSoftTextureAndTint, __WorldContext) == 0x000048, "Member 'LIB_Game_C_SetSoftTextureAndTint::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetSoftTextureAndTint, K2Node_MakeStruct_SlateColor) == 0x000050, "Member 'LIB_Game_C_SetSoftTextureAndTint::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function LIB_Game.LIB_Game_C.IsFlaggedVisible
// 0x0020 (0x0020 - 0x0000)
struct LIB_Game_C_IsFlaggedVisible final
{
public:
	class UWidget*                                InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsFlaggedVisible;                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LIB_Game_C_IsFlaggedVisible) == 0x000008, "Wrong alignment on LIB_Game_C_IsFlaggedVisible");
static_assert(sizeof(LIB_Game_C_IsFlaggedVisible) == 0x000020, "Wrong size on LIB_Game_C_IsFlaggedVisible");
static_assert(offsetof(LIB_Game_C_IsFlaggedVisible, InWidget) == 0x000000, "Member 'LIB_Game_C_IsFlaggedVisible::InWidget' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsFlaggedVisible, __WorldContext) == 0x000008, "Member 'LIB_Game_C_IsFlaggedVisible::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsFlaggedVisible, Param_IsFlaggedVisible) == 0x000010, "Member 'LIB_Game_C_IsFlaggedVisible::Param_IsFlaggedVisible' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsFlaggedVisible, Temp_byte_Variable) == 0x000011, "Member 'LIB_Game_C_IsFlaggedVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsFlaggedVisible, CallFunc_IsValid_ReturnValue) == 0x000012, "Member 'LIB_Game_C_IsFlaggedVisible::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsFlaggedVisible, Temp_bool_Variable) == 0x000013, "Member 'LIB_Game_C_IsFlaggedVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsFlaggedVisible, Temp_bool_Variable_1) == 0x000014, "Member 'LIB_Game_C_IsFlaggedVisible::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsFlaggedVisible, Temp_bool_Variable_2) == 0x000015, "Member 'LIB_Game_C_IsFlaggedVisible::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsFlaggedVisible, Temp_bool_Variable_3) == 0x000016, "Member 'LIB_Game_C_IsFlaggedVisible::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsFlaggedVisible, Temp_bool_Variable_4) == 0x000017, "Member 'LIB_Game_C_IsFlaggedVisible::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsFlaggedVisible, CallFunc_GetVisibility_ReturnValue) == 0x000018, "Member 'LIB_Game_C_IsFlaggedVisible::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsFlaggedVisible, K2Node_Select_Default) == 0x000019, "Member 'LIB_Game_C_IsFlaggedVisible::K2Node_Select_Default' has a wrong offset!");

// Function LIB_Game.LIB_Game_C.SetTextureAndColor
// 0x0030 (0x0030 - 0x0000)
struct LIB_Game_C_SetTextureAndColor final
{
public:
	class UImage*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMatchSize;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DFF[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           InColorAndOpacity;                                 // 0x0014(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E00[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LIB_Game_C_SetTextureAndColor) == 0x000008, "Wrong alignment on LIB_Game_C_SetTextureAndColor");
static_assert(sizeof(LIB_Game_C_SetTextureAndColor) == 0x000030, "Wrong size on LIB_Game_C_SetTextureAndColor");
static_assert(offsetof(LIB_Game_C_SetTextureAndColor, Target) == 0x000000, "Member 'LIB_Game_C_SetTextureAndColor::Target' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetTextureAndColor, Texture) == 0x000008, "Member 'LIB_Game_C_SetTextureAndColor::Texture' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetTextureAndColor, bMatchSize) == 0x000010, "Member 'LIB_Game_C_SetTextureAndColor::bMatchSize' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetTextureAndColor, InColorAndOpacity) == 0x000014, "Member 'LIB_Game_C_SetTextureAndColor::InColorAndOpacity' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_SetTextureAndColor, __WorldContext) == 0x000028, "Member 'LIB_Game_C_SetTextureAndColor::__WorldContext' has a wrong offset!");

// Function LIB_Game.LIB_Game_C.IsOnSpaceRig
// 0x0018 (0x0018 - 0x0000)
struct LIB_Game_C_IsOnSpaceRig final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnSpaceRig;                                        // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E01[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LIB_Game_C_IsOnSpaceRig) == 0x000008, "Wrong alignment on LIB_Game_C_IsOnSpaceRig");
static_assert(sizeof(LIB_Game_C_IsOnSpaceRig) == 0x000018, "Wrong size on LIB_Game_C_IsOnSpaceRig");
static_assert(offsetof(LIB_Game_C_IsOnSpaceRig, __WorldContext) == 0x000000, "Member 'LIB_Game_C_IsOnSpaceRig::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsOnSpaceRig, OnSpaceRig) == 0x000008, "Member 'LIB_Game_C_IsOnSpaceRig::OnSpaceRig' has a wrong offset!");
static_assert(offsetof(LIB_Game_C_IsOnSpaceRig, CallFunc_GetFSDGameState_ReturnValue) == 0x000010, "Member 'LIB_Game_C_IsOnSpaceRig::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");

}
