#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_CharacterIcon

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.ExecuteUbergraph_ITM_CharacterIcon
// 0x0008 (0x0008 - 0x0000)
struct ITM_CharacterIcon_C_ExecuteUbergraph_ITM_CharacterIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_CharacterIcon_C_ExecuteUbergraph_ITM_CharacterIcon) == 0x000004, "Wrong alignment on ITM_CharacterIcon_C_ExecuteUbergraph_ITM_CharacterIcon");
static_assert(sizeof(ITM_CharacterIcon_C_ExecuteUbergraph_ITM_CharacterIcon) == 0x000008, "Wrong size on ITM_CharacterIcon_C_ExecuteUbergraph_ITM_CharacterIcon");
static_assert(offsetof(ITM_CharacterIcon_C_ExecuteUbergraph_ITM_CharacterIcon, EntryPoint) == 0x000000, "Member 'ITM_CharacterIcon_C_ExecuteUbergraph_ITM_CharacterIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_ExecuteUbergraph_ITM_CharacterIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ITM_CharacterIcon_C_ExecuteUbergraph_ITM_CharacterIcon::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_CharacterIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_CharacterIcon_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_CharacterIcon_C_PreConstruct");
static_assert(sizeof(ITM_CharacterIcon_C_PreConstruct) == 0x000001, "Wrong size on ITM_CharacterIcon_C_PreConstruct");
static_assert(offsetof(ITM_CharacterIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_CharacterIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowHostIcon
// 0x0004 (0x0004 - 0x0000)
struct ITM_CharacterIcon_C_SetShowHostIcon final
{
public:
	bool                                          Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CharacterIcon_C_SetShowHostIcon) == 0x000001, "Wrong alignment on ITM_CharacterIcon_C_SetShowHostIcon");
static_assert(sizeof(ITM_CharacterIcon_C_SetShowHostIcon) == 0x000004, "Wrong size on ITM_CharacterIcon_C_SetShowHostIcon");
static_assert(offsetof(ITM_CharacterIcon_C_SetShowHostIcon, Param_Index) == 0x000000, "Member 'ITM_CharacterIcon_C_SetShowHostIcon::Param_Index' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetShowHostIcon, CallFunc_SelectVisibility_IsVisible) == 0x000001, "Member 'ITM_CharacterIcon_C_SetShowHostIcon::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetShowHostIcon, CallFunc_SelectVisibility_VisibilityChanged) == 0x000002, "Member 'ITM_CharacterIcon_C_SetShowHostIcon::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetShowHostIcon, CallFunc_SelectVisibility_New_Visibility) == 0x000003, "Member 'ITM_CharacterIcon_C_SetShowHostIcon::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetCharacterImageAndColor
// 0x0040 (0x0040 - 0x0000)
struct ITM_CharacterIcon_C_SetCharacterImageAndColor final
{
public:
	class UPlayerCharacterID*                     Param_Character;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F88[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x000C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F89[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterData*                   CallFunc_GetCharacterData_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColor_ReturnValue;                     // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetIcon_ReturnValue;                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CharacterIcon_C_SetCharacterImageAndColor) == 0x000008, "Wrong alignment on ITM_CharacterIcon_C_SetCharacterImageAndColor");
static_assert(sizeof(ITM_CharacterIcon_C_SetCharacterImageAndColor) == 0x000040, "Wrong size on ITM_CharacterIcon_C_SetCharacterImageAndColor");
static_assert(offsetof(ITM_CharacterIcon_C_SetCharacterImageAndColor, Param_Character) == 0x000000, "Member 'ITM_CharacterIcon_C_SetCharacterImageAndColor::Param_Character' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetCharacterImageAndColor, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ITM_CharacterIcon_C_SetCharacterImageAndColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetCharacterImageAndColor, CallFunc_MenuColors_OutputColor) == 0x00000C, "Member 'ITM_CharacterIcon_C_SetCharacterImageAndColor::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetCharacterImageAndColor, CallFunc_GetCharacterData_ReturnValue) == 0x000020, "Member 'ITM_CharacterIcon_C_SetCharacterImageAndColor::CallFunc_GetCharacterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetCharacterImageAndColor, CallFunc_GetColor_ReturnValue) == 0x000028, "Member 'ITM_CharacterIcon_C_SetCharacterImageAndColor::CallFunc_GetColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetCharacterImageAndColor, CallFunc_GetIcon_ReturnValue) == 0x000038, "Member 'ITM_CharacterIcon_C_SetCharacterImageAndColor::CallFunc_GetIcon_ReturnValue' has a wrong offset!");

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetImage
// 0x0018 (0x0018 - 0x0000)
struct ITM_CharacterIcon_C_SetImage final
{
public:
	class UTexture2D*                             Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           InColorAndOpacity;                                 // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CharacterIcon_C_SetImage) == 0x000008, "Wrong alignment on ITM_CharacterIcon_C_SetImage");
static_assert(sizeof(ITM_CharacterIcon_C_SetImage) == 0x000018, "Wrong size on ITM_CharacterIcon_C_SetImage");
static_assert(offsetof(ITM_CharacterIcon_C_SetImage, Value) == 0x000000, "Member 'ITM_CharacterIcon_C_SetImage::Value' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetImage, InColorAndOpacity) == 0x000008, "Member 'ITM_CharacterIcon_C_SetImage::InColorAndOpacity' has a wrong offset!");

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowPromotion
// 0x0004 (0x0004 - 0x0000)
struct ITM_CharacterIcon_C_SetShowPromotion final
{
public:
	bool                                          Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CharacterIcon_C_SetShowPromotion) == 0x000001, "Wrong alignment on ITM_CharacterIcon_C_SetShowPromotion");
static_assert(sizeof(ITM_CharacterIcon_C_SetShowPromotion) == 0x000004, "Wrong size on ITM_CharacterIcon_C_SetShowPromotion");
static_assert(offsetof(ITM_CharacterIcon_C_SetShowPromotion, Param_Index) == 0x000000, "Member 'ITM_CharacterIcon_C_SetShowPromotion::Param_Index' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetShowPromotion, CallFunc_SelectVisibility_IsVisible) == 0x000001, "Member 'ITM_CharacterIcon_C_SetShowPromotion::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetShowPromotion, CallFunc_SelectVisibility_VisibilityChanged) == 0x000002, "Member 'ITM_CharacterIcon_C_SetShowPromotion::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetShowPromotion, CallFunc_SelectVisibility_New_Visibility) == 0x000003, "Member 'ITM_CharacterIcon_C_SetShowPromotion::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetBaseSize
// 0x0050 (0x0050 - 0x0000)
struct ITM_CharacterIcon_C_SetBaseSize final
{
public:
	float                                         Size;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F8A[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_CharacterIcon_C_SetBaseSize) == 0x000008, "Wrong alignment on ITM_CharacterIcon_C_SetBaseSize");
static_assert(sizeof(ITM_CharacterIcon_C_SetBaseSize) == 0x000050, "Wrong size on ITM_CharacterIcon_C_SetBaseSize");
static_assert(offsetof(ITM_CharacterIcon_C_SetBaseSize, Size) == 0x000000, "Member 'ITM_CharacterIcon_C_SetBaseSize::Size' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetBaseSize, CallFunc_Round_ReturnValue) == 0x000004, "Member 'ITM_CharacterIcon_C_SetBaseSize::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetBaseSize, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000008, "Member 'ITM_CharacterIcon_C_SetBaseSize::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetBaseSize, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000010, "Member 'ITM_CharacterIcon_C_SetBaseSize::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetBaseSize, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000018, "Member 'ITM_CharacterIcon_C_SetBaseSize::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetBaseSize, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000020, "Member 'ITM_CharacterIcon_C_SetBaseSize::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetBaseSize, K2Node_MakeStruct_Margin) == 0x000024, "Member 'ITM_CharacterIcon_C_SetBaseSize::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetBaseSize, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000034, "Member 'ITM_CharacterIcon_C_SetBaseSize::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetBaseSize, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x000038, "Member 'ITM_CharacterIcon_C_SetBaseSize::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetBaseSize, K2Node_MakeStruct_Margin_1) == 0x00003C, "Member 'ITM_CharacterIcon_C_SetBaseSize::K2Node_MakeStruct_Margin_1' has a wrong offset!");

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerState
// 0x0040 (0x0040 - 0x0000)
struct ITM_CharacterIcon_C_SetFromPlayerState final
{
public:
	class APlayerState*                           InState;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDPlayerState*                        FsdState;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDPlayerState*                        K2Node_DynamicCast_AsFSDPlayer_State;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F8B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F8C[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     CallFunc_GetSelectedCharacterID_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_CharacterIcon_C_SetFromPlayerState) == 0x000008, "Wrong alignment on ITM_CharacterIcon_C_SetFromPlayerState");
static_assert(sizeof(ITM_CharacterIcon_C_SetFromPlayerState) == 0x000040, "Wrong size on ITM_CharacterIcon_C_SetFromPlayerState");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerState, InState) == 0x000000, "Member 'ITM_CharacterIcon_C_SetFromPlayerState::InState' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerState, FsdState) == 0x000008, "Member 'ITM_CharacterIcon_C_SetFromPlayerState::FsdState' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerState, K2Node_DynamicCast_AsFSDPlayer_State) == 0x000010, "Member 'ITM_CharacterIcon_C_SetFromPlayerState::K2Node_DynamicCast_AsFSDPlayer_State' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerState, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ITM_CharacterIcon_C_SetFromPlayerState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerState, CallFunc_GetFSDGameState_ReturnValue) == 0x000020, "Member 'ITM_CharacterIcon_C_SetFromPlayerState::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerState, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000028, "Member 'ITM_CharacterIcon_C_SetFromPlayerState::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerState, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'ITM_CharacterIcon_C_SetFromPlayerState::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerState, CallFunc_BooleanAND_ReturnValue) == 0x00002A, "Member 'ITM_CharacterIcon_C_SetFromPlayerState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerState, CallFunc_GetSelectedCharacterID_ReturnValue) == 0x000030, "Member 'ITM_CharacterIcon_C_SetFromPlayerState::CallFunc_GetSelectedCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerState, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'ITM_CharacterIcon_C_SetFromPlayerState::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerCharacter
// 0x0018 (0x0018 - 0x0000)
struct ITM_CharacterIcon_C_SetFromPlayerCharacter final
{
public:
	class APlayerCharacter*                       Param_Character;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F8D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDPlayerState*                        CallFunc_GetPlayerState_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CharacterIcon_C_SetFromPlayerCharacter) == 0x000008, "Wrong alignment on ITM_CharacterIcon_C_SetFromPlayerCharacter");
