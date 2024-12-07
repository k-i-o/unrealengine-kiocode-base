#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Bar_UnlockBeerPopup

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.ExecuteUbergraph_UI_Bar_UnlockBeerPopup
// 0x0028 (0x0028 - 0x0000)
struct UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E14[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       CallFunc_GetLocalPlayerCharacter_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       CallFunc_GetLocalPlayerCharacter_ReturnValue_1;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup) == 0x000008, "Wrong alignment on UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup");
static_assert(sizeof(UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup) == 0x000028, "Wrong size on UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup");
static_assert(offsetof(UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup, EntryPoint) == 0x000000, "Member 'UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup, CallFunc_GetEndTime_ReturnValue) == 0x000010, "Member 'UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup, CallFunc_Add_FloatFloat_ReturnValue) == 0x000014, "Member 'UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup, CallFunc_GetLocalPlayerCharacter_ReturnValue) == 0x000018, "Member 'UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup::CallFunc_GetLocalPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup, CallFunc_GetLocalPlayerCharacter_ReturnValue_1) == 0x000020, "Member 'UI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup::CallFunc_GetLocalPlayerCharacter_ReturnValue_1' has a wrong offset!");

// Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.SetDrink
// 0x0010 (0x0010 - 0x0000)
struct UI_Bar_UnlockBeerPopup_C_SetDrink final
{
public:
	class UDrinkableDataAsset*                    InDrinkableData;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetDrinkableIcon_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Bar_UnlockBeerPopup_C_SetDrink) == 0x000008, "Wrong alignment on UI_Bar_UnlockBeerPopup_C_SetDrink");
static_assert(sizeof(UI_Bar_UnlockBeerPopup_C_SetDrink) == 0x000010, "Wrong size on UI_Bar_UnlockBeerPopup_C_SetDrink");
static_assert(offsetof(UI_Bar_UnlockBeerPopup_C_SetDrink, InDrinkableData) == 0x000000, "Member 'UI_Bar_UnlockBeerPopup_C_SetDrink::InDrinkableData' has a wrong offset!");
static_assert(offsetof(UI_Bar_UnlockBeerPopup_C_SetDrink, CallFunc_GetDrinkableIcon_ReturnValue) == 0x000008, "Member 'UI_Bar_UnlockBeerPopup_C_SetDrink::CallFunc_GetDrinkableIcon_ReturnValue' has a wrong offset!");

}

