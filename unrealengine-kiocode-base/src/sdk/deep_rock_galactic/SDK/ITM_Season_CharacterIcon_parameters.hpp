#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Season_CharacterIcon

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ITM_Season_CharacterIcon.ITM_Season_CharacterIcon_C.ExecuteUbergraph_ITM_Season_CharacterIcon
// 0x00A8 (0x00A8 - 0x0000)
struct ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DBC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     K2Node_CustomEvent_CharacterID;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShowIcon;                       // 0x0010(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DBD[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterData*                   CallFunc_GetCharacterData_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColor_ReturnValue;                     // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetSmallIcon_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterData*                   CallFunc_GetCharacterData_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColor_ReturnValue_1;                   // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterData*                   CallFunc_GetCharacterData_ReturnValue_2;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetSmallIcon_ReturnValue_1;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColor_ReturnValue_2;                   // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetSmallIcon_ReturnValue_2;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DBE[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterData*                   CallFunc_GetCharacterData_ReturnValue_3;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColor_ReturnValue_3;                   // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetSmallIcon_ReturnValue_3;               // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon) == 0x000008, "Wrong alignment on ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon");
static_assert(sizeof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon) == 0x0000A8, "Wrong size on ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, EntryPoint) == 0x000000, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, K2Node_CustomEvent_CharacterID) == 0x000008, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::K2Node_CustomEvent_CharacterID' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, K2Node_CustomEvent_ShowIcon) == 0x000010, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::K2Node_CustomEvent_ShowIcon' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, Temp_byte_Variable) == 0x000012, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_SelectVisibility_IsVisible) == 0x000013, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_SelectVisibility_VisibilityChanged) == 0x000014, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_SelectVisibility_New_Visibility) == 0x000015, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, Temp_byte_Variable_1) == 0x000016, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_GetCharacterData_ReturnValue) == 0x000018, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_GetCharacterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_GetColor_ReturnValue) == 0x000020, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_GetColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_GetSmallIcon_ReturnValue) == 0x000030, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_GetSmallIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_GetCharacterData_ReturnValue_1) == 0x000038, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_GetCharacterData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_GetColor_ReturnValue_1) == 0x000040, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_GetColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_GetCharacterData_ReturnValue_2) == 0x000050, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_GetCharacterData_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_GetSmallIcon_ReturnValue_1) == 0x000058, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_GetSmallIcon_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_GetColor_ReturnValue_2) == 0x000060, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_GetColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_GetSmallIcon_ReturnValue_2) == 0x000070, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_GetSmallIcon_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, Temp_bool_Variable) == 0x000078, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, K2Node_Select_Default) == 0x000079, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_GetCharacterData_ReturnValue_3) == 0x000080, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_GetCharacterData_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_GetColor_ReturnValue_3) == 0x000088, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_GetColor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_GetSmallIcon_ReturnValue_3) == 0x000098, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_GetSmallIcon_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000A0, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0000A1, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x0000A2, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue_3) == 0x0000A3, "Member 'ITM_Season_CharacterIcon_C_ExecuteUbergraph_ITM_Season_CharacterIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue_3' has a wrong offset!");

// Function ITM_Season_CharacterIcon.ITM_Season_CharacterIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_Season_CharacterIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_Season_CharacterIcon_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_Season_CharacterIcon_C_PreConstruct");
static_assert(sizeof(ITM_Season_CharacterIcon_C_PreConstruct) == 0x000001, "Wrong size on ITM_Season_CharacterIcon_C_PreConstruct");
static_assert(offsetof(ITM_Season_CharacterIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_Season_CharacterIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_Season_CharacterIcon.ITM_Season_CharacterIcon_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct ITM_Season_CharacterIcon_C_SetData final
{
public:
	class UPlayerCharacterID*                     CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowIcon;                                          // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_Season_CharacterIcon_C_SetData) == 0x000008, "Wrong alignment on ITM_Season_CharacterIcon_C_SetData");
static_assert(sizeof(ITM_Season_CharacterIcon_C_SetData) == 0x000010, "Wrong size on ITM_Season_CharacterIcon_C_SetData");
static_assert(offsetof(ITM_Season_CharacterIcon_C_SetData, CharacterID) == 0x000000, "Member 'ITM_Season_CharacterIcon_C_SetData::CharacterID' has a wrong offset!");
static_assert(offsetof(ITM_Season_CharacterIcon_C_SetData, ShowIcon) == 0x000008, "Member 'ITM_Season_CharacterIcon_C_SetData::ShowIcon' has a wrong offset!");

}

