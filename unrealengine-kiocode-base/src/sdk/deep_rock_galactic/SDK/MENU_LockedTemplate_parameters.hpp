#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MENU_LockedTemplate

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.GetIsUnlocked
// 0x0002 (0x0002 - 0x0000)
struct MENU_LockedTemplate_C_GetIsUnlocked final
{
public:
	bool                                          Param_Locked;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MENU_LockedTemplate_C_GetIsUnlocked) == 0x000001, "Wrong alignment on MENU_LockedTemplate_C_GetIsUnlocked");
static_assert(sizeof(MENU_LockedTemplate_C_GetIsUnlocked) == 0x000002, "Wrong size on MENU_LockedTemplate_C_GetIsUnlocked");
static_assert(offsetof(MENU_LockedTemplate_C_GetIsUnlocked, Param_Locked) == 0x000000, "Member 'MENU_LockedTemplate_C_GetIsUnlocked::Param_Locked' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_GetIsUnlocked, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'MENU_LockedTemplate_C_GetIsUnlocked::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.GetIsLocked
// 0x0001 (0x0001 - 0x0000)
struct MENU_LockedTemplate_C_GetIsLocked final
{
public:
	bool                                          Param_Locked;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MENU_LockedTemplate_C_GetIsLocked) == 0x000001, "Wrong alignment on MENU_LockedTemplate_C_GetIsLocked");
