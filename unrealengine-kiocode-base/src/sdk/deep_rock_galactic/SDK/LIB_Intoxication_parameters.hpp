#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LIB_Intoxication

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthName
// 0x0108 (0x0108 - 0x0000)
struct LIB_Intoxication_C_GetAlcoholStrengthName final
{
public:
	EDrinkableAlcoholStrength                     Strength;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpperCase;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35DF[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Param_Name;                                        // 0x0010(0x0018)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDrinkableAlcoholStrength                     Temp_byte_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35E0[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0030(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0048(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0060(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0078(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0090(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x00A8(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00C0(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x00D8(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x00F0(0x0018)()
};
static_assert(alignof(LIB_Intoxication_C_GetAlcoholStrengthName) == 0x000008, "Wrong alignment on LIB_Intoxication_C_GetAlcoholStrengthName");
static_assert(sizeof(LIB_Intoxication_C_GetAlcoholStrengthName) == 0x000108, "Wrong size on LIB_Intoxication_C_GetAlcoholStrengthName");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, Strength) == 0x000000, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::Strength' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, UpperCase) == 0x000001, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::UpperCase' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, __WorldContext) == 0x000008, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, Param_Name) == 0x000010, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::Param_Name' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, Temp_bool_Variable) == 0x000028, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, Temp_byte_Variable) == 0x000029, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, Temp_text_Variable) == 0x000030, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, Temp_text_Variable_1) == 0x000048, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, Temp_text_Variable_2) == 0x000060, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, Temp_text_Variable_3) == 0x000078, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, Temp_text_Variable_4) == 0x000090, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, Temp_text_Variable_5) == 0x0000A8, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, K2Node_Select_Default) == 0x0000C0, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, CallFunc_TextToUpper_ReturnValue) == 0x0000D8, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthName, K2Node_Select_Default_1) == 0x0000F0, "Member 'LIB_Intoxication_C_GetAlcoholStrengthName::K2Node_Select_Default_1' has a wrong offset!");

// Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthPct
// 0x0048 (0x0048 - 0x0000)
struct LIB_Intoxication_C_GetAlcoholStrengthPct final
{
public:
	EDrinkableAlcoholStrength                     Strength;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35E1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       Character;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Percent;                                           // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrinkableAlcoholStrength                     Temp_byte_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35E2[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_2;       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_3;       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_4;       // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LIB_Intoxication_C_GetAlcoholStrengthPct) == 0x000008, "Wrong alignment on LIB_Intoxication_C_GetAlcoholStrengthPct");
static_assert(sizeof(LIB_Intoxication_C_GetAlcoholStrengthPct) == 0x000048, "Wrong size on LIB_Intoxication_C_GetAlcoholStrengthPct");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, Strength) == 0x000000, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::Strength' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, Character) == 0x000008, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::Character' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, __WorldContext) == 0x000010, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, Percent) == 0x000018, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::Percent' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, Temp_byte_Variable) == 0x00001C, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001D, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, Temp_int_Variable) == 0x000020, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000024, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x000028, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, CallFunc_RandomIntegerInRange_ReturnValue_2) == 0x00002C, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::CallFunc_RandomIntegerInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, CallFunc_RandomIntegerInRange_ReturnValue_3) == 0x000030, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::CallFunc_RandomIntegerInRange_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, CallFunc_RandomIntegerInRange_ReturnValue_4) == 0x000034, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::CallFunc_RandomIntegerInRange_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, K2Node_Select_Default) == 0x000038, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_Intoxication_C_GetAlcoholStrengthPct, CallFunc_Clamp_ReturnValue) == 0x000040, "Member 'LIB_Intoxication_C_GetAlcoholStrengthPct::CallFunc_Clamp_ReturnValue' has a wrong offset!");

}
