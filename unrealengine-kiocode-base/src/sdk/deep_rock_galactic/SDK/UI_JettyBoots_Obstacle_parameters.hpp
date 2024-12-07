#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_JettyBoots_Obstacle

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.ExecuteUbergraph_UI_JettyBoots_Obstacle
// 0x0008 (0x0008 - 0x0000)
struct UI_JettyBoots_Obstacle_C_ExecuteUbergraph_UI_JettyBoots_Obstacle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_JettyBoots_Obstacle_C_ExecuteUbergraph_UI_JettyBoots_Obstacle) == 0x000004, "Wrong alignment on UI_JettyBoots_Obstacle_C_ExecuteUbergraph_UI_JettyBoots_Obstacle");
static_assert(sizeof(UI_JettyBoots_Obstacle_C_ExecuteUbergraph_UI_JettyBoots_Obstacle) == 0x000008, "Wrong size on UI_JettyBoots_Obstacle_C_ExecuteUbergraph_UI_JettyBoots_Obstacle");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_ExecuteUbergraph_UI_JettyBoots_Obstacle, EntryPoint) == 0x000000, "Member 'UI_JettyBoots_Obstacle_C_ExecuteUbergraph_UI_JettyBoots_Obstacle::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_ExecuteUbergraph_UI_JettyBoots_Obstacle, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_JettyBoots_Obstacle_C_ExecuteUbergraph_UI_JettyBoots_Obstacle::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_JettyBoots_Obstacle_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_JettyBoots_Obstacle_C_PreConstruct) == 0x000001, "Wrong alignment on UI_JettyBoots_Obstacle_C_PreConstruct");
static_assert(sizeof(UI_JettyBoots_Obstacle_C_PreConstruct) == 0x000001, "Wrong size on UI_JettyBoots_Obstacle_C_PreConstruct");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_JettyBoots_Obstacle_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.Intersects
// 0x0014 (0x0014 - 0x0000)
struct UI_JettyBoots_Obstacle_C_Intersects final
{
public:
	struct FSpriteRect                            InRect;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          OutIntersects;                                     // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_JettyBoots_Obstacle_C_Intersects) == 0x000004, "Wrong alignment on UI_JettyBoots_Obstacle_C_Intersects");
static_assert(sizeof(UI_JettyBoots_Obstacle_C_Intersects) == 0x000014, "Wrong size on UI_JettyBoots_Obstacle_C_Intersects");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Intersects, InRect) == 0x000000, "Member 'UI_JettyBoots_Obstacle_C_Intersects::InRect' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Intersects, OutIntersects) == 0x000010, "Member 'UI_JettyBoots_Obstacle_C_Intersects::OutIntersects' has a wrong offset!");

// Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.Init
// 0x0088 (0x0088 - 0x0000)
struct UI_JettyBoots_Obstacle_C_Init final
{
public:
	struct FRandomStream                          InRandom;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	struct FJettyBootSetting                      InLevelSettings;                                   // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         InCanvasHeight;                                    // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStartX;                                          // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsFirstGate;                                     // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2AFE[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutEndX;                                           // 0x002C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EndX;                                              // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartX;                                            // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CanvasSlot;                                        // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0040(0x0010)(NoDestructor)
	int32                                         CallFunc_OnInitialize_OutStartX;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_OnInitialize_OutEndX;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2AFF[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B00[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_JettyBoots_Obstacle_C_Init) == 0x000008, "Wrong alignment on UI_JettyBoots_Obstacle_C_Init");
static_assert(sizeof(UI_JettyBoots_Obstacle_C_Init) == 0x000088, "Wrong size on UI_JettyBoots_Obstacle_C_Init");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, InRandom) == 0x000000, "Member 'UI_JettyBoots_Obstacle_C_Init::InRandom' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, InLevelSettings) == 0x000008, "Member 'UI_JettyBoots_Obstacle_C_Init::InLevelSettings' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, InCanvasHeight) == 0x000020, "Member 'UI_JettyBoots_Obstacle_C_Init::InCanvasHeight' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, InStartX) == 0x000024, "Member 'UI_JettyBoots_Obstacle_C_Init::InStartX' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, InIsFirstGate) == 0x000028, "Member 'UI_JettyBoots_Obstacle_C_Init::InIsFirstGate' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, OutEndX) == 0x00002C, "Member 'UI_JettyBoots_Obstacle_C_Init::OutEndX' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, EndX) == 0x000030, "Member 'UI_JettyBoots_Obstacle_C_Init::EndX' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, StartX) == 0x000034, "Member 'UI_JettyBoots_Obstacle_C_Init::StartX' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, CanvasSlot) == 0x000038, "Member 'UI_JettyBoots_Obstacle_C_Init::CanvasSlot' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, K2Node_MakeStruct_Anchors) == 0x000040, "Member 'UI_JettyBoots_Obstacle_C_Init::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, CallFunc_OnInitialize_OutStartX) == 0x000050, "Member 'UI_JettyBoots_Obstacle_C_Init::CallFunc_OnInitialize_OutStartX' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, CallFunc_OnInitialize_OutEndX) == 0x000054, "Member 'UI_JettyBoots_Obstacle_C_Init::CallFunc_OnInitialize_OutEndX' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'UI_JettyBoots_Obstacle_C_Init::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, CallFunc_Subtract_IntInt_ReturnValue) == 0x00005C, "Member 'UI_JettyBoots_Obstacle_C_Init::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000060, "Member 'UI_JettyBoots_Obstacle_C_Init::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000064, "Member 'UI_JettyBoots_Obstacle_C_Init::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, CallFunc_MakeVector2D_ReturnValue) == 0x000068, "Member 'UI_JettyBoots_Obstacle_C_Init::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000070, "Member 'UI_JettyBoots_Obstacle_C_Init::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, CallFunc_MakeVector2D_ReturnValue_1) == 0x000074, "Member 'UI_JettyBoots_Obstacle_C_Init::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_Init, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000080, "Member 'UI_JettyBoots_Obstacle_C_Init::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.OnInitialize
// 0x0038 (0x0038 - 0x0000)
struct UI_JettyBoots_Obstacle_C_OnInitialize final
{
public:
	struct FRandomStream                          InRandom;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	struct FJettyBootSetting                      InLevelSettings;                                   // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         InCanvasHeight;                                    // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStartX;                                          // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsFirstGate;                                     // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B01[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutStartX;                                         // 0x002C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutEndX;                                           // 0x0030(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_JettyBoots_Obstacle_C_OnInitialize) == 0x000004, "Wrong alignment on UI_JettyBoots_Obstacle_C_OnInitialize");
static_assert(sizeof(UI_JettyBoots_Obstacle_C_OnInitialize) == 0x000038, "Wrong size on UI_JettyBoots_Obstacle_C_OnInitialize");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_OnInitialize, InRandom) == 0x000000, "Member 'UI_JettyBoots_Obstacle_C_OnInitialize::InRandom' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_OnInitialize, InLevelSettings) == 0x000008, "Member 'UI_JettyBoots_Obstacle_C_OnInitialize::InLevelSettings' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_OnInitialize, InCanvasHeight) == 0x000020, "Member 'UI_JettyBoots_Obstacle_C_OnInitialize::InCanvasHeight' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_OnInitialize, InStartX) == 0x000024, "Member 'UI_JettyBoots_Obstacle_C_OnInitialize::InStartX' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_OnInitialize, InIsFirstGate) == 0x000028, "Member 'UI_JettyBoots_Obstacle_C_OnInitialize::InIsFirstGate' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_OnInitialize, OutStartX) == 0x00002C, "Member 'UI_JettyBoots_Obstacle_C_OnInitialize::OutStartX' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_OnInitialize, OutEndX) == 0x000030, "Member 'UI_JettyBoots_Obstacle_C_OnInitialize::OutEndX' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_OnInitialize, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'UI_JettyBoots_Obstacle_C_OnInitialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.SetColumnRect
// 0x0080 (0x0080 - 0x0000)
struct UI_JettyBoots_Obstacle_C_SetColumnRect final
{
public:
	class UUI_JettyBoots_Column_C*                Column;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpriteRect                            Rect;                                              // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         StartX;                                            // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpriteRect                            LocalRect;                                         // 0x001C(0x0010)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_2B02[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CanvasSlot;                                        // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0038(0x0010)(NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpriteRect                            CallFunc_TranslateSpriteRect_ReturnValue;          // 0x005C(0x0010)(NoDestructor)
	struct FVector2D                              CallFunc_GetSpriteRectSize_ReturnValue;            // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSpriteRectCenter_ReturnValue;          // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_JettyBoots_Obstacle_C_SetColumnRect) == 0x000008, "Wrong alignment on UI_JettyBoots_Obstacle_C_SetColumnRect");
static_assert(sizeof(UI_JettyBoots_Obstacle_C_SetColumnRect) == 0x000080, "Wrong size on UI_JettyBoots_Obstacle_C_SetColumnRect");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_SetColumnRect, Column) == 0x000000, "Member 'UI_JettyBoots_Obstacle_C_SetColumnRect::Column' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_SetColumnRect, Rect) == 0x000008, "Member 'UI_JettyBoots_Obstacle_C_SetColumnRect::Rect' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_SetColumnRect, StartX) == 0x000018, "Member 'UI_JettyBoots_Obstacle_C_SetColumnRect::StartX' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_SetColumnRect, LocalRect) == 0x00001C, "Member 'UI_JettyBoots_Obstacle_C_SetColumnRect::LocalRect' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_SetColumnRect, CanvasSlot) == 0x000030, "Member 'UI_JettyBoots_Obstacle_C_SetColumnRect::CanvasSlot' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_SetColumnRect, K2Node_MakeStruct_Anchors) == 0x000038, "Member 'UI_JettyBoots_Obstacle_C_SetColumnRect::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_SetColumnRect, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000048, "Member 'UI_JettyBoots_Obstacle_C_SetColumnRect::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_SetColumnRect, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000050, "Member 'UI_JettyBoots_Obstacle_C_SetColumnRect::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_SetColumnRect, CallFunc_MakeVector2D_ReturnValue) == 0x000054, "Member 'UI_JettyBoots_Obstacle_C_SetColumnRect::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_SetColumnRect, CallFunc_TranslateSpriteRect_ReturnValue) == 0x00005C, "Member 'UI_JettyBoots_Obstacle_C_SetColumnRect::CallFunc_TranslateSpriteRect_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_SetColumnRect, CallFunc_GetSpriteRectSize_ReturnValue) == 0x00006C, "Member 'UI_JettyBoots_Obstacle_C_SetColumnRect::CallFunc_GetSpriteRectSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_SetColumnRect, CallFunc_GetSpriteRectCenter_ReturnValue) == 0x000074, "Member 'UI_JettyBoots_Obstacle_C_SetColumnRect::CallFunc_GetSpriteRectCenter_ReturnValue' has a wrong offset!");

// Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.CalculateColumn
// 0x0058 (0x0058 - 0x0000)
struct UI_JettyBoots_Obstacle_C_CalculateColumn final
{
public:
	class UUI_JettyBoots_Column_C*                InColumn;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStartX;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InGateWidth;                                       // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InTop;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InBottom;                                          // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpriteRect                            OutRect;                                           // 0x0018(0x0010)(Parm, OutParm, NoDestructor)
	struct FSpriteRect                            Rect;                                              // 0x0028(0x0010)(Edit, BlueprintVisible, NoDestructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpriteRect                            K2Node_MakeStruct_SpriteRect;                      // 0x0048(0x0010)(NoDestructor)
};
static_assert(alignof(UI_JettyBoots_Obstacle_C_CalculateColumn) == 0x000008, "Wrong alignment on UI_JettyBoots_Obstacle_C_CalculateColumn");
static_assert(sizeof(UI_JettyBoots_Obstacle_C_CalculateColumn) == 0x000058, "Wrong size on UI_JettyBoots_Obstacle_C_CalculateColumn");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_CalculateColumn, InColumn) == 0x000000, "Member 'UI_JettyBoots_Obstacle_C_CalculateColumn::InColumn' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_CalculateColumn, InStartX) == 0x000008, "Member 'UI_JettyBoots_Obstacle_C_CalculateColumn::InStartX' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_CalculateColumn, InGateWidth) == 0x00000C, "Member 'UI_JettyBoots_Obstacle_C_CalculateColumn::InGateWidth' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_CalculateColumn, InTop) == 0x000010, "Member 'UI_JettyBoots_Obstacle_C_CalculateColumn::InTop' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_CalculateColumn, InBottom) == 0x000014, "Member 'UI_JettyBoots_Obstacle_C_CalculateColumn::InBottom' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_CalculateColumn, OutRect) == 0x000018, "Member 'UI_JettyBoots_Obstacle_C_CalculateColumn::OutRect' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_CalculateColumn, Rect) == 0x000028, "Member 'UI_JettyBoots_Obstacle_C_CalculateColumn::Rect' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_CalculateColumn, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000038, "Member 'UI_JettyBoots_Obstacle_C_CalculateColumn::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_CalculateColumn, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00003C, "Member 'UI_JettyBoots_Obstacle_C_CalculateColumn::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_CalculateColumn, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'UI_JettyBoots_Obstacle_C_CalculateColumn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_CalculateColumn, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000044, "Member 'UI_JettyBoots_Obstacle_C_CalculateColumn::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_CalculateColumn, K2Node_MakeStruct_SpriteRect) == 0x000048, "Member 'UI_JettyBoots_Obstacle_C_CalculateColumn::K2Node_MakeStruct_SpriteRect' has a wrong offset!");

// Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.PointsGathered
// 0x0018 (0x0018 - 0x0000)
struct UI_JettyBoots_Obstacle_C_PointsGathered final
{
public:
	struct FSpriteRect                            InRect;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          OutGatheredPoints;                                 // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B03[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutPoints;                                         // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_JettyBoots_Obstacle_C_PointsGathered) == 0x000004, "Wrong alignment on UI_JettyBoots_Obstacle_C_PointsGathered");
static_assert(sizeof(UI_JettyBoots_Obstacle_C_PointsGathered) == 0x000018, "Wrong size on UI_JettyBoots_Obstacle_C_PointsGathered");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_PointsGathered, InRect) == 0x000000, "Member 'UI_JettyBoots_Obstacle_C_PointsGathered::InRect' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_PointsGathered, OutGatheredPoints) == 0x000010, "Member 'UI_JettyBoots_Obstacle_C_PointsGathered::OutGatheredPoints' has a wrong offset!");
static_assert(offsetof(UI_JettyBoots_Obstacle_C_PointsGathered, OutPoints) == 0x000014, "Member 'UI_JettyBoots_Obstacle_C_PointsGathered::OutPoints' has a wrong offset!");

}

