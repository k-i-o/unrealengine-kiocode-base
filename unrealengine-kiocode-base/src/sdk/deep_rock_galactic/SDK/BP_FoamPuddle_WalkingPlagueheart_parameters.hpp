#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FoamPuddle_WalkingPlagueheart

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function BP_FoamPuddle_WalkingPlagueheart.BP_FoamPuddle_WalkingPlagueheart_C.SetPuddleLifetime
// 0x0004 (0x0004 - 0x0000)
struct BP_FoamPuddle_WalkingPlagueheart_C_SetPuddleLifetime final
{
public:
	float                                         LifeTime;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FoamPuddle_WalkingPlagueheart_C_SetPuddleLifetime) == 0x000004, "Wrong alignment on BP_FoamPuddle_WalkingPlagueheart_C_SetPuddleLifetime");
static_assert(sizeof(BP_FoamPuddle_WalkingPlagueheart_C_SetPuddleLifetime) == 0x000004, "Wrong size on BP_FoamPuddle_WalkingPlagueheart_C_SetPuddleLifetime");
static_assert(offsetof(BP_FoamPuddle_WalkingPlagueheart_C_SetPuddleLifetime, LifeTime) == 0x000000, "Member 'BP_FoamPuddle_WalkingPlagueheart_C_SetPuddleLifetime::LifeTime' has a wrong offset!");

// Function BP_FoamPuddle_WalkingPlagueheart.BP_FoamPuddle_WalkingPlagueheart_C.OnChangeVacuumStateDelegate_Event
// 0x0001 (0x0001 - 0x0000)
struct BP_FoamPuddle_WalkingPlagueheart_C_OnChangeVacuumStateDelegate_Event final
{
public:
	EVacuumState                                  Param_State;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FoamPuddle_WalkingPlagueheart_C_OnChangeVacuumStateDelegate_Event) == 0x000001, "Wrong alignment on BP_FoamPuddle_WalkingPlagueheart_C_OnChangeVacuumStateDelegate_Event");
static_assert(sizeof(BP_FoamPuddle_WalkingPlagueheart_C_OnChangeVacuumStateDelegate_Event) == 0x000001, "Wrong size on BP_FoamPuddle_WalkingPlagueheart_C_OnChangeVacuumStateDelegate_Event");
static_assert(offsetof(BP_FoamPuddle_WalkingPlagueheart_C_OnChangeVacuumStateDelegate_Event, Param_State) == 0x000000, "Member 'BP_FoamPuddle_WalkingPlagueheart_C_OnChangeVacuumStateDelegate_Event::Param_State' has a wrong offset!");

// Function BP_FoamPuddle_WalkingPlagueheart.BP_FoamPuddle_WalkingPlagueheart_C.ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart
// 0x0028 (0x0028 - 0x0000)
struct BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54BA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EVacuumState State)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	float                                         K2Node_Event_lifeTime;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimelineLength_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVacuumState                                  K2Node_CustomEvent_State;                          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart) == 0x000004, "Wrong alignment on BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart");
static_assert(sizeof(BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart) == 0x000028, "Wrong size on BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart");
static_assert(offsetof(BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart, EntryPoint) == 0x000000, "Member 'BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart, K2Node_Event_lifeTime) == 0x000018, "Member 'BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart::K2Node_Event_lifeTime' has a wrong offset!");
static_assert(offsetof(BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart, CallFunc_GetTimelineLength_ReturnValue) == 0x00001C, "Member 'BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart::CallFunc_GetTimelineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart, CallFunc_Add_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart, K2Node_CustomEvent_State) == 0x000024, "Member 'BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart::K2Node_CustomEvent_State' has a wrong offset!");
static_assert(offsetof(BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000025, "Member 'BP_FoamPuddle_WalkingPlagueheart_C_ExecuteUbergraph_BP_FoamPuddle_WalkingPlagueheart::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}
