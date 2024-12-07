#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Forge_Details

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_Forge_Details.UI_Forge_Details_C.StartCounting
// 0x0028 (0x0028 - 0x0000)
struct UI_Forge_Details_C_StartCounting final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4387[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetFrameLinearColor_ColorAndOpacity;      // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4388[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Forge_Details_C_StartCounting) == 0x000008, "Wrong alignment on UI_Forge_Details_C_StartCounting");
static_assert(sizeof(UI_Forge_Details_C_StartCounting) == 0x000028, "Wrong size on UI_Forge_Details_C_StartCounting");
static_assert(offsetof(UI_Forge_Details_C_StartCounting, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'UI_Forge_Details_C_StartCounting::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_StartCounting, CallFunc_GetFrameLinearColor_ColorAndOpacity) == 0x000004, "Member 'UI_Forge_Details_C_StartCounting::CallFunc_GetFrameLinearColor_ColorAndOpacity' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_StartCounting, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'UI_Forge_Details_C_StartCounting::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_StartCounting, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'UI_Forge_Details_C_StartCounting::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_StartCounting, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'UI_Forge_Details_C_StartCounting::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function UI_Forge_Details.UI_Forge_Details_C.SetCountProgress
// 0x0028 (0x0028 - 0x0000)
struct UI_Forge_Details_C_SetCountProgress final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(UI_Forge_Details_C_SetCountProgress) == 0x000008, "Wrong alignment on UI_Forge_Details_C_SetCountProgress");
static_assert(sizeof(UI_Forge_Details_C_SetCountProgress) == 0x000028, "Wrong size on UI_Forge_Details_C_SetCountProgress");
static_assert(offsetof(UI_Forge_Details_C_SetCountProgress, InValue) == 0x000000, "Member 'UI_Forge_Details_C_SetCountProgress::InValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_SetCountProgress, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'UI_Forge_Details_C_SetCountProgress::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_SetCountProgress, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'UI_Forge_Details_C_SetCountProgress::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_SetCountProgress, CallFunc_Round_ReturnValue) == 0x00000C, "Member 'UI_Forge_Details_C_SetCountProgress::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_SetCountProgress, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'UI_Forge_Details_C_SetCountProgress::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function UI_Forge_Details.UI_Forge_Details_C.OpenMatrixCore
// 0x0008 (0x0008 - 0x0000)
struct UI_Forge_Details_C_OpenMatrixCore final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Forge_Details_C_OpenMatrixCore) == 0x000008, "Wrong alignment on UI_Forge_Details_C_OpenMatrixCore");
static_assert(sizeof(UI_Forge_Details_C_OpenMatrixCore) == 0x000008, "Wrong size on UI_Forge_Details_C_OpenMatrixCore");
static_assert(offsetof(UI_Forge_Details_C_OpenMatrixCore, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UI_Forge_Details_C_OpenMatrixCore::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UI_Forge_Details.UI_Forge_Details_C.SetItemDescription
// 0x0038 (0x0038 - 0x0000)
struct UI_Forge_Details_C_SetItemDescription final
{
public:
	class FText                                   Title;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Subtitle;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Forge_Details_C_SetItemDescription) == 0x000008, "Wrong alignment on UI_Forge_Details_C_SetItemDescription");
static_assert(sizeof(UI_Forge_Details_C_SetItemDescription) == 0x000038, "Wrong size on UI_Forge_Details_C_SetItemDescription");
static_assert(offsetof(UI_Forge_Details_C_SetItemDescription, Title) == 0x000000, "Member 'UI_Forge_Details_C_SetItemDescription::Title' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_SetItemDescription, Subtitle) == 0x000018, "Member 'UI_Forge_Details_C_SetItemDescription::Subtitle' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_SetItemDescription, CallFunc_TextIsEmpty_ReturnValue) == 0x000030, "Member 'UI_Forge_Details_C_SetItemDescription::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_SetItemDescription, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000031, "Member 'UI_Forge_Details_C_SetItemDescription::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_SetItemDescription, CallFunc_BooleanAND_ReturnValue) == 0x000032, "Member 'UI_Forge_Details_C_SetItemDescription::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_SetItemDescription, CallFunc_SelectVisibility_IsVisible) == 0x000033, "Member 'UI_Forge_Details_C_SetItemDescription::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_SetItemDescription, CallFunc_SelectVisibility_VisibilityChanged) == 0x000034, "Member 'UI_Forge_Details_C_SetItemDescription::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_SetItemDescription, CallFunc_SelectVisibility_New_Visibility) == 0x000035, "Member 'UI_Forge_Details_C_SetItemDescription::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");

// Function UI_Forge_Details.UI_Forge_Details_C.ShowSchematic
// 0x0228 (0x0228 - 0x0000)
struct UI_Forge_Details_C_ShowSchematic final
{
public:
	class USchematic*                             InSchematic;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowSchematicDetails;                              // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4389[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   SchematicDescription;                              // 0x0010(0x0018)(Edit, BlueprintVisible)
	class FText                                   SchematicName;                                     // 0x0028(0x0018)(Edit, BlueprintVisible)
	class USchematicItem*                         Item;                                              // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverclockShematicItem*                 OverclockItem;                                     // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_438A[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0058(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0040)(HasGetValueTypeHash)
	class APlayerCharacter*                       CallFunc_GetCharacter_ReturnValue;                 // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetHeroName_ReturnValue;                  // 0x00B8(0x0018)(ConstParm)
	class USkinSchematicItem*                     K2Node_DynamicCast_AsSkin_Schematic_Item;          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_438B[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00E0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0120(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0130(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;                // 0x0148(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0163(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x0165(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x0166(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectVisibility_IsVisible_1;             // 0x0167(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged_1;     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility_1;        // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_438C[0x6];                                     // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue_2;                // 0x0170(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible_2;             // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged_2;     // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility_2;        // 0x018B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_438D[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UResourceSchematicItem*                 K2Node_DynamicCast_AsResource_Schematic_Item;      // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_438E[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverclockShematicItem*                 K2Node_DynamicCast_AsOverclock_Shematic_Item;      // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_438F[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       CallFunc_GetCharacter_ReturnValue_1;               // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUpgradableGearComponent*               CallFunc_GetOwningGearComponent_ReturnValue;       // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetHeroName_ReturnValue_1;                // 0x01C0(0x0018)(ConstParm)
	class FText                                   CallFunc_GetGearName_ReturnValue;                  // 0x01D8(0x0018)()
	class USchematicItem*                         CallFunc_GetSchematicItem_ReturnValue;             // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDescription_ReturnValue;               // 0x01F8(0x0018)()
	class FText                                   CallFunc_GetTitle_ReturnValue;                     // 0x0210(0x0018)()
};
static_assert(alignof(UI_Forge_Details_C_ShowSchematic) == 0x000008, "Wrong alignment on UI_Forge_Details_C_ShowSchematic");
static_assert(sizeof(UI_Forge_Details_C_ShowSchematic) == 0x000228, "Wrong size on UI_Forge_Details_C_ShowSchematic");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, InSchematic) == 0x000000, "Member 'UI_Forge_Details_C_ShowSchematic::InSchematic' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, ShowSchematicDetails) == 0x000008, "Member 'UI_Forge_Details_C_ShowSchematic::ShowSchematicDetails' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, SchematicDescription) == 0x000010, "Member 'UI_Forge_Details_C_ShowSchematic::SchematicDescription' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, SchematicName) == 0x000028, "Member 'UI_Forge_Details_C_ShowSchematic::SchematicName' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, Item) == 0x000040, "Member 'UI_Forge_Details_C_ShowSchematic::Item' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, OverclockItem) == 0x000048, "Member 'UI_Forge_Details_C_ShowSchematic::OverclockItem' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, Temp_bool_Variable) == 0x000050, "Member 'UI_Forge_Details_C_ShowSchematic::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, Temp_byte_Variable) == 0x000051, "Member 'UI_Forge_Details_C_ShowSchematic::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, Temp_byte_Variable_1) == 0x000052, "Member 'UI_Forge_Details_C_ShowSchematic::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, Temp_bool_Variable_1) == 0x000053, "Member 'UI_Forge_Details_C_ShowSchematic::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, Temp_byte_Variable_2) == 0x000054, "Member 'UI_Forge_Details_C_ShowSchematic::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, Temp_byte_Variable_3) == 0x000055, "Member 'UI_Forge_Details_C_ShowSchematic::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_TextToUpper_ReturnValue) == 0x000058, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'UI_Forge_Details_C_ShowSchematic::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_GetCharacter_ReturnValue) == 0x0000B0, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_GetHeroName_ReturnValue) == 0x0000B8, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_GetHeroName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, K2Node_DynamicCast_AsSkin_Schematic_Item) == 0x0000D0, "Member 'UI_Forge_Details_C_ShowSchematic::K2Node_DynamicCast_AsSkin_Schematic_Item' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'UI_Forge_Details_C_ShowSchematic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000E0, "Member 'UI_Forge_Details_C_ShowSchematic::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, K2Node_MakeArray_Array) == 0x000120, "Member 'UI_Forge_Details_C_ShowSchematic::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_Format_ReturnValue) == 0x000130, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_TextToUpper_ReturnValue_1) == 0x000148, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, K2Node_Select_Default) == 0x000160, "Member 'UI_Forge_Details_C_ShowSchematic::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_IsVisible_ReturnValue) == 0x000161, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, K2Node_Select_Default_1) == 0x000162, "Member 'UI_Forge_Details_C_ShowSchematic::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_BooleanOR_ReturnValue) == 0x000163, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_SelectVisibility_IsVisible) == 0x000164, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_SelectVisibility_VisibilityChanged) == 0x000165, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_SelectVisibility_New_Visibility) == 0x000166, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_SelectVisibility_IsVisible_1) == 0x000167, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_SelectVisibility_IsVisible_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_SelectVisibility_VisibilityChanged_1) == 0x000168, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_SelectVisibility_VisibilityChanged_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_SelectVisibility_New_Visibility_1) == 0x000169, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_SelectVisibility_New_Visibility_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_TextToUpper_ReturnValue_2) == 0x000170, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_TextToUpper_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_IsValid_ReturnValue) == 0x000188, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_SelectVisibility_IsVisible_2) == 0x000189, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_SelectVisibility_IsVisible_2' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_SelectVisibility_VisibilityChanged_2) == 0x00018A, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_SelectVisibility_VisibilityChanged_2' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_SelectVisibility_New_Visibility_2) == 0x00018B, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_SelectVisibility_New_Visibility_2' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, K2Node_DynamicCast_AsResource_Schematic_Item) == 0x000190, "Member 'UI_Forge_Details_C_ShowSchematic::K2Node_DynamicCast_AsResource_Schematic_Item' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, K2Node_DynamicCast_bSuccess_1) == 0x000198, "Member 'UI_Forge_Details_C_ShowSchematic::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, K2Node_DynamicCast_AsOverclock_Shematic_Item) == 0x0001A0, "Member 'UI_Forge_Details_C_ShowSchematic::K2Node_DynamicCast_AsOverclock_Shematic_Item' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, K2Node_DynamicCast_bSuccess_2) == 0x0001A8, "Member 'UI_Forge_Details_C_ShowSchematic::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_GetCharacter_ReturnValue_1) == 0x0001B0, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_GetCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_GetOwningGearComponent_ReturnValue) == 0x0001B8, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_GetOwningGearComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_GetHeroName_ReturnValue_1) == 0x0001C0, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_GetHeroName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_GetGearName_ReturnValue) == 0x0001D8, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_GetGearName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_GetSchematicItem_ReturnValue) == 0x0001F0, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_GetSchematicItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_GetDescription_ReturnValue) == 0x0001F8, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_GetDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ShowSchematic, CallFunc_GetTitle_ReturnValue) == 0x000210, "Member 'UI_Forge_Details_C_ShowSchematic::CallFunc_GetTitle_ReturnValue' has a wrong offset!");

// Function UI_Forge_Details.UI_Forge_Details_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Forge_Details_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Forge_Details_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Forge_Details_C_PreConstruct");
static_assert(sizeof(UI_Forge_Details_C_PreConstruct) == 0x000001, "Wrong size on UI_Forge_Details_C_PreConstruct");
static_assert(offsetof(UI_Forge_Details_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Forge_Details_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_Forge_Details.UI_Forge_Details_C.ExecuteUbergraph_UI_Forge_Details
// 0x004C (0x004C - 0x0000)
struct UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4390[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details) == 0x000004, "Wrong alignment on UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details");
static_assert(sizeof(UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details) == 0x00004C, "Wrong size on UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details");
static_assert(offsetof(UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details, EntryPoint) == 0x000000, "Member 'UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details, K2Node_Event_IsDesignTime) == 0x000014, "Member 'UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details, CallFunc_MenuColors_OutputColor) == 0x000018, "Member 'UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details, CallFunc_MenuColors_OutputColor_1) == 0x000028, "Member 'UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details, CallFunc_MenuColors_OutputColor_2) == 0x000038, "Member 'UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");
static_assert(offsetof(UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000048, "Member 'UI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}

