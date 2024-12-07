#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_NameTags

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_NameTags.UI_NameTags_C.ExecuteUbergraph_UI_NameTags
// 0x0040 (0x0040 - 0x0000)
struct UI_NameTags_C_ExecuteUbergraph_UI_NameTags final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B44[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_NewName;                        // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B45[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDPlayerState*                        K2Node_CustomEvent_Player;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNormalOwnerStatus_ReturnValue;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGameOwnerStatus_ReturnValue;           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGameOwnerStatus_ReturnValue_1;         // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(const class FString& NewName)> K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags) == 0x000008, "Wrong alignment on UI_NameTags_C_ExecuteUbergraph_UI_NameTags");
static_assert(sizeof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags) == 0x000040, "Wrong size on UI_NameTags_C_ExecuteUbergraph_UI_NameTags");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, EntryPoint) == 0x000000, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, K2Node_CustomEvent_NewName) == 0x000008, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::K2Node_CustomEvent_NewName' has a wrong offset!");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, K2Node_Event_IsDesignTime) == 0x000018, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, K2Node_CustomEvent_Player) == 0x000020, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, CallFunc_HasNormalOwnerStatus_ReturnValue) == 0x000028, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::CallFunc_HasNormalOwnerStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, CallFunc_GetGameOwnerStatus_ReturnValue) == 0x000029, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::CallFunc_GetGameOwnerStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, CallFunc_GetGameOwnerStatus_ReturnValue_1) == 0x00002A, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::CallFunc_GetGameOwnerStatus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, CallFunc_IsValid_ReturnValue) == 0x00002B, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, Temp_byte_Variable) == 0x00003C, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, Temp_byte_Variable_1) == 0x00003D, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, Temp_bool_Variable) == 0x00003E, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_NameTags_C_ExecuteUbergraph_UI_NameTags, K2Node_Select_Default) == 0x00003F, "Member 'UI_NameTags_C_ExecuteUbergraph_UI_NameTags::K2Node_Select_Default' has a wrong offset!");

// Function UI_NameTags.UI_NameTags_C.OnPlayerNameChanged_Event_0
// 0x0010 (0x0010 - 0x0000)
struct UI_NameTags_C_OnPlayerNameChanged_Event_0 final
{
public:
	class FString                                 NewName;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_NameTags_C_OnPlayerNameChanged_Event_0) == 0x000008, "Wrong alignment on UI_NameTags_C_OnPlayerNameChanged_Event_0");
static_assert(sizeof(UI_NameTags_C_OnPlayerNameChanged_Event_0) == 0x000010, "Wrong size on UI_NameTags_C_OnPlayerNameChanged_Event_0");
static_assert(offsetof(UI_NameTags_C_OnPlayerNameChanged_Event_0, NewName) == 0x000000, "Member 'UI_NameTags_C_OnPlayerNameChanged_Event_0::NewName' has a wrong offset!");

// Function UI_NameTags.UI_NameTags_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_NameTags_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_NameTags_C_PreConstruct) == 0x000001, "Wrong alignment on UI_NameTags_C_PreConstruct");
static_assert(sizeof(UI_NameTags_C_PreConstruct) == 0x000001, "Wrong size on UI_NameTags_C_PreConstruct");
static_assert(offsetof(UI_NameTags_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_NameTags_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_NameTags.UI_NameTags_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct UI_NameTags_C_SetData final
{
public:
	class AFSDPlayerState*                        Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_NameTags_C_SetData) == 0x000008, "Wrong alignment on UI_NameTags_C_SetData");
static_assert(sizeof(UI_NameTags_C_SetData) == 0x000008, "Wrong size on UI_NameTags_C_SetData");
static_assert(offsetof(UI_NameTags_C_SetData, Player) == 0x000000, "Member 'UI_NameTags_C_SetData::Player' has a wrong offset!");

}

