#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDLoadingScreenBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "TinkerLoadingScreen_structs.hpp"


namespace SDK::Params
{

// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.ExecuteUbergraph_WBP_HDLoadingScreenBase
// 0x0160 (0x0160 - 0x0000)
struct WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2084[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLoadingScreenDescription              K2Node_Event_Description;                          // 0x0008(0x0038)(ConstParm)
	TSoftObjectPtr<class UTexture2D>              CallFunc_Array_Get_Item;                           // 0x0040(0x0028)(HasGetValueTypeHash)
	struct FLoadScreenLevelData                   K2Node_Event_LevelData;                            // 0x0068(0x0068)(ConstParm)
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2085[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2086[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x00F0(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;                // 0x0108(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0127(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2087[0x2];                                     // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_Array_Get_Item_1;                         // 0x0138(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase) == 0x000008, "Wrong alignment on WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase");
static_assert(sizeof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase) == 0x000160, "Wrong size on WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, EntryPoint) == 0x000000, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, K2Node_Event_Description) == 0x000008, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::K2Node_Event_Description' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, K2Node_Event_LevelData) == 0x000068, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::K2Node_Event_LevelData' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x0000D0, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000D8, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, K2Node_DynamicCast_AsTexture_2D) == 0x0000E0, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, CallFunc_TextIsEmpty_ReturnValue) == 0x0000E9, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, CallFunc_TextToUpper_ReturnValue) == 0x0000F0, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, CallFunc_TextToUpper_ReturnValue_1) == 0x000108, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000120, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, K2Node_Event_IsDesignTime) == 0x000121, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, Temp_byte_Variable) == 0x000122, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, Temp_byte_Variable_1) == 0x000123, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, Temp_bool_Variable) == 0x000124, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, Temp_byte_Variable_2) == 0x000125, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, K2Node_Select_Default) == 0x000126, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, Temp_byte_Variable_3) == 0x000127, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, Temp_bool_Variable_1) == 0x000128, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, K2Node_Select_Default_1) == 0x000129, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, CallFunc_Array_Length_ReturnValue) == 0x00012C, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, CallFunc_Subtract_IntInt_ReturnValue) == 0x000130, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000134, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase, CallFunc_Array_Get_Item_1) == 0x000138, "Member 'WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_HDLoadingScreenBase_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_HDLoadingScreenBase_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_HDLoadingScreenBase_C_PreConstruct");
static_assert(sizeof(WBP_HDLoadingScreenBase_C_PreConstruct) == 0x000001, "Wrong size on WBP_HDLoadingScreenBase_C_PreConstruct");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_HDLoadingScreenBase_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetLevelLoadData
// 0x0068 (0x0068 - 0x0000)
struct WBP_HDLoadingScreenBase_C_SetLevelLoadData final
{
public:
	struct FLoadScreenLevelData                   LevelData;                                         // 0x0000(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_HDLoadingScreenBase_C_SetLevelLoadData) == 0x000008, "Wrong alignment on WBP_HDLoadingScreenBase_C_SetLevelLoadData");
static_assert(sizeof(WBP_HDLoadingScreenBase_C_SetLevelLoadData) == 0x000068, "Wrong size on WBP_HDLoadingScreenBase_C_SetLevelLoadData");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetLevelLoadData, LevelData) == 0x000000, "Member 'WBP_HDLoadingScreenBase_C_SetLevelLoadData::LevelData' has a wrong offset!");

// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetLoadingScreenDescription
// 0x0038 (0x0038 - 0x0000)
struct WBP_HDLoadingScreenBase_C_SetLoadingScreenDescription final
{
public:
	struct FLoadingScreenDescription              Description;                                       // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_HDLoadingScreenBase_C_SetLoadingScreenDescription) == 0x000008, "Wrong alignment on WBP_HDLoadingScreenBase_C_SetLoadingScreenDescription");
static_assert(sizeof(WBP_HDLoadingScreenBase_C_SetLoadingScreenDescription) == 0x000038, "Wrong size on WBP_HDLoadingScreenBase_C_SetLoadingScreenDescription");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetLoadingScreenDescription, Description) == 0x000000, "Member 'WBP_HDLoadingScreenBase_C_SetLoadingScreenDescription::Description' has a wrong offset!");

// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetMapElementVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_HDLoadingScreenBase_C_SetMapElementVisibility final
{
public:
	ESlateVisibility                              NewVisibility;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HDLoadingScreenBase_C_SetMapElementVisibility) == 0x000001, "Wrong alignment on WBP_HDLoadingScreenBase_C_SetMapElementVisibility");
static_assert(sizeof(WBP_HDLoadingScreenBase_C_SetMapElementVisibility) == 0x000001, "Wrong size on WBP_HDLoadingScreenBase_C_SetMapElementVisibility");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetMapElementVisibility, NewVisibility) == 0x000000, "Member 'WBP_HDLoadingScreenBase_C_SetMapElementVisibility::NewVisibility' has a wrong offset!");

// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetBluforStartingTicketCount
// 0x0070 (0x0070 - 0x0000)
struct WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount final
{
public:
	int32                                         TicketCount;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2088[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0058(0x0018)()
};
static_assert(alignof(WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount) == 0x000008, "Wrong alignment on WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount");
static_assert(sizeof(WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount) == 0x000070, "Wrong size on WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount, TicketCount) == 0x000000, "Member 'WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount::TicketCount' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount, K2Node_MakeArray_Array) == 0x000048, "Member 'WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount, CallFunc_Format_ReturnValue) == 0x000058, "Member 'WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetOpforStartingTicketCount
// 0x0070 (0x0070 - 0x0000)
struct WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount final
{
public:
	int32                                         TicketCount;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2089[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0058(0x0018)()
};
static_assert(alignof(WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount) == 0x000008, "Wrong alignment on WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount");
static_assert(sizeof(WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount) == 0x000070, "Wrong size on WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount, TicketCount) == 0x000000, "Member 'WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount::TicketCount' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount, K2Node_MakeArray_Array) == 0x000048, "Member 'WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount, CallFunc_Format_ReturnValue) == 0x000058, "Member 'WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetMapBgImage
// 0x0040 (0x0040 - 0x0000)
struct WBP_HDLoadingScreenBase_C_SetMapBgImage final
{
public:
	TSoftObjectPtr<class UTexture2D>              InBgImage;                                         // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_HDLoadingScreenBase_C_SetMapBgImage) == 0x000008, "Wrong alignment on WBP_HDLoadingScreenBase_C_SetMapBgImage");
static_assert(sizeof(WBP_HDLoadingScreenBase_C_SetMapBgImage) == 0x000040, "Wrong size on WBP_HDLoadingScreenBase_C_SetMapBgImage");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetMapBgImage, InBgImage) == 0x000000, "Member 'WBP_HDLoadingScreenBase_C_SetMapBgImage::InBgImage' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetMapBgImage, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000028, "Member 'WBP_HDLoadingScreenBase_C_SetMapBgImage::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetMapBgImage, K2Node_DynamicCast_AsTexture_2D) == 0x000030, "Member 'WBP_HDLoadingScreenBase_C_SetMapBgImage::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_HDLoadingScreenBase_C_SetMapBgImage, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_HDLoadingScreenBase_C_SetMapBgImage::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
