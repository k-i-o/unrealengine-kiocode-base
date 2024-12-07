#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_MissionBar_Normal

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.ExecuteUbergraph_WND_MissionBar_Normal
// 0x0060 (0x0060 - 0x0000)
struct WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ADA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameDifficulty                        K2Node_CustomEvent_Setting;                        // 0x0008(0x0018)(ConstParm)
	TDelegate<void(struct FGameDifficulty& Setting)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ADB[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColorsAndOpacity_OutputColor;         // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ADC[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal) == 0x000008, "Wrong alignment on WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal");
static_assert(sizeof(WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal) == 0x000060, "Wrong size on WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal");
static_assert(offsetof(WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal, EntryPoint) == 0x000000, "Member 'WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal::EntryPoint' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal, K2Node_CustomEvent_Setting) == 0x000008, "Member 'WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal::K2Node_CustomEvent_Setting' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal, K2Node_Event_IsDesignTime) == 0x000030, "Member 'WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal, CallFunc_MenuColorsAndOpacity_OutputColor) == 0x000034, "Member 'WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal::CallFunc_MenuColorsAndOpacity_OutputColor' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000048, "Member 'WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal, CallFunc_GetFSDGameState_ReturnValue) == 0x000058, "Member 'WND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.OnDifficultyChanged_Event_0
// 0x0018 (0x0018 - 0x0000)
struct WND_MissionBar_Normal_C_OnDifficultyChanged_Event_0 final
{
public:
	struct FGameDifficulty                        Setting;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WND_MissionBar_Normal_C_OnDifficultyChanged_Event_0) == 0x000008, "Wrong alignment on WND_MissionBar_Normal_C_OnDifficultyChanged_Event_0");
