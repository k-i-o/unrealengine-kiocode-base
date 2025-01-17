#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tool_Camerahack

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Tool_Camerahack.Tool_Camerahack_C.ExecuteUbergraph_Tool_Camerahack
// 0x01C8 (0x01C8 - 0x0000)
struct Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_Player_1;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_Pickuplocation;         // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_ComponentBoundEvent_PickupRotation;         // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                K2Node_ComponentBoundEvent_HitLocation;            // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_ComponentBoundEvent_Player;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0040(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ConstParm, ReferenceParm)
	float                                         CallFunc_FindNearestActor_Distance;                // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FindNearestActor_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B[0x1];                                       // 0x009B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00A8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_133[0x1];                                      // 0x0133(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x019C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B4[0x4];                                      // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACameraBP_C*                            K2Node_DynamicCast_AsCamera_BP;                    // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack) == 0x000008, "Wrong alignment on Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack");
static_assert(sizeof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack) == 0x0001C8, "Wrong size on Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, EntryPoint) == 0x000000, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::EntryPoint' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, K2Node_ComponentBoundEvent_Player_1) == 0x000008, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::K2Node_ComponentBoundEvent_Player_1' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, K2Node_ComponentBoundEvent_Pickuplocation) == 0x000010, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::K2Node_ComponentBoundEvent_Pickuplocation' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, K2Node_ComponentBoundEvent_PickupRotation) == 0x00001C, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::K2Node_ComponentBoundEvent_PickupRotation' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, K2Node_ComponentBoundEvent_HitLocation) == 0x000028, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::K2Node_ComponentBoundEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, K2Node_ComponentBoundEvent_Player) == 0x000038, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::K2Node_ComponentBoundEvent_Player' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000040, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_GetOwner_ReturnValue) == 0x000060, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000068, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, K2Node_MakeArray_Array) == 0x000078, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_FindNearestActor_Distance) == 0x000088, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_FindNearestActor_Distance' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_FindNearestActor_ReturnValue) == 0x000090, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_FindNearestActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_IsValid_ReturnValue_1) == 0x000099, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00009A, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x00009C, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_LineTraceSingle_OutHit) == 0x0000A8, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_LineTraceSingle_ReturnValue) == 0x000130, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_bBlockingHit) == 0x000131, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_bInitialOverlap) == 0x000132, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_Time) == 0x000134, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_Distance) == 0x000138, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_Location) == 0x00013C, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_ImpactPoint) == 0x000148, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_Normal) == 0x000154, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_ImpactNormal) == 0x000160, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_PhysMat) == 0x000170, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_HitActor) == 0x000178, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_HitComponent) == 0x000180, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_HitBoneName) == 0x000188, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_HitItem) == 0x000190, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_ElementIndex) == 0x000194, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_FaceIndex) == 0x000198, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_TraceStart) == 0x00019C, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_BreakHitResult_TraceEnd) == 0x0001A8, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, K2Node_DynamicCast_AsCamera_BP) == 0x0001B8, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::K2Node_DynamicCast_AsCamera_BP' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, K2Node_DynamicCast_bSuccess) == 0x0001C0, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack, CallFunc_IsValid_ReturnValue_2) == 0x0001C1, "Member 'Tool_Camerahack_C_ExecuteUbergraph_Tool_Camerahack::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function Tool_Camerahack.Tool_Camerahack_C.BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_1_DropItem__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_1_DropItem__DelegateSignature final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_1_DropItem__DelegateSignature) == 0x000008, "Wrong alignment on Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_1_DropItem__DelegateSignature");
static_assert(sizeof(Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_1_DropItem__DelegateSignature) == 0x000008, "Wrong size on Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_1_DropItem__DelegateSignature");
static_assert(offsetof(Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_1_DropItem__DelegateSignature, Player) == 0x000000, "Member 'Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_1_DropItem__DelegateSignature::Player' has a wrong offset!");

// Function Tool_Camerahack.Tool_Camerahack_C.BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pickuplocation;                                    // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PickupRotation;                                    // 0x0014(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                HitLocation;                                       // 0x0020(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature) == 0x000008, "Wrong alignment on Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature");
static_assert(sizeof(Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature) == 0x000030, "Wrong size on Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature");
static_assert(offsetof(Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature, Player) == 0x000000, "Member 'Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature::Player' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature, Pickuplocation) == 0x000008, "Member 'Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature::Pickuplocation' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature, PickupRotation) == 0x000014, "Member 'Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature::PickupRotation' has a wrong offset!");
static_assert(offsetof(Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature, HitLocation) == 0x000020, "Member 'Tool_Camerahack_C_BndEvt__Tool_Camerahack_PickupItemComponent_K2Node_ComponentBoundEvent_0_PickUpItem__DelegateSignature::HitLocation' has a wrong offset!");

// Function Tool_Camerahack.Tool_Camerahack_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Tool_Camerahack_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tool_Camerahack_C_ReceiveTick) == 0x000004, "Wrong alignment on Tool_Camerahack_C_ReceiveTick");
static_assert(sizeof(Tool_Camerahack_C_ReceiveTick) == 0x000004, "Wrong size on Tool_Camerahack_C_ReceiveTick");
static_assert(offsetof(Tool_Camerahack_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Tool_Camerahack_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

