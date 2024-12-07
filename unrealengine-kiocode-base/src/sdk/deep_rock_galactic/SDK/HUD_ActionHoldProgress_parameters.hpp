#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_ActionHoldProgress

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.ExecuteUbergraph_HUD_ActionHoldProgress
// 0x0068 (0x0068 - 0x0000)
struct HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   K2Node_CustomEvent_Description;                    // 0x0018(0x0018)()
	float                                         K2Node_CustomEvent_Progress;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3707[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0038(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3708[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FText Description, float Progress)> K2Node_CreateDelegate_OutputDelegate;              // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress) == 0x000008, "Wrong alignment on HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress");
static_assert(sizeof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress) == 0x000068, "Wrong size on HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress");
static_assert(offsetof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress, EntryPoint) == 0x000000, "Member 'HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress, CallFunc_MenuColors_OutputColor) == 0x000004, "Member 'HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress, Temp_bool_Variable) == 0x000014, "Member 'HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress, Temp_byte_Variable) == 0x000015, "Member 'HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress, Temp_byte_Variable_1) == 0x000016, "Member 'HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress, K2Node_Event_IsDesignTime) == 0x000017, "Member 'HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress, K2Node_CustomEvent_Description) == 0x000018, "Member 'HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress::K2Node_CustomEvent_Description' has a wrong offset!");
static_assert(offsetof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress, K2Node_CustomEvent_Progress) == 0x000030, "Member 'HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress::K2Node_CustomEvent_Progress' has a wrong offset!");
static_assert(offsetof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress, CallFunc_Less_FloatFloat_ReturnValue) == 0x000034, "Member 'HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress, CallFunc_TextToUpper_ReturnValue) == 0x000038, "Member 'HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress, K2Node_Select_Default) == 0x000050, "Member 'HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress, K2Node_CreateDelegate_OutputDelegate) == 0x000054, "Member 'HUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.OnActionHoldProgress
// 0x0020 (0x0020 - 0x0000)
struct HUD_ActionHoldProgress_C_OnActionHoldProgress final
{
public:
	class FText                                   Description;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         Progress;                                          // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_ActionHoldProgress_C_OnActionHoldProgress) == 0x000008, "Wrong alignment on HUD_ActionHoldProgress_C_OnActionHoldProgress");
static_assert(sizeof(HUD_ActionHoldProgress_C_OnActionHoldProgress) == 0x000020, "Wrong size on HUD_ActionHoldProgress_C_OnActionHoldProgress");
static_assert(offsetof(HUD_ActionHoldProgress_C_OnActionHoldProgress, Description) == 0x000000, "Member 'HUD_ActionHoldProgress_C_OnActionHoldProgress::Description' has a wrong offset!");
static_assert(offsetof(HUD_ActionHoldProgress_C_OnActionHoldProgress, Progress) == 0x000018, "Member 'HUD_ActionHoldProgress_C_OnActionHoldProgress::Progress' has a wrong offset!");

// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HUD_ActionHoldProgress_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_ActionHoldProgress_C_PreConstruct) == 0x000001, "Wrong alignment on HUD_ActionHoldProgress_C_PreConstruct");
static_assert(sizeof(HUD_ActionHoldProgress_C_PreConstruct) == 0x000001, "Wrong size on HUD_ActionHoldProgress_C_PreConstruct");
static_assert(offsetof(HUD_ActionHoldProgress_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HUD_ActionHoldProgress_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

