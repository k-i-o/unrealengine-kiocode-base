#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_Popup_YesNoPrompt

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnClickedYesNo__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Basic_Popup_YesNoPrompt_C_OnClickedYesNo__DelegateSignature final
{
public:
	bool                                          InYes;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_Popup_YesNoPrompt_C_OnClickedYesNo__DelegateSignature) == 0x000001, "Wrong alignment on Basic_Popup_YesNoPrompt_C_OnClickedYesNo__DelegateSignature");
static_assert(sizeof(Basic_Popup_YesNoPrompt_C_OnClickedYesNo__DelegateSignature) == 0x000001, "Wrong size on Basic_Popup_YesNoPrompt_C_OnClickedYesNo__DelegateSignature");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnClickedYesNo__DelegateSignature, InYes) == 0x000000, "Member 'Basic_Popup_YesNoPrompt_C_OnClickedYesNo__DelegateSignature::InYes' has a wrong offset!");

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.ExecuteUbergraph_Basic_Popup_YesNoPrompt
// 0x01C8 (0x01C8 - 0x0000)
struct Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Yes;                                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F4D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Title;                                // 0x0018(0x0018)(ConstParm)
	class FText                                   K2Node_Event_Message;                              // 0x0030(0x0018)(ConstParm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0048(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F4F[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F50[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0078(0x0028)()
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00B0(0x0028)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWindowManager*                         CallFunc_GetWindowManager_ReturnValue;             // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResourceData*                          K2Node_CustomEvent_InResource;                     // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_InAmount;                       // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F51[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCraftingCost>                  K2Node_CustomEvent_Resources;                      // 0x00F8(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UResourceData*, int32>             K2Node_Event_resources;                            // 0x0110(0x0050)(ConstParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F52[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UResourceData*>                  CallFunc_Map_Keys_Keys;                            // 0x0168(0x0010)(ReferenceParm)
	class UResourceData*                          CallFunc_Array_Get_Item;                           // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F53[0x2];                                     // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UResourceData*                    Temp_object_Variable;                              // 0x0198(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftingCost                          CallFunc_Array_Get_Item_1;                         // 0x01A0(0x0010)(NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F54[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UResourceData*                    Temp_object_Variable_1;                            // 0x01B8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt) == 0x000008, "Wrong alignment on Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt");
static_assert(sizeof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt) == 0x0001C8, "Wrong size on Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, EntryPoint) == 0x000000, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::EntryPoint' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, K2Node_Event_Yes) == 0x000004, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::K2Node_Event_Yes' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, Temp_int_Array_Index_Variable) == 0x000008, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, K2Node_Event_Title) == 0x000018, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::K2Node_Event_Title' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, K2Node_Event_Message) == 0x000030, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::K2Node_Event_Message' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_TextToUpper_ReturnValue) == 0x000048, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, K2Node_Event_IsDesignTime) == 0x000060, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_MenuColors_OutputColor) == 0x000064, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, K2Node_MakeStruct_SlateColor) == 0x000078, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_MenuColors_OutputColor_1) == 0x0000A0, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, K2Node_MakeStruct_SlateColor_1) == 0x0000B0, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000D8, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_GetWindowManager_ReturnValue) == 0x0000E0, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_GetWindowManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, K2Node_CustomEvent_InResource) == 0x0000E8, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::K2Node_CustomEvent_InResource' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, K2Node_CustomEvent_InAmount) == 0x0000F0, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::K2Node_CustomEvent_InAmount' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, K2Node_CustomEvent_Resources) == 0x0000F8, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::K2Node_CustomEvent_Resources' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Array_Length_ReturnValue) == 0x000108, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, Temp_int_Loop_Counter_Variable_1) == 0x00010C, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, K2Node_Event_resources) == 0x000110, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::K2Node_Event_resources' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Less_IntInt_ReturnValue) == 0x000160, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Map_Keys_Keys) == 0x000168, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Array_Get_Item) == 0x000178, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Array_Length_ReturnValue_1) == 0x000180, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Map_Find_Value) == 0x000184, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Map_Find_ReturnValue) == 0x000188, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Less_IntInt_ReturnValue_1) == 0x000189, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00018C, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Add_IntInt_ReturnValue_1) == 0x000190, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, Temp_int_Array_Index_Variable_1) == 0x000194, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, Temp_object_Variable) == 0x000198, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Array_Get_Item_1) == 0x0001A0, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0001B0, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, Temp_object_Variable_1) == 0x0001B8, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt, CallFunc_Array_RemoveItem_ReturnValue) == 0x0001C0, "Member 'Basic_Popup_YesNoPrompt_C_ExecuteUbergraph_Basic_Popup_YesNoPrompt::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnClicked
// 0x0001 (0x0001 - 0x0000)
struct Basic_Popup_YesNoPrompt_C_OnClicked final
{
public:
	bool                                          Param_Yes;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_Popup_YesNoPrompt_C_OnClicked) == 0x000001, "Wrong alignment on Basic_Popup_YesNoPrompt_C_OnClicked");
