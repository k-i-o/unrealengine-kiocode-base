#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LockOn_Counter_Entry

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C.SetState
// 0x0030 (0x0030 - 0x0000)
struct UI_LockOn_Counter_Entry_C_SetState final
{
public:
	bool                                          NewIsOn;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NewIsLimit;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4206[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateBool_ValueChanged;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdateBool_OutValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4207[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateBool_ValueChanged_1;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdateBool_OutValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectVisibility_IsVisible_1;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged_1;     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility_1;        // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LockOn_Counter_Entry_C_SetState) == 0x000008, "Wrong alignment on UI_LockOn_Counter_Entry_C_SetState");
static_assert(sizeof(UI_LockOn_Counter_Entry_C_SetState) == 0x000030, "Wrong size on UI_LockOn_Counter_Entry_C_SetState");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, NewIsOn) == 0x000000, "Member 'UI_LockOn_Counter_Entry_C_SetState::NewIsOn' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, NewIsLimit) == 0x000001, "Member 'UI_LockOn_Counter_Entry_C_SetState::NewIsLimit' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_UpdateBool_ValueChanged) == 0x000010, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_UpdateBool_ValueChanged' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_UpdateBool_OutValue) == 0x000011, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_UpdateBool_OutValue' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000014, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_UpdateBool_ValueChanged_1) == 0x000020, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_UpdateBool_ValueChanged_1' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_UpdateBool_OutValue_1) == 0x000021, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_UpdateBool_OutValue_1' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_Not_PreBool_ReturnValue) == 0x000023, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_BooleanAND_ReturnValue_1) == 0x000024, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_SelectVisibility_IsVisible) == 0x000025, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_SelectVisibility_VisibilityChanged) == 0x000026, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_SelectVisibility_New_Visibility) == 0x000027, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_SelectVisibility_IsVisible_1) == 0x000028, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_SelectVisibility_IsVisible_1' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_SelectVisibility_VisibilityChanged_1) == 0x000029, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_SelectVisibility_VisibilityChanged_1' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_SetState, CallFunc_SelectVisibility_New_Visibility_1) == 0x00002A, "Member 'UI_LockOn_Counter_Entry_C_SetState::CallFunc_SelectVisibility_New_Visibility_1' has a wrong offset!");

// Function UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_LockOn_Counter_Entry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_LockOn_Counter_Entry_C_PreConstruct) == 0x000001, "Wrong alignment on UI_LockOn_Counter_Entry_C_PreConstruct");
static_assert(sizeof(UI_LockOn_Counter_Entry_C_PreConstruct) == 0x000001, "Wrong size on UI_LockOn_Counter_Entry_C_PreConstruct");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_LockOn_Counter_Entry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C.ExecuteUbergraph_UI_LockOn_Counter_Entry
// 0x0008 (0x0008 - 0x0000)
struct UI_LockOn_Counter_Entry_C_ExecuteUbergraph_UI_LockOn_Counter_Entry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_LockOn_Counter_Entry_C_ExecuteUbergraph_UI_LockOn_Counter_Entry) == 0x000004, "Wrong alignment on UI_LockOn_Counter_Entry_C_ExecuteUbergraph_UI_LockOn_Counter_Entry");
static_assert(sizeof(UI_LockOn_Counter_Entry_C_ExecuteUbergraph_UI_LockOn_Counter_Entry) == 0x000008, "Wrong size on UI_LockOn_Counter_Entry_C_ExecuteUbergraph_UI_LockOn_Counter_Entry");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_ExecuteUbergraph_UI_LockOn_Counter_Entry, EntryPoint) == 0x000000, "Member 'UI_LockOn_Counter_Entry_C_ExecuteUbergraph_UI_LockOn_Counter_Entry::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_LockOn_Counter_Entry_C_ExecuteUbergraph_UI_LockOn_Counter_Entry, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_LockOn_Counter_Entry_C_ExecuteUbergraph_UI_LockOn_Counter_Entry::K2Node_Event_IsDesignTime' has a wrong offset!");

}
