#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Perks_Buy

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_Perks_Buy.UI_Perks_Buy_C.CanBuyPerk
// 0x0020 (0x0020 - 0x0000)
struct UI_Perks_Buy_C_CanBuyPerk final
{
public:
	bool                                          Can_Buy;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3487[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDSaveGame*                           CallFunc_GetFSDSaveGame_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRankCost_ReturnValue;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPerkPoints_ReturnValue;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPerkTierState                                CallFunc_GetStateAtTier_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Perks_Buy_C_CanBuyPerk) == 0x000008, "Wrong alignment on UI_Perks_Buy_C_CanBuyPerk");
static_assert(sizeof(UI_Perks_Buy_C_CanBuyPerk) == 0x000020, "Wrong size on UI_Perks_Buy_C_CanBuyPerk");
static_assert(offsetof(UI_Perks_Buy_C_CanBuyPerk, Can_Buy) == 0x000000, "Member 'UI_Perks_Buy_C_CanBuyPerk::Can_Buy' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_CanBuyPerk, CallFunc_GetFSDSaveGame_ReturnValue) == 0x000008, "Member 'UI_Perks_Buy_C_CanBuyPerk::CallFunc_GetFSDSaveGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_CanBuyPerk, CallFunc_GetRankCost_ReturnValue) == 0x000010, "Member 'UI_Perks_Buy_C_CanBuyPerk::CallFunc_GetRankCost_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_CanBuyPerk, CallFunc_GetPerkPoints_ReturnValue) == 0x000014, "Member 'UI_Perks_Buy_C_CanBuyPerk::CallFunc_GetPerkPoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_CanBuyPerk, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000018, "Member 'UI_Perks_Buy_C_CanBuyPerk::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_CanBuyPerk, CallFunc_GetStateAtTier_ReturnValue) == 0x000019, "Member 'UI_Perks_Buy_C_CanBuyPerk::CallFunc_GetStateAtTier_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_CanBuyPerk, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'UI_Perks_Buy_C_CanBuyPerk::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_CanBuyPerk, CallFunc_BooleanAND_ReturnValue) == 0x00001B, "Member 'UI_Perks_Buy_C_CanBuyPerk::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function UI_Perks_Buy.UI_Perks_Buy_C.SetPerk
// 0x0128 (0x0128 - 0x0000)
struct UI_Perks_Buy_C_SetPerk final
{
public:
	class UPerkAsset*                             InPerk;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTier;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Cost;                                              // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3488[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPerkUsageType                                CallFunc_GetUsageType_ReturnValue;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3489[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_PerkColorFromType_OutColor;               // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRankAtTier_Rank;                       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetRankAtTier_ReturnValue;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_348A[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_348B[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDSaveGame*                           CallFunc_GetFSDSaveGame_ReturnValue;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPerkPoints_ReturnValue;                // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanBuyPerk_Can_Buy;                       // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_348C[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRankCost_ReturnValue;                  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_348D[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0080(0x0028)()
	int32                                         CallFunc_GetRankCost_ReturnValue_1;                // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_348E[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00B0(0x0018)()
	EPerkTierState                                CallFunc_GetStateAtTier_ReturnValue;               // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_348F[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x00D0(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3490[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRankDescription_ReturnValue;           // 0x00F0(0x0018)()
	bool                                          Temp_bool_Variable_4;                              // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3491[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBasic_FlatButton_C*                    K2Node_Select_Default_2;                           // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_FlatButton_C*                    K2Node_Select_Default_3;                           // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_FlatButton_C*                    K2Node_Select_Default_4;                           // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Perks_Buy_C_SetPerk) == 0x000008, "Wrong alignment on UI_Perks_Buy_C_SetPerk");
static_assert(sizeof(UI_Perks_Buy_C_SetPerk) == 0x000128, "Wrong size on UI_Perks_Buy_C_SetPerk");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, InPerk) == 0x000000, "Member 'UI_Perks_Buy_C_SetPerk::InPerk' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, InTier) == 0x000008, "Member 'UI_Perks_Buy_C_SetPerk::InTier' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, Cost) == 0x00000C, "Member 'UI_Perks_Buy_C_SetPerk::Cost' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, Temp_bool_Variable) == 0x000010, "Member 'UI_Perks_Buy_C_SetPerk::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, Temp_bool_Variable_1) == 0x000011, "Member 'UI_Perks_Buy_C_SetPerk::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, Temp_struct_Variable) == 0x000014, "Member 'UI_Perks_Buy_C_SetPerk::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, Temp_bool_Variable_2) == 0x000024, "Member 'UI_Perks_Buy_C_SetPerk::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, Temp_byte_Variable) == 0x000025, "Member 'UI_Perks_Buy_C_SetPerk::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, Temp_byte_Variable_1) == 0x000026, "Member 'UI_Perks_Buy_C_SetPerk::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_IsValid_ReturnValue) == 0x000027, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_GetUsageType_ReturnValue) == 0x000028, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_GetUsageType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, Temp_bool_Variable_3) == 0x000029, "Member 'UI_Perks_Buy_C_SetPerk::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_PerkColorFromType_OutColor) == 0x00002C, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_PerkColorFromType_OutColor' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_GetRankAtTier_Rank) == 0x00003C, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_GetRankAtTier_Rank' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_GetRankAtTier_ReturnValue) == 0x000040, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_GetRankAtTier_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_MenuColors_OutputColor) == 0x000044, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_GetFSDSaveGame_ReturnValue) == 0x000058, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_GetFSDSaveGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_GetPerkPoints_ReturnValue) == 0x000060, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_GetPerkPoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_CanBuyPerk_Can_Buy) == 0x000064, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_CanBuyPerk_Can_Buy' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000065, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, K2Node_Select_Default) == 0x000068, "Member 'UI_Perks_Buy_C_SetPerk::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_GetRankCost_ReturnValue) == 0x000078, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_GetRankCost_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, K2Node_MakeStruct_SlateColor) == 0x000080, "Member 'UI_Perks_Buy_C_SetPerk::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_GetRankCost_ReturnValue_1) == 0x0000A8, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_GetRankCost_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_Conv_IntToText_ReturnValue) == 0x0000B0, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_GetStateAtTier_ReturnValue) == 0x0000C8, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_GetStateAtTier_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C9, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_TextToUpper_ReturnValue) == 0x0000D0, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000E8, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, K2Node_Select_Default_1) == 0x0000E9, "Member 'UI_Perks_Buy_C_SetPerk::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, CallFunc_GetRankDescription_ReturnValue) == 0x0000F0, "Member 'UI_Perks_Buy_C_SetPerk::CallFunc_GetRankDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, Temp_bool_Variable_4) == 0x000108, "Member 'UI_Perks_Buy_C_SetPerk::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, K2Node_Select_Default_2) == 0x000110, "Member 'UI_Perks_Buy_C_SetPerk::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, K2Node_Select_Default_3) == 0x000118, "Member 'UI_Perks_Buy_C_SetPerk::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_SetPerk, K2Node_Select_Default_4) == 0x000120, "Member 'UI_Perks_Buy_C_SetPerk::K2Node_Select_Default_4' has a wrong offset!");

