#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_RestoreSave_Resources

#include "Basic.hpp"


namespace SDK::Params
{

// Function ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C.ExecuteUbergraph_ITM_RestoreSave_Resources
// 0x0040 (0x0040 - 0x0000)
struct ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DA6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UResourceData* Resource, float CurrentAmount)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UFSDSaveGame*                           CallFunc_GetFSDSaveGame_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResourceData*                          K2Node_CustomEvent_resource;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_currentAmount;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DA7[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UITM_TopBar_ResourceCounter_C*          CallFunc_Map_Find_Value;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources) == 0x000008, "Wrong alignment on ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources");
static_assert(sizeof(ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources) == 0x000040, "Wrong size on ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources");
static_assert(offsetof(ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources, EntryPoint) == 0x000000, "Member 'ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources, CallFunc_GetFSDSaveGame_ReturnValue) == 0x000018, "Member 'ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources::CallFunc_GetFSDSaveGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources, K2Node_CustomEvent_resource) == 0x000020, "Member 'ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources::K2Node_CustomEvent_resource' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources, K2Node_CustomEvent_currentAmount) == 0x000028, "Member 'ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources::K2Node_CustomEvent_currentAmount' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources, CallFunc_Map_Find_Value) == 0x000030, "Member 'ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'ITM_RestoreSave_Resources_C_ExecuteUbergraph_ITM_RestoreSave_Resources::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C.OnResourceAmountChanged
// 0x0010 (0x0010 - 0x0000)
struct ITM_RestoreSave_Resources_C_OnResourceAmountChanged final
{
public:
	class UResourceData*                          Resource;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentAmount;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_RestoreSave_Resources_C_OnResourceAmountChanged) == 0x000008, "Wrong alignment on ITM_RestoreSave_Resources_C_OnResourceAmountChanged");
static_assert(sizeof(ITM_RestoreSave_Resources_C_OnResourceAmountChanged) == 0x000010, "Wrong size on ITM_RestoreSave_Resources_C_OnResourceAmountChanged");
static_assert(offsetof(ITM_RestoreSave_Resources_C_OnResourceAmountChanged, Resource) == 0x000000, "Member 'ITM_RestoreSave_Resources_C_OnResourceAmountChanged::Resource' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_OnResourceAmountChanged, CurrentAmount) == 0x000008, "Member 'ITM_RestoreSave_Resources_C_OnResourceAmountChanged::CurrentAmount' has a wrong offset!");

// Function ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_RestoreSave_Resources_C_PreConstruct final
{
public:
	bool                                          Param_IsDesignTime;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_RestoreSave_Resources_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_RestoreSave_Resources_C_PreConstruct");
static_assert(sizeof(ITM_RestoreSave_Resources_C_PreConstruct) == 0x000001, "Wrong size on ITM_RestoreSave_Resources_C_PreConstruct");
static_assert(offsetof(ITM_RestoreSave_Resources_C_PreConstruct, Param_IsDesignTime) == 0x000000, "Member 'ITM_RestoreSave_Resources_C_PreConstruct::Param_IsDesignTime' has a wrong offset!");

// Function ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C.SetResources
// 0x0038 (0x0038 - 0x0000)
struct ITM_RestoreSave_Resources_C_SetResources final
{
public:
	TArray<class UResourceData*>                  InResources;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UITM_TopBar_ResourceCounter_C*          CurrentWidget;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DA8[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UResourceData*                          CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_RestoreSave_Resources_C_SetResources) == 0x000008, "Wrong alignment on ITM_RestoreSave_Resources_C_SetResources");
static_assert(sizeof(ITM_RestoreSave_Resources_C_SetResources) == 0x000038, "Wrong size on ITM_RestoreSave_Resources_C_SetResources");
static_assert(offsetof(ITM_RestoreSave_Resources_C_SetResources, InResources) == 0x000000, "Member 'ITM_RestoreSave_Resources_C_SetResources::InResources' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_SetResources, CurrentWidget) == 0x000010, "Member 'ITM_RestoreSave_Resources_C_SetResources::CurrentWidget' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_SetResources, Temp_int_Array_Index_Variable) == 0x000018, "Member 'ITM_RestoreSave_Resources_C_SetResources::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_SetResources, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'ITM_RestoreSave_Resources_C_SetResources::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_SetResources, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'ITM_RestoreSave_Resources_C_SetResources::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_SetResources, CallFunc_Array_Get_Item) == 0x000028, "Member 'ITM_RestoreSave_Resources_C_SetResources::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_SetResources, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'ITM_RestoreSave_Resources_C_SetResources::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_SetResources, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'ITM_RestoreSave_Resources_C_SetResources::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C.AddResource
// 0x0060 (0x0060 - 0x0000)
struct ITM_RestoreSave_Resources_C_AddResource final
{
public:
	class UResourceData*                          InResource;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InHideWhenZero;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DA9[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_Index;                                       // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_TopBar_ResourceCounter_C*          ResourceWidget;                                    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DAA[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DAB[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDSaveGame*                           CallFunc_GetFSDSaveGame_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DAC[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetResourceAmount_ReturnValue;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DAD[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_TopBar_ResourceCounter_C*          CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_RestoreSave_Resources_C_AddResource) == 0x000008, "Wrong alignment on ITM_RestoreSave_Resources_C_AddResource");
static_assert(sizeof(ITM_RestoreSave_Resources_C_AddResource) == 0x000060, "Wrong size on ITM_RestoreSave_Resources_C_AddResource");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, InResource) == 0x000000, "Member 'ITM_RestoreSave_Resources_C_AddResource::InResource' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, InHideWhenZero) == 0x000008, "Member 'ITM_RestoreSave_Resources_C_AddResource::InHideWhenZero' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, Param_Index) == 0x00000C, "Member 'ITM_RestoreSave_Resources_C_AddResource::Param_Index' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, ResourceWidget) == 0x000010, "Member 'ITM_RestoreSave_Resources_C_AddResource::ResourceWidget' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, Temp_bool_Variable) == 0x000018, "Member 'ITM_RestoreSave_Resources_C_AddResource::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, Temp_float_Variable) == 0x00001C, "Member 'ITM_RestoreSave_Resources_C_AddResource::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'ITM_RestoreSave_Resources_C_AddResource::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000028, "Member 'ITM_RestoreSave_Resources_C_AddResource::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, CallFunc_GetFSDSaveGame_ReturnValue) == 0x000030, "Member 'ITM_RestoreSave_Resources_C_AddResource::CallFunc_GetFSDSaveGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, CallFunc_Map_Contains_ReturnValue) == 0x000038, "Member 'ITM_RestoreSave_Resources_C_AddResource::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, CallFunc_GetResourceAmount_ReturnValue) == 0x00003C, "Member 'ITM_RestoreSave_Resources_C_AddResource::CallFunc_GetResourceAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'ITM_RestoreSave_Resources_C_AddResource::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, K2Node_Select_Default) == 0x000044, "Member 'ITM_RestoreSave_Resources_C_AddResource::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, CallFunc_AddChildToHorizontalBox_ReturnValue_1) == 0x000048, "Member 'ITM_RestoreSave_Resources_C_AddResource::CallFunc_AddChildToHorizontalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, CallFunc_GetOwningPlayer_ReturnValue) == 0x000050, "Member 'ITM_RestoreSave_Resources_C_AddResource::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_RestoreSave_Resources_C_AddResource, CallFunc_Create_ReturnValue) == 0x000058, "Member 'ITM_RestoreSave_Resources_C_AddResource::CallFunc_Create_ReturnValue' has a wrong offset!");

}
