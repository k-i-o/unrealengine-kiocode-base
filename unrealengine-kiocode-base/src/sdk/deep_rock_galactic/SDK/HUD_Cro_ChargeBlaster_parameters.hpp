#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Cro_ChargeBlaster

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct HUD_Cro_ChargeBlaster_C_SetData final
{
public:
	class AItem*                                  Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_Cro_ChargeBlaster_C_SetData) == 0x000008, "Wrong alignment on HUD_Cro_ChargeBlaster_C_SetData");
static_assert(sizeof(HUD_Cro_ChargeBlaster_C_SetData) == 0x000008, "Wrong size on HUD_Cro_ChargeBlaster_C_SetData");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_SetData, Item) == 0x000000, "Member 'HUD_Cro_ChargeBlaster_C_SetData::Item' has a wrong offset!");

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.OnSpreadChanged
// 0x000C (0x000C - 0x0000)
struct HUD_Cro_ChargeBlaster_C_OnSpreadChanged final
{
public:
	float                                         HorizontalSpread;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VerticalSpread;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAtRest;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_Cro_ChargeBlaster_C_OnSpreadChanged) == 0x000004, "Wrong alignment on HUD_Cro_ChargeBlaster_C_OnSpreadChanged");
static_assert(sizeof(HUD_Cro_ChargeBlaster_C_OnSpreadChanged) == 0x00000C, "Wrong size on HUD_Cro_ChargeBlaster_C_OnSpreadChanged");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_OnSpreadChanged, HorizontalSpread) == 0x000000, "Member 'HUD_Cro_ChargeBlaster_C_OnSpreadChanged::HorizontalSpread' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_OnSpreadChanged, VerticalSpread) == 0x000004, "Member 'HUD_Cro_ChargeBlaster_C_OnSpreadChanged::VerticalSpread' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_OnSpreadChanged, IsAtRest) == 0x000008, "Member 'HUD_Cro_ChargeBlaster_C_OnSpreadChanged::IsAtRest' has a wrong offset!");

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HUD_Cro_ChargeBlaster_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_Cro_ChargeBlaster_C_PreConstruct) == 0x000001, "Wrong alignment on HUD_Cro_ChargeBlaster_C_PreConstruct");
static_assert(sizeof(HUD_Cro_ChargeBlaster_C_PreConstruct) == 0x000001, "Wrong size on HUD_Cro_ChargeBlaster_C_PreConstruct");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HUD_Cro_ChargeBlaster_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.OnDamagedEnemy_Event
// 0x0020 (0x0020 - 0x0000)
struct HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event final
{
public:
	TScriptInterface<class IHealth>               EnemyHealth;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
	float                                         Damage;                                            // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamageModifier;                                    // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HealthRemaining;                                   // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWeakPoint;                                       // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsRadial;                                          // 0x001D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event) == 0x000008, "Wrong alignment on HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event");
static_assert(sizeof(HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event) == 0x000020, "Wrong size on HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event, EnemyHealth) == 0x000000, "Member 'HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event::EnemyHealth' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event, Damage) == 0x000010, "Member 'HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event::Damage' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event, DamageModifier) == 0x000014, "Member 'HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event::DamageModifier' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event, HealthRemaining) == 0x000018, "Member 'HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event::HealthRemaining' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event, IsWeakPoint) == 0x00001C, "Member 'HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event::IsWeakPoint' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event, IsRadial) == 0x00001D, "Member 'HUD_Cro_ChargeBlaster_C_OnDamagedEnemy_Event::IsRadial' has a wrong offset!");

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.OnChargeChanged
// 0x0004 (0x0004 - 0x0000)
struct HUD_Cro_ChargeBlaster_C_OnChargeChanged final
{
public:
	float                                         Charge;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_Cro_ChargeBlaster_C_OnChargeChanged) == 0x000004, "Wrong alignment on HUD_Cro_ChargeBlaster_C_OnChargeChanged");
