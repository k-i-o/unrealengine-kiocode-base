#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Bosco

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_Bosco.ABP_Bosco_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Bosco_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Bosco_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Bosco_C_AnimGraph");
static_assert(sizeof(ABP_Bosco_C_AnimGraph) == 0x000010, "Wrong size on ABP_Bosco_C_AnimGraph");
static_assert(offsetof(ABP_Bosco_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_Bosco_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_Bosco.ABP_Bosco_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_Bosco_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Bosco_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_Bosco_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_Bosco_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_Bosco_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_Bosco_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_Bosco_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_Bosco.ABP_Bosco_C.ExecuteUbergraph_ABP_Bosco
// 0x0028 (0x0028 - 0x0000)
struct ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_4;          // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_5;          // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_6;          // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_7;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_8;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_9;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54AC[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco) == 0x000004, "Wrong alignment on ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco");
static_assert(sizeof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco) == 0x000028, "Wrong size on ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, EntryPoint) == 0x000000, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000005, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000006, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000007, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x000008, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000009, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00000A, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_Not_PreBool_ReturnValue_1) == 0x00000B, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_BooleanAND_ReturnValue) == 0x00000C, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x00000D, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_NotEqual_ByteByte_ReturnValue_4) == 0x00000E, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_NotEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_MakeLiteralByte_ReturnValue) == 0x00000F, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000010, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000011, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000012, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000013, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_BooleanOR_ReturnValue) == 0x000014, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_NotEqual_ByteByte_ReturnValue_5) == 0x000015, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_NotEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000016, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_NotEqual_ByteByte_ReturnValue_6) == 0x000017, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_NotEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_Not_PreBool_ReturnValue_2) == 0x000018, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_Not_PreBool_ReturnValue_3) == 0x000019, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_NotEqual_ByteByte_ReturnValue_7) == 0x00001A, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_NotEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_BooleanAND_ReturnValue_1) == 0x00001B, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_Not_PreBool_ReturnValue_4) == 0x00001C, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_NotEqual_ByteByte_ReturnValue_8) == 0x00001D, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_NotEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_Not_PreBool_ReturnValue_5) == 0x00001E, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_BooleanAND_ReturnValue_2) == 0x00001F, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_NotEqual_ByteByte_ReturnValue_9) == 0x000020, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_NotEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, CallFunc_BooleanAND_ReturnValue_3) == 0x000021, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco, K2Node_Event_DeltaTimeX) == 0x000024, "Member 'ABP_Bosco_C_ExecuteUbergraph_ABP_Bosco::K2Node_Event_DeltaTimeX' has a wrong offset!");

}

