#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPN_ShieldRegeneratorItem

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UpdateMaterial
// 0x0048 (0x0048 - 0x0000)
struct WPN_ShieldRegeneratorItem_C_UpdateMaterial final
{
public:
	bool                                          IsRecharging;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PlayAudio;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AF2[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AF3[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsRecharging_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AF4[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentAmount_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AF5[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AF6[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPN_ShieldRegeneratorItem_C_UpdateMaterial) == 0x000008, "Wrong alignment on WPN_ShieldRegeneratorItem_C_UpdateMaterial");
static_assert(sizeof(WPN_ShieldRegeneratorItem_C_UpdateMaterial) == 0x000048, "Wrong size on WPN_ShieldRegeneratorItem_C_UpdateMaterial");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, IsRecharging) == 0x000000, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::IsRecharging' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, PlayAudio) == 0x000001, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::PlayAudio' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, Temp_object_Variable) == 0x000008, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, Temp_bool_Variable) == 0x000010, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, Temp_object_Variable_1) == 0x000018, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, CallFunc_GetIsRecharging_ReturnValue) == 0x000020, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::CallFunc_GetIsRecharging_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, CallFunc_GetCurrentAmount_ReturnValue) == 0x000024, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::CallFunc_GetCurrentAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, CallFunc_Lerp_ReturnValue) == 0x00002C, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, Temp_bool_Variable_1) == 0x000030, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, CallFunc_BooleanAND_ReturnValue) == 0x000031, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, CallFunc_IsPlaying_ReturnValue) == 0x000032, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000033, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, K2Node_Select_Default) == 0x000038, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UpdateMaterial, K2Node_Select_Default_1) == 0x000040, "Member 'WPN_ShieldRegeneratorItem_C_UpdateMaterial::K2Node_Select_Default_1' has a wrong offset!");

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct WPN_ShieldRegeneratorItem_C_UserConstructionScript final
{
public:
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPN_ShieldRegeneratorItem_C_UserConstructionScript) == 0x000008, "Wrong alignment on WPN_ShieldRegeneratorItem_C_UserConstructionScript");
static_assert(sizeof(WPN_ShieldRegeneratorItem_C_UserConstructionScript) == 0x000008, "Wrong size on WPN_ShieldRegeneratorItem_C_UserConstructionScript");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_UserConstructionScript, CallFunc_GetMaterial_ReturnValue) == 0x000000, "Member 'WPN_ShieldRegeneratorItem_C_UserConstructionScript::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveItemThrown
// 0x0008 (0x0008 - 0x0000)
struct WPN_ShieldRegeneratorItem_C_ReceiveItemThrown final
{
public:
	class AThrowableActor*                        ThrownActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPN_ShieldRegeneratorItem_C_ReceiveItemThrown) == 0x000008, "Wrong alignment on WPN_ShieldRegeneratorItem_C_ReceiveItemThrown");
static_assert(sizeof(WPN_ShieldRegeneratorItem_C_ReceiveItemThrown) == 0x000008, "Wrong size on WPN_ShieldRegeneratorItem_C_ReceiveItemThrown");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ReceiveItemThrown, ThrownActor) == 0x000000, "Member 'WPN_ShieldRegeneratorItem_C_ReceiveItemThrown::ThrownActor' has a wrong offset!");

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRechargeProgress
// 0x0004 (0x0004 - 0x0000)
struct WPN_ShieldRegeneratorItem_C_ReceiveGeneratorRechargeProgress final
{
public:
	float                                         Progress;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPN_ShieldRegeneratorItem_C_ReceiveGeneratorRechargeProgress) == 0x000004, "Wrong alignment on WPN_ShieldRegeneratorItem_C_ReceiveGeneratorRechargeProgress");
