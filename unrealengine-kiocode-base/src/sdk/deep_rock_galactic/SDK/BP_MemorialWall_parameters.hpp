#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MemorialWall

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_MemorialWall.BP_MemorialWall_C.ExecuteUbergraph_BP_MemorialWall
// 0x00E0 (0x00E0 - 0x0000)
struct BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F8F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F90[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F91[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0058(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall) == 0x000008, "Wrong alignment on BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall");
static_assert(sizeof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall) == 0x0000E0, "Wrong size on BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, EntryPoint) == 0x000000, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, K2Node_Event_OtherActor_1) == 0x000028, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, K2Node_Event_OtherActor) == 0x000030, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000038, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000040, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000048, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000050, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, K2Node_ComponentBoundEvent_bFromSweep) == 0x000054, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall, K2Node_ComponentBoundEvent_SweepResult) == 0x000058, "Member 'BP_MemorialWall_C_ExecuteUbergraph_BP_MemorialWall::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");

// Function BP_MemorialWall.BP_MemorialWall_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_MemorialWall.BP_MemorialWall_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F92[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_MemorialWall_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_MemorialWall.BP_MemorialWall_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_MemorialWall_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MemorialWall_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_MemorialWall_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_MemorialWall_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_MemorialWall_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_MemorialWall_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_MemorialWall_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_MemorialWall.BP_MemorialWall_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_MemorialWall_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MemorialWall_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_MemorialWall_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_MemorialWall_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_MemorialWall_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_MemorialWall_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_MemorialWall_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function BP_MemorialWall.BP_MemorialWall_C.SetFastScrollSpeed
// 0x0020 (0x0020 - 0x0000)
struct BP_MemorialWall_C_SetFastScrollSpeed final
{
public:
	bool                                          Flag;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F93[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConsoleScreenMemorialWall_C*           K2Node_DynamicCast_AsConsole_Screen_Memorial_Wall; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MemorialWall_C_SetFastScrollSpeed) == 0x000008, "Wrong alignment on BP_MemorialWall_C_SetFastScrollSpeed");
static_assert(sizeof(BP_MemorialWall_C_SetFastScrollSpeed) == 0x000020, "Wrong size on BP_MemorialWall_C_SetFastScrollSpeed");
static_assert(offsetof(BP_MemorialWall_C_SetFastScrollSpeed, Flag) == 0x000000, "Member 'BP_MemorialWall_C_SetFastScrollSpeed::Flag' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_SetFastScrollSpeed, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000008, "Member 'BP_MemorialWall_C_SetFastScrollSpeed::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_SetFastScrollSpeed, K2Node_DynamicCast_AsConsole_Screen_Memorial_Wall) == 0x000010, "Member 'BP_MemorialWall_C_SetFastScrollSpeed::K2Node_DynamicCast_AsConsole_Screen_Memorial_Wall' has a wrong offset!");
static_assert(offsetof(BP_MemorialWall_C_SetFastScrollSpeed, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_MemorialWall_C_SetFastScrollSpeed::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
