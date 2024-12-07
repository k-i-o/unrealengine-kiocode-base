#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Grenade_Axe_Stuck

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_StandOnMe
// 0x0004 (0x0004 - 0x0000)
struct BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECollisionEnabled                             Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe) == 0x000001, "Wrong alignment on BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe");
static_assert(sizeof(BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe) == 0x000004, "Wrong size on BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe, Temp_bool_Variable) == 0x000000, "Member 'BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe, Temp_byte_Variable) == 0x000001, "Member 'BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe, Temp_byte_Variable_1) == 0x000002, "Member 'BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe, K2Node_Select_Default) == 0x000003, "Member 'BP_Grenade_Axe_Stuck_C_OnRep_StandOnMe::K2Node_Select_Default' has a wrong offset!");

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct BP_Grenade_Axe_Stuck_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Grenade_Axe_Stuck_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Grenade_Axe_Stuck_C_UserConstructionScript");
static_assert(sizeof(BP_Grenade_Axe_Stuck_C_UserConstructionScript) == 0x000008, "Wrong size on BP_Grenade_Axe_Stuck_C_UserConstructionScript");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'BP_Grenade_Axe_Stuck_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.PickUpAxe
// 0x0008 (0x0008 - 0x0000)
struct BP_Grenade_Axe_Stuck_C_PickUpAxe final
{
public:
	class AThrownGrenadeItem*                     ThrownGrenadeItem;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Grenade_Axe_Stuck_C_PickUpAxe) == 0x000008, "Wrong alignment on BP_Grenade_Axe_Stuck_C_PickUpAxe");
static_assert(sizeof(BP_Grenade_Axe_Stuck_C_PickUpAxe) == 0x000008, "Wrong size on BP_Grenade_Axe_Stuck_C_PickUpAxe");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_PickUpAxe, ThrownGrenadeItem) == 0x000000, "Member 'BP_Grenade_Axe_Stuck_C_PickUpAxe::ThrownGrenadeItem' has a wrong offset!");

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Attach
// 0x0020 (0x0020 - 0x0000)
struct BP_Grenade_Axe_Stuck_C_Attach final
{
public:
	class AActor*                                 ParentActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Param_ParentComponent;                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ParentSocketName;                                  // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanRetrieve;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Grenade_Axe_Stuck_C_Attach) == 0x000008, "Wrong alignment on BP_Grenade_Axe_Stuck_C_Attach");
static_assert(sizeof(BP_Grenade_Axe_Stuck_C_Attach) == 0x000020, "Wrong size on BP_Grenade_Axe_Stuck_C_Attach");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_Attach, ParentActor) == 0x000000, "Member 'BP_Grenade_Axe_Stuck_C_Attach::ParentActor' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_Attach, Param_ParentComponent) == 0x000008, "Member 'BP_Grenade_Axe_Stuck_C_Attach::Param_ParentComponent' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_Attach, ParentSocketName) == 0x000010, "Member 'BP_Grenade_Axe_Stuck_C_Attach::ParentSocketName' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_Attach, CanRetrieve) == 0x000018, "Member 'BP_Grenade_Axe_Stuck_C_Attach::CanRetrieve' has a wrong offset!");

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDestroyed_Event
// 0x0008 (0x0008 - 0x0000)
struct BP_Grenade_Axe_Stuck_C_OnDestroyed_Event final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Grenade_Axe_Stuck_C_OnDestroyed_Event) == 0x000008, "Wrong alignment on BP_Grenade_Axe_Stuck_C_OnDestroyed_Event");
static_assert(sizeof(BP_Grenade_Axe_Stuck_C_OnDestroyed_Event) == 0x000008, "Wrong size on BP_Grenade_Axe_Stuck_C_OnDestroyed_Event");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_OnDestroyed_Event, DestroyedActor) == 0x000000, "Member 'BP_Grenade_Axe_Stuck_C_OnDestroyed_Event::DestroyedActor' has a wrong offset!");

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDeath_Event
// 0x0008 (0x0008 - 0x0000)
struct BP_Grenade_Axe_Stuck_C_OnDeath_Event final
{
public:
	class UHealthComponentBase*                   HealthComponent;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Grenade_Axe_Stuck_C_OnDeath_Event) == 0x000008, "Wrong alignment on BP_Grenade_Axe_Stuck_C_OnDeath_Event");
