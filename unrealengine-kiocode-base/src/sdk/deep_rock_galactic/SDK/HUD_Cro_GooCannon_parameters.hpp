#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Cro_GooCannon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function HUD_Cro_GooCannon.HUD_Cro_GooCannon_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct HUD_Cro_GooCannon_C_SetData final
{
public:
	class AItem*                                  Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_Cro_GooCannon_C_SetData) == 0x000008, "Wrong alignment on HUD_Cro_GooCannon_C_SetData");
static_assert(sizeof(HUD_Cro_GooCannon_C_SetData) == 0x000008, "Wrong size on HUD_Cro_GooCannon_C_SetData");
static_assert(offsetof(HUD_Cro_GooCannon_C_SetData, Item) == 0x000000, "Member 'HUD_Cro_GooCannon_C_SetData::Item' has a wrong offset!");

// Function HUD_Cro_GooCannon.HUD_Cro_GooCannon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HUD_Cro_GooCannon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_Cro_GooCannon_C_PreConstruct) == 0x000001, "Wrong alignment on HUD_Cro_GooCannon_C_PreConstruct");
static_assert(sizeof(HUD_Cro_GooCannon_C_PreConstruct) == 0x000001, "Wrong size on HUD_Cro_GooCannon_C_PreConstruct");
static_assert(offsetof(HUD_Cro_GooCannon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HUD_Cro_GooCannon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function HUD_Cro_GooCannon.HUD_Cro_GooCannon_C.OnDamagedEnemy_Event
// 0x0020 (0x0020 - 0x0000)
struct HUD_Cro_GooCannon_C_OnDamagedEnemy_Event final
{
public:
	TScriptInterface<class IHealth>               EnemyHealth;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
	float                                         Damage;                                            // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamageModifier;                                    // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HealthRemaining;                                   // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWeakPoint;                                       // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsRadial;                                          // 0x001D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_Cro_GooCannon_C_OnDamagedEnemy_Event) == 0x000008, "Wrong alignment on HUD_Cro_GooCannon_C_OnDamagedEnemy_Event");
static_assert(sizeof(HUD_Cro_GooCannon_C_OnDamagedEnemy_Event) == 0x000020, "Wrong size on HUD_Cro_GooCannon_C_OnDamagedEnemy_Event");
static_assert(offsetof(HUD_Cro_GooCannon_C_OnDamagedEnemy_Event, EnemyHealth) == 0x000000, "Member 'HUD_Cro_GooCannon_C_OnDamagedEnemy_Event::EnemyHealth' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_OnDamagedEnemy_Event, Damage) == 0x000010, "Member 'HUD_Cro_GooCannon_C_OnDamagedEnemy_Event::Damage' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_OnDamagedEnemy_Event, DamageModifier) == 0x000014, "Member 'HUD_Cro_GooCannon_C_OnDamagedEnemy_Event::DamageModifier' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_OnDamagedEnemy_Event, HealthRemaining) == 0x000018, "Member 'HUD_Cro_GooCannon_C_OnDamagedEnemy_Event::HealthRemaining' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_OnDamagedEnemy_Event, IsWeakPoint) == 0x00001C, "Member 'HUD_Cro_GooCannon_C_OnDamagedEnemy_Event::IsWeakPoint' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_OnDamagedEnemy_Event, IsRadial) == 0x00001D, "Member 'HUD_Cro_GooCannon_C_OnDamagedEnemy_Event::IsRadial' has a wrong offset!");

// Function HUD_Cro_GooCannon.HUD_Cro_GooCannon_C.OnChargeChanged
// 0x0004 (0x0004 - 0x0000)
struct HUD_Cro_GooCannon_C_OnChargeChanged final
{
public:
	float                                         Charge;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_Cro_GooCannon_C_OnChargeChanged) == 0x000004, "Wrong alignment on HUD_Cro_GooCannon_C_OnChargeChanged");
static_assert(sizeof(HUD_Cro_GooCannon_C_OnChargeChanged) == 0x000004, "Wrong size on HUD_Cro_GooCannon_C_OnChargeChanged");
static_assert(offsetof(HUD_Cro_GooCannon_C_OnChargeChanged, Charge) == 0x000000, "Member 'HUD_Cro_GooCannon_C_OnChargeChanged::Charge' has a wrong offset!");

// Function HUD_Cro_GooCannon.HUD_Cro_GooCannon_C.ExecuteUbergraph_HUD_Cro_GooCannon
// 0x00C0 (0x00C0 - 0x0000)
struct HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_27C0[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem*                                  K2Node_Event_item;                                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27C1[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGooGun*                                K2Node_DynamicCast_AsGoo_Gun;                      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27C2[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IHealth>               K2Node_CustomEvent_EnemyHealth;                    // 0x0038(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	float                                         K2Node_CustomEvent_Damage;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_DamageModifier;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_HealthRemaining;                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsWeakpoint;                    // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsRadial;                       // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27C3[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       K2Node_DynamicCast_AsPlayer_Character;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27C4[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x006C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_charge;                         // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27C5[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0084(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;    // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_3;    // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_4;    // 0x0097(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_5;    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27C6[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(float Charge)>                 K2Node_CreateDelegate_OutputDelegate_1;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon) == 0x000008, "Wrong alignment on HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon");
static_assert(sizeof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon) == 0x0000C0, "Wrong size on HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, EntryPoint) == 0x000000, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_Event_item) == 0x000018, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_Event_item' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_Event_IsDesignTime) == 0x000020, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_DynamicCast_AsGoo_Gun) == 0x000028, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_DynamicCast_AsGoo_Gun' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_CustomEvent_EnemyHealth) == 0x000038, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_CustomEvent_EnemyHealth' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_CustomEvent_Damage) == 0x000048, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_CustomEvent_DamageModifier) == 0x00004C, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_CustomEvent_DamageModifier' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_CustomEvent_HealthRemaining) == 0x000050, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_CustomEvent_HealthRemaining' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_CustomEvent_IsWeakpoint) == 0x000054, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_CustomEvent_IsWeakpoint' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_CustomEvent_IsRadial) == 0x000055, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_CustomEvent_IsRadial' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000058, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_DynamicCast_AsPlayer_Character) == 0x000060, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, CallFunc_MenuColors_OutputColor) == 0x00006C, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_CustomEvent_charge) == 0x00007C, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_CustomEvent_charge' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000080, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_MakeStruct_LinearColor) == 0x000084, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x000094, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, CallFunc_GreaterEqual_FloatFloat_ReturnValue_2) == 0x000095, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::CallFunc_GreaterEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, CallFunc_GreaterEqual_FloatFloat_ReturnValue_3) == 0x000096, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::CallFunc_GreaterEqual_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, CallFunc_GreaterEqual_FloatFloat_ReturnValue_4) == 0x000097, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::CallFunc_GreaterEqual_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, CallFunc_GreaterEqual_FloatFloat_ReturnValue_5) == 0x000098, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::CallFunc_GreaterEqual_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_CreateDelegate_OutputDelegate_1) == 0x00009C, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000AC, "Member 'HUD_Cro_GooCannon_C_ExecuteUbergraph_HUD_Cro_GooCannon::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

}

