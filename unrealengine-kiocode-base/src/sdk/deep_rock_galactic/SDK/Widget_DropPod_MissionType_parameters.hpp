#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Widget_DropPod_MissionType

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.ExecuteUbergraph_Widget_DropPod_MissionType
// 0x0078 (0x0078 - 0x0000)
struct Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UGeneratedMission* OutGeneratedMission)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(struct FGameDifficulty& Setting)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_45F2[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGeneratedMission*                      K2Node_CustomEvent_OutGeneratedMission;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameDifficulty                        K2Node_CustomEvent_Setting;                        // 0x0048(0x0018)(ConstParm)
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue_2;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F3[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType) == 0x000008, "Wrong alignment on Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType");
static_assert(sizeof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType) == 0x000078, "Wrong size on Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType");
static_assert(offsetof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType, EntryPoint) == 0x000000, "Member 'Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType::EntryPoint' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000028, "Member 'Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType, CallFunc_GetFSDGameInstance_ReturnValue_1) == 0x000030, "Member 'Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType::CallFunc_GetFSDGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType, K2Node_CustomEvent_OutGeneratedMission) == 0x000038, "Member 'Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType::K2Node_CustomEvent_OutGeneratedMission' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType, CallFunc_GetFSDGameState_ReturnValue) == 0x000040, "Member 'Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType, K2Node_CustomEvent_Setting) == 0x000048, "Member 'Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType::K2Node_CustomEvent_Setting' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType, CallFunc_GetFSDGameInstance_ReturnValue_2) == 0x000060, "Member 'Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType::CallFunc_GetFSDGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType, CallFunc_Array_Get_Item) == 0x000070, "Member 'Widget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType::CallFunc_Array_Get_Item' has a wrong offset!");

// Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.OnDifficultyChanged_Event_0
// 0x0018 (0x0018 - 0x0000)
struct Widget_DropPod_MissionType_C_OnDifficultyChanged_Event_0 final
{
public:
	struct FGameDifficulty                        Setting;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Widget_DropPod_MissionType_C_OnDifficultyChanged_Event_0) == 0x000008, "Wrong alignment on Widget_DropPod_MissionType_C_OnDifficultyChanged_Event_0");
static_assert(sizeof(Widget_DropPod_MissionType_C_OnDifficultyChanged_Event_0) == 0x000018, "Wrong size on Widget_DropPod_MissionType_C_OnDifficultyChanged_Event_0");
static_assert(offsetof(Widget_DropPod_MissionType_C_OnDifficultyChanged_Event_0, Setting) == 0x000000, "Member 'Widget_DropPod_MissionType_C_OnDifficultyChanged_Event_0::Setting' has a wrong offset!");

// Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.OnGeneratedMissionChanged
// 0x0008 (0x0008 - 0x0000)
struct Widget_DropPod_MissionType_C_OnGeneratedMissionChanged final
{
public:
	class UGeneratedMission*                      OutGeneratedMission;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Widget_DropPod_MissionType_C_OnGeneratedMissionChanged) == 0x000008, "Wrong alignment on Widget_DropPod_MissionType_C_OnGeneratedMissionChanged");
static_assert(sizeof(Widget_DropPod_MissionType_C_OnGeneratedMissionChanged) == 0x000008, "Wrong size on Widget_DropPod_MissionType_C_OnGeneratedMissionChanged");
static_assert(offsetof(Widget_DropPod_MissionType_C_OnGeneratedMissionChanged, OutGeneratedMission) == 0x000000, "Member 'Widget_DropPod_MissionType_C_OnGeneratedMissionChanged::OutGeneratedMission' has a wrong offset!");

// Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.SetGeneratedMission
// 0x00E8 (0x00E8 - 0x0000)
struct Widget_DropPod_MissionType_C_SetGeneratedMission final
{
public:
	class UGeneratedMission*                      In_Mission;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F4[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UDeepDive*                              CallFunc_GetDeepDiveFromMission_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEliteDeepDiveMission_ReturnValue;       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeepDive_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F5[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_1;                              // 0x0038(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0050(0x0028)()
	bool                                          Temp_bool_Variable_1;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F6[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0080(0x0028)()
	class FText                                   K2Node_Select_Default;                             // 0x00A8(0x0018)()
	bool                                          CallFunc_IsDeepDive_ReturnValue_1;                 // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F7[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_1;                           // 0x00D0(0x0018)()
};
static_assert(alignof(Widget_DropPod_MissionType_C_SetGeneratedMission) == 0x000008, "Wrong alignment on Widget_DropPod_MissionType_C_SetGeneratedMission");
static_assert(sizeof(Widget_DropPod_MissionType_C_SetGeneratedMission) == 0x0000E8, "Wrong size on Widget_DropPod_MissionType_C_SetGeneratedMission");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, In_Mission) == 0x000000, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::In_Mission' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, Temp_text_Variable) == 0x000008, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, Temp_bool_Variable) == 0x000021, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, CallFunc_GetDeepDiveFromMission_ReturnValue) == 0x000028, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::CallFunc_GetDeepDiveFromMission_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, CallFunc_IsEliteDeepDiveMission_ReturnValue) == 0x000030, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::CallFunc_IsEliteDeepDiveMission_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, CallFunc_IsDeepDive_ReturnValue) == 0x000031, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::CallFunc_IsDeepDive_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, Temp_text_Variable_1) == 0x000038, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, K2Node_MakeStruct_SlateColor) == 0x000050, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, Temp_bool_Variable_1) == 0x000078, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, K2Node_MakeStruct_SlateColor_1) == 0x000080, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, K2Node_Select_Default) == 0x0000A8, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, CallFunc_IsDeepDive_ReturnValue_1) == 0x0000C0, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::CallFunc_IsDeepDive_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetGeneratedMission, K2Node_Select_Default_1) == 0x0000D0, "Member 'Widget_DropPod_MissionType_C_SetGeneratedMission::K2Node_Select_Default_1' has a wrong offset!");

// Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.SetMutators
// 0x00B8 (0x00B8 - 0x0000)
struct Widget_DropPod_MissionType_C_SetMutators final
{
public:
	class UGeneratedMission*                      Mission;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F8[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMissionMutator*>                K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F9[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UITM_MisDesMutator_C*                   CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_MisDesMutator_C*                   CallFunc_Create_ReturnValue_1;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45FA[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMissionMutator*>                Temp_object_Variable;                              // 0x0068(0x0010)(ReferenceParm)
	class UMissionWarning*                        CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45FB[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMissionMutator*>                K2Node_Select_Default;                             // 0x0088(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45FC[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMissionMutator*                        CallFunc_Array_Get_Item_1;                         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Widget_DropPod_MissionType_C_SetMutators) == 0x000008, "Wrong alignment on Widget_DropPod_MissionType_C_SetMutators");
static_assert(sizeof(Widget_DropPod_MissionType_C_SetMutators) == 0x0000B8, "Wrong size on Widget_DropPod_MissionType_C_SetMutators");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, Mission) == 0x000000, "Member 'Widget_DropPod_MissionType_C_SetMutators::Mission' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'Widget_DropPod_MissionType_C_SetMutators::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, K2Node_MakeArray_Array) == 0x000018, "Member 'Widget_DropPod_MissionType_C_SetMutators::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, Temp_int_Array_Index_Variable) == 0x000028, "Member 'Widget_DropPod_MissionType_C_SetMutators::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, K2Node_MakeStruct_Margin) == 0x00002C, "Member 'Widget_DropPod_MissionType_C_SetMutators::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_Create_ReturnValue) == 0x000040, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_Create_ReturnValue_1) == 0x000048, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000050, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_AddChildToHorizontalBox_ReturnValue_1) == 0x000058, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_AddChildToHorizontalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, Temp_int_Array_Index_Variable_1) == 0x000060, "Member 'Widget_DropPod_MissionType_C_SetMutators::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, Temp_object_Variable) == 0x000068, "Member 'Widget_DropPod_MissionType_C_SetMutators::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_Array_Get_Item) == 0x000078, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, Temp_bool_Variable) == 0x000080, "Member 'Widget_DropPod_MissionType_C_SetMutators::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, Temp_int_Loop_Counter_Variable_1) == 0x000084, "Member 'Widget_DropPod_MissionType_C_SetMutators::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, K2Node_Select_Default) == 0x000088, "Member 'Widget_DropPod_MissionType_C_SetMutators::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_Array_Get_Item_1) == 0x0000A0, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_Array_Length_ReturnValue_1) == 0x0000A8, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000AC, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Widget_DropPod_MissionType_C_SetMutators, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B0, "Member 'Widget_DropPod_MissionType_C_SetMutators::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}

