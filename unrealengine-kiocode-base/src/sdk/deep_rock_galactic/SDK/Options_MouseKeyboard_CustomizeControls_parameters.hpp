#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_MouseKeyboard_CustomizeControls

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls
// 0x0028 (0x0028 - 0x0000)
struct Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C0B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDGameUserSettings*                   CallFunc_GetFSDGameUserSettings_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C0C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBasic_ButtonCutCorner_C*               K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls) == 0x000008, "Wrong alignment on Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls");
static_assert(sizeof(Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls) == 0x000028, "Wrong size on Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls, EntryPoint) == 0x000000, "Member 'Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls::EntryPoint' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls, CallFunc_GetFSDGameUserSettings_ReturnValue) == 0x000008, "Member 'Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls::CallFunc_GetFSDGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls, K2Node_Event_IsDesignTime) == 0x000020, "Member 'Options_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Options_MouseKeyboard_CustomizeControls_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Options_MouseKeyboard_CustomizeControls_C_PreConstruct) == 0x000001, "Wrong alignment on Options_MouseKeyboard_CustomizeControls_C_PreConstruct");
static_assert(sizeof(Options_MouseKeyboard_CustomizeControls_C_PreConstruct) == 0x000001, "Wrong size on Options_MouseKeyboard_CustomizeControls_C_PreConstruct");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Options_MouseKeyboard_CustomizeControls_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Options_MouseKeyboard_CustomizeControls_C_BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature final
{
public:
	class UBasic_ButtonCutCorner_C*               Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Options_MouseKeyboard_CustomizeControls_C_BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on Options_MouseKeyboard_CustomizeControls_C_BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
static_assert(sizeof(Options_MouseKeyboard_CustomizeControls_C_BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature) == 0x000008, "Wrong size on Options_MouseKeyboard_CustomizeControls_C_BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'Options_MouseKeyboard_CustomizeControls_C_BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.CreateBindingWidgets
// 0x00F0 (0x00F0 - 0x0000)
struct Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets final
{
public:
	struct FCustomKeySetting                      Button;                                            // 0x0000(0x0038)(Edit, BlueprintVisible)
	TArray<class FName>                           IgnoreListForXboxOddishUWP;                        // 0x0038(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C0D[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFSDTargetPlatform                            Temp_byte_Variable;                                // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFSDTargetPlatform                            CallFunc_FSDTargetPlatform_ReturnValue;            // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsAnyName_Result;                   // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C0E[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptions_MouseKeyboard_KeyBinding_C*    CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameData*                              CallFunc_GetFSDGameData_ReturnValue;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBoxEx_OutSlot;          // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           CallFunc_AddChildToVerticalBoxEx_OutVerticalBox;   // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptions_MouseKeyboard_KeyBinding_C*    CallFunc_AddChildToVerticalBoxEx_ReturnValue;      // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C0F[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCustomKeySetting                      CallFunc_Array_Get_Item;                           // 0x00B0(0x0038)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets) == 0x000008, "Wrong alignment on Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets");
static_assert(sizeof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets) == 0x0000F0, "Wrong size on Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, Button) == 0x000000, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::Button' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, IgnoreListForXboxOddishUWP) == 0x000038, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::IgnoreListForXboxOddishUWP' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, Temp_bool_Variable) == 0x000048, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, Temp_bool_Variable_1) == 0x000049, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, Temp_bool_Variable_2) == 0x00004A, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, Temp_bool_Variable_3) == 0x00004B, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, Temp_bool_Variable_4) == 0x00004C, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, K2Node_MakeArray_Array) == 0x000050, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, Temp_int_Array_Index_Variable) == 0x000060, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, Temp_byte_Variable) == 0x00006C, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_FSDTargetPlatform_ReturnValue) == 0x00006D, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_FSDTargetPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, K2Node_Select_Default) == 0x00006E, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_ContainsAnyName_Result) == 0x00006F, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_ContainsAnyName_Result' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_Not_PreBool_ReturnValue) == 0x000070, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_BooleanOR_ReturnValue) == 0x000071, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_GetOwningPlayer_ReturnValue) == 0x000078, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_Create_ReturnValue) == 0x000080, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_GetFSDGameData_ReturnValue) == 0x000088, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_GetFSDGameData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_AddChildToVerticalBoxEx_OutSlot) == 0x000090, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_AddChildToVerticalBoxEx_OutSlot' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_AddChildToVerticalBoxEx_OutVerticalBox) == 0x000098, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_AddChildToVerticalBoxEx_OutVerticalBox' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_AddChildToVerticalBoxEx_ReturnValue) == 0x0000A0, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_AddChildToVerticalBoxEx_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'Options_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.SetOpen
// 0x0058 (0x0058 - 0x0000)
struct Options_MouseKeyboard_CustomizeControls_C_SetOpen final
{
public:
	bool                                          Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C10[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0038(0x0018)()
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Options_MouseKeyboard_CustomizeControls_C_SetOpen) == 0x000008, "Wrong alignment on Options_MouseKeyboard_CustomizeControls_C_SetOpen");
static_assert(sizeof(Options_MouseKeyboard_CustomizeControls_C_SetOpen) == 0x000058, "Wrong size on Options_MouseKeyboard_CustomizeControls_C_SetOpen");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_SetOpen, Param_Index) == 0x000000, "Member 'Options_MouseKeyboard_CustomizeControls_C_SetOpen::Param_Index' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_SetOpen, Temp_bool_Variable) == 0x000001, "Member 'Options_MouseKeyboard_CustomizeControls_C_SetOpen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_SetOpen, Temp_text_Variable) == 0x000008, "Member 'Options_MouseKeyboard_CustomizeControls_C_SetOpen::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_SetOpen, Temp_text_Variable_1) == 0x000020, "Member 'Options_MouseKeyboard_CustomizeControls_C_SetOpen::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_SetOpen, K2Node_Select_Default) == 0x000038, "Member 'Options_MouseKeyboard_CustomizeControls_C_SetOpen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_SetOpen, CallFunc_SelectVisibility_IsVisible) == 0x000050, "Member 'Options_MouseKeyboard_CustomizeControls_C_SetOpen::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_SetOpen, CallFunc_SelectVisibility_VisibilityChanged) == 0x000051, "Member 'Options_MouseKeyboard_CustomizeControls_C_SetOpen::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_SetOpen, CallFunc_SelectVisibility_New_Visibility) == 0x000052, "Member 'Options_MouseKeyboard_CustomizeControls_C_SetOpen::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");

// Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.OnKeyUp
// 0x02A8 (0x02A8 - 0x0000)
struct Options_MouseKeyboard_CustomizeControls_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0128(0x00B8)()
	bool                                          CallFunc_IsCloseOrBackMenu_ReturnValue;            // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C11[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01E8(0x00B8)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Options_MouseKeyboard_CustomizeControls_C_OnKeyUp) == 0x000008, "Wrong alignment on Options_MouseKeyboard_CustomizeControls_C_OnKeyUp");
static_assert(sizeof(Options_MouseKeyboard_CustomizeControls_C_OnKeyUp) == 0x0002A8, "Wrong size on Options_MouseKeyboard_CustomizeControls_C_OnKeyUp");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'Options_MouseKeyboard_CustomizeControls_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_OnKeyUp, InKeyEvent) == 0x000038, "Member 'Options_MouseKeyboard_CustomizeControls_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_OnKeyUp, ReturnValue) == 0x000070, "Member 'Options_MouseKeyboard_CustomizeControls_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_OnKeyUp, CallFunc_Unhandled_ReturnValue) == 0x000128, "Member 'Options_MouseKeyboard_CustomizeControls_C_OnKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_OnKeyUp, CallFunc_IsCloseOrBackMenu_ReturnValue) == 0x0001E0, "Member 'Options_MouseKeyboard_CustomizeControls_C_OnKeyUp::CallFunc_IsCloseOrBackMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_OnKeyUp, CallFunc_Handled_ReturnValue) == 0x0001E8, "Member 'Options_MouseKeyboard_CustomizeControls_C_OnKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_OnKeyUp, CallFunc_BooleanAND_ReturnValue) == 0x0002A0, "Member 'Options_MouseKeyboard_CustomizeControls_C_OnKeyUp::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.ContainsAnyName
// 0x0068 (0x0068 - 0x0000)
struct Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName final
{
public:
	struct FCustomKeySetting                      Button;                                            // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FName>                           ActionNames;                                       // 0x0038(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Result;                                            // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C12[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C13[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName) == 0x000008, "Wrong alignment on Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName");
static_assert(sizeof(Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName) == 0x000068, "Wrong size on Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName, Button) == 0x000000, "Member 'Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName::Button' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName, ActionNames) == 0x000038, "Member 'Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName::ActionNames' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName, Result) == 0x000048, "Member 'Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName::Result' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName, CallFunc_Array_Get_Item) == 0x000054, "Member 'Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName, CallFunc_Array_Contains_ReturnValue) == 0x000060, "Member 'Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName, CallFunc_Less_IntInt_ReturnValue) == 0x000061, "Member 'Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'Options_MouseKeyboard_CustomizeControls_C_ContainsAnyName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}
