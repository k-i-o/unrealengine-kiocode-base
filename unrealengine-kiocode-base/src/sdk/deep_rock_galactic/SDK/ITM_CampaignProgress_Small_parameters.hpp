#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_CampaignProgress_Small

#include "Basic.hpp"


namespace SDK::Params
{

// Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_CampaignProgress_Small_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_CampaignProgress_Small_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_CampaignProgress_Small_C_PreConstruct");
static_assert(sizeof(ITM_CampaignProgress_Small_C_PreConstruct) == 0x000001, "Wrong size on ITM_CampaignProgress_Small_C_PreConstruct");
static_assert(offsetof(ITM_CampaignProgress_Small_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_CampaignProgress_Small_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.Update_Campaign
// 0x0008 (0x0008 - 0x0000)
struct ITM_CampaignProgress_Small_C_Update_Campaign final
{
public:
	class UCampaign*                              Param_Campaign;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CampaignProgress_Small_C_Update_Campaign) == 0x000008, "Wrong alignment on ITM_CampaignProgress_Small_C_Update_Campaign");
static_assert(sizeof(ITM_CampaignProgress_Small_C_Update_Campaign) == 0x000008, "Wrong size on ITM_CampaignProgress_Small_C_Update_Campaign");
static_assert(offsetof(ITM_CampaignProgress_Small_C_Update_Campaign, Param_Campaign) == 0x000000, "Member 'ITM_CampaignProgress_Small_C_Update_Campaign::Param_Campaign' has a wrong offset!");

// Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.ExecuteUbergraph_ITM_CampaignProgress_Small
// 0x0060 (0x0060 - 0x0000)
struct ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4905[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCampaign*                              K2Node_CustomEvent_Campaign;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCampaignManager*                       CallFunc_GetCampaingManager_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4906[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCampaignMission*                       CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_CampaignItem_C*                    CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4907[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small) == 0x000008, "Wrong alignment on ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small");
static_assert(sizeof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small) == 0x000060, "Wrong size on ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, EntryPoint) == 0x000000, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, K2Node_Event_IsDesignTime) == 0x000011, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, K2Node_CustomEvent_Campaign) == 0x000018, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::K2Node_CustomEvent_Campaign' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, CallFunc_GetCampaingManager_ReturnValue) == 0x000020, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::CallFunc_GetCampaingManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000028, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, CallFunc_Greater_IntInt_ReturnValue) == 0x000029, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, CallFunc_Array_Get_Item) == 0x000038, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, CallFunc_Create_ReturnValue) == 0x000040, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, CallFunc_AddChild_ReturnValue) == 0x000050, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'ITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