static_assert(sizeof(Basic_Popup_YesNoPrompt_C_OnClicked) == 0x000001, "Wrong size on Basic_Popup_YesNoPrompt_C_OnClicked");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnClicked, Param_Yes) == 0x000000, "Member 'Basic_Popup_YesNoPrompt_C_OnClicked::Param_Yes' has a wrong offset!");

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.SetMappedResources
// 0x0050 (0x0050 - 0x0000)
struct Basic_Popup_YesNoPrompt_C_SetMappedResources final
{
public:
	TMap<class UResourceData*, int32>             Resources;                                         // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Basic_Popup_YesNoPrompt_C_SetMappedResources) == 0x000008, "Wrong alignment on Basic_Popup_YesNoPrompt_C_SetMappedResources");
static_assert(sizeof(Basic_Popup_YesNoPrompt_C_SetMappedResources) == 0x000050, "Wrong size on Basic_Popup_YesNoPrompt_C_SetMappedResources");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_SetMappedResources, Resources) == 0x000000, "Member 'Basic_Popup_YesNoPrompt_C_SetMappedResources::Resources' has a wrong offset!");

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.SetResources
// 0x0010 (0x0010 - 0x0000)
struct Basic_Popup_YesNoPrompt_C_SetResources final
{
public:
	TArray<struct FCraftingCost>                  Resources;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Basic_Popup_YesNoPrompt_C_SetResources) == 0x000008, "Wrong alignment on Basic_Popup_YesNoPrompt_C_SetResources");
static_assert(sizeof(Basic_Popup_YesNoPrompt_C_SetResources) == 0x000010, "Wrong size on Basic_Popup_YesNoPrompt_C_SetResources");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_SetResources, Resources) == 0x000000, "Member 'Basic_Popup_YesNoPrompt_C_SetResources::Resources' has a wrong offset!");

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Add Resource
// 0x0010 (0x0010 - 0x0000)
struct Basic_Popup_YesNoPrompt_C_Add_Resource final
{
public:
	class UResourceData*                          InResource;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InAmount;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Basic_Popup_YesNoPrompt_C_Add_Resource) == 0x000008, "Wrong alignment on Basic_Popup_YesNoPrompt_C_Add_Resource");
static_assert(sizeof(Basic_Popup_YesNoPrompt_C_Add_Resource) == 0x000010, "Wrong size on Basic_Popup_YesNoPrompt_C_Add_Resource");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_Add_Resource, InResource) == 0x000000, "Member 'Basic_Popup_YesNoPrompt_C_Add_Resource::InResource' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_Add_Resource, InAmount) == 0x000008, "Member 'Basic_Popup_YesNoPrompt_C_Add_Resource::InAmount' has a wrong offset!");

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Basic_Popup_YesNoPrompt_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_Popup_YesNoPrompt_C_PreConstruct) == 0x000001, "Wrong alignment on Basic_Popup_YesNoPrompt_C_PreConstruct");
static_assert(sizeof(Basic_Popup_YesNoPrompt_C_PreConstruct) == 0x000001, "Wrong size on Basic_Popup_YesNoPrompt_C_PreConstruct");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Basic_Popup_YesNoPrompt_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnShow
// 0x0030 (0x0030 - 0x0000)
struct Basic_Popup_YesNoPrompt_C_OnShow final
{
public:
	class FText                                   Title;                                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   Message;                                           // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Basic_Popup_YesNoPrompt_C_OnShow) == 0x000008, "Wrong alignment on Basic_Popup_YesNoPrompt_C_OnShow");
static_assert(sizeof(Basic_Popup_YesNoPrompt_C_OnShow) == 0x000030, "Wrong size on Basic_Popup_YesNoPrompt_C_OnShow");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnShow, Title) == 0x000000, "Member 'Basic_Popup_YesNoPrompt_C_OnShow::Title' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnShow, Message) == 0x000018, "Member 'Basic_Popup_YesNoPrompt_C_OnShow::Message' has a wrong offset!");

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnKeyUp
// 0x02B8 (0x02B8 - 0x0000)
struct Basic_Popup_YesNoPrompt_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0128(0x00B8)()
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsKeyEventAction_ReturnValue;             // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F55[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01F0(0x00B8)()
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsKeyEventAction_ReturnValue_1;           // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Basic_Popup_YesNoPrompt_C_OnKeyUp) == 0x000008, "Wrong alignment on Basic_Popup_YesNoPrompt_C_OnKeyUp");
static_assert(sizeof(Basic_Popup_YesNoPrompt_C_OnKeyUp) == 0x0002B8, "Wrong size on Basic_Popup_YesNoPrompt_C_OnKeyUp");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'Basic_Popup_YesNoPrompt_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnKeyUp, InKeyEvent) == 0x000038, "Member 'Basic_Popup_YesNoPrompt_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnKeyUp, ReturnValue) == 0x000070, "Member 'Basic_Popup_YesNoPrompt_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnKeyUp, CallFunc_Unhandled_ReturnValue) == 0x000128, "Member 'Basic_Popup_YesNoPrompt_C_OnKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnKeyUp, CallFunc_MakeLiteralName_ReturnValue) == 0x0001E0, "Member 'Basic_Popup_YesNoPrompt_C_OnKeyUp::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnKeyUp, CallFunc_IsKeyEventAction_ReturnValue) == 0x0001E8, "Member 'Basic_Popup_YesNoPrompt_C_OnKeyUp::CallFunc_IsKeyEventAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnKeyUp, CallFunc_Handled_ReturnValue) == 0x0001F0, "Member 'Basic_Popup_YesNoPrompt_C_OnKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnKeyUp, CallFunc_MakeLiteralName_ReturnValue_1) == 0x0002A8, "Member 'Basic_Popup_YesNoPrompt_C_OnKeyUp::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Basic_Popup_YesNoPrompt_C_OnKeyUp, CallFunc_IsKeyEventAction_ReturnValue_1) == 0x0002B0, "Member 'Basic_Popup_YesNoPrompt_C_OnKeyUp::CallFunc_IsKeyEventAction_ReturnValue_1' has a wrong offset!");

}

