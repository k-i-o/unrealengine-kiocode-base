#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Trading_DailyDeal

#include "Basic.hpp"

#include "FSD_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ITM_Trading_DailyDeal.ITM_Trading_DailyDeal_C.ExecuteUbergraph_ITM_Trading_DailyDeal
// 0x00E0 (0x00E0 - 0x0000)
struct ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F90[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDailyDeal                             CallFunc_GetDailyDeal_outDeal;                     // 0x0010(0x0018)(NoDestructor)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00A8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C0(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal) == 0x000008, "Wrong alignment on ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal");
static_assert(sizeof(ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal) == 0x0000E0, "Wrong size on ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal");
static_assert(offsetof(ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal, EntryPoint) == 0x000000, "Member 'ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal, CallFunc_GetDailyDeal_outDeal) == 0x000010, "Member 'ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal::CallFunc_GetDailyDeal_outDeal' has a wrong offset!");
static_assert(offsetof(ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal, CallFunc_Conv_FloatToText_ReturnValue) == 0x000028, "Member 'ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal, K2Node_MakeArray_Array) == 0x000098, "Member 'ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000A8, "Member 'ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal, CallFunc_Format_ReturnValue) == 0x0000C0, "Member 'ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal, K2Node_SwitchEnum_CmpSuccess) == 0x0000D8, "Member 'ITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
