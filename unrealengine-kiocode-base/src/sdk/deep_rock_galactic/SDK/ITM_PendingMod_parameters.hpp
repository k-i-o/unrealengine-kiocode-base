#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_PendingMod

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ENUM_ModPendingStatus_structs.hpp"


namespace SDK::Params
{

// Function ITM_PendingMod.ITM_PendingMod_C.ExecuteUbergraph_ITM_PendingMod
// 0x0048 (0x0048 - 0x0000)
struct ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E20[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& Name, TArray<class FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UUGCSubsystem*                          CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& Name, TArray<class FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E21[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUGCSubsystem*                          CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod) == 0x000008, "Wrong alignment on ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod");
static_assert(sizeof(ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod) == 0x000048, "Wrong size on ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod");
static_assert(offsetof(ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod, EntryPoint) == 0x000000, "Member 'ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod, K2Node_SwitchEnum_CmpSuccess) == 0x000004, "Member 'ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod, K2Node_Event_IsDesignTime) == 0x000005, "Member 'ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000018, "Member 'ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod, CallFunc_GetEngineSubsystem_ReturnValue_1) == 0x000038, "Member 'ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod::CallFunc_GetEngineSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'ITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function ITM_PendingMod.ITM_PendingMod_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_PendingMod_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_PendingMod_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_PendingMod_C_PreConstruct");
static_assert(sizeof(ITM_PendingMod_C_PreConstruct) == 0x000001, "Wrong size on ITM_PendingMod_C_PreConstruct");
static_assert(offsetof(ITM_PendingMod_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_PendingMod_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_PendingMod.ITM_PendingMod_C.SetData
// 0x00F8 (0x00F8 - 0x0000)
struct ITM_PendingMod_C_SetData final
{
public:
	class FString                                 InModName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ENUM_ModPendingStatus                         InPendingStatus;                                   // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_ModPendingStatus                         Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E22[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FText                                   Temp_text_Variable;                                // 0x0030(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0048(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0060(0x0018)()
	ENUM_ModPendingStatus                         Temp_byte_Variable_1;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E23[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_3;                              // 0x0080(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0098(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x00B0(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00C8(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x00E0(0x0018)()
};
static_assert(alignof(ITM_PendingMod_C_SetData) == 0x000008, "Wrong alignment on ITM_PendingMod_C_SetData");
static_assert(sizeof(ITM_PendingMod_C_SetData) == 0x0000F8, "Wrong size on ITM_PendingMod_C_SetData");
static_assert(offsetof(ITM_PendingMod_C_SetData, InModName) == 0x000000, "Member 'ITM_PendingMod_C_SetData::InModName' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_SetData, InPendingStatus) == 0x000010, "Member 'ITM_PendingMod_C_SetData::InPendingStatus' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_SetData, Temp_byte_Variable) == 0x000011, "Member 'ITM_PendingMod_C_SetData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'ITM_PendingMod_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_SetData, Temp_text_Variable) == 0x000030, "Member 'ITM_PendingMod_C_SetData::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_SetData, Temp_text_Variable_1) == 0x000048, "Member 'ITM_PendingMod_C_SetData::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_SetData, Temp_text_Variable_2) == 0x000060, "Member 'ITM_PendingMod_C_SetData::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_SetData, Temp_byte_Variable_1) == 0x000078, "Member 'ITM_PendingMod_C_SetData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_SetData, Temp_text_Variable_3) == 0x000080, "Member 'ITM_PendingMod_C_SetData::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_SetData, Temp_text_Variable_4) == 0x000098, "Member 'ITM_PendingMod_C_SetData::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_SetData, Temp_text_Variable_5) == 0x0000B0, "Member 'ITM_PendingMod_C_SetData::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_SetData, K2Node_Select_Default) == 0x0000C8, "Member 'ITM_PendingMod_C_SetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_SetData, K2Node_Select_Default_1) == 0x0000E0, "Member 'ITM_PendingMod_C_SetData::K2Node_Select_Default_1' has a wrong offset!");

// Function ITM_PendingMod.ITM_PendingMod_C.SetColors
// 0x0010 (0x0010 - 0x0000)
struct ITM_PendingMod_C_SetColors final
{
public:
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_PendingMod_C_SetColors) == 0x000004, "Wrong alignment on ITM_PendingMod_C_SetColors");
static_assert(sizeof(ITM_PendingMod_C_SetColors) == 0x000010, "Wrong size on ITM_PendingMod_C_SetColors");
static_assert(offsetof(ITM_PendingMod_C_SetColors, CallFunc_MenuColors_OutputColor) == 0x000000, "Member 'ITM_PendingMod_C_SetColors::CallFunc_MenuColors_OutputColor' has a wrong offset!");

// Function ITM_PendingMod.ITM_PendingMod_C.OnDownloadExtractProgress
// 0x0080 (0x0080 - 0x0000)
struct ITM_PendingMod_C_OnDownloadExtractProgress final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         ModsPendingDownload;                               // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Downloading;                                       // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E24[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Progress;                                          // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Total;                                             // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E25[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0030(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0048(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0060(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_PendingMod_C_OnDownloadExtractProgress) == 0x000008, "Wrong alignment on ITM_PendingMod_C_OnDownloadExtractProgress");
static_assert(sizeof(ITM_PendingMod_C_OnDownloadExtractProgress) == 0x000080, "Wrong size on ITM_PendingMod_C_OnDownloadExtractProgress");
static_assert(offsetof(ITM_PendingMod_C_OnDownloadExtractProgress, Param_Name) == 0x000000, "Member 'ITM_PendingMod_C_OnDownloadExtractProgress::Param_Name' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_OnDownloadExtractProgress, ModsPendingDownload) == 0x000010, "Member 'ITM_PendingMod_C_OnDownloadExtractProgress::ModsPendingDownload' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_OnDownloadExtractProgress, Downloading) == 0x000020, "Member 'ITM_PendingMod_C_OnDownloadExtractProgress::Downloading' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_OnDownloadExtractProgress, Progress) == 0x000024, "Member 'ITM_PendingMod_C_OnDownloadExtractProgress::Progress' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_OnDownloadExtractProgress, Total) == 0x000028, "Member 'ITM_PendingMod_C_OnDownloadExtractProgress::Total' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_OnDownloadExtractProgress, Temp_bool_Variable) == 0x00002C, "Member 'ITM_PendingMod_C_OnDownloadExtractProgress::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_OnDownloadExtractProgress, Temp_text_Variable) == 0x000030, "Member 'ITM_PendingMod_C_OnDownloadExtractProgress::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_OnDownloadExtractProgress, Temp_text_Variable_1) == 0x000048, "Member 'ITM_PendingMod_C_OnDownloadExtractProgress::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_OnDownloadExtractProgress, K2Node_Select_Default) == 0x000060, "Member 'ITM_PendingMod_C_OnDownloadExtractProgress::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_PendingMod_C_OnDownloadExtractProgress, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000078, "Member 'ITM_PendingMod_C_OnDownloadExtractProgress::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

}
