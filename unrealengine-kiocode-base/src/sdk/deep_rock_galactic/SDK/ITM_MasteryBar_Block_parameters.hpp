#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MasteryBar_Block

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ExecuteUbergraph_ITM_MasteryBar_Block
// 0x0030 (0x0030 - 0x0000)
struct ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E36[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block) == 0x000008, "Wrong alignment on ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block");
static_assert(sizeof(ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block) == 0x000030, "Wrong size on ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block");
static_assert(offsetof(ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block, EntryPoint) == 0x000000, "Member 'ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block, CallFunc_MenuColors_OutputColor) == 0x000010, "Member 'ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block, CallFunc_MenuColors_OutputColor_1) == 0x000020, "Member 'ITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");

// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_MasteryBar_Block_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_MasteryBar_Block_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_MasteryBar_Block_C_PreConstruct");
static_assert(sizeof(ITM_MasteryBar_Block_C_PreConstruct) == 0x000001, "Wrong size on ITM_MasteryBar_Block_C_PreConstruct");
static_assert(offsetof(ITM_MasteryBar_Block_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_MasteryBar_Block_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.SetUnlocked
// 0x0010 (0x0010 - 0x0000)
struct ITM_MasteryBar_Block_C_SetUnlocked final
{
public:
	bool                                          IsUnlocked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E37[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_MasteryBar_Block_C_SetUnlocked) == 0x000004, "Wrong alignment on ITM_MasteryBar_Block_C_SetUnlocked");
static_assert(sizeof(ITM_MasteryBar_Block_C_SetUnlocked) == 0x000010, "Wrong size on ITM_MasteryBar_Block_C_SetUnlocked");
static_assert(offsetof(ITM_MasteryBar_Block_C_SetUnlocked, IsUnlocked) == 0x000000, "Member 'ITM_MasteryBar_Block_C_SetUnlocked::IsUnlocked' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Block_C_SetUnlocked, Temp_bool_Variable) == 0x000001, "Member 'ITM_MasteryBar_Block_C_SetUnlocked::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Block_C_SetUnlocked, Temp_float_Variable) == 0x000004, "Member 'ITM_MasteryBar_Block_C_SetUnlocked::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Block_C_SetUnlocked, Temp_float_Variable_1) == 0x000008, "Member 'ITM_MasteryBar_Block_C_SetUnlocked::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Block_C_SetUnlocked, K2Node_Select_Default) == 0x00000C, "Member 'ITM_MasteryBar_Block_C_SetUnlocked::K2Node_Select_Default' has a wrong offset!");

}

