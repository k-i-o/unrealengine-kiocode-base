#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Wardrobe_ItemSlot_VictoryMoves

#include "Basic.hpp"

#include "Struct_Wardrobe_Entry_structs.hpp"


namespace SDK::Params
{

// Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceivePreviewItem
// 0x0018 (0x0018 - 0x0000)
struct ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show;                                              // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OutSuccess;                                        // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5377[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UVictoryPose*                           CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PreviewItem_OutSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem) == 0x000008, "Wrong alignment on ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem");
static_assert(sizeof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem) == 0x000018, "Wrong size on ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem, Param_Index) == 0x000000, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem::Param_Index' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem, Show) == 0x000004, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem::Show' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem, OutSuccess) == 0x000005, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem::OutSuccess' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem, CallFunc_Array_Get_Item) == 0x000008, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem, CallFunc_PreviewItem_OutSuccess) == 0x000010, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem::CallFunc_PreviewItem_OutSuccess' has a wrong offset!");

// Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.SetHovered
// 0x0001 (0x0001 - 0x0000)
struct ITM_Wardrobe_ItemSlot_VictoryMoves_C_SetHovered final
{
public:
	bool                                          InSlotHovered;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_SetHovered) == 0x000001, "Wrong alignment on ITM_Wardrobe_ItemSlot_VictoryMoves_C_SetHovered");
static_assert(sizeof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_SetHovered) == 0x000001, "Wrong size on ITM_Wardrobe_ItemSlot_VictoryMoves_C_SetHovered");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_SetHovered, InSlotHovered) == 0x000000, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_SetHovered::InSlotHovered' has a wrong offset!");

// Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveEquipItem
// 0x0010 (0x0010 - 0x0000)
struct ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutSuccess;                                        // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5378[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVictoryPose*                           CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem) == 0x000008, "Wrong alignment on ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem");
static_assert(sizeof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem) == 0x000010, "Wrong size on ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem, InIndex) == 0x000000, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem::InIndex' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem, OutSuccess) == 0x000004, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem::OutSuccess' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem, CallFunc_Array_Get_Item) == 0x000008, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem::CallFunc_Array_Get_Item' has a wrong offset!");

// Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveGetSelectedIndex
// 0x0018 (0x0018 - 0x0000)
struct ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex final
{
public:
	int32                                         OutIndex;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5379[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVictoryPose*                           CallFunc_GetEquippedVictoryPose_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex) == 0x000008, "Wrong alignment on ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex");
static_assert(sizeof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex) == 0x000018, "Wrong size on ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex, OutIndex) == 0x000000, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex::OutIndex' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex, CallFunc_GetEquippedVictoryPose_ReturnValue) == 0x000008, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex::CallFunc_GetEquippedVictoryPose_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex, CallFunc_Array_Find_ReturnValue) == 0x000010, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

// Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveCreateEntryWidget
// 0x0098 (0x0098 - 0x0000)
struct ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget final
{
public:
	class UObject*                                InObject;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIndex;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_537A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                InReuseWidget;                                     // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSlotWidget;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_537B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                OutWidget;                                         // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_GeneratedIcon_Item_C*              Widget;                                            // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVictoryPose*                           InVictoryMove;                                     // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_537C[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRandomVictoryPose_ReturnValue;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_537D[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVictoryPose*                           K2Node_DynamicCast_AsVictory_Pose;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_537E[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_GeneratedIcon_Item_C*              K2Node_DynamicCast_AsITM_Generated_Icon_Item;      // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_537F[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UITM_GeneratedIcon_Item_C*              CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget) == 0x000008, "Wrong alignment on ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget");
static_assert(sizeof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget) == 0x000098, "Wrong size on ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, InObject) == 0x000000, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::InObject' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, InIndex) == 0x000008, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::InIndex' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, InReuseWidget) == 0x000010, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::InReuseWidget' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, IsSlotWidget) == 0x000018, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::IsSlotWidget' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, OutWidget) == 0x000020, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::OutWidget' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, Widget) == 0x000028, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::Widget' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, Texture) == 0x000030, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::Texture' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, InVictoryMove) == 0x000038, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::InVictoryMove' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, Temp_bool_Variable) == 0x000040, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, Temp_object_Variable) == 0x000048, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, Temp_object_Variable_1) == 0x000050, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, CallFunc_IsRandomVictoryPose_ReturnValue) == 0x000059, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::CallFunc_IsRandomVictoryPose_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, K2Node_Select_Default) == 0x000060, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, K2Node_DynamicCast_AsVictory_Pose) == 0x000068, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::K2Node_DynamicCast_AsVictory_Pose' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000078, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, K2Node_DynamicCast_AsITM_Generated_Icon_Item) == 0x000080, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::K2Node_DynamicCast_AsITM_Generated_Icon_Item' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget, CallFunc_Create_ReturnValue) == 0x000090, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveCreateEntryWidget::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveInitializeEntries
// 0x0130 (0x0130 - 0x0000)
struct ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries final
{
public:
	TArray<struct FStruct_Wardrobe_Entry>         InEntries;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                         ObjectIndex;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5380[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVictoryPose*                           VictoryPose;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ObjectIndex_0;                                     // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5381[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVictoryPose*                           VictoryPose_0;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5382[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UVictoryPose*>                   CallFunc_GetOwnedVictoryPoses_ReturnValue;         // 0x0040(0x0010)(ReferenceParm)
	class UVictoryPose*                           CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5383[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDLCBase*                               CallFunc_GetItemDLC_Required_DLC;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameData*                              CallFunc_GetFSDGameData_ReturnValue;               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                        K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	struct FStruct_Wardrobe_Entry                 K2Node_MakeStruct_Struct_Wardrobe_Entry;           // 0x0080(0x00A8)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries) == 0x000008, "Wrong alignment on ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries");
static_assert(sizeof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries) == 0x000130, "Wrong size on ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, InEntries) == 0x000000, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::InEntries' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, ObjectIndex) == 0x000010, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::ObjectIndex' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, VictoryPose) == 0x000018, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::VictoryPose' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, ObjectIndex_0) == 0x000020, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::ObjectIndex_0' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, VictoryPose_0) == 0x000028, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::VictoryPose_0' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, Temp_int_Array_Index_Variable) == 0x000030, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, CallFunc_GetOwnedVictoryPoses_ReturnValue) == 0x000040, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::CallFunc_GetOwnedVictoryPoses_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, CallFunc_Array_Get_Item) == 0x000050, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, CallFunc_GetItemDLC_Required_DLC) == 0x000060, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::CallFunc_GetItemDLC_Required_DLC' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, CallFunc_GetFSDGameData_ReturnValue) == 0x000068, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::CallFunc_GetFSDGameData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, K2Node_MakeArray_Array) == 0x000070, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, K2Node_MakeStruct_Struct_Wardrobe_Entry) == 0x000080, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::K2Node_MakeStruct_Struct_Wardrobe_Entry' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries, CallFunc_Array_Add_ReturnValue) == 0x000128, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitializeEntries::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.GetItemDLC
// 0x0020 (0x0020 - 0x0000)
struct ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC final
{
public:
	class UVictoryPose*                           InItem;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDLCBase*                               Required_DLC;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDLCAquisition*                         K2Node_DynamicCast_AsDLC;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC) == 0x000008, "Wrong alignment on ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC");
static_assert(sizeof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC) == 0x000020, "Wrong size on ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC, InItem) == 0x000000, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC::InItem' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC, Required_DLC) == 0x000008, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC::Required_DLC' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC, K2Node_DynamicCast_AsDLC) == 0x000010, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC::K2Node_DynamicCast_AsDLC' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_GetItemDLC::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.PreviewItem
// 0x0030 (0x0030 - 0x0000)
struct ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem final
{
public:
	class UVictoryPose*                           Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OutSuccess;                                        // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5384[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UVictoryPose*                           Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDGameInstance*                       CallFunc_GetFSDGameInstance_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVictoryPose*                           K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem) == 0x000008, "Wrong alignment on ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem");
static_assert(sizeof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem) == 0x000030, "Wrong size on ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem, Item) == 0x000000, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem::Item' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem, Show) == 0x000008, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem::Show' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem, OutSuccess) == 0x000009, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem::OutSuccess' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem, Temp_bool_Variable) == 0x00000A, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem, Temp_object_Variable) == 0x000010, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem, CallFunc_GetFSDGameInstance_ReturnValue) == 0x000018, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem::CallFunc_GetFSDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem, K2Node_Select_Default) == 0x000020, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves
// 0x0018 (0x0018 - 0x0000)
struct ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_InSlotHovered;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5385[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVictoryPose*                           CallFunc_GetEquippedVictoryPose_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PreviewItem_OutSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves) == 0x000008, "Wrong alignment on ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves");
static_assert(sizeof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves) == 0x000018, "Wrong size on ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves, EntryPoint) == 0x000000, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves, K2Node_Event_InSlotHovered) == 0x000004, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves::K2Node_Event_InSlotHovered' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves, CallFunc_GetEquippedVictoryPose_ReturnValue) == 0x000008, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves::CallFunc_GetEquippedVictoryPose_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves, CallFunc_PreviewItem_OutSuccess) == 0x000010, "Member 'ITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves::CallFunc_PreviewItem_OutSuccess' has a wrong offset!");

}
