#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUDElement_VOIPIndicator_OutputListing

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing
// 0x0108 (0x0108 - 0x0000)
struct WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsDesignTime;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1983[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ToUpper_ReturnValue;                      // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                            CallFunc_GetColorForCommChannel_ChannelColor;      // 0x0028(0x0028)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	struct FSlateColor                            CallFunc_GetColorForCommChannel_ChannelColor_1;    // 0x0068(0x0028)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0090(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1984[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHDKit*                                 K2Node_CustomEvent_NewLoadout;                     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHDKit*                                 CallFunc_GetMostValidLoadoutFromPS_Loadout;        // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1985[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00E4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1986[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing) == 0x000008, "Wrong alignment on WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing");
static_assert(sizeof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing) == 0x000108, "Wrong size on WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, EntryPoint) == 0x000000, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, K2Node_Event_bIsDesignTime) == 0x000004, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::K2Node_Event_bIsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, CallFunc_GetPlayerName_ReturnValue) == 0x000008, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, CallFunc_ToUpper_ReturnValue) == 0x000018, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::CallFunc_ToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, CallFunc_GetColorForCommChannel_ChannelColor) == 0x000028, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::CallFunc_GetColorForCommChannel_ChannelColor' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, CallFunc_GetColorForCommChannel_ChannelColor_1) == 0x000068, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::CallFunc_GetColorForCommChannel_ChannelColor_1' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, K2Node_Event_MyGeometry) == 0x000090, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, K2Node_Event_InDeltaTime) == 0x0000C8, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, K2Node_CustomEvent_NewLoadout) == 0x0000D0, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::K2Node_CustomEvent_NewLoadout' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, CallFunc_GetMostValidLoadoutFromPS_Loadout) == 0x0000D8, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::CallFunc_GetMostValidLoadoutFromPS_Loadout' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, K2Node_Event_IsDesignTime) == 0x0000E0, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, K2Node_CreateDelegate_OutputDelegate) == 0x0000E4, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000F8, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing, CallFunc_PlayAnimationForward_ReturnValue) == 0x000100, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_HUDElement_VOIPIndicator_OutputListing_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_HUDElement_VOIPIndicator_OutputListing_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_HUDElement_VOIPIndicator_OutputListing_C_PreConstruct");
static_assert(sizeof(WBP_HUDElement_VOIPIndicator_OutputListing_C_PreConstruct) == 0x000001, "Wrong size on WBP_HUDElement_VOIPIndicator_OutputListing_C_PreConstruct");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.PlayerLoadoutChanged
// 0x0008 (0x0008 - 0x0000)
struct WBP_HUDElement_VOIPIndicator_OutputListing_C_PlayerLoadoutChanged final
{
public:
	class UHDKit*                                 NewLoadout;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUDElement_VOIPIndicator_OutputListing_C_PlayerLoadoutChanged) == 0x000008, "Wrong alignment on WBP_HUDElement_VOIPIndicator_OutputListing_C_PlayerLoadoutChanged");
static_assert(sizeof(WBP_HUDElement_VOIPIndicator_OutputListing_C_PlayerLoadoutChanged) == 0x000008, "Wrong size on WBP_HUDElement_VOIPIndicator_OutputListing_C_PlayerLoadoutChanged");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_PlayerLoadoutChanged, NewLoadout) == 0x000000, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_PlayerLoadoutChanged::NewLoadout' has a wrong offset!");

// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_HUDElement_VOIPIndicator_OutputListing_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUDElement_VOIPIndicator_OutputListing_C_Tick) == 0x000004, "Wrong alignment on WBP_HUDElement_VOIPIndicator_OutputListing_C_Tick");
static_assert(sizeof(WBP_HUDElement_VOIPIndicator_OutputListing_C_Tick) == 0x00003C, "Wrong size on WBP_HUDElement_VOIPIndicator_OutputListing_C_Tick");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.OnVoiceMsgInfoSet
// 0x0001 (0x0001 - 0x0000)
struct WBP_HUDElement_VOIPIndicator_OutputListing_C_OnVoiceMsgInfoSet final
{
public:
	bool                                          bIsDesignTime;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_HUDElement_VOIPIndicator_OutputListing_C_OnVoiceMsgInfoSet) == 0x000001, "Wrong alignment on WBP_HUDElement_VOIPIndicator_OutputListing_C_OnVoiceMsgInfoSet");
