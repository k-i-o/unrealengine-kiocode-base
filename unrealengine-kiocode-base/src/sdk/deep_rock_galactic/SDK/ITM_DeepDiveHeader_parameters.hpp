#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_DeepDiveHeader

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.ExecuteUbergraph_ITM_DeepDiveHeader
// 0x0008 (0x0008 - 0x0000)
struct ITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader) == 0x000004, "Wrong alignment on ITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader");
static_assert(sizeof(ITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader) == 0x000008, "Wrong size on ITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader");
static_assert(offsetof(ITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader, EntryPoint) == 0x000000, "Member 'ITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_DeepDiveHeader_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_DeepDiveHeader_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_DeepDiveHeader_C_PreConstruct");
static_assert(sizeof(ITM_DeepDiveHeader_C_PreConstruct) == 0x000001, "Wrong size on ITM_DeepDiveHeader_C_PreConstruct");
static_assert(offsetof(ITM_DeepDiveHeader_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_DeepDiveHeader_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetHeaderContents
// 0x0030 (0x0030 - 0x0000)
struct ITM_DeepDiveHeader_C_SetHeaderContents final
{
public:
	class FText                                   Param_Header_Contents;                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0018(0x0018)()
};
static_assert(alignof(ITM_DeepDiveHeader_C_SetHeaderContents) == 0x000008, "Wrong alignment on ITM_DeepDiveHeader_C_SetHeaderContents");
static_assert(sizeof(ITM_DeepDiveHeader_C_SetHeaderContents) == 0x000030, "Wrong size on ITM_DeepDiveHeader_C_SetHeaderContents");
static_assert(offsetof(ITM_DeepDiveHeader_C_SetHeaderContents, Param_Header_Contents) == 0x000000, "Member 'ITM_DeepDiveHeader_C_SetHeaderContents::Param_Header_Contents' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_SetHeaderContents, CallFunc_TextToUpper_ReturnValue) == 0x000018, "Member 'ITM_DeepDiveHeader_C_SetHeaderContents::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetEliteActive
// 0x0005 (0x0005 - 0x0000)
struct ITM_DeepDiveHeader_C_SetEliteActive final
{
public:
	bool                                          Param_EliteActive;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_DeepDiveHeader_C_SetEliteActive) == 0x000001, "Wrong alignment on ITM_DeepDiveHeader_C_SetEliteActive");
static_assert(sizeof(ITM_DeepDiveHeader_C_SetEliteActive) == 0x000005, "Wrong size on ITM_DeepDiveHeader_C_SetEliteActive");
static_assert(offsetof(ITM_DeepDiveHeader_C_SetEliteActive, Param_EliteActive) == 0x000000, "Member 'ITM_DeepDiveHeader_C_SetEliteActive::Param_EliteActive' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_SetEliteActive, Temp_bool_Variable) == 0x000001, "Member 'ITM_DeepDiveHeader_C_SetEliteActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_SetEliteActive, Temp_byte_Variable) == 0x000002, "Member 'ITM_DeepDiveHeader_C_SetEliteActive::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_SetEliteActive, Temp_byte_Variable_1) == 0x000003, "Member 'ITM_DeepDiveHeader_C_SetEliteActive::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_SetEliteActive, K2Node_Select_Default) == 0x000004, "Member 'ITM_DeepDiveHeader_C_SetEliteActive::K2Node_Select_Default' has a wrong offset!");

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromDeepDive
// 0x0010 (0x0010 - 0x0000)
struct ITM_DeepDiveHeader_C_FromDeepDive final
{
public:
	class UDeepDive*                              InDeepDive;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEliteDeepDive_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_DeepDiveHeader_C_FromDeepDive) == 0x000008, "Wrong alignment on ITM_DeepDiveHeader_C_FromDeepDive");
static_assert(sizeof(ITM_DeepDiveHeader_C_FromDeepDive) == 0x000010, "Wrong size on ITM_DeepDiveHeader_C_FromDeepDive");
static_assert(offsetof(ITM_DeepDiveHeader_C_FromDeepDive, InDeepDive) == 0x000000, "Member 'ITM_DeepDiveHeader_C_FromDeepDive::InDeepDive' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_FromDeepDive, CallFunc_IsEliteDeepDive_ReturnValue) == 0x000008, "Member 'ITM_DeepDiveHeader_C_FromDeepDive::CallFunc_IsEliteDeepDive_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_FromDeepDive, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'ITM_DeepDiveHeader_C_FromDeepDive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_FromDeepDive, CallFunc_SelectVisibility_IsVisible) == 0x00000A, "Member 'ITM_DeepDiveHeader_C_FromDeepDive::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_FromDeepDive, CallFunc_SelectVisibility_VisibilityChanged) == 0x00000B, "Member 'ITM_DeepDiveHeader_C_FromDeepDive::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_FromDeepDive, CallFunc_SelectVisibility_New_Visibility) == 0x00000C, "Member 'ITM_DeepDiveHeader_C_FromDeepDive::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromActiveDeepDive
// 0x0028 (0x0028 - 0x0000)
struct ITM_DeepDiveHeader_C_FromActiveDeepDive final
{
public:
	TScriptInterface<class IMissionModeManager>   CallFunc_GetDeepDiveManager_ReturnValue;           // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	class UDeepDiveManager*                       K2Node_DynamicCast_AsDeep_Dive_Manager;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35F7[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDeepDive*                              CallFunc_GetActiveDeepDive_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_DeepDiveHeader_C_FromActiveDeepDive) == 0x000008, "Wrong alignment on ITM_DeepDiveHeader_C_FromActiveDeepDive");
static_assert(sizeof(ITM_DeepDiveHeader_C_FromActiveDeepDive) == 0x000028, "Wrong size on ITM_DeepDiveHeader_C_FromActiveDeepDive");
static_assert(offsetof(ITM_DeepDiveHeader_C_FromActiveDeepDive, CallFunc_GetDeepDiveManager_ReturnValue) == 0x000000, "Member 'ITM_DeepDiveHeader_C_FromActiveDeepDive::CallFunc_GetDeepDiveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_FromActiveDeepDive, K2Node_DynamicCast_AsDeep_Dive_Manager) == 0x000010, "Member 'ITM_DeepDiveHeader_C_FromActiveDeepDive::K2Node_DynamicCast_AsDeep_Dive_Manager' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_FromActiveDeepDive, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ITM_DeepDiveHeader_C_FromActiveDeepDive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ITM_DeepDiveHeader_C_FromActiveDeepDive, CallFunc_GetActiveDeepDive_ReturnValue) == 0x000020, "Member 'ITM_DeepDiveHeader_C_FromActiveDeepDive::CallFunc_GetActiveDeepDive_ReturnValue' has a wrong offset!");

}