static_assert(sizeof(ITM_CharacterIcon_C_SetFromPlayerCharacter) == 0x000018, "Wrong size on ITM_CharacterIcon_C_SetFromPlayerCharacter");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerCharacter, Param_Character) == 0x000000, "Member 'ITM_CharacterIcon_C_SetFromPlayerCharacter::Param_Character' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerCharacter, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ITM_CharacterIcon_C_SetFromPlayerCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromPlayerCharacter, CallFunc_GetPlayerState_ReturnValue) == 0x000010, "Member 'ITM_CharacterIcon_C_SetFromPlayerCharacter::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterClass
// 0x0010 (0x0010 - 0x0000)
struct ITM_CharacterIcon_C_SetFromCharacterClass final
{
public:
	class UPlayerCharacterID*                     InCharacterClass;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_CharacterIcon_C_SetFromCharacterClass) == 0x000008, "Wrong alignment on ITM_CharacterIcon_C_SetFromCharacterClass");
static_assert(sizeof(ITM_CharacterIcon_C_SetFromCharacterClass) == 0x000010, "Wrong size on ITM_CharacterIcon_C_SetFromCharacterClass");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromCharacterClass, InCharacterClass) == 0x000000, "Member 'ITM_CharacterIcon_C_SetFromCharacterClass::InCharacterClass' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromCharacterClass, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ITM_CharacterIcon_C_SetFromCharacterClass::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterID
// 0x0010 (0x0010 - 0x0000)
struct ITM_CharacterIcon_C_SetFromCharacterID final
{
public:
	class UPlayerCharacterID*                     CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_CharacterIcon_C_SetFromCharacterID) == 0x000008, "Wrong alignment on ITM_CharacterIcon_C_SetFromCharacterID");
