#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ClaimableRewards_View

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlStarted__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_ClaimableRewards_View_C_OnMissionControlStarted__DelegateSignature final
{
public:
	class UAudioComponent*                        MissionControlAudio;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ClaimableRewards_View_C_OnMissionControlStarted__DelegateSignature) == 0x000008, "Wrong alignment on UI_ClaimableRewards_View_C_OnMissionControlStarted__DelegateSignature");
static_assert(sizeof(UI_ClaimableRewards_View_C_OnMissionControlStarted__DelegateSignature) == 0x000008, "Wrong size on UI_ClaimableRewards_View_C_OnMissionControlStarted__DelegateSignature");
static_assert(offsetof(UI_ClaimableRewards_View_C_OnMissionControlStarted__DelegateSignature, MissionControlAudio) == 0x000000, "Member 'UI_ClaimableRewards_View_C_OnMissionControlStarted__DelegateSignature::MissionControlAudio' has a wrong offset!");

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ExecuteUbergraph_UI_ClaimableRewards_View
// 0x0088 (0x0088 - 0x0000)
struct UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SpeakManually_Duration;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381A[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpeakManually_AudioComponent;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class UClaimableRewardEntryWidget*            K2Node_CustomEvent_InEntryWidget;                  // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381B[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClaimableRewardEntryWidget*            CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_381C[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_381D[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View) == 0x000008, "Wrong alignment on UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View");
static_assert(sizeof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View) == 0x000088, "Wrong size on UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, EntryPoint) == 0x000000, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, Temp_int_Array_Index_Variable) == 0x000004, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00000C, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, Temp_int_Variable) == 0x000014, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_SpeakManually_Duration) == 0x000018, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_SpeakManually_Duration' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_SpeakManually_AudioComponent) == 0x000020, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_SpeakManually_AudioComponent' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000038, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, K2Node_CustomEvent_InEntryWidget) == 0x000050, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::K2Node_CustomEvent_InEntryWidget' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_Add_IntInt_ReturnValue_1) == 0x000058, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_Array_Get_Item) == 0x000060, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x00006C, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_Array_Length_ReturnValue_1) == 0x000070, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_Array_Length_ReturnValue_2) == 0x000078, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00007C, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_IsValid_ReturnValue) == 0x00007D, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View, CallFunc_GetOwningPlayer_ReturnValue_2) == 0x000080, "Member 'UI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View::CallFunc_GetOwningPlayer_ReturnValue_2' has a wrong offset!");

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardClaimed
// 0x0008 (0x0008 - 0x0000)
struct UI_ClaimableRewards_View_C_OnRewardClaimed final
{
public:
	class UClaimableRewardEntryWidget*            InEntryWidget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ClaimableRewards_View_C_OnRewardClaimed) == 0x000008, "Wrong alignment on UI_ClaimableRewards_View_C_OnRewardClaimed");
