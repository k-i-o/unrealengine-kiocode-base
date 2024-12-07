#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_SpaceRig_Notification

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.ExecuteUbergraph_HUD_SpaceRig_Notification
// 0x0070 (0x0070 - 0x0000)
struct HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37D9[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
};
static_assert(alignof(HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification) == 0x000008, "Wrong alignment on HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification");
static_assert(sizeof(HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification) == 0x000070, "Wrong size on HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification");
static_assert(offsetof(HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification, EntryPoint) == 0x000000, "Member 'HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification, K2Node_Event_IsDesignTime) == 0x000024, "Member 'HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification, CallFunc_MenuColors_OutputColor) == 0x000038, "Member 'HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'HUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HUD_SpaceRig_Notification_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_SpaceRig_Notification_C_PreConstruct) == 0x000001, "Wrong alignment on HUD_SpaceRig_Notification_C_PreConstruct");
static_assert(sizeof(HUD_SpaceRig_Notification_C_PreConstruct) == 0x000001, "Wrong size on HUD_SpaceRig_Notification_C_PreConstruct");
static_assert(offsetof(HUD_SpaceRig_Notification_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HUD_SpaceRig_Notification_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

