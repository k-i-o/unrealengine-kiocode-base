#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TurretEMPDischarge_Indicator

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.UpdateState
// 0x0020 (0x0020 - 0x0000)
struct BP_TurretEMPDischarge_Indicator_C_UpdateState final
{
public:
	bool                                          Animate;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          WasHidden;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44D7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem*                                  CallFunc_GetEquippedItem_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AElectricalSMG*                         K2Node_DynamicCast_AsElectrical_SMG;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TurretEMPDischarge_Indicator_C_UpdateState) == 0x000008, "Wrong alignment on BP_TurretEMPDischarge_Indicator_C_UpdateState");
static_assert(sizeof(BP_TurretEMPDischarge_Indicator_C_UpdateState) == 0x000020, "Wrong size on BP_TurretEMPDischarge_Indicator_C_UpdateState");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_UpdateState, Animate) == 0x000000, "Member 'BP_TurretEMPDischarge_Indicator_C_UpdateState::Animate' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_UpdateState, WasHidden) == 0x000001, "Member 'BP_TurretEMPDischarge_Indicator_C_UpdateState::WasHidden' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_UpdateState, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'BP_TurretEMPDischarge_Indicator_C_UpdateState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_UpdateState, CallFunc_IsValid_ReturnValue_1) == 0x000003, "Member 'BP_TurretEMPDischarge_Indicator_C_UpdateState::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_UpdateState, CallFunc_GetEquippedItem_ReturnValue) == 0x000008, "Member 'BP_TurretEMPDischarge_Indicator_C_UpdateState::CallFunc_GetEquippedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_UpdateState, K2Node_DynamicCast_AsElectrical_SMG) == 0x000010, "Member 'BP_TurretEMPDischarge_Indicator_C_UpdateState::K2Node_DynamicCast_AsElectrical_SMG' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_UpdateState, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_TurretEMPDischarge_Indicator_C_UpdateState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_UpdateState, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'BP_TurretEMPDischarge_Indicator_C_UpdateState::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_UpdateState, CallFunc_BooleanAND_ReturnValue) == 0x00001A, "Member 'BP_TurretEMPDischarge_Indicator_C_UpdateState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.OnItemEquipped_Event
// 0x0008 (0x0008 - 0x0000)
struct BP_TurretEMPDischarge_Indicator_C_OnItemEquipped_Event final
{
public:
	class AItem*                                  Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TurretEMPDischarge_Indicator_C_OnItemEquipped_Event) == 0x000008, "Wrong alignment on BP_TurretEMPDischarge_Indicator_C_OnItemEquipped_Event");
static_assert(sizeof(BP_TurretEMPDischarge_Indicator_C_OnItemEquipped_Event) == 0x000008, "Wrong size on BP_TurretEMPDischarge_Indicator_C_OnItemEquipped_Event");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_OnItemEquipped_Event, Item) == 0x000000, "Member 'BP_TurretEMPDischarge_Indicator_C_OnItemEquipped_Event::Item' has a wrong offset!");

// Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.OnItemUnequipped
// 0x0008 (0x0008 - 0x0000)
struct BP_TurretEMPDischarge_Indicator_C_OnItemUnequipped final
{
public:
	class AItem*                                  Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TurretEMPDischarge_Indicator_C_OnItemUnequipped) == 0x000008, "Wrong alignment on BP_TurretEMPDischarge_Indicator_C_OnItemUnequipped");
static_assert(sizeof(BP_TurretEMPDischarge_Indicator_C_OnItemUnequipped) == 0x000008, "Wrong size on BP_TurretEMPDischarge_Indicator_C_OnItemUnequipped");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_OnItemUnequipped, Item) == 0x000000, "Member 'BP_TurretEMPDischarge_Indicator_C_OnItemUnequipped::Item' has a wrong offset!");

// Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.OnStateChanged_Event
// 0x0010 (0x0010 - 0x0000)
struct BP_TurretEMPDischarge_Indicator_C_OnStateChanged_Event final
{
public:
	class ARedeployableSentryGun*                 Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERedeployableSentryGunState                   NewState;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TurretEMPDischarge_Indicator_C_OnStateChanged_Event) == 0x000008, "Wrong alignment on BP_TurretEMPDischarge_Indicator_C_OnStateChanged_Event");
static_assert(sizeof(BP_TurretEMPDischarge_Indicator_C_OnStateChanged_Event) == 0x000010, "Wrong size on BP_TurretEMPDischarge_Indicator_C_OnStateChanged_Event");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_OnStateChanged_Event, Sender) == 0x000000, "Member 'BP_TurretEMPDischarge_Indicator_C_OnStateChanged_Event::Sender' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_OnStateChanged_Event, NewState) == 0x000008, "Member 'BP_TurretEMPDischarge_Indicator_C_OnStateChanged_Event::NewState' has a wrong offset!");

// Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.ExecuteUbergraph_BP_TurretEMPDischarge_Indicator
// 0x0090 (0x0090 - 0x0000)
struct BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44D8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AItem* Item)>            K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class AItem* Item)>            K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetParentActor_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       CallFunc_GetLocalPlayerCharacter_ReturnValue;      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARedeployableSentryGun*                 K2Node_DynamicCast_AsRedeployable_Sentry_Gun;      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44D9[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem*                                  K2Node_CustomEvent_Item_1;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItem*                                  K2Node_CustomEvent_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARedeployableSentryGun*                 K2Node_CustomEvent_Sender;                         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERedeployableSentryGunState                   K2Node_CustomEvent_newState;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator) == 0x000008, "Wrong alignment on BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator");
static_assert(sizeof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator) == 0x000090, "Wrong size on BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, EntryPoint) == 0x000000, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, CallFunc_MakeVector_ReturnValue) == 0x000038, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, CallFunc_MakeVector_ReturnValue_1) == 0x000044, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, CallFunc_GetParentActor_ReturnValue) == 0x000050, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::CallFunc_GetParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, CallFunc_GetLocalPlayerCharacter_ReturnValue) == 0x000058, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::CallFunc_GetLocalPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, K2Node_DynamicCast_AsRedeployable_Sentry_Gun) == 0x000060, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::K2Node_DynamicCast_AsRedeployable_Sentry_Gun' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, K2Node_CustomEvent_Item_1) == 0x000070, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::K2Node_CustomEvent_Item_1' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, K2Node_CustomEvent_Item) == 0x000078, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, K2Node_CustomEvent_Sender) == 0x000080, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, K2Node_CustomEvent_newState) == 0x000088, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::K2Node_CustomEvent_newState' has a wrong offset!");
static_assert(offsetof(BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000089, "Member 'BP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

