#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TipJarUsable

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_TipJarUsable.BP_TipJarUsable_C.GetUseText
// 0x0088 (0x0088 - 0x0000)
struct BP_TipJarUsable_C_GetUseText final
{
public:
	class APlayerCharacter*                       User;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReturnParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0070(0x0018)()
};
static_assert(alignof(BP_TipJarUsable_C_GetUseText) == 0x000008, "Wrong alignment on BP_TipJarUsable_C_GetUseText");
static_assert(sizeof(BP_TipJarUsable_C_GetUseText) == 0x000088, "Wrong size on BP_TipJarUsable_C_GetUseText");
static_assert(offsetof(BP_TipJarUsable_C_GetUseText, User) == 0x000000, "Member 'BP_TipJarUsable_C_GetUseText::User' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_GetUseText, ReturnValue) == 0x000008, "Member 'BP_TipJarUsable_C_GetUseText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_GetUseText, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'BP_TipJarUsable_C_GetUseText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_GetUseText, K2Node_MakeArray_Array) == 0x000060, "Member 'BP_TipJarUsable_C_GetUseText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_GetUseText, CallFunc_Format_ReturnValue) == 0x000070, "Member 'BP_TipJarUsable_C_GetUseText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function BP_TipJarUsable.BP_TipJarUsable_C.SetTipAmount
// 0x0004 (0x0004 - 0x0000)
struct BP_TipJarUsable_C_SetTipAmount final
{
public:
	int32                                         Credits;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TipJarUsable_C_SetTipAmount) == 0x000004, "Wrong alignment on BP_TipJarUsable_C_SetTipAmount");
static_assert(sizeof(BP_TipJarUsable_C_SetTipAmount) == 0x000004, "Wrong size on BP_TipJarUsable_C_SetTipAmount");
static_assert(offsetof(BP_TipJarUsable_C_SetTipAmount, Credits) == 0x000000, "Member 'BP_TipJarUsable_C_SetTipAmount::Credits' has a wrong offset!");

// Function BP_TipJarUsable.BP_TipJarUsable_C.ExecuteUbergraph_BP_TipJarUsable
// 0x0008 (0x0008 - 0x0000)
struct BP_TipJarUsable_C_ExecuteUbergraph_BP_TipJarUsable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Credits;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TipJarUsable_C_ExecuteUbergraph_BP_TipJarUsable) == 0x000004, "Wrong alignment on BP_TipJarUsable_C_ExecuteUbergraph_BP_TipJarUsable");
static_assert(sizeof(BP_TipJarUsable_C_ExecuteUbergraph_BP_TipJarUsable) == 0x000008, "Wrong size on BP_TipJarUsable_C_ExecuteUbergraph_BP_TipJarUsable");
static_assert(offsetof(BP_TipJarUsable_C_ExecuteUbergraph_BP_TipJarUsable, EntryPoint) == 0x000000, "Member 'BP_TipJarUsable_C_ExecuteUbergraph_BP_TipJarUsable::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_ExecuteUbergraph_BP_TipJarUsable, K2Node_CustomEvent_Credits) == 0x000004, "Member 'BP_TipJarUsable_C_ExecuteUbergraph_BP_TipJarUsable::K2Node_CustomEvent_Credits' has a wrong offset!");

// Function BP_TipJarUsable.BP_TipJarUsable_C.BPCanUse
// 0x0048 (0x0048 - 0x0000)
struct BP_TipJarUsable_C_BPCanUse final
{
public:
	class APlayerCharacter*                       User;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        UseCollider;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          IsDrinking;                                        // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E66[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem*                                  CallFunc_GetEquippedItem_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E67[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADrinkableItem*                         K2Node_DynamicCast_AsDrinkable_Item;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E68[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDSaveGame*                           CallFunc_GetFSDSaveGame_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCredits_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TipJarUsable_C_BPCanUse) == 0x000008, "Wrong alignment on BP_TipJarUsable_C_BPCanUse");
static_assert(sizeof(BP_TipJarUsable_C_BPCanUse) == 0x000048, "Wrong size on BP_TipJarUsable_C_BPCanUse");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, User) == 0x000000, "Member 'BP_TipJarUsable_C_BPCanUse::User' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, UseCollider) == 0x000008, "Member 'BP_TipJarUsable_C_BPCanUse::UseCollider' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, ReturnValue) == 0x000010, "Member 'BP_TipJarUsable_C_BPCanUse::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, IsDrinking) == 0x000011, "Member 'BP_TipJarUsable_C_BPCanUse::IsDrinking' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, CallFunc_IsLocallyControlled_ReturnValue) == 0x000012, "Member 'BP_TipJarUsable_C_BPCanUse::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, CallFunc_Not_PreBool_ReturnValue) == 0x000013, "Member 'BP_TipJarUsable_C_BPCanUse::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, CallFunc_GetEquippedItem_ReturnValue) == 0x000018, "Member 'BP_TipJarUsable_C_BPCanUse::CallFunc_GetEquippedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, CallFunc_Not_PreBool_ReturnValue_1) == 0x000020, "Member 'BP_TipJarUsable_C_BPCanUse::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, K2Node_DynamicCast_AsDrinkable_Item) == 0x000028, "Member 'BP_TipJarUsable_C_BPCanUse::K2Node_DynamicCast_AsDrinkable_Item' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_TipJarUsable_C_BPCanUse::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, CallFunc_GetFSDSaveGame_ReturnValue) == 0x000038, "Member 'BP_TipJarUsable_C_BPCanUse::CallFunc_GetFSDSaveGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, CallFunc_GetCredits_ReturnValue) == 0x000040, "Member 'BP_TipJarUsable_C_BPCanUse::CallFunc_GetCredits_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000044, "Member 'BP_TipJarUsable_C_BPCanUse::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TipJarUsable_C_BPCanUse, CallFunc_BooleanAND_ReturnValue) == 0x000045, "Member 'BP_TipJarUsable_C_BPCanUse::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

