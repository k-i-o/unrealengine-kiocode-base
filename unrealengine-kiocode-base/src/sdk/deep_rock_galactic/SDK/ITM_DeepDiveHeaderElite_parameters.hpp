#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DeepDiveHeaderElite

#include "Basic.hpp"


namespace SDK::Params
{

// Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.ExecuteUbergraph_ITM_DeepDiveHeaderElite
// 0x0008 (0x0008 - 0x0000)
struct ITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite) == 0x000004, "Wrong alignment on ITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite");
static_assert(sizeof(ITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite) == 0x000008, "Wrong size on ITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite");
static_assert(offsetof(ITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite, EntryPoint) == 0x000000, "Member 'ITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_DeepDiveHeaderElite_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_DeepDiveHeaderElite_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_DeepDiveHeaderElite_C_PreConstruct");
static_assert(sizeof(ITM_DeepDiveHeaderElite_C_PreConstruct) == 0x000001, "Wrong size on ITM_DeepDiveHeaderElite_C_PreConstruct");
static_assert(offsetof(ITM_DeepDiveHeaderElite_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_DeepDiveHeaderElite_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.SetEliteContents
// 0x0030 (0x0030 - 0x0000)
struct ITM_DeepDiveHeaderElite_C_SetEliteContents final
{
public:
	class FText                                   Param_EliteContents;                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0018(0x0018)()
};
static_assert(alignof(ITM_DeepDiveHeaderElite_C_SetEliteContents) == 0x000008, "Wrong alignment on ITM_DeepDiveHeaderElite_C_SetEliteContents");
static_assert(sizeof(ITM_DeepDiveHeaderElite_C_SetEliteContents) == 0x000030, "Wrong size on ITM_DeepDiveHeaderElite_C_SetEliteContents");
static_assert(offsetof(ITM_DeepDiveHeaderElite_C_SetEliteContents, Param_EliteContents) == 0x000000, "Member 'ITM_DeepDiveHeaderElite_C_SetEliteContents::Param_EliteContents' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeaderElite_C_SetEliteContents, CallFunc_TextToUpper_ReturnValue) == 0x000018, "Member 'ITM_DeepDiveHeaderElite_C_SetEliteContents::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

}