static_assert(sizeof(WPN_ShieldRegeneratorItem_C_ReceiveGeneratorRechargeProgress) == 0x000004, "Wrong size on WPN_ShieldRegeneratorItem_C_ReceiveGeneratorRechargeProgress");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ReceiveGeneratorRechargeProgress, Progress) == 0x000000, "Member 'WPN_ShieldRegeneratorItem_C_ReceiveGeneratorRechargeProgress::Progress' has a wrong offset!");

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WPN_ShieldRegeneratorItem_C_BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPN_ShieldRegeneratorItem_C_BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature) == 0x000004, "Wrong alignment on WPN_ShieldRegeneratorItem_C_BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature");
static_assert(sizeof(WPN_ShieldRegeneratorItem_C_BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature) == 0x000004, "Wrong size on WPN_ShieldRegeneratorItem_C_BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature, Amount) == 0x000000, "Member 'WPN_ShieldRegeneratorItem_C_BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature::Amount' has a wrong offset!");

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WPN_ShieldRegeneratorItem_C_BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPN_ShieldRegeneratorItem_C_BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature) == 0x000004, "Wrong alignment on WPN_ShieldRegeneratorItem_C_BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature");
static_assert(sizeof(WPN_ShieldRegeneratorItem_C_BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature) == 0x000004, "Wrong size on WPN_ShieldRegeneratorItem_C_BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature, Amount) == 0x000000, "Member 'WPN_ShieldRegeneratorItem_C_BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature::Amount' has a wrong offset!");

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ExecuteUbergraph_WPN_ShieldRegeneratorItem
// 0x0028 (0x0028 - 0x0000)
struct WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AF7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AThrowableActor*                        K2Node_Event_thrownActor;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AF8[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Progress;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_2;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AF9[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_Amount_1;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Amount;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_3;        // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOnSpaceRig_OnSpaceRig;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem) == 0x000008, "Wrong alignment on WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem");
static_assert(sizeof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem) == 0x000028, "Wrong size on WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem, EntryPoint) == 0x000000, "Member 'WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem, CallFunc_IsLocallyControlled_ReturnValue) == 0x000004, "Member 'WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem, K2Node_Event_thrownActor) == 0x000008, "Member 'WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem::K2Node_Event_thrownActor' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x000010, "Member 'WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem, K2Node_Event_Progress) == 0x000014, "Member 'WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem::K2Node_Event_Progress' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem, CallFunc_IsLocallyControlled_ReturnValue_2) == 0x000018, "Member 'WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem::CallFunc_IsLocallyControlled_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem, K2Node_ComponentBoundEvent_Amount_1) == 0x00001C, "Member 'WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem::K2Node_ComponentBoundEvent_Amount_1' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem, K2Node_ComponentBoundEvent_Amount) == 0x000020, "Member 'WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem::K2Node_ComponentBoundEvent_Amount' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem, CallFunc_IsLocallyControlled_ReturnValue_3) == 0x000024, "Member 'WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem::CallFunc_IsLocallyControlled_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem, CallFunc_IsOnSpaceRig_OnSpaceRig) == 0x000025, "Member 'WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem::CallFunc_IsOnSpaceRig_OnSpaceRig' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem, CallFunc_Not_PreBool_ReturnValue) == 0x000026, "Member 'WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem, CallFunc_BooleanAND_ReturnValue) == 0x000027, "Member 'WPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.GetGearStatEntry
// 0x02D0 (0x02D0 - 0x0000)
struct WPN_ShieldRegeneratorItem_C_GetGearStatEntry final
{
public:
	class AFSDPlayerState*                        PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGearStatEntry>                 Stats;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGearStatEntry                         K2Node_MakeStruct_GearStatEntry;                   // 0x0018(0x0068)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AFA[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGearStatEntry                         CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry;  // 0x0090(0x0068)()
	bool                                          CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue; // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AFB[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry_1; // 0x0100(0x0068)()
	bool                                          CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue_1; // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AFC[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AFD[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry_2; // 0x0178(0x0068)()
	bool                                          CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue_2; // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AFE[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry_3; // 0x01E8(0x0068)()
	bool                                          CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue_3; // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AFF[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B00[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGearStatEntry                         CallFunc_UPGDESC_Capacity_GearStatEntry;           // 0x0260(0x0068)()
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry) == 0x000008, "Wrong alignment on WPN_ShieldRegeneratorItem_C_GetGearStatEntry");
static_assert(sizeof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry) == 0x0002D0, "Wrong size on WPN_ShieldRegeneratorItem_C_GetGearStatEntry");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, PlayerState) == 0x000000, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::PlayerState' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, Stats) == 0x000008, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::Stats' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, K2Node_MakeStruct_GearStatEntry) == 0x000018, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::K2Node_MakeStruct_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue) == 0x000080, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_GetObjectClass_ReturnValue) == 0x000088, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry) == 0x000090, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue) == 0x0000F8, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry_1) == 0x000100, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry_1' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue_1) == 0x000168, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue_1' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_1) == 0x00016C, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_2) == 0x000170, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry_2) == 0x000178, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry_2' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue_2) == 0x0001E0, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue_2' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry_3) == 0x0001E8, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry_3' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue_3) == 0x000250, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue_3' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_3) == 0x000254, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_4) == 0x000258, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_UPGDESC_Capacity_GearStatEntry) == 0x000260, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_UPGDESC_Capacity_GearStatEntry' has a wrong offset!");
static_assert(offsetof(WPN_ShieldRegeneratorItem_C_GetGearStatEntry, CallFunc_Array_Add_ReturnValue_5) == 0x0002C8, "Member 'WPN_ShieldRegeneratorItem_C_GetGearStatEntry::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");

}
