#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_UnlockedCelebration

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnFinished__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ITM_UnlockedCelebration_C_OnFinished__DelegateSignature final
{
public:
	TArray<class UUnlockReward*>                  Rewards;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ITM_UnlockedCelebration_C_OnFinished__DelegateSignature) == 0x000008, "Wrong alignment on ITM_UnlockedCelebration_C_OnFinished__DelegateSignature");
static_assert(sizeof(ITM_UnlockedCelebration_C_OnFinished__DelegateSignature) == 0x000010, "Wrong size on ITM_UnlockedCelebration_C_OnFinished__DelegateSignature");
static_assert(offsetof(ITM_UnlockedCelebration_C_OnFinished__DelegateSignature, Rewards) == 0x000000, "Member 'ITM_UnlockedCelebration_C_OnFinished__DelegateSignature::Rewards' has a wrong offset!");

// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ExecuteUbergraph_ITM_UnlockedCelebration
// 0x0080 (0x0080 - 0x0000)
struct ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMasteryItem                           K2Node_CustomEvent_Rewards;                        // 0x0018(0x0018)(ContainsInstancedReference)
	class UClass*                                 K2Node_CustomEvent_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUpgradableGearComponent*               CallFunc_GetComponentFromClass_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C51[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_MasteryReward_C*                    CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C52[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C53[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUnlockReward*                          CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration) == 0x000008, "Wrong alignment on ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration");
static_assert(sizeof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration) == 0x000080, "Wrong size on ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, EntryPoint) == 0x000000, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, Temp_int_Array_Index_Variable) == 0x000004, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, K2Node_CustomEvent_Rewards) == 0x000018, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::K2Node_CustomEvent_Rewards' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, K2Node_CustomEvent_Item) == 0x000030, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_GetComponentFromClass_ReturnValue) == 0x000038, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_GetComponentFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_IsVisible_ReturnValue) == 0x000040, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_Create_ReturnValue) == 0x000050, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000060, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_Greater_IntInt_ReturnValue) == 0x000068, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_Array_Get_Item) == 0x000070, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_Array_Length_ReturnValue_1) == 0x000078, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'ITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ShowRewards
// 0x0020 (0x0020 - 0x0000)
struct ITM_UnlockedCelebration_C_ShowRewards final
{
public:
	struct FMasteryItem                           Rewards;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class UClass*                                 Item;                                              // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_UnlockedCelebration_C_ShowRewards) == 0x000008, "Wrong alignment on ITM_UnlockedCelebration_C_ShowRewards");
static_assert(sizeof(ITM_UnlockedCelebration_C_ShowRewards) == 0x000020, "Wrong size on ITM_UnlockedCelebration_C_ShowRewards");
static_assert(offsetof(ITM_UnlockedCelebration_C_ShowRewards, Rewards) == 0x000000, "Member 'ITM_UnlockedCelebration_C_ShowRewards::Rewards' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_ShowRewards, Item) == 0x000018, "Member 'ITM_UnlockedCelebration_C_ShowRewards::Item' has a wrong offset!");

// Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnKeyUp
// 0x02C0 (0x02C0 - 0x0000)
struct ITM_UnlockedCelebration_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0128(0x00B8)()
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x01E0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOkMenu_ReturnValue;                     // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCloseOrBackMenu_ReturnValue;            // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C54[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0200(0x00B8)()
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_UnlockedCelebration_C_OnKeyUp) == 0x000008, "Wrong alignment on ITM_UnlockedCelebration_C_OnKeyUp");
static_assert(sizeof(ITM_UnlockedCelebration_C_OnKeyUp) == 0x0002C0, "Wrong size on ITM_UnlockedCelebration_C_OnKeyUp");
static_assert(offsetof(ITM_UnlockedCelebration_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'ITM_UnlockedCelebration_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_OnKeyUp, InKeyEvent) == 0x000038, "Member 'ITM_UnlockedCelebration_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_OnKeyUp, ReturnValue) == 0x000070, "Member 'ITM_UnlockedCelebration_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_OnKeyUp, CallFunc_Unhandled_ReturnValue) == 0x000128, "Member 'ITM_UnlockedCelebration_C_OnKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_OnKeyUp, CallFunc_GetKey_ReturnValue) == 0x0001E0, "Member 'ITM_UnlockedCelebration_C_OnKeyUp::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0001F8, "Member 'ITM_UnlockedCelebration_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_OnKeyUp, CallFunc_IsOkMenu_ReturnValue) == 0x0001F9, "Member 'ITM_UnlockedCelebration_C_OnKeyUp::CallFunc_IsOkMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_OnKeyUp, CallFunc_IsCloseOrBackMenu_ReturnValue) == 0x0001FA, "Member 'ITM_UnlockedCelebration_C_OnKeyUp::CallFunc_IsCloseOrBackMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_OnKeyUp, CallFunc_BooleanOR_ReturnValue) == 0x0001FB, "Member 'ITM_UnlockedCelebration_C_OnKeyUp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_OnKeyUp, CallFunc_Handled_ReturnValue) == 0x000200, "Member 'ITM_UnlockedCelebration_C_OnKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_UnlockedCelebration_C_OnKeyUp, CallFunc_BooleanOR_ReturnValue_1) == 0x0002B8, "Member 'ITM_UnlockedCelebration_C_OnKeyUp::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

}