static_assert(sizeof(HUD_Cro_ChargeBlaster_C_OnChargeChanged) == 0x000004, "Wrong size on HUD_Cro_ChargeBlaster_C_OnChargeChanged");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_OnChargeChanged, Charge) == 0x000000, "Member 'HUD_Cro_ChargeBlaster_C_OnChargeChanged::Charge' has a wrong offset!");

// Function HUD_Cro_ChargeBlaster.HUD_Cro_ChargeBlaster_C.ExecuteUbergraph_HUD_Cro_ChargeBlaster
// 0x0130 (0x0130 - 0x0000)
struct HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float Charge)>                 K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5496[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItem*                                  K2Node_Event_item;                                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AChargedWeapon*                         K2Node_DynamicCast_AsCharged_Weapon;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5497[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_HorizontalSpread;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_VerticalSpread;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isAtRest;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5498[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5499[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_549A[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IHealth>               K2Node_CustomEvent_EnemyHealth;                    // 0x00D0(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	float                                         K2Node_CustomEvent_Damage;                         // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_DamageModifier;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_HealthRemaining;                // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsWeakpoint;                    // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsRadial;                       // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_549B[0x2];                                     // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       K2Node_DynamicCast_AsPlayer_Character;             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_549C[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0104(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_charge;                         // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_549D[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x011C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;    // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster) == 0x000008, "Wrong alignment on HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster");
static_assert(sizeof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster) == 0x000130, "Wrong size on HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, EntryPoint) == 0x000000, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_MakeStruct_LinearColor) == 0x000004, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000038, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000040, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_Event_item) == 0x000048, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_Event_item' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_DynamicCast_AsCharged_Weapon) == 0x000050, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_DynamicCast_AsCharged_Weapon' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000060, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_CustomEvent_HorizontalSpread) == 0x000068, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_CustomEvent_HorizontalSpread' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_CustomEvent_VerticalSpread) == 0x00006C, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_CustomEvent_VerticalSpread' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_CustomEvent_isAtRest) == 0x000070, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_CustomEvent_isAtRest' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000078, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000080, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000084, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_MakeVector2D_ReturnValue) == 0x000088, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_MakeVector2D_ReturnValue_1) == 0x000090, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000098, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x00009C, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_MakeVector2D_ReturnValue_2) == 0x0000A0, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_MakeVector2D_ReturnValue_3) == 0x0000A8, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, Temp_bool_Has_Been_Initd_Variable) == 0x0000B0, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, Temp_bool_IsClosed_Variable) == 0x0000B1, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x0000B4, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_PlayAnimation_ReturnValue) == 0x0000B8, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C0, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_Event_IsDesignTime) == 0x0000C8, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_CustomEvent_EnemyHealth) == 0x0000D0, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_CustomEvent_EnemyHealth' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_CustomEvent_Damage) == 0x0000E0, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_CustomEvent_DamageModifier) == 0x0000E4, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_CustomEvent_DamageModifier' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_CustomEvent_HealthRemaining) == 0x0000E8, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_CustomEvent_HealthRemaining' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_CustomEvent_IsWeakpoint) == 0x0000EC, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_CustomEvent_IsWeakpoint' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_CustomEvent_IsRadial) == 0x0000ED, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_CustomEvent_IsRadial' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x0000F0, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_DynamicCast_AsPlayer_Character) == 0x0000F8, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_DynamicCast_bSuccess_1) == 0x000100, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_MenuColors_OutputColor) == 0x000104, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_CustomEvent_charge) == 0x000114, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_CustomEvent_charge' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000118, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, K2Node_MakeStruct_LinearColor_1) == 0x00011C, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x00012C, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster, CallFunc_GreaterEqual_FloatFloat_ReturnValue_2) == 0x00012D, "Member 'HUD_Cro_ChargeBlaster_C_ExecuteUbergraph_HUD_Cro_ChargeBlaster::CallFunc_GreaterEqual_FloatFloat_ReturnValue_2' has a wrong offset!");

}