static_assert(sizeof(BP_Grenade_Axe_Stuck_C_OnDeath_Event) == 0x000008, "Wrong size on BP_Grenade_Axe_Stuck_C_OnDeath_Event");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_OnDeath_Event, HealthComponent) == 0x000000, "Member 'BP_Grenade_Axe_Stuck_C_OnDeath_Event::HealthComponent' has a wrong offset!");

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.GoPhysical
// 0x0002 (0x0002 - 0x0000)
struct BP_Grenade_Axe_Stuck_C_GoPhysical final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CanRetrieve;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Grenade_Axe_Stuck_C_GoPhysical) == 0x000001, "Wrong alignment on BP_Grenade_Axe_Stuck_C_GoPhysical");
static_assert(sizeof(BP_Grenade_Axe_Stuck_C_GoPhysical) == 0x000002, "Wrong size on BP_Grenade_Axe_Stuck_C_GoPhysical");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_GoPhysical, PassThrough) == 0x000000, "Member 'BP_Grenade_Axe_Stuck_C_GoPhysical::PassThrough' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_GoPhysical, CanRetrieve) == 0x000001, "Member 'BP_Grenade_Axe_Stuck_C_GoPhysical::CanRetrieve' has a wrong offset!");

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.MakeStandable
// 0x0001 (0x0001 - 0x0000)
struct BP_Grenade_Axe_Stuck_C_MakeStandable final
{
public:
	bool                                          CanRetrieve;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Grenade_Axe_Stuck_C_MakeStandable) == 0x000001, "Wrong alignment on BP_Grenade_Axe_Stuck_C_MakeStandable");
static_assert(sizeof(BP_Grenade_Axe_Stuck_C_MakeStandable) == 0x000001, "Wrong size on BP_Grenade_Axe_Stuck_C_MakeStandable");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_MakeStandable, CanRetrieve) == 0x000000, "Member 'BP_Grenade_Axe_Stuck_C_MakeStandable::CanRetrieve' has a wrong offset!");

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.SetRetrieval
// 0x0001 (0x0001 - 0x0000)
struct BP_Grenade_Axe_Stuck_C_SetRetrieval final
{
public:
	bool                                          CanRetrieve;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Grenade_Axe_Stuck_C_SetRetrieval) == 0x000001, "Wrong alignment on BP_Grenade_Axe_Stuck_C_SetRetrieval");
static_assert(sizeof(BP_Grenade_Axe_Stuck_C_SetRetrieval) == 0x000001, "Wrong size on BP_Grenade_Axe_Stuck_C_SetRetrieval");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_SetRetrieval, CanRetrieve) == 0x000000, "Member 'BP_Grenade_Axe_Stuck_C_SetRetrieval::CanRetrieve' has a wrong offset!");

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature final
{
public:
	class APlayerCharacter*                       User;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputKeys                                    Key;                                               // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature");
static_assert(sizeof(BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature) == 0x000010, "Wrong size on BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature, User) == 0x000000, "Member 'BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature::User' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature, Key) == 0x000008, "Member 'BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature::Key' has a wrong offset!");

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature final
{
public:
	bool                                          CanUse;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature) == 0x000001, "Wrong alignment on BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");
