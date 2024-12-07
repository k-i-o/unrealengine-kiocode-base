#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_MinersManualNotification

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.ExecuteUbergraph_HUD_MinersManualNotification
// 0x0080 (0x0080 - 0x0000)
struct HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3781[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Text;                           // 0x0028(0x0018)()
	float                                         K2Node_CustomEvent_TimeOnScreen;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3782[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification) == 0x000008, "Wrong alignment on HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification");
static_assert(sizeof(HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification) == 0x000080, "Wrong size on HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification");
static_assert(offsetof(HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification, EntryPoint) == 0x000000, "Member 'HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification, K2Node_Event_IsDesignTime) == 0x000014, "Member 'HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification, CallFunc_MenuColors_OutputColor) == 0x000018, "Member 'HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification, K2Node_CustomEvent_Text) == 0x000028, "Member 'HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification, K2Node_CustomEvent_TimeOnScreen) == 0x000040, "Member 'HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification::K2Node_CustomEvent_TimeOnScreen' has a wrong offset!");
static_assert(offsetof(HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification, CallFunc_PlayAnimation_ReturnValue_1) == 0x000078, "Member 'HUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.Show
// 0x0020 (0x0020 - 0x0000)
struct HUD_MinersManualNotification_C_Show final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         TimeOnScreen;                                      // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_MinersManualNotification_C_Show) == 0x000008, "Wrong alignment on HUD_MinersManualNotification_C_Show");
static_assert(sizeof(HUD_MinersManualNotification_C_Show) == 0x000020, "Wrong size on HUD_MinersManualNotification_C_Show");
static_assert(offsetof(HUD_MinersManualNotification_C_Show, Text) == 0x000000, "Member 'HUD_MinersManualNotification_C_Show::Text' has a wrong offset!");
static_assert(offsetof(HUD_MinersManualNotification_C_Show, TimeOnScreen) == 0x000018, "Member 'HUD_MinersManualNotification_C_Show::TimeOnScreen' has a wrong offset!");

// Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HUD_MinersManualNotification_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_MinersManualNotification_C_PreConstruct) == 0x000001, "Wrong alignment on HUD_MinersManualNotification_C_PreConstruct");
static_assert(sizeof(HUD_MinersManualNotification_C_PreConstruct) == 0x000001, "Wrong size on HUD_MinersManualNotification_C_PreConstruct");
static_assert(offsetof(HUD_MinersManualNotification_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HUD_MinersManualNotification_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

