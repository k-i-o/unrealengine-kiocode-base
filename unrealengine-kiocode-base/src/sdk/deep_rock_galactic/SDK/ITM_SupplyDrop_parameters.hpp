#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_SupplyDrop

#include "Basic.hpp"


namespace SDK::Params
{

// Function ITM_SupplyDrop.ITM_SupplyDrop_C.OnMarkerSpawned_Event
// 0x0008 (0x0008 - 0x0000)
struct ITM_SupplyDrop_C_OnMarkerSpawned_Event final
{
public:
	class AItemMarker*                            Param_Marker;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_SupplyDrop_C_OnMarkerSpawned_Event) == 0x000008, "Wrong alignment on ITM_SupplyDrop_C_OnMarkerSpawned_Event");
static_assert(sizeof(ITM_SupplyDrop_C_OnMarkerSpawned_Event) == 0x000008, "Wrong size on ITM_SupplyDrop_C_OnMarkerSpawned_Event");
static_assert(offsetof(ITM_SupplyDrop_C_OnMarkerSpawned_Event, Param_Marker) == 0x000000, "Member 'ITM_SupplyDrop_C_OnMarkerSpawned_Event::Param_Marker' has a wrong offset!");

// Function ITM_SupplyDrop.ITM_SupplyDrop_C.ReceiveItemPlacerSpawned
// 0x0008 (0x0008 - 0x0000)
struct ITM_SupplyDrop_C_ReceiveItemPlacerSpawned final
{
public:
	class UItemPlacerAggregator*                  InItemPlacer;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_SupplyDrop_C_ReceiveItemPlacerSpawned) == 0x000008, "Wrong alignment on ITM_SupplyDrop_C_ReceiveItemPlacerSpawned");
static_assert(sizeof(ITM_SupplyDrop_C_ReceiveItemPlacerSpawned) == 0x000008, "Wrong size on ITM_SupplyDrop_C_ReceiveItemPlacerSpawned");
static_assert(offsetof(ITM_SupplyDrop_C_ReceiveItemPlacerSpawned, InItemPlacer) == 0x000000, "Member 'ITM_SupplyDrop_C_ReceiveItemPlacerSpawned::InItemPlacer' has a wrong offset!");

// Function ITM_SupplyDrop.ITM_SupplyDrop_C.ExecuteUbergraph_ITM_SupplyDrop
// 0x0058 (0x0058 - 0x0000)
struct ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AItemMarker* Marker)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509B[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetComponent*                       CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnScreenIndicator_SupplyDrop_Order_C*  K2Node_DynamicCast_AsOn_Screen_Indicator_Supply_Drop_Order; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509C[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AItemMarker*                            K2Node_CustomEvent_Marker;                         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameData*                              CallFunc_GetFSDGameData_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetResourceCost_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_509D[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemPlacerAggregator*                  K2Node_Event_InItemPlacer;                         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop) == 0x000008, "Wrong alignment on ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop");
static_assert(sizeof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop) == 0x000058, "Wrong size on ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop");
static_assert(offsetof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop, EntryPoint) == 0x000000, "Member 'ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000020, "Member 'ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop, K2Node_DynamicCast_AsOn_Screen_Indicator_Supply_Drop_Order) == 0x000028, "Member 'ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop::K2Node_DynamicCast_AsOn_Screen_Indicator_Supply_Drop_Order' has a wrong offset!");
static_assert(offsetof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop, K2Node_CustomEvent_Marker) == 0x000038, "Member 'ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop::K2Node_CustomEvent_Marker' has a wrong offset!");
static_assert(offsetof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop, CallFunc_GetFSDGameData_ReturnValue) == 0x000040, "Member 'ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop::CallFunc_GetFSDGameData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop, CallFunc_GetResourceCost_ReturnValue) == 0x000048, "Member 'ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop::CallFunc_GetResourceCost_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop, K2Node_Event_InItemPlacer) == 0x000050, "Member 'ITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop::K2Node_Event_InItemPlacer' has a wrong offset!");

}
