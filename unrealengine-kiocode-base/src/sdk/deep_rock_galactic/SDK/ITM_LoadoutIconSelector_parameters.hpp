#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_LoadoutIconSelector

#include "Basic.hpp"


namespace SDK::Params
{

// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ImageIndex;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature) == 0x000008, "Wrong alignment on ITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature");
static_assert(sizeof(ITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature) == 0x000010, "Wrong size on ITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature");
static_assert(offsetof(ITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature, Texture) == 0x000000, "Member 'ITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature::Texture' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature, ImageIndex) == 0x000008, "Member 'ITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature::ImageIndex' has a wrong offset!");

// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.ExecuteUbergraph_ITM_LoadoutIconSelector
// 0x0018 (0x0018 - 0x0000)
struct ITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ED3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_CustomEvent_Texture;                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ImageIndex;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector) == 0x000008, "Wrong alignment on ITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector");
static_assert(sizeof(ITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector) == 0x000018, "Wrong size on ITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector");
static_assert(offsetof(ITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector, EntryPoint) == 0x000000, "Member 'ITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector, K2Node_CustomEvent_Texture) == 0x000008, "Member 'ITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector::K2Node_CustomEvent_Texture' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector, K2Node_CustomEvent_ImageIndex) == 0x000010, "Member 'ITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector::K2Node_CustomEvent_ImageIndex' has a wrong offset!");

// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconClicked
// 0x0010 (0x0010 - 0x0000)
struct ITM_LoadoutIconSelector_C_OnIconClicked final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ImageIndex;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_LoadoutIconSelector_C_OnIconClicked) == 0x000008, "Wrong alignment on ITM_LoadoutIconSelector_C_OnIconClicked");
static_assert(sizeof(ITM_LoadoutIconSelector_C_OnIconClicked) == 0x000010, "Wrong size on ITM_LoadoutIconSelector_C_OnIconClicked");
static_assert(offsetof(ITM_LoadoutIconSelector_C_OnIconClicked, Texture) == 0x000000, "Member 'ITM_LoadoutIconSelector_C_OnIconClicked::Texture' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_OnIconClicked, ImageIndex) == 0x000008, "Member 'ITM_LoadoutIconSelector_C_OnIconClicked::ImageIndex' has a wrong offset!");

// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.FillGrid
// 0x0068 (0x0068 - 0x0000)
struct ITM_LoadoutIconSelector_C_FillGrid final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ED4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUniformGridSlot*                       GridItem;                                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameData*                              CallFunc_GetFSDGameData_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ED5[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UITM_LoadoutIcon_C*                     CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2D* Texture, int32 Index)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_LoadoutIconSelector_C_FillGrid) == 0x000008, "Wrong alignment on ITM_LoadoutIconSelector_C_FillGrid");
static_assert(sizeof(ITM_LoadoutIconSelector_C_FillGrid) == 0x000068, "Wrong size on ITM_LoadoutIconSelector_C_FillGrid");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, Texture) == 0x000000, "Member 'ITM_LoadoutIconSelector_C_FillGrid::Texture' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, Param_Index) == 0x000008, "Member 'ITM_LoadoutIconSelector_C_FillGrid::Param_Index' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, GridItem) == 0x000010, "Member 'ITM_LoadoutIconSelector_C_FillGrid::GridItem' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, Temp_int_Array_Index_Variable) == 0x000018, "Member 'ITM_LoadoutIconSelector_C_FillGrid::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'ITM_LoadoutIconSelector_C_FillGrid::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'ITM_LoadoutIconSelector_C_FillGrid::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'ITM_LoadoutIconSelector_C_FillGrid::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, CallFunc_GetFSDGameData_ReturnValue) == 0x000028, "Member 'ITM_LoadoutIconSelector_C_FillGrid::CallFunc_GetFSDGameData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, CallFunc_Array_Get_Item) == 0x000030, "Member 'ITM_LoadoutIconSelector_C_FillGrid::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'ITM_LoadoutIconSelector_C_FillGrid::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'ITM_LoadoutIconSelector_C_FillGrid::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, CallFunc_Create_ReturnValue) == 0x000040, "Member 'ITM_LoadoutIconSelector_C_FillGrid::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'ITM_LoadoutIconSelector_C_FillGrid::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, CallFunc_Divide_IntInt_ReturnValue) == 0x000058, "Member 'ITM_LoadoutIconSelector_C_FillGrid::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, CallFunc_Percent_IntInt_ReturnValue) == 0x00005C, "Member 'ITM_LoadoutIconSelector_C_FillGrid::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadoutIconSelector_C_FillGrid, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x000060, "Member 'ITM_LoadoutIconSelector_C_FillGrid::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");

}