static_assert(sizeof(UI_ClaimableRewards_View_C_OnRewardClaimed) == 0x000008, "Wrong size on UI_ClaimableRewards_View_C_OnRewardClaimed");
static_assert(offsetof(UI_ClaimableRewards_View_C_OnRewardClaimed, InEntryWidget) == 0x000000, "Member 'UI_ClaimableRewards_View_C_OnRewardClaimed::InEntryWidget' has a wrong offset!");

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.StopAudio
// 0x0001 (0x0001 - 0x0000)
struct UI_ClaimableRewards_View_C_StopAudio final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ClaimableRewards_View_C_StopAudio) == 0x000001, "Wrong alignment on UI_ClaimableRewards_View_C_StopAudio");
static_assert(sizeof(UI_ClaimableRewards_View_C_StopAudio) == 0x000001, "Wrong size on UI_ClaimableRewards_View_C_StopAudio");
static_assert(offsetof(UI_ClaimableRewards_View_C_StopAudio, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'UI_ClaimableRewards_View_C_StopAudio::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.TryFinish
// 0x000C (0x000C - 0x0000)
struct UI_ClaimableRewards_View_C_TryFinish final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_381E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ClaimableRewards_View_C_TryFinish) == 0x000004, "Wrong alignment on UI_ClaimableRewards_View_C_TryFinish");
static_assert(sizeof(UI_ClaimableRewards_View_C_TryFinish) == 0x00000C, "Wrong size on UI_ClaimableRewards_View_C_TryFinish");
static_assert(offsetof(UI_ClaimableRewards_View_C_TryFinish, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'UI_ClaimableRewards_View_C_TryFinish::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_TryFinish, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'UI_ClaimableRewards_View_C_TryFinish::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_TryFinish, CallFunc_IsPlaying_ReturnValue) == 0x000008, "Member 'UI_ClaimableRewards_View_C_TryFinish::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_TryFinish, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'UI_ClaimableRewards_View_C_TryFinish::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_TryFinish, CallFunc_Less_IntInt_ReturnValue) == 0x00000A, "Member 'UI_ClaimableRewards_View_C_TryFinish::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.SetupView
// 0x01B8 (0x01B8 - 0x0000)
struct UI_ClaimableRewards_View_C_SetupView final
{
public:
	struct FClaimableRewardView                   InViewData;                                        // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class UClaimableRewardEntryWidget*            EntryWidget;                                       // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BackgroundWidget;                                  // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0098(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_381F[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         CallFunc_GetLine_EntryBox;                         // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UClaimableRewardEntryWidget* EntryWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	struct FClaimableRewardEntry                  CallFunc_Array_Get_Item;                           // 0x00D0(0x0090)(ContainsInstancedReference)
	TSubclassOf<class UUserWidget>                CallFunc_LoadWidgetClass_ReturnValue;              // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetEntryWidgetClass_OutWidgetClass;       // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0175(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3820[0x2];                                     // 0x0176(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3821[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClaimableRewardEntryWidget*            CallFunc_Create_ReturnValue;                       // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_ReturnValue_1;                     // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3822[0x5];                                     // 0x01AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ClaimableRewards_View_C_SetupView) == 0x000008, "Wrong alignment on UI_ClaimableRewards_View_C_SetupView");
static_assert(sizeof(UI_ClaimableRewards_View_C_SetupView) == 0x0001B8, "Wrong size on UI_ClaimableRewards_View_C_SetupView");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, InViewData) == 0x000000, "Member 'UI_ClaimableRewards_View_C_SetupView::InViewData' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, EntryWidget) == 0x000088, "Member 'UI_ClaimableRewards_View_C_SetupView::EntryWidget' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, BackgroundWidget) == 0x000090, "Member 'UI_ClaimableRewards_View_C_SetupView::BackgroundWidget' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, K2Node_MakeStruct_Anchors) == 0x000098, "Member 'UI_ClaimableRewards_View_C_SetupView::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_IsValidClass_ReturnValue) == 0x0000A8, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, Temp_int_Array_Index_Variable) == 0x0000AC, "Member 'UI_ClaimableRewards_View_C_SetupView::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, Temp_int_Loop_Counter_Variable) == 0x0000B0, "Member 'UI_ClaimableRewards_View_C_SetupView::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_GetLine_EntryBox) == 0x0000B8, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_GetLine_EntryBox' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'UI_ClaimableRewards_View_C_SetupView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_LoadWidgetClass_ReturnValue) == 0x000160, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_LoadWidgetClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_GetEntryWidgetClass_OutWidgetClass) == 0x000168, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_GetEntryWidgetClass_OutWidgetClass' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_Array_Length_ReturnValue) == 0x000170, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_Less_IntInt_ReturnValue) == 0x000174, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_IsValid_ReturnValue) == 0x000175, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_AddChild_ReturnValue) == 0x000178, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_Array_Add_ReturnValue) == 0x000180, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_GetOwningPlayer_ReturnValue) == 0x000188, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_Create_ReturnValue) == 0x000190, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000198, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_Create_ReturnValue_1) == 0x0001A0, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_SelectVisibility_IsVisible) == 0x0001A8, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_SelectVisibility_VisibilityChanged) == 0x0001A9, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_SelectVisibility_New_Visibility) == 0x0001AA, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_SetupView, CallFunc_AddChildToCanvas_ReturnValue) == 0x0001B0, "Member 'UI_ClaimableRewards_View_C_SetupView::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.GetLine
// 0x0068 (0x0068 - 0x0000)
struct UI_ClaimableRewards_View_C_GetLine final
{
public:
	class UHorizontalBox*                         Param_EntryBox;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         CurrentLine;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3823[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBoxEx_OutSlot;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           CallFunc_AddChildToVerticalBoxEx_OutVerticalBox;   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         CallFunc_AddChildToVerticalBoxEx_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         CallFunc_CreateHorizontalBox_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_2;           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3824[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3825[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBox*                         K2Node_DynamicCast_AsHorizontal_Box;               // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ClaimableRewards_View_C_GetLine) == 0x000008, "Wrong alignment on UI_ClaimableRewards_View_C_GetLine");
static_assert(sizeof(UI_ClaimableRewards_View_C_GetLine) == 0x000068, "Wrong size on UI_ClaimableRewards_View_C_GetLine");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, Param_EntryBox) == 0x000000, "Member 'UI_ClaimableRewards_View_C_GetLine::Param_EntryBox' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, CurrentLine) == 0x000008, "Member 'UI_ClaimableRewards_View_C_GetLine::CurrentLine' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'UI_ClaimableRewards_View_C_GetLine::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, CallFunc_Less_IntInt_ReturnValue) == 0x000014, "Member 'UI_ClaimableRewards_View_C_GetLine::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, CallFunc_AddChildToVerticalBoxEx_OutSlot) == 0x000018, "Member 'UI_ClaimableRewards_View_C_GetLine::CallFunc_AddChildToVerticalBoxEx_OutSlot' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, CallFunc_AddChildToVerticalBoxEx_OutVerticalBox) == 0x000020, "Member 'UI_ClaimableRewards_View_C_GetLine::CallFunc_AddChildToVerticalBoxEx_OutVerticalBox' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, CallFunc_AddChildToVerticalBoxEx_ReturnValue) == 0x000028, "Member 'UI_ClaimableRewards_View_C_GetLine::CallFunc_AddChildToVerticalBoxEx_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, CallFunc_CreateHorizontalBox_ReturnValue) == 0x000030, "Member 'UI_ClaimableRewards_View_C_GetLine::CallFunc_CreateHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000038, "Member 'UI_ClaimableRewards_View_C_GetLine::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'UI_ClaimableRewards_View_C_GetLine::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, CallFunc_GetChildrenCount_ReturnValue_2) == 0x000040, "Member 'UI_ClaimableRewards_View_C_GetLine::CallFunc_GetChildrenCount_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, CallFunc_GetChildAt_ReturnValue) == 0x000048, "Member 'UI_ClaimableRewards_View_C_GetLine::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'UI_ClaimableRewards_View_C_GetLine::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, K2Node_DynamicCast_AsHorizontal_Box) == 0x000058, "Member 'UI_ClaimableRewards_View_C_GetLine::K2Node_DynamicCast_AsHorizontal_Box' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetLine, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'UI_ClaimableRewards_View_C_GetLine::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.GetEntryWidgetClass
// 0x0048 (0x0048 - 0x0000)
struct UI_ClaimableRewards_View_C_GetEntryWidgetClass final
{
public:
	TSoftClassPtr<class UClass>                   InOverridetClass;                                  // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 OutWidgetClass;                                    // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UUserWidget>                CallFunc_LoadWidgetClass_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsClaimable_Reward_Entry_Widget; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ClaimableRewards_View_C_GetEntryWidgetClass) == 0x000008, "Wrong alignment on UI_ClaimableRewards_View_C_GetEntryWidgetClass");
static_assert(sizeof(UI_ClaimableRewards_View_C_GetEntryWidgetClass) == 0x000048, "Wrong size on UI_ClaimableRewards_View_C_GetEntryWidgetClass");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetEntryWidgetClass, InOverridetClass) == 0x000000, "Member 'UI_ClaimableRewards_View_C_GetEntryWidgetClass::InOverridetClass' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetEntryWidgetClass, OutWidgetClass) == 0x000028, "Member 'UI_ClaimableRewards_View_C_GetEntryWidgetClass::OutWidgetClass' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetEntryWidgetClass, CallFunc_LoadWidgetClass_ReturnValue) == 0x000030, "Member 'UI_ClaimableRewards_View_C_GetEntryWidgetClass::CallFunc_LoadWidgetClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetEntryWidgetClass, K2Node_ClassDynamicCast_AsClaimable_Reward_Entry_Widget) == 0x000038, "Member 'UI_ClaimableRewards_View_C_GetEntryWidgetClass::K2Node_ClassDynamicCast_AsClaimable_Reward_Entry_Widget' has a wrong offset!");
static_assert(offsetof(UI_ClaimableRewards_View_C_GetEntryWidgetClass, K2Node_ClassDynamicCast_bSuccess) == 0x000040, "Member 'UI_ClaimableRewards_View_C_GetEntryWidgetClass::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");

}