static_assert(sizeof(WND_MissionBar_Normal_C_OnDifficultyChanged_Event_0) == 0x000018, "Wrong size on WND_MissionBar_Normal_C_OnDifficultyChanged_Event_0");
static_assert(offsetof(WND_MissionBar_Normal_C_OnDifficultyChanged_Event_0, Setting) == 0x000000, "Member 'WND_MissionBar_Normal_C_OnDifficultyChanged_Event_0::Setting' has a wrong offset!");

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WND_MissionBar_Normal_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WND_MissionBar_Normal_C_PreConstruct) == 0x000001, "Wrong alignment on WND_MissionBar_Normal_C_PreConstruct");
static_assert(sizeof(WND_MissionBar_Normal_C_PreConstruct) == 0x000001, "Wrong size on WND_MissionBar_Normal_C_PreConstruct");
static_assert(offsetof(WND_MissionBar_Normal_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WND_MissionBar_Normal_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetGeneratedMission
// 0x0150 (0x0150 - 0x0000)
struct WND_MissionBar_Normal_C_SetGeneratedMission final
{
public:
	class UGeneratedMission*                      InMission;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBiome*                                 Biome;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ADD[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameDifficulty                        CallFunc_GetCurrentGameDifficulty_ReturnValue;     // 0x0050(0x0018)(ConstParm)
	bool                                          CallFunc_CampaignChecks_CampaignMission;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CampaignChecks_AreRestrictionsMet;        // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectVisibility_IsVisible_1;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged_1;     // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility_1;        // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectVisibility_IsVisible_2;             // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged_2;     // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility_2;        // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ADE[0x2];                                     // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UITM_MissionBar_Warning_C*              CallFunc_Create_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_MissionBar_Warning_C*              CallFunc_Create_ReturnValue_1;                     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FResourceSpawner                       CallFunc_Array_Get_Item;                           // 0x0098(0x0018)()
	TArray<class UBasic_ResourceIcon_C*>          K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UBasic_ResourceIcon_C*                  CallFunc_Array_Get_Item_1;                         // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ADF[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible_3;             // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged_3;     // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility_3;        // 0x00D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_Array_Get_Item_2;                         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionDNA*                            CallFunc_GetMissionDNA_ReturnValue;                // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionDNA*                            CallFunc_GetMissionDNA_ReturnValue_1;              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionWarning*                        CallFunc_Array_Get_Item_3;                         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AE0[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMissionMutator*>                K2Node_MakeArray_Array_1;                          // 0x0100(0x0010)(ReferenceParm)
	TArray<class UMissionMutator*>                Temp_object_Variable;                              // 0x0110(0x0010)(ReferenceParm)
	TArray<class UMissionMutator*>                K2Node_Select_Default;                             // 0x0120(0x0010)(ReferenceParm)
	class UMissionMutator*                        CallFunc_Array_Get_Item_4;                         // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AE1[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WND_MissionBar_Normal_C_SetGeneratedMission) == 0x000008, "Wrong alignment on WND_MissionBar_Normal_C_SetGeneratedMission");
static_assert(sizeof(WND_MissionBar_Normal_C_SetGeneratedMission) == 0x000150, "Wrong size on WND_MissionBar_Normal_C_SetGeneratedMission");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, InMission) == 0x000000, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::InMission' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, Biome) == 0x000008, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::Biome' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, Temp_bool_Variable) == 0x000010, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, Temp_int_Array_Index_Variable_2) == 0x000024, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, K2Node_MakeStruct_Margin) == 0x000028, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, Temp_int_Loop_Counter_Variable_1) == 0x000038, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, Temp_int_Loop_Counter_Variable_2) == 0x00003C, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Add_IntInt_ReturnValue_2) == 0x000044, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_GetFSDGameState_ReturnValue) == 0x000048, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_GetCurrentGameDifficulty_ReturnValue) == 0x000050, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_GetCurrentGameDifficulty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_CampaignChecks_CampaignMission) == 0x000068, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_CampaignChecks_CampaignMission' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_CampaignChecks_AreRestrictionsMet) == 0x000069, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_CampaignChecks_AreRestrictionsMet' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_BooleanAND_ReturnValue) == 0x00006A, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Not_PreBool_ReturnValue) == 0x00006B, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_BooleanAND_ReturnValue_1) == 0x00006C, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_SelectVisibility_IsVisible) == 0x00006D, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_SelectVisibility_VisibilityChanged) == 0x00006E, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_SelectVisibility_New_Visibility) == 0x00006F, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_SelectVisibility_IsVisible_1) == 0x000070, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_SelectVisibility_IsVisible_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_SelectVisibility_VisibilityChanged_1) == 0x000071, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_SelectVisibility_VisibilityChanged_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_SelectVisibility_New_Visibility_1) == 0x000072, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_SelectVisibility_New_Visibility_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_SelectVisibility_IsVisible_2) == 0x000073, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_SelectVisibility_IsVisible_2' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_SelectVisibility_VisibilityChanged_2) == 0x000074, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_SelectVisibility_VisibilityChanged_2' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_SelectVisibility_New_Visibility_2) == 0x000075, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_SelectVisibility_New_Visibility_2' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Create_ReturnValue) == 0x000078, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Create_ReturnValue_1) == 0x000080, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000088, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_AddChildToVerticalBox_ReturnValue_1) == 0x000090, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_AddChildToVerticalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Array_Get_Item) == 0x000098, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, K2Node_MakeArray_Array) == 0x0000B0, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Array_Get_Item_1) == 0x0000C0, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Array_Length_ReturnValue_1) == 0x0000D0, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000D4, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_SelectVisibility_IsVisible_3) == 0x0000D5, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_SelectVisibility_IsVisible_3' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_SelectVisibility_VisibilityChanged_3) == 0x0000D6, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_SelectVisibility_VisibilityChanged_3' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_SelectVisibility_New_Visibility_3) == 0x0000D7, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_SelectVisibility_New_Visibility_3' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Array_Get_Item_2) == 0x0000D8, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_GetMissionDNA_ReturnValue) == 0x0000E0, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_GetMissionDNA_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_GetMissionDNA_ReturnValue_1) == 0x0000E8, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_GetMissionDNA_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Array_Get_Item_3) == 0x0000F0, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Array_Length_ReturnValue_2) == 0x0000F8, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000FC, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_IsValid_ReturnValue_1) == 0x0000FD, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, K2Node_MakeArray_Array_1) == 0x000100, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, Temp_object_Variable) == 0x000110, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, K2Node_Select_Default) == 0x000120, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Array_Get_Item_4) == 0x000130, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Array_Length_ReturnValue_3) == 0x000138, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Less_IntInt_ReturnValue_3) == 0x00013C, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_PlayAnimation_ReturnValue) == 0x000140, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_IsVisible_ReturnValue) == 0x000148, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_SetGeneratedMission, CallFunc_Not_PreBool_ReturnValue_1) == 0x000149, "Member 'WND_MissionBar_Normal_C_SetGeneratedMission::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.CampaignChecks
// 0x0030 (0x0030 - 0x0000)
struct WND_MissionBar_Normal_C_CampaignChecks final
{
public:
	class UGeneratedMission*                      Mission;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CampaignMission;                                   // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          AreRestrictionsMet;                                // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AE2[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCampaignManager*                       CallFunc_GetCampaingManager_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDPlayerController*                   K2Node_DynamicCast_AsFSDPlayer_Controller;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AreRestrictionsMet_ReturnValue;           // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCampaignMission_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WND_MissionBar_Normal_C_CampaignChecks) == 0x000008, "Wrong alignment on WND_MissionBar_Normal_C_CampaignChecks");
static_assert(sizeof(WND_MissionBar_Normal_C_CampaignChecks) == 0x000030, "Wrong size on WND_MissionBar_Normal_C_CampaignChecks");
static_assert(offsetof(WND_MissionBar_Normal_C_CampaignChecks, Mission) == 0x000000, "Member 'WND_MissionBar_Normal_C_CampaignChecks::Mission' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_CampaignChecks, CampaignMission) == 0x000008, "Member 'WND_MissionBar_Normal_C_CampaignChecks::CampaignMission' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_CampaignChecks, AreRestrictionsMet) == 0x000009, "Member 'WND_MissionBar_Normal_C_CampaignChecks::AreRestrictionsMet' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_CampaignChecks, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'WND_MissionBar_Normal_C_CampaignChecks::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_CampaignChecks, CallFunc_GetCampaingManager_ReturnValue) == 0x000018, "Member 'WND_MissionBar_Normal_C_CampaignChecks::CallFunc_GetCampaingManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_CampaignChecks, K2Node_DynamicCast_AsFSDPlayer_Controller) == 0x000020, "Member 'WND_MissionBar_Normal_C_CampaignChecks::K2Node_DynamicCast_AsFSDPlayer_Controller' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_CampaignChecks, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WND_MissionBar_Normal_C_CampaignChecks::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_CampaignChecks, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'WND_MissionBar_Normal_C_CampaignChecks::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_CampaignChecks, CallFunc_IsValid_ReturnValue_1) == 0x00002A, "Member 'WND_MissionBar_Normal_C_CampaignChecks::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_CampaignChecks, CallFunc_AreRestrictionsMet_ReturnValue) == 0x00002B, "Member 'WND_MissionBar_Normal_C_CampaignChecks::CallFunc_AreRestrictionsMet_ReturnValue' has a wrong offset!");
static_assert(offsetof(WND_MissionBar_Normal_C_CampaignChecks, CallFunc_IsCampaignMission_ReturnValue) == 0x00002C, "Member 'WND_MissionBar_Normal_C_CampaignChecks::CallFunc_IsCampaignMission_ReturnValue' has a wrong offset!");

// Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetDifficultyData
// 0x0018 (0x0018 - 0x0000)
struct WND_MissionBar_Normal_C_SetDifficultyData final
{
public:
	struct FGameDifficulty                        Target;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WND_MissionBar_Normal_C_SetDifficultyData) == 0x000008, "Wrong alignment on WND_MissionBar_Normal_C_SetDifficultyData");
static_assert(sizeof(WND_MissionBar_Normal_C_SetDifficultyData) == 0x000018, "Wrong size on WND_MissionBar_Normal_C_SetDifficultyData");
static_assert(offsetof(WND_MissionBar_Normal_C_SetDifficultyData, Target) == 0x000000, "Member 'WND_MissionBar_Normal_C_SetDifficultyData::Target' has a wrong offset!");

}