// Function UI_Perks_Buy.UI_Perks_Buy_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Perks_Buy_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Perks_Buy_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Perks_Buy_C_PreConstruct");
static_assert(sizeof(UI_Perks_Buy_C_PreConstruct) == 0x000001, "Wrong size on UI_Perks_Buy_C_PreConstruct");
static_assert(offsetof(UI_Perks_Buy_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Perks_Buy_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_Perks_Buy.UI_Perks_Buy_C.BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_Perks_Buy_C_BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	class UBasic_FlatButton_C*                    Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Perks_Buy_C_BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on UI_Perks_Buy_C_BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(UI_Perks_Buy_C_BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong size on UI_Perks_Buy_C_BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(UI_Perks_Buy_C_BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'UI_Perks_Buy_C_BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkPointsChanged
// 0x0008 (0x0008 - 0x0000)
struct UI_Perks_Buy_C_OnPerkPointsChanged final
{
public:
	int32                                         PerkPoints;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Change;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Perks_Buy_C_OnPerkPointsChanged) == 0x000004, "Wrong alignment on UI_Perks_Buy_C_OnPerkPointsChanged");
static_assert(sizeof(UI_Perks_Buy_C_OnPerkPointsChanged) == 0x000008, "Wrong size on UI_Perks_Buy_C_OnPerkPointsChanged");
static_assert(offsetof(UI_Perks_Buy_C_OnPerkPointsChanged, PerkPoints) == 0x000000, "Member 'UI_Perks_Buy_C_OnPerkPointsChanged::PerkPoints' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_OnPerkPointsChanged, Change) == 0x000004, "Member 'UI_Perks_Buy_C_OnPerkPointsChanged::Change' has a wrong offset!");

// Function UI_Perks_Buy.UI_Perks_Buy_C.ExecuteUbergraph_UI_Perks_Buy
// 0x0070 (0x0070 - 0x0000)
struct UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 PerkPoints, int32 Change)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3492[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBasic_FlatButton_C*                    K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BuyPerkAtTier_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3493[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDSaveGame*                           CallFunc_GetFSDSaveGame_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_PerkPoints;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Change;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       K2Node_DynamicCast_AsPlayer_Character;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3494[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_PlayPitched_ReturnValue;                  // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanBuyPerk_Can_Buy;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy) == 0x000008, "Wrong alignment on UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy");
static_assert(sizeof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy) == 0x000070, "Wrong size on UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, EntryPoint) == 0x000000, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, K2Node_Event_IsDesignTime) == 0x000014, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, CallFunc_BuyPerkAtTier_ReturnValue) == 0x000020, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::CallFunc_BuyPerkAtTier_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, CallFunc_GetFSDSaveGame_ReturnValue) == 0x000028, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::CallFunc_GetFSDSaveGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, K2Node_CustomEvent_PerkPoints) == 0x000030, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::K2Node_CustomEvent_PerkPoints' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, K2Node_CustomEvent_Change) == 0x000034, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::K2Node_CustomEvent_Change' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000038, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, K2Node_DynamicCast_AsPlayer_Character) == 0x000048, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, CallFunc_PlayAnimation_ReturnValue_1) == 0x000058, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, CallFunc_PlayPitched_ReturnValue) == 0x000060, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::CallFunc_PlayPitched_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy, CallFunc_CanBuyPerk_Can_Buy) == 0x000068, "Member 'UI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy::CallFunc_CanBuyPerk_Can_Buy' has a wrong offset!");

}