static_assert(sizeof(BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature) == 0x000001, "Wrong size on BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature, CanUse) == 0x000000, "Member 'BP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature::CanUse' has a wrong offset!");

// Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.ExecuteUbergraph_BP_Grenade_Axe_Stuck
// 0x0110 (0x0110 - 0x0000)
struct BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46F0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHealthComponentBase*                   Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAlive_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F1[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AThrownGrenadeItem*                     K2Node_CustomEvent_ThrownGrenadeItem;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_ParentActor;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        K2Node_CustomEvent_ParentComponent;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_ParentSocketName;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_CanRetrieve_3;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F2[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITargetable>           K2Node_DynamicCast_AsTargetable;                   // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F3[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHealthComponentBase*                   CallFunc_GetTargetHealthComponent_ReturnValue;     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F4[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHealthComponentBase*                   K2Node_CustomEvent_HealthComponent;                // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_PassThrough;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_CanRetrieve_2;                  // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F5[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_CanRetrieve_1;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F6[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;             // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_CanRetrieve;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F7[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_ComponentBoundEvent_user;                   // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputKeys                                    K2Node_ComponentBoundEvent_key;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_canUse;                 // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F8[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UHealthComponentBase* HealthComponent)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck) == 0x000008, "Wrong alignment on BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck");
static_assert(sizeof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck) == 0x000110, "Wrong size on BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, EntryPoint) == 0x000000, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, Temp_object_Variable) == 0x000008, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, CallFunc_IsAlive_ReturnValue) == 0x000011, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::CallFunc_IsAlive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, Temp_bool_Has_Been_Initd_Variable) == 0x000012, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CustomEvent_ThrownGrenadeItem) == 0x000018, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CustomEvent_ThrownGrenadeItem' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CustomEvent_ParentActor) == 0x000020, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CustomEvent_ParentActor' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CustomEvent_ParentComponent) == 0x000028, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CustomEvent_ParentComponent' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CustomEvent_ParentSocketName) == 0x000030, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CustomEvent_ParentSocketName' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CustomEvent_CanRetrieve_3) == 0x000038, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CustomEvent_CanRetrieve_3' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_DynamicCast_AsTargetable) == 0x000040, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_DynamicCast_AsTargetable' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, CallFunc_GetTargetHealthComponent_ReturnValue) == 0x000058, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::CallFunc_GetTargetHealthComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000060, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CustomEvent_DestroyedActor) == 0x000068, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CustomEvent_HealthComponent) == 0x000070, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CustomEvent_HealthComponent' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CreateDelegate_OutputDelegate) == 0x000078, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CustomEvent_PassThrough) == 0x000088, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CustomEvent_PassThrough' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CustomEvent_CanRetrieve_2) == 0x000089, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CustomEvent_CanRetrieve_2' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, CallFunc_SelectFloat_ReturnValue) == 0x00008C, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CustomEvent_CanRetrieve_1) == 0x000090, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CustomEvent_CanRetrieve_1' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, CallFunc_GetActorRightVector_ReturnValue) == 0x000094, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, CallFunc_GetActorUpVector_ReturnValue) == 0x0000A0, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000AC, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000B8, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, CallFunc_Add_VectorVector_ReturnValue) == 0x0000C4, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, CallFunc_GetActorForwardVector_ReturnValue) == 0x0000D0, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x0000DC, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CustomEvent_CanRetrieve) == 0x0000E8, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CustomEvent_CanRetrieve' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_ComponentBoundEvent_user) == 0x0000F0, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_ComponentBoundEvent_user' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_ComponentBoundEvent_key) == 0x0000F8, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_ComponentBoundEvent_key' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_ComponentBoundEvent_canUse) == 0x0000F9, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_ComponentBoundEvent_canUse' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, Temp_bool_Has_Been_Initd_Variable_1) == 0x0000FA, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, Temp_bool_IsClosed_Variable) == 0x0000FB, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, Temp_bool_IsClosed_Variable_1) == 0x0000FC, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck, K2Node_CreateDelegate_OutputDelegate_1) == 0x000100, "Member 'BP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

}

