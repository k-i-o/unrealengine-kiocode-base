#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_BoscoRevivesLable

#include "Basic.hpp"


namespace SDK::Params
{

// Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HUD_BoscoRevivesLable_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_BoscoRevivesLable_C_PreConstruct) == 0x000001, "Wrong alignment on HUD_BoscoRevivesLable_C_PreConstruct");
static_assert(sizeof(HUD_BoscoRevivesLable_C_PreConstruct) == 0x000001, "Wrong size on HUD_BoscoRevivesLable_C_PreConstruct");
static_assert(offsetof(HUD_BoscoRevivesLable_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HUD_BoscoRevivesLable_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.OnReviveCountChangedEvent
// 0x0004 (0x0004 - 0x0000)
struct HUD_BoscoRevivesLable_C_OnReviveCountChangedEvent final
{
public:
	int32                                         ReviveCount;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_BoscoRevivesLable_C_OnReviveCountChangedEvent) == 0x000004, "Wrong alignment on HUD_BoscoRevivesLable_C_OnReviveCountChangedEvent");
static_assert(sizeof(HUD_BoscoRevivesLable_C_OnReviveCountChangedEvent) == 0x000004, "Wrong size on HUD_BoscoRevivesLable_C_OnReviveCountChangedEvent");
static_assert(offsetof(HUD_BoscoRevivesLable_C_OnReviveCountChangedEvent, ReviveCount) == 0x000000, "Member 'HUD_BoscoRevivesLable_C_OnReviveCountChangedEvent::ReviveCount' has a wrong offset!");

// Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.ExecuteUbergraph_HUD_BoscoRevivesLable
// 0x0048 (0x0048 - 0x0000)
struct HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ReviveCount)>            K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4821[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ReviveCount;                    // 0x0020(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4822[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4823[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetReviveCharges_ReturnValue;             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable) == 0x000008, "Wrong alignment on HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable");
static_assert(sizeof(HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable) == 0x000048, "Wrong size on HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable");
static_assert(offsetof(HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable, EntryPoint) == 0x000000, "Member 'HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable, K2Node_Event_IsDesignTime) == 0x000014, "Member 'HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000018, "Member 'HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable, K2Node_CustomEvent_ReviveCount) == 0x000020, "Member 'HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable::K2Node_CustomEvent_ReviveCount' has a wrong offset!");
static_assert(offsetof(HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable, CallFunc_GetReviveCharges_ReturnValue) == 0x000044, "Member 'HUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable::CallFunc_GetReviveCharges_ReturnValue' has a wrong offset!");

}