static_assert(sizeof(MENU_LockedTemplate_C_GetIsLocked) == 0x000001, "Wrong size on MENU_LockedTemplate_C_GetIsLocked");
static_assert(offsetof(MENU_LockedTemplate_C_GetIsLocked, Param_Locked) == 0x000000, "Member 'MENU_LockedTemplate_C_GetIsLocked::Param_Locked' has a wrong offset!");

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.RequireOnePromotedCharacter
// 0x0030 (0x0030 - 0x0000)
struct MENU_LockedTemplate_C_RequireOnePromotedCharacter final
{
public:
	bool                                          Param_Locked;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BAE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PromoteMsg;                                        // 0x0008(0x0018)(Edit, BlueprintVisible)
	class UFSDSaveGame*                           CallFunc_GetFSDSaveGame_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyCharacterRetired_ReturnValue;       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetMenuLocked_Locked;                     // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MENU_LockedTemplate_C_RequireOnePromotedCharacter) == 0x000008, "Wrong alignment on MENU_LockedTemplate_C_RequireOnePromotedCharacter");
static_assert(sizeof(MENU_LockedTemplate_C_RequireOnePromotedCharacter) == 0x000030, "Wrong size on MENU_LockedTemplate_C_RequireOnePromotedCharacter");
static_assert(offsetof(MENU_LockedTemplate_C_RequireOnePromotedCharacter, Param_Locked) == 0x000000, "Member 'MENU_LockedTemplate_C_RequireOnePromotedCharacter::Param_Locked' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_RequireOnePromotedCharacter, PromoteMsg) == 0x000008, "Member 'MENU_LockedTemplate_C_RequireOnePromotedCharacter::PromoteMsg' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_RequireOnePromotedCharacter, CallFunc_GetFSDSaveGame_ReturnValue) == 0x000020, "Member 'MENU_LockedTemplate_C_RequireOnePromotedCharacter::CallFunc_GetFSDSaveGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_RequireOnePromotedCharacter, CallFunc_HasAnyCharacterRetired_ReturnValue) == 0x000028, "Member 'MENU_LockedTemplate_C_RequireOnePromotedCharacter::CallFunc_HasAnyCharacterRetired_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_RequireOnePromotedCharacter, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'MENU_LockedTemplate_C_RequireOnePromotedCharacter::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_RequireOnePromotedCharacter, CallFunc_SetMenuLocked_Locked) == 0x00002A, "Member 'MENU_LockedTemplate_C_RequireOnePromotedCharacter::CallFunc_SetMenuLocked_Locked' has a wrong offset!");

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetLockIcon
// 0x0010 (0x0010 - 0x0000)
struct MENU_LockedTemplate_C_SetLockIcon final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MENU_LockedTemplate_C_SetLockIcon) == 0x000008, "Wrong alignment on MENU_LockedTemplate_C_SetLockIcon");
static_assert(sizeof(MENU_LockedTemplate_C_SetLockIcon) == 0x000010, "Wrong size on MENU_LockedTemplate_C_SetLockIcon");
static_assert(offsetof(MENU_LockedTemplate_C_SetLockIcon, Texture) == 0x000000, "Member 'MENU_LockedTemplate_C_SetLockIcon::Texture' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetLockIcon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MENU_LockedTemplate_C_SetLockIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetLockIcon, CallFunc_SelectVisibility_IsVisible) == 0x000009, "Member 'MENU_LockedTemplate_C_SetLockIcon::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetLockIcon, CallFunc_SelectVisibility_VisibilityChanged) == 0x00000A, "Member 'MENU_LockedTemplate_C_SetLockIcon::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetLockIcon, CallFunc_SelectVisibility_New_Visibility) == 0x00000B, "Member 'MENU_LockedTemplate_C_SetLockIcon::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetMessaqe
// 0x0038 (0x0038 - 0x0000)
struct MENU_LockedTemplate_C_SetMessaqe final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BAF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0020(0x0018)()
};
static_assert(alignof(MENU_LockedTemplate_C_SetMessaqe) == 0x000008, "Wrong alignment on MENU_LockedTemplate_C_SetMessaqe");
static_assert(sizeof(MENU_LockedTemplate_C_SetMessaqe) == 0x000038, "Wrong size on MENU_LockedTemplate_C_SetMessaqe");
static_assert(offsetof(MENU_LockedTemplate_C_SetMessaqe, InText) == 0x000000, "Member 'MENU_LockedTemplate_C_SetMessaqe::InText' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetMessaqe, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'MENU_LockedTemplate_C_SetMessaqe::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetMessaqe, CallFunc_SelectVisibility_IsVisible) == 0x000019, "Member 'MENU_LockedTemplate_C_SetMessaqe::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetMessaqe, CallFunc_SelectVisibility_VisibilityChanged) == 0x00001A, "Member 'MENU_LockedTemplate_C_SetMessaqe::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetMessaqe, CallFunc_SelectVisibility_New_Visibility) == 0x00001B, "Member 'MENU_LockedTemplate_C_SetMessaqe::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetMessaqe, CallFunc_TextToUpper_ReturnValue) == 0x000020, "Member 'MENU_LockedTemplate_C_SetMessaqe::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetMenuLocked
// 0x0020 (0x0020 - 0x0000)
struct MENU_LockedTemplate_C_SetMenuLocked final
{
public:
	bool                                          IsLocked;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_Locked;                                      // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB0[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MENU_LockedTemplate_C_SetMenuLocked) == 0x000008, "Wrong alignment on MENU_LockedTemplate_C_SetMenuLocked");
static_assert(sizeof(MENU_LockedTemplate_C_SetMenuLocked) == 0x000020, "Wrong size on MENU_LockedTemplate_C_SetMenuLocked");
static_assert(offsetof(MENU_LockedTemplate_C_SetMenuLocked, IsLocked) == 0x000000, "Member 'MENU_LockedTemplate_C_SetMenuLocked::IsLocked' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetMenuLocked, Param_Locked) == 0x000001, "Member 'MENU_LockedTemplate_C_SetMenuLocked::Param_Locked' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetMenuLocked, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'MENU_LockedTemplate_C_SetMenuLocked::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetMenuLocked, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'MENU_LockedTemplate_C_SetMenuLocked::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetMenuLocked, CallFunc_SelectVisibility_IsVisible) == 0x000018, "Member 'MENU_LockedTemplate_C_SetMenuLocked::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetMenuLocked, CallFunc_SelectVisibility_VisibilityChanged) == 0x000019, "Member 'MENU_LockedTemplate_C_SetMenuLocked::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_SetMenuLocked, CallFunc_SelectVisibility_New_Visibility) == 0x00001A, "Member 'MENU_LockedTemplate_C_SetMenuLocked::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.OnKeyUp
// 0x0378 (0x0378 - 0x0000)
struct MENU_LockedTemplate_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0128(0x00B8)()
	bool                                          CallFunc_IsOkMenu_ReturnValue;                     // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCloseOrBackMenu_ReturnValue;            // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB1[0x5];                                     // 0x01E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x01E8(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB2[0x5];                                     // 0x0203(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0208(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue_1;                    // 0x02C0(0x00B8)()
};
static_assert(alignof(MENU_LockedTemplate_C_OnKeyUp) == 0x000008, "Wrong alignment on MENU_LockedTemplate_C_OnKeyUp");
static_assert(sizeof(MENU_LockedTemplate_C_OnKeyUp) == 0x000378, "Wrong size on MENU_LockedTemplate_C_OnKeyUp");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'MENU_LockedTemplate_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, InKeyEvent) == 0x000038, "Member 'MENU_LockedTemplate_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, ReturnValue) == 0x000070, "Member 'MENU_LockedTemplate_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, CallFunc_Handled_ReturnValue) == 0x000128, "Member 'MENU_LockedTemplate_C_OnKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, CallFunc_IsOkMenu_ReturnValue) == 0x0001E0, "Member 'MENU_LockedTemplate_C_OnKeyUp::CallFunc_IsOkMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, CallFunc_IsCloseOrBackMenu_ReturnValue) == 0x0001E1, "Member 'MENU_LockedTemplate_C_OnKeyUp::CallFunc_IsCloseOrBackMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, CallFunc_BooleanOR_ReturnValue) == 0x0001E2, "Member 'MENU_LockedTemplate_C_OnKeyUp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, CallFunc_GetKey_ReturnValue) == 0x0001E8, "Member 'MENU_LockedTemplate_C_OnKeyUp::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000200, "Member 'MENU_LockedTemplate_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000201, "Member 'MENU_LockedTemplate_C_OnKeyUp::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, CallFunc_BooleanOR_ReturnValue_1) == 0x000202, "Member 'MENU_LockedTemplate_C_OnKeyUp::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, CallFunc_Unhandled_ReturnValue) == 0x000208, "Member 'MENU_LockedTemplate_C_OnKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_OnKeyUp, CallFunc_Handled_ReturnValue_1) == 0x0002C0, "Member 'MENU_LockedTemplate_C_OnKeyUp::CallFunc_Handled_ReturnValue_1' has a wrong offset!");

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MENU_LockedTemplate_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MENU_LockedTemplate_C_PreConstruct) == 0x000001, "Wrong alignment on MENU_LockedTemplate_C_PreConstruct");
static_assert(sizeof(MENU_LockedTemplate_C_PreConstruct) == 0x000001, "Wrong size on MENU_LockedTemplate_C_PreConstruct");
static_assert(offsetof(MENU_LockedTemplate_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MENU_LockedTemplate_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.ExecuteUbergraph_MENU_LockedTemplate
// 0x0030 (0x0030 - 0x0000)
struct MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3BB3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWindowManager*                         CallFunc_GetWindowManager_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB4[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate) == 0x000008, "Wrong alignment on MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate");
static_assert(sizeof(MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate) == 0x000030, "Wrong size on MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate");
static_assert(offsetof(MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate, EntryPoint) == 0x000000, "Member 'MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate::EntryPoint' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate, CallFunc_GetWindowManager_ReturnValue) == 0x000018, "Member 'MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate::CallFunc_GetWindowManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate, K2Node_Event_IsDesignTime) == 0x000020, "Member 'MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'MENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");

}

