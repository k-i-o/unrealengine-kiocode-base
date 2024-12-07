#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_ObjectiveBox_InMission

#include "Basic.hpp"

#include "ENUM_AcuminCondensedTypeface_structs.hpp"
#include "ENUM_MenuColors_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.ExecuteUbergraph_ITM_ObjectiveBox_InMission
// 0x0098 (0x0098 - 0x0000)
struct ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObjective* Objective)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3477[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObjective*                             K2Node_CustomEvent_objective_1;                    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsPrimary;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3478[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObjective*                             K2Node_CustomEvent_objective;                      // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3479[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetInMissionText_ReturnValue;             // 0x0038(0x0018)()
	bool                                          CallFunc_IsCompleted_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_347A[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Text;                           // 0x0058(0x0018)()
	bool                                          K2Node_CustomEvent_Completed;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_347B[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetInMissionCounterText_ReturnValue;      // 0x0078(0x0018)()
	class UTexture2D*                             CallFunc_GetInMissionCounterIcon_ReturnValue;      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission) == 0x000008, "Wrong alignment on ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission");
static_assert(sizeof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission) == 0x000098, "Wrong size on ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission, EntryPoint) == 0x000000, "Member 'ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission, K2Node_CustomEvent_objective_1) == 0x000018, "Member 'ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission::K2Node_CustomEvent_objective_1' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission, K2Node_CustomEvent_IsPrimary) == 0x000020, "Member 'ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission::K2Node_CustomEvent_IsPrimary' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission, K2Node_CustomEvent_objective) == 0x000028, "Member 'ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission::K2Node_CustomEvent_objective' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission, CallFunc_GetInMissionText_ReturnValue) == 0x000038, "Member 'ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission::CallFunc_GetInMissionText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission, CallFunc_IsCompleted_ReturnValue) == 0x000050, "Member 'ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission::CallFunc_IsCompleted_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission, K2Node_CustomEvent_Text) == 0x000058, "Member 'ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission, K2Node_CustomEvent_Completed) == 0x000070, "Member 'ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission::K2Node_CustomEvent_Completed' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission, CallFunc_GetInMissionCounterText_ReturnValue) == 0x000078, "Member 'ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission::CallFunc_GetInMissionCounterText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission, CallFunc_GetInMissionCounterIcon_ReturnValue) == 0x000090, "Member 'ITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission::CallFunc_GetInMissionCounterIcon_ReturnValue' has a wrong offset!");

// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.SetCustom
// 0x0020 (0x0020 - 0x0000)
struct ITM_ObjectiveBox_InMission_C_SetCustom final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Completed;                                         // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_ObjectiveBox_InMission_C_SetCustom) == 0x000008, "Wrong alignment on ITM_ObjectiveBox_InMission_C_SetCustom");
static_assert(sizeof(ITM_ObjectiveBox_InMission_C_SetCustom) == 0x000020, "Wrong size on ITM_ObjectiveBox_InMission_C_SetCustom");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_SetCustom, Text) == 0x000000, "Member 'ITM_ObjectiveBox_InMission_C_SetCustom::Text' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_SetCustom, Completed) == 0x000018, "Member 'ITM_ObjectiveBox_InMission_C_SetCustom::Completed' has a wrong offset!");

// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.OnObjectiveUpdated
// 0x0008 (0x0008 - 0x0000)
struct ITM_ObjectiveBox_InMission_C_OnObjectiveUpdated final
{
public:
	class UObjective*                             Param_Objective;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_ObjectiveBox_InMission_C_OnObjectiveUpdated) == 0x000008, "Wrong alignment on ITM_ObjectiveBox_InMission_C_OnObjectiveUpdated");
static_assert(sizeof(ITM_ObjectiveBox_InMission_C_OnObjectiveUpdated) == 0x000008, "Wrong size on ITM_ObjectiveBox_InMission_C_OnObjectiveUpdated");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_OnObjectiveUpdated, Param_Objective) == 0x000000, "Member 'ITM_ObjectiveBox_InMission_C_OnObjectiveUpdated::Param_Objective' has a wrong offset!");

// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.Set Objective
// 0x0010 (0x0010 - 0x0000)
struct ITM_ObjectiveBox_InMission_C_Set_Objective final
{
public:
	class UObjective*                             Param_Objective;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPrimary;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_ObjectiveBox_InMission_C_Set_Objective) == 0x000008, "Wrong alignment on ITM_ObjectiveBox_InMission_C_Set_Objective");
static_assert(sizeof(ITM_ObjectiveBox_InMission_C_Set_Objective) == 0x000010, "Wrong size on ITM_ObjectiveBox_InMission_C_Set_Objective");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_Set_Objective, Param_Objective) == 0x000000, "Member 'ITM_ObjectiveBox_InMission_C_Set_Objective::Param_Objective' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_Set_Objective, IsPrimary) == 0x000008, "Member 'ITM_ObjectiveBox_InMission_C_Set_Objective::IsPrimary' has a wrong offset!");

// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.UpdateText
// 0x00A0 (0x00A0 - 0x0000)
struct ITM_ObjectiveBox_InMission_C_UpdateText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   InCounterText;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                             InCounterIcon;                                     // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Completed;                                         // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_347C[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextTrimPrecedingAndTrailing_ReturnValue; // 0x0040(0x0018)()
	ENUM_MenuColors                               Temp_byte_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_347D[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0060(0x0018)()
	ENUM_MenuColors                               Temp_byte_Variable_1;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENUM_AcuminCondensedTypeface                  Temp_byte_Variable_2;                              // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_AcuminCondensedTypeface                  Temp_byte_Variable_3;                              // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_347E[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENUM_MenuColors                               K2Node_Select_Default;                             // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible_1;             // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged_1;     // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility_1;        // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_347F[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_AcuminCondensedTypeface                  K2Node_Select_Default_2;                           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_ObjectiveBox_InMission_C_UpdateText) == 0x000008, "Wrong alignment on ITM_ObjectiveBox_InMission_C_UpdateText");
static_assert(sizeof(ITM_ObjectiveBox_InMission_C_UpdateText) == 0x0000A0, "Wrong size on ITM_ObjectiveBox_InMission_C_UpdateText");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, InText) == 0x000000, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::InText' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, InCounterText) == 0x000018, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::InCounterText' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, InCounterIcon) == 0x000030, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::InCounterIcon' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, Completed) == 0x000038, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::Completed' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, Temp_bool_Variable) == 0x000039, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, CallFunc_TextTrimPrecedingAndTrailing_ReturnValue) == 0x000040, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::CallFunc_TextTrimPrecedingAndTrailing_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, Temp_byte_Variable) == 0x000058, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, CallFunc_TextToUpper_ReturnValue) == 0x000060, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, Temp_byte_Variable_1) == 0x000078, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, Temp_bool_Variable_1) == 0x000079, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, Temp_byte_Variable_2) == 0x00007A, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, Temp_byte_Variable_3) == 0x00007B, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, Temp_bool_Variable_2) == 0x00007C, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, Temp_int_Variable) == 0x000080, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, Temp_int_Variable_1) == 0x000084, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, K2Node_Select_Default) == 0x000089, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, CallFunc_SelectVisibility_IsVisible) == 0x00008A, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, CallFunc_SelectVisibility_VisibilityChanged) == 0x00008B, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, CallFunc_SelectVisibility_New_Visibility) == 0x00008C, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue) == 0x00008D, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, CallFunc_SelectVisibility_IsVisible_1) == 0x00008E, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::CallFunc_SelectVisibility_IsVisible_1' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, CallFunc_SelectVisibility_VisibilityChanged_1) == 0x00008F, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::CallFunc_SelectVisibility_VisibilityChanged_1' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, CallFunc_SelectVisibility_New_Visibility_1) == 0x000090, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::CallFunc_SelectVisibility_New_Visibility_1' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, K2Node_Select_Default_1) == 0x000094, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ITM_ObjectiveBox_InMission_C_UpdateText, K2Node_Select_Default_2) == 0x000098, "Member 'ITM_ObjectiveBox_InMission_C_UpdateText::K2Node_Select_Default_2' has a wrong offset!");

}

