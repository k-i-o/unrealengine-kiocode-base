#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_SonyTeamLeader

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ITM_SonyTeamLeader.ITM_SonyTeamLeader_C.ExecuteUbergraph_ITM_SonyTeamLeader
// 0x0018 (0x0018 - 0x0000)
struct ITM_SonyTeamLeader_C_ExecuteUbergraph_ITM_SonyTeamLeader final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColorsAndOpacity_OutputColor;         // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_SonyTeamLeader_C_ExecuteUbergraph_ITM_SonyTeamLeader) == 0x000004, "Wrong alignment on ITM_SonyTeamLeader_C_ExecuteUbergraph_ITM_SonyTeamLeader");
static_assert(sizeof(ITM_SonyTeamLeader_C_ExecuteUbergraph_ITM_SonyTeamLeader) == 0x000018, "Wrong size on ITM_SonyTeamLeader_C_ExecuteUbergraph_ITM_SonyTeamLeader");
static_assert(offsetof(ITM_SonyTeamLeader_C_ExecuteUbergraph_ITM_SonyTeamLeader, EntryPoint) == 0x000000, "Member 'ITM_SonyTeamLeader_C_ExecuteUbergraph_ITM_SonyTeamLeader::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_SonyTeamLeader_C_ExecuteUbergraph_ITM_SonyTeamLeader, CallFunc_MenuColorsAndOpacity_OutputColor) == 0x000004, "Member 'ITM_SonyTeamLeader_C_ExecuteUbergraph_ITM_SonyTeamLeader::CallFunc_MenuColorsAndOpacity_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_SonyTeamLeader_C_ExecuteUbergraph_ITM_SonyTeamLeader, K2Node_Event_IsDesignTime) == 0x000014, "Member 'ITM_SonyTeamLeader_C_ExecuteUbergraph_ITM_SonyTeamLeader::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function ITM_SonyTeamLeader.ITM_SonyTeamLeader_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_SonyTeamLeader_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_SonyTeamLeader_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_SonyTeamLeader_C_PreConstruct");
static_assert(sizeof(ITM_SonyTeamLeader_C_PreConstruct) == 0x000001, "Wrong size on ITM_SonyTeamLeader_C_PreConstruct");
static_assert(offsetof(ITM_SonyTeamLeader_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_SonyTeamLeader_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_SonyTeamLeader.ITM_SonyTeamLeader_C.SetSize
// 0x0004 (0x0004 - 0x0000)
struct ITM_SonyTeamLeader_C_SetSize final
{
public:
	float                                         Param_Size;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_SonyTeamLeader_C_SetSize) == 0x000004, "Wrong alignment on ITM_SonyTeamLeader_C_SetSize");
static_assert(sizeof(ITM_SonyTeamLeader_C_SetSize) == 0x000004, "Wrong size on ITM_SonyTeamLeader_C_SetSize");
static_assert(offsetof(ITM_SonyTeamLeader_C_SetSize, Param_Size) == 0x000000, "Member 'ITM_SonyTeamLeader_C_SetSize::Param_Size' has a wrong offset!");

}

