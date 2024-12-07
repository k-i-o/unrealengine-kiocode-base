#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeepScan_DrillevatorLocationSelector

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_DeepScan_DrillevatorLocationSelector.BP_DeepScan_DrillevatorLocationSelector_C.OnDrillevatorLocationSelected__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct BP_DeepScan_DrillevatorLocationSelector_C_OnDrillevatorLocationSelected__DelegateSignature final
{
public:
	struct FTransform                             Param_Location;                                    // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DeepScan_DrillevatorLocationSelector_C_OnDrillevatorLocationSelected__DelegateSignature) == 0x000010, "Wrong alignment on BP_DeepScan_DrillevatorLocationSelector_C_OnDrillevatorLocationSelected__DelegateSignature");
static_assert(sizeof(BP_DeepScan_DrillevatorLocationSelector_C_OnDrillevatorLocationSelected__DelegateSignature) == 0x000030, "Wrong size on BP_DeepScan_DrillevatorLocationSelector_C_OnDrillevatorLocationSelected__DelegateSignature");
static_assert(offsetof(BP_DeepScan_DrillevatorLocationSelector_C_OnDrillevatorLocationSelected__DelegateSignature, Param_Location) == 0x000000, "Member 'BP_DeepScan_DrillevatorLocationSelector_C_OnDrillevatorLocationSelected__DelegateSignature::Param_Location' has a wrong offset!");

// Function BP_DeepScan_DrillevatorLocationSelector.BP_DeepScan_DrillevatorLocationSelector_C.ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector
// 0x00B0 (0x00B0 - 0x0000)
struct BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_333C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class AActor>                     K2Node_CustomEvent_SpawnedActorClass;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_333D[0xF];                                     // 0x0011(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	class AProceduralSetup*                       CallFunc_GetProceduralSetup_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FTransform>                     CallFunc_GetLocations_OutLocations;                // 0x0068(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetLocations_ReturnValue;                 // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_333E[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Array_GetRandom_Item;                     // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector) == 0x000010, "Wrong alignment on BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector");
static_assert(sizeof(BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector) == 0x0000B0, "Wrong size on BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector");
static_assert(offsetof(BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector, EntryPoint) == 0x000000, "Member 'BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector, K2Node_CustomEvent_SpawnedActorClass) == 0x000008, "Member 'BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector::K2Node_CustomEvent_SpawnedActorClass' has a wrong offset!");
static_assert(offsetof(BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector, CallFunc_GetProceduralSetup_ReturnValue) == 0x000050, "Member 'BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector::CallFunc_GetProceduralSetup_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector, K2Node_MakeArray_Array) == 0x000058, "Member 'BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector, CallFunc_GetLocations_OutLocations) == 0x000068, "Member 'BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector::CallFunc_GetLocations_OutLocations' has a wrong offset!");
static_assert(offsetof(BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector, CallFunc_GetLocations_ReturnValue) == 0x000078, "Member 'BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector::CallFunc_GetLocations_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector, CallFunc_Array_GetRandom_Item) == 0x000080, "Member 'BP_DeepScan_DrillevatorLocationSelector_C_ExecuteUbergraph_BP_DeepScan_DrillevatorLocationSelector::CallFunc_Array_GetRandom_Item' has a wrong offset!");

// Function BP_DeepScan_DrillevatorLocationSelector.BP_DeepScan_DrillevatorLocationSelector_C.FindDrillevatorLocation
// 0x0008 (0x0008 - 0x0000)
struct BP_DeepScan_DrillevatorLocationSelector_C_FindDrillevatorLocation final
{
public:
	TSubclassOf<class AActor>                     SpawnedActorClass;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_DeepScan_DrillevatorLocationSelector_C_FindDrillevatorLocation) == 0x000008, "Wrong alignment on BP_DeepScan_DrillevatorLocationSelector_C_FindDrillevatorLocation");
static_assert(sizeof(BP_DeepScan_DrillevatorLocationSelector_C_FindDrillevatorLocation) == 0x000008, "Wrong size on BP_DeepScan_DrillevatorLocationSelector_C_FindDrillevatorLocation");
static_assert(offsetof(BP_DeepScan_DrillevatorLocationSelector_C_FindDrillevatorLocation, SpawnedActorClass) == 0x000000, "Member 'BP_DeepScan_DrillevatorLocationSelector_C_FindDrillevatorLocation::SpawnedActorClass' has a wrong offset!");

}

