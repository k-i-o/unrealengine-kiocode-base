#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MutatorIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ITM_MutatorIcon.ITM_MutatorIcon_C.ExecuteUbergraph_ITM_MutatorIcon
// 0x0030 (0x0030 - 0x0000)
struct ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D6[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBasic_ToolTip_C*                       CallFunc_CreateBasicToolTip_ToolTipWidget;         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon) == 0x000008, "Wrong alignment on ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon");
static_assert(sizeof(ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon) == 0x000030, "Wrong size on ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon");
static_assert(offsetof(ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon, EntryPoint) == 0x000000, "Member 'ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon, CallFunc_MenuColors_OutputColor) == 0x000008, "Member 'ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon, CallFunc_BreakVector2D_X) == 0x000018, "Member 'ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon, CallFunc_BreakVector2D_Y) == 0x00001C, "Member 'ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon, CallFunc_TextIsEmpty_ReturnValue) == 0x000020, "Member 'ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon, CallFunc_CreateBasicToolTip_ToolTipWidget) == 0x000028, "Member 'ITM_MutatorIcon_C_ExecuteUbergraph_ITM_MutatorIcon::CallFunc_CreateBasicToolTip_ToolTipWidget' has a wrong offset!");

// Function ITM_MutatorIcon.ITM_MutatorIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_MutatorIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_MutatorIcon_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_MutatorIcon_C_PreConstruct");
static_assert(sizeof(ITM_MutatorIcon_C_PreConstruct) == 0x000001, "Wrong size on ITM_MutatorIcon_C_PreConstruct");
static_assert(offsetof(ITM_MutatorIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_MutatorIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

