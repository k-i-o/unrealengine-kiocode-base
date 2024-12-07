#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Milestone_Notification

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.ExecuteUbergraph_HUD_Milestone_Notification
// 0x0110 (0x0110 - 0x0000)
struct HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMilestoneAsset* Milestone, int32 ReachedTier)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CCC[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetCategoryIcon_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetTitleForTier_ReturnValue;              // 0x0060(0x0018)()
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0088(0x0028)()
	class FText                                   CallFunc_GetTitleForTier_ReturnValue_1;            // 0x00B0(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x00C8(0x0018)()
	int32                                         CallFunc_GetCurrentProgress_Tier;                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentProgress_Progress;              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentProgress_CurrentCount;          // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentProgress_TargetCount;           // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMilestoneAsset*                        K2Node_CustomEvent_Milestone;                      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ReachedTier;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CCD[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification) == 0x000008, "Wrong alignment on HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification");
static_assert(sizeof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification) == 0x000110, "Wrong size on HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, EntryPoint) == 0x000000, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, K2Node_Event_IsDesignTime) == 0x000024, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_MenuColors_OutputColor) == 0x000038, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_MenuColors_OutputColor_1) == 0x000048, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_GetCategoryIcon_ReturnValue) == 0x000058, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_GetCategoryIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_GetTitleForTier_ReturnValue) == 0x000060, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_GetTitleForTier_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_MenuColors_OutputColor_2) == 0x000078, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, K2Node_MakeStruct_SlateColor) == 0x000088, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_GetTitleForTier_ReturnValue_1) == 0x0000B0, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_GetTitleForTier_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_TextToUpper_ReturnValue) == 0x0000C8, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_GetCurrentProgress_Tier) == 0x0000E0, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_GetCurrentProgress_Tier' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_GetCurrentProgress_Progress) == 0x0000E4, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_GetCurrentProgress_Progress' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_GetCurrentProgress_CurrentCount) == 0x0000E8, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_GetCurrentProgress_CurrentCount' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_GetCurrentProgress_TargetCount) == 0x0000EC, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_GetCurrentProgress_TargetCount' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, K2Node_CustomEvent_Milestone) == 0x0000F0, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::K2Node_CustomEvent_Milestone' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, K2Node_CustomEvent_ReachedTier) == 0x0000F8, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::K2Node_CustomEvent_ReachedTier' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_PlayAnimation_ReturnValue) == 0x000100, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification, CallFunc_PlayAnimation_ReturnValue_1) == 0x000108, "Member 'HUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached_Event
// 0x0010 (0x0010 - 0x0000)
struct HUD_Milestone_Notification_C_OnMilestoneReached_Event final
{
public:
	class UMilestoneAsset*                        Param_Milestone;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReachedTier;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_Milestone_Notification_C_OnMilestoneReached_Event) == 0x000008, "Wrong alignment on HUD_Milestone_Notification_C_OnMilestoneReached_Event");
static_assert(sizeof(HUD_Milestone_Notification_C_OnMilestoneReached_Event) == 0x000010, "Wrong size on HUD_Milestone_Notification_C_OnMilestoneReached_Event");
static_assert(offsetof(HUD_Milestone_Notification_C_OnMilestoneReached_Event, Param_Milestone) == 0x000000, "Member 'HUD_Milestone_Notification_C_OnMilestoneReached_Event::Param_Milestone' has a wrong offset!");
static_assert(offsetof(HUD_Milestone_Notification_C_OnMilestoneReached_Event, ReachedTier) == 0x000008, "Member 'HUD_Milestone_Notification_C_OnMilestoneReached_Event::ReachedTier' has a wrong offset!");

// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HUD_Milestone_Notification_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_Milestone_Notification_C_PreConstruct) == 0x000001, "Wrong alignment on HUD_Milestone_Notification_C_PreConstruct");
static_assert(sizeof(HUD_Milestone_Notification_C_PreConstruct) == 0x000001, "Wrong size on HUD_Milestone_Notification_C_PreConstruct");
static_assert(offsetof(HUD_Milestone_Notification_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HUD_Milestone_Notification_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