static_assert(sizeof(WBP_HUDElement_VOIPIndicator_OutputListing_C_OnVoiceMsgInfoSet) == 0x000001, "Wrong size on WBP_HUDElement_VOIPIndicator_OutputListing_C_OnVoiceMsgInfoSet");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_OnVoiceMsgInfoSet, bIsDesignTime) == 0x000000, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_OnVoiceMsgInfoSet::bIsDesignTime' has a wrong offset!");

// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.GetMostValidLoadoutFromPS
// 0x0020 (0x0020 - 0x0000)
struct WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS final
{
public:
	class APlayerState*                           PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHDKit*                                 Loadout;                                           // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHDPlayerState*                         K2Node_DynamicCast_AsHDPlayer_State;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS) == 0x000008, "Wrong alignment on WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS");
static_assert(sizeof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS) == 0x000020, "Wrong size on WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS, PlayerState) == 0x000000, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS::PlayerState' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS, Loadout) == 0x000008, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS::Loadout' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS, K2Node_DynamicCast_AsHDPlayer_State) == 0x000010, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS::K2Node_DynamicCast_AsHDPlayer_State' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS, CallFunc_IsValid_ReturnValue_1) == 0x00001A, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.GetClassSymbolForLoadout
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout final
{
public:
	class UHDKit*                                 Loadout;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            ClassSymbolToUse;                                  // 0x0008(0x0088)(Parm, OutParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1987[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0098(0x0088)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1988[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0128(0x0088)()
};
static_assert(alignof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout) == 0x000008, "Wrong alignment on WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout");
static_assert(sizeof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout) == 0x0001B0, "Wrong size on WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout, Loadout) == 0x000000, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout::Loadout' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout, ClassSymbolToUse) == 0x000008, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout::ClassSymbolToUse' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout, K2Node_MakeStruct_SlateBrush) == 0x000098, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout, K2Node_MakeStruct_SlateBrush_1) == 0x000128, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");

// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.UpdateClassSymbol
// 0x0090 (0x0090 - 0x0000)
struct WBP_HUDElement_VOIPIndicator_OutputListing_C_UpdateClassSymbol final
{
public:
	class UHDKit*                                 Loadout;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetClassSymbolForLoadout_ClassSymbolToUse; // 0x0008(0x0088)()
};
static_assert(alignof(WBP_HUDElement_VOIPIndicator_OutputListing_C_UpdateClassSymbol) == 0x000008, "Wrong alignment on WBP_HUDElement_VOIPIndicator_OutputListing_C_UpdateClassSymbol");
static_assert(sizeof(WBP_HUDElement_VOIPIndicator_OutputListing_C_UpdateClassSymbol) == 0x000090, "Wrong size on WBP_HUDElement_VOIPIndicator_OutputListing_C_UpdateClassSymbol");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_UpdateClassSymbol, Loadout) == 0x000000, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_UpdateClassSymbol::Loadout' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_UpdateClassSymbol, CallFunc_GetClassSymbolForLoadout_ClassSymbolToUse) == 0x000008, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_UpdateClassSymbol::CallFunc_GetClassSymbolForLoadout_ClassSymbolToUse' has a wrong offset!");

// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.CheckForClassSymbolUpdates
// 0x0018 (0x0018 - 0x0000)
struct WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1989[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHDKit*                                 CallFunc_GetMostValidLoadoutFromPS_Loadout;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates) == 0x000008, "Wrong alignment on WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates");
static_assert(sizeof(WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates) == 0x000018, "Wrong size on WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates, CallFunc_GetMostValidLoadoutFromPS_Loadout) == 0x000008, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates::CallFunc_GetMostValidLoadoutFromPS_Loadout' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}