static_assert(sizeof(ITM_CharacterIcon_C_SetFromCharacterID) == 0x000010, "Wrong size on ITM_CharacterIcon_C_SetFromCharacterID");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromCharacterID, CharacterID) == 0x000000, "Member 'ITM_CharacterIcon_C_SetFromCharacterID::CharacterID' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetFromCharacterID, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ITM_CharacterIcon_C_SetFromCharacterID::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowSonySessionLeader
// 0x0004 (0x0004 - 0x0000)
struct ITM_CharacterIcon_C_SetShowSonySessionLeader final
{
public:
	bool                                          Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_CharacterIcon_C_SetShowSonySessionLeader) == 0x000001, "Wrong alignment on ITM_CharacterIcon_C_SetShowSonySessionLeader");
static_assert(sizeof(ITM_CharacterIcon_C_SetShowSonySessionLeader) == 0x000004, "Wrong size on ITM_CharacterIcon_C_SetShowSonySessionLeader");
static_assert(offsetof(ITM_CharacterIcon_C_SetShowSonySessionLeader, Param_Index) == 0x000000, "Member 'ITM_CharacterIcon_C_SetShowSonySessionLeader::Param_Index' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetShowSonySessionLeader, CallFunc_SelectVisibility_IsVisible) == 0x000001, "Member 'ITM_CharacterIcon_C_SetShowSonySessionLeader::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetShowSonySessionLeader, CallFunc_SelectVisibility_VisibilityChanged) == 0x000002, "Member 'ITM_CharacterIcon_C_SetShowSonySessionLeader::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(ITM_CharacterIcon_C_SetShowSonySessionLeader, CallFunc_SelectVisibility_New_Visibility) == 0x000003, "Member 'ITM_CharacterIcon_C_SetShowSonySessionLeader::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");

}
