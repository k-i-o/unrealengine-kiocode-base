#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_Shredder

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AIC_Shredder.AIC_Shredder_C.FindNewMother
// 0x00B8 (0x00B8 - 0x0000)
struct AIC_Shredder_C_FindNewMother final
{
public:
	class AENE_Jelly_Passive_Mother_C*            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AENE_Jelly_Passive_Mother_C*>    PotentialMothers;                                  // 0x0008(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45BF[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AENE_Jelly_Passive_Mother_C*            Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45C0[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AENE_Jelly_Passive_Mother_C*            CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AENE_Jelly_Passive_Mother_C*            K2Node_Select_Default;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C1[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AENE_Jelly_Passive_Mother_C*>    CallFunc_GetAllActorsOfClass_OutActors;            // 0x0070(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C2[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AENE_Jelly_Passive_Mother_C*            CallFunc_Array_Get_Item_1;                         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45C3[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_Shredder_C_FindNewMother) == 0x000008, "Wrong alignment on AIC_Shredder_C_FindNewMother");
static_assert(sizeof(AIC_Shredder_C_FindNewMother) == 0x0000B8, "Wrong size on AIC_Shredder_C_FindNewMother");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, ReturnValue) == 0x000000, "Member 'AIC_Shredder_C_FindNewMother::ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, PotentialMothers) == 0x000008, "Member 'AIC_Shredder_C_FindNewMother::PotentialMothers' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, Temp_bool_Variable) == 0x000018, "Member 'AIC_Shredder_C_FindNewMother::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, Temp_object_Variable) == 0x000020, "Member 'AIC_Shredder_C_FindNewMother::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, Temp_int_Array_Index_Variable) == 0x000028, "Member 'AIC_Shredder_C_FindNewMother::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'AIC_Shredder_C_FindNewMother::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_Array_LastIndex_ReturnValue) == 0x000034, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_RandomIntegerInRange_ReturnValue) == 0x00003C, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_Array_Get_Item) == 0x000048, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_K2_GetPawn_ReturnValue) == 0x000050, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, K2Node_Select_Default) == 0x000058, "Member 'AIC_Shredder_C_FindNewMother::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_GetAllActorsOfClass_OutActors) == 0x000070, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_Array_Length_ReturnValue_1) == 0x000080, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_Array_Add_ReturnValue) == 0x000094, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000098, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000A4, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_VSize_ReturnValue) == 0x0000B0, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_FindNewMother, CallFunc_Less_FloatFloat_ReturnValue) == 0x0000B4, "Member 'AIC_Shredder_C_FindNewMother::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function AIC_Shredder.AIC_Shredder_C.OnDeath
// 0x0008 (0x0008 - 0x0000)
struct AIC_Shredder_C_OnDeath final
{
public:
	class UHealthComponentBase*                   HealthComponent;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIC_Shredder_C_OnDeath) == 0x000008, "Wrong alignment on AIC_Shredder_C_OnDeath");
static_assert(sizeof(AIC_Shredder_C_OnDeath) == 0x000008, "Wrong size on AIC_Shredder_C_OnDeath");
static_assert(offsetof(AIC_Shredder_C_OnDeath, HealthComponent) == 0x000000, "Member 'AIC_Shredder_C_OnDeath::HealthComponent' has a wrong offset!");

// Function AIC_Shredder.AIC_Shredder_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct AIC_Shredder_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIC_Shredder_C_ReceivePossess) == 0x000008, "Wrong alignment on AIC_Shredder_C_ReceivePossess");
static_assert(sizeof(AIC_Shredder_C_ReceivePossess) == 0x000008, "Wrong size on AIC_Shredder_C_ReceivePossess");
static_assert(offsetof(AIC_Shredder_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'AIC_Shredder_C_ReceivePossess::PossessedPawn' has a wrong offset!");

// Function AIC_Shredder.AIC_Shredder_C.ExecuteUbergraph_AIC_Shredder
// 0x0080 (0x0080 - 0x0000)
struct AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RunBehaviorTree_ReturnValue;              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45C4[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UHealthComponentBase*                   K2Node_CustomEvent_HealthComponent;                // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnemyHealthComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45C5[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AENE_Shredder_C*                        K2Node_DynamicCast_AsENE_Shredder;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnemyAlertet_ReturnValue;               // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45C6[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AddModifier_ReturnValue;                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UHealthComponentBase* HealthComponent)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_45C7[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0070(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PercentageCheck_ReturnValue;              // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder) == 0x000008, "Wrong alignment on AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder");
static_assert(sizeof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder) == 0x000080, "Wrong size on AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, EntryPoint) == 0x000000, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::EntryPoint' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, Temp_bool_Has_Been_Initd_Variable) == 0x000014, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, CallFunc_RunBehaviorTree_ReturnValue) == 0x000015, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::CallFunc_RunBehaviorTree_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, K2Node_CustomEvent_HealthComponent) == 0x000018, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::K2Node_CustomEvent_HealthComponent' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, K2Node_Event_PossessedPawn) == 0x000020, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, CallFunc_MakeLiteralName_ReturnValue) == 0x000030, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x000038, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, CallFunc_K2_GetPawn_ReturnValue) == 0x000040, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, K2Node_DynamicCast_AsENE_Shredder) == 0x000048, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::K2Node_DynamicCast_AsENE_Shredder' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, CallFunc_IsEnemyAlertet_ReturnValue) == 0x000051, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::CallFunc_IsEnemyAlertet_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, CallFunc_AddModifier_ReturnValue) == 0x000054, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::CallFunc_AddModifier_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, CallFunc_RandomFloatInRange_ReturnValue) == 0x000058, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, K2Node_CreateDelegate_OutputDelegate_1) == 0x00005C, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000070, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, Temp_bool_IsClosed_Variable) == 0x000078, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, CallFunc_PercentageCheck_ReturnValue) == 0x000079, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::CallFunc_PercentageCheck_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder, CallFunc_BooleanAND_ReturnValue) == 0x00007A, "Member 'AIC_Shredder_C_ExecuteUbergraph_AIC_Shredder::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
