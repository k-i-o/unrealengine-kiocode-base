#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MasteryBar_Icon

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ExecuteUbergraph_ITM_MasteryBar_Icon
// 0x0050 (0x0050 - 0x0000)
struct ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E31[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E32[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E33[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTOOLTIP_MasteryIcon_C*                 CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon) == 0x000008, "Wrong alignment on ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon");
static_assert(sizeof(ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon) == 0x000050, "Wrong size on ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon, EntryPoint) == 0x000000, "Member 'ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon, CallFunc_Create_ReturnValue) == 0x000028, "Member 'ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon, CallFunc_MenuColors_OutputColor) == 0x000030, "Member 'ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon, CallFunc_MenuColors_OutputColor_1) == 0x000040, "Member 'ITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");

// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_MasteryBar_Icon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_MasteryBar_Icon_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_MasteryBar_Icon_C_PreConstruct");
static_assert(sizeof(ITM_MasteryBar_Icon_C_PreConstruct) == 0x000001, "Wrong size on ITM_MasteryBar_Icon_C_PreConstruct");
static_assert(offsetof(ITM_MasteryBar_Icon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_MasteryBar_Icon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.SetUnlocked
// 0x0020 (0x0020 - 0x0000)
struct ITM_MasteryBar_Icon_C_SetUnlocked final
{
public:
	bool                                          IsUnlocked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E34[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E35[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_MasteryBar_Icon_C_SetUnlocked) == 0x000004, "Wrong alignment on ITM_MasteryBar_Icon_C_SetUnlocked");
static_assert(sizeof(ITM_MasteryBar_Icon_C_SetUnlocked) == 0x000020, "Wrong size on ITM_MasteryBar_Icon_C_SetUnlocked");
static_assert(offsetof(ITM_MasteryBar_Icon_C_SetUnlocked, IsUnlocked) == 0x000000, "Member 'ITM_MasteryBar_Icon_C_SetUnlocked::IsUnlocked' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_SetUnlocked, Temp_bool_Variable) == 0x000001, "Member 'ITM_MasteryBar_Icon_C_SetUnlocked::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_SetUnlocked, Temp_float_Variable) == 0x000004, "Member 'ITM_MasteryBar_Icon_C_SetUnlocked::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_SetUnlocked, Temp_float_Variable_1) == 0x000008, "Member 'ITM_MasteryBar_Icon_C_SetUnlocked::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_SetUnlocked, Temp_bool_Variable_1) == 0x00000C, "Member 'ITM_MasteryBar_Icon_C_SetUnlocked::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_SetUnlocked, Temp_int_Variable) == 0x000010, "Member 'ITM_MasteryBar_Icon_C_SetUnlocked::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_SetUnlocked, Temp_int_Variable_1) == 0x000014, "Member 'ITM_MasteryBar_Icon_C_SetUnlocked::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_SetUnlocked, K2Node_Select_Default) == 0x000018, "Member 'ITM_MasteryBar_Icon_C_SetUnlocked::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_SetUnlocked, K2Node_Select_Default_1) == 0x00001C, "Member 'ITM_MasteryBar_Icon_C_SetUnlocked::K2Node_Select_Default_1' has a wrong offset!");

// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ToggleIcons
// 0x0005 (0x0005 - 0x0000)
struct ITM_MasteryBar_Icon_C_ToggleIcons final
{
public:
	bool                                          Param_ShowIcons;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_MasteryBar_Icon_C_ToggleIcons) == 0x000001, "Wrong alignment on ITM_MasteryBar_Icon_C_ToggleIcons");
static_assert(sizeof(ITM_MasteryBar_Icon_C_ToggleIcons) == 0x000005, "Wrong size on ITM_MasteryBar_Icon_C_ToggleIcons");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ToggleIcons, Param_ShowIcons) == 0x000000, "Member 'ITM_MasteryBar_Icon_C_ToggleIcons::Param_ShowIcons' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ToggleIcons, Temp_bool_Variable) == 0x000001, "Member 'ITM_MasteryBar_Icon_C_ToggleIcons::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ToggleIcons, Temp_byte_Variable) == 0x000002, "Member 'ITM_MasteryBar_Icon_C_ToggleIcons::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ToggleIcons, Temp_byte_Variable_1) == 0x000003, "Member 'ITM_MasteryBar_Icon_C_ToggleIcons::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_MasteryBar_Icon_C_ToggleIcons, K2Node_Select_Default) == 0x000004, "Member 'ITM_MasteryBar_Icon_C_ToggleIcons::K2Node_Select_Default' has a wrong offset!");

}
