#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MisSel_BiomeBase

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C.GetBasePanel
// 0x0008 (0x0008 - 0x0000)
struct ITM_MisSel_BiomeBase_C_GetBasePanel final
{
public:
	class UCanvasPanel*                           Panel;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_MisSel_BiomeBase_C_GetBasePanel) == 0x000008, "Wrong alignment on ITM_MisSel_BiomeBase_C_GetBasePanel");
static_assert(sizeof(ITM_MisSel_BiomeBase_C_GetBasePanel) == 0x000008, "Wrong size on ITM_MisSel_BiomeBase_C_GetBasePanel");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_GetBasePanel, Panel) == 0x000000, "Member 'ITM_MisSel_BiomeBase_C_GetBasePanel::Panel' has a wrong offset!");

// Function ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C.RemovePlagueOverlay
// 0x0080 (0x0080 - 0x0000)
struct ITM_MisSel_BiomeBase_C_RemovePlagueOverlay final
{
public:
	TArray<class UWidget*>                        FoundPanels;                                       // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4775[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanel*                           CallFunc_GetBasePanel_Panel;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4776[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4777[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4778[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4779[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay) == 0x000008, "Wrong alignment on ITM_MisSel_BiomeBase_C_RemovePlagueOverlay");
static_assert(sizeof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay) == 0x000080, "Wrong size on ITM_MisSel_BiomeBase_C_RemovePlagueOverlay");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, FoundPanels) == 0x000000, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::FoundPanels' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, Temp_int_Array_Index_Variable) == 0x000010, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_Array_Get_Item) == 0x000020, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_GetBasePanel_Panel) == 0x000030, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_GetBasePanel_Panel' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, Temp_int_Loop_Counter_Variable_1) == 0x000038, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_Less_IntInt_ReturnValue) == 0x00003D, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_GetAllChildren_ReturnValue) == 0x000048, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_Less_IntInt_ReturnValue_1) == 0x000068, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_Array_Add_ReturnValue) == 0x00006C, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_GetObjectClass_ReturnValue) == 0x000070, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_RemovePlagueOverlay, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000078, "Member 'ITM_MisSel_BiomeBase_C_RemovePlagueOverlay::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");

// Function ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C.AddPlagueOverlay
// 0x0088 (0x0088 - 0x0000)
struct ITM_MisSel_BiomeBase_C_AddPlagueOverlay final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_477A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanel*                           CallFunc_GetBasePanel_Panel;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_477B[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_477C[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_477D[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_477E[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlagueOverlay_MapWidget_C*             CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0058(0x0010)(NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCanvasPanel*                           CallFunc_GetBasePanel_Panel_1;                     // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay) == 0x000008, "Wrong alignment on ITM_MisSel_BiomeBase_C_AddPlagueOverlay");
static_assert(sizeof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay) == 0x000088, "Wrong size on ITM_MisSel_BiomeBase_C_AddPlagueOverlay");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, CallFunc_GetBasePanel_Panel) == 0x000008, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::CallFunc_GetBasePanel_Panel' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, CallFunc_GetAllChildren_ReturnValue) == 0x000020, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, CallFunc_Array_Get_Item) == 0x000030, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, CallFunc_GetObjectClass_ReturnValue) == 0x000040, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000049, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, CallFunc_Create_ReturnValue) == 0x000050, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, K2Node_MakeStruct_Anchors) == 0x000058, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, K2Node_MakeStruct_Margin) == 0x000068, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, CallFunc_GetBasePanel_Panel_1) == 0x000078, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::CallFunc_GetBasePanel_Panel_1' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_BiomeBase_C_AddPlagueOverlay, CallFunc_AddChildToCanvas_ReturnValue) == 0x000080, "Member 'ITM_MisSel_BiomeBase_C_AddPlagueOverlay::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

}
