#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RewardUnlock_PerformancePoints

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.ExecuteUbergraph_UI_RewardUnlock_PerformancePoints
// 0x0160 (0x0160 - 0x0000)
struct UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CDE[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CDF[0x5];                                     // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetUnlockDetails_Text;                    // 0x0050(0x0018)()
	class USeasonsSubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USeasonXPReward*                        K2Node_DynamicCast_AsSeason_XPReward;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CE0[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSeasonEvent>                   K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_Level;                          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Level)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3CE1[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSeasonLevel                           CallFunc_GetLevelReward_ReturnValue;               // 0x00A8(0x0018)(NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE2[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0108(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0118(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USeasonsSubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSeasonXP_ReturnValue;                  // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE3[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USeasonsSubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSeasonXP_ReturnValue_1;                // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints) == 0x000008, "Wrong alignment on UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints");
static_assert(sizeof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints) == 0x000160, "Wrong size on UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, EntryPoint) == 0x000000, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, K2Node_Event_IsDesignTime) == 0x000006, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_MenuColors_OutputColor) == 0x000008, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_IsVisible_ReturnValue) == 0x000048, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000049, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_Not_PreBool_ReturnValue) == 0x00004A, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_GetUnlockDetails_Text) == 0x000050, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_GetUnlockDetails_Text' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000068, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, K2Node_DynamicCast_AsSeason_XPReward) == 0x000070, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::K2Node_DynamicCast_AsSeason_XPReward' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, K2Node_MakeArray_Array) == 0x000080, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, K2Node_CustomEvent_Level) == 0x000090, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::K2Node_CustomEvent_Level' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, K2Node_CreateDelegate_OutputDelegate) == 0x000094, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_GetLevelReward_ReturnValue) == 0x0000A8, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_GetLevelReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_Add_IntInt_ReturnValue) == 0x0000C0, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, K2Node_MakeArray_Array_1) == 0x000108, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_Format_ReturnValue) == 0x000118, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_PlayAnimation_ReturnValue_1) == 0x000130, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000138, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_GetSeasonXP_ReturnValue) == 0x000140, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_GetSeasonXP_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_GetGameInstanceSubsystem_ReturnValue_2) == 0x000148, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_GetGameInstanceSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_GetSeasonXP_ReturnValue_1) == 0x000150, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_GetSeasonXP_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_Subtract_IntInt_ReturnValue) == 0x000154, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints, CallFunc_PlayAnimation_ReturnValue_2) == 0x000158, "Member 'UI_RewardUnlock_PerformancePoints_C_ExecuteUbergraph_UI_RewardUnlock_PerformancePoints::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

// Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.OnLevelReached
// 0x0004 (0x0004 - 0x0000)
struct UI_RewardUnlock_PerformancePoints_C_OnLevelReached final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_RewardUnlock_PerformancePoints_C_OnLevelReached) == 0x000004, "Wrong alignment on UI_RewardUnlock_PerformancePoints_C_OnLevelReached");
static_assert(sizeof(UI_RewardUnlock_PerformancePoints_C_OnLevelReached) == 0x000004, "Wrong size on UI_RewardUnlock_PerformancePoints_C_OnLevelReached");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_OnLevelReached, Level) == 0x000000, "Member 'UI_RewardUnlock_PerformancePoints_C_OnLevelReached::Level' has a wrong offset!");

// Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_RewardUnlock_PerformancePoints_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_RewardUnlock_PerformancePoints_C_PreConstruct) == 0x000001, "Wrong alignment on UI_RewardUnlock_PerformancePoints_C_PreConstruct");
static_assert(sizeof(UI_RewardUnlock_PerformancePoints_C_PreConstruct) == 0x000001, "Wrong size on UI_RewardUnlock_PerformancePoints_C_PreConstruct");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_RewardUnlock_PerformancePoints_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.GetUnlockDetails
// 0x00D0 (0x00D0 - 0x0000)
struct UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm, OutParm)
	class USeasonXPReward*                        K2Node_DynamicCast_AsSeason_XPReward;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CE4[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0050(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0018)()
};
static_assert(alignof(UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails) == 0x000008, "Wrong alignment on UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails");
static_assert(sizeof(UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails) == 0x0000D0, "Wrong size on UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails, Text) == 0x000000, "Member 'UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails::Text' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails, K2Node_DynamicCast_AsSeason_XPReward) == 0x000018, "Member 'UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails::K2Node_DynamicCast_AsSeason_XPReward' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails, CallFunc_Conv_IntToText_ReturnValue) == 0x000050, "Member 'UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails, K2Node_MakeArray_Array) == 0x0000A8, "Member 'UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'UI_RewardUnlock_PerformancePoints_C_GetUnlockDetails::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UI_RewardUnlock_PerformancePoints.UI_RewardUnlock_PerformancePoints_C.SelectCharacterID
// 0x0038 (0x0038 - 0x0000)
struct UI_RewardUnlock_PerformancePoints_C_SelectCharacterID final
{
public:
	class UPlayerCharacterID*                     OptionalID;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterID*                     OutputPin;                                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CE5[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDPlayerState*                        CallFunc_GetOwningFSDPlayerState_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterID*                     CallFunc_GetSelectedCharacterID_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CE6[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_RewardUnlock_PerformancePoints_C_SelectCharacterID) == 0x000008, "Wrong alignment on UI_RewardUnlock_PerformancePoints_C_SelectCharacterID");
static_assert(sizeof(UI_RewardUnlock_PerformancePoints_C_SelectCharacterID) == 0x000038, "Wrong size on UI_RewardUnlock_PerformancePoints_C_SelectCharacterID");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_SelectCharacterID, OptionalID) == 0x000000, "Member 'UI_RewardUnlock_PerformancePoints_C_SelectCharacterID::OptionalID' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_SelectCharacterID, OutputPin) == 0x000008, "Member 'UI_RewardUnlock_PerformancePoints_C_SelectCharacterID::OutputPin' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_SelectCharacterID, Temp_bool_Variable) == 0x000010, "Member 'UI_RewardUnlock_PerformancePoints_C_SelectCharacterID::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_SelectCharacterID, CallFunc_GetOwningFSDPlayerState_ReturnValue) == 0x000018, "Member 'UI_RewardUnlock_PerformancePoints_C_SelectCharacterID::CallFunc_GetOwningFSDPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_SelectCharacterID, CallFunc_GetSelectedCharacterID_ReturnValue) == 0x000020, "Member 'UI_RewardUnlock_PerformancePoints_C_SelectCharacterID::CallFunc_GetSelectedCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_SelectCharacterID, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'UI_RewardUnlock_PerformancePoints_C_SelectCharacterID::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_PerformancePoints_C_SelectCharacterID, K2Node_Select_Default) == 0x000030, "Member 'UI_RewardUnlock_PerformancePoints_C_SelectCharacterID::K2Node_Select_Default' has a wrong offset!");

}

