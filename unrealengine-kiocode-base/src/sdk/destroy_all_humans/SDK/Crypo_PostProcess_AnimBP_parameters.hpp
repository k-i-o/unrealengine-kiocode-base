#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Crypo_PostProcess_AnimBP

#include "Basic.hpp"


namespace SDK::Params
{

// Function Crypo_PostProcess_AnimBP.Crypo_PostProcess_AnimBP_C.ExecuteUbergraph_Crypo_PostProcess_AnimBP
// 0x0018 (0x0018 - 0x0000)
struct Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2226[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBFGAnimation_Variables_Crypto*         CallFunc_GetVariables_Crypto_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP) == 0x000008, "Wrong alignment on Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP");
static_assert(sizeof(Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP) == 0x000018, "Wrong size on Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP");
static_assert(offsetof(Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP, EntryPoint) == 0x000000, "Member 'Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP, CallFunc_GetVariables_Crypto_ReturnValue) == 0x000008, "Member 'Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP::CallFunc_GetVariables_Crypto_ReturnValue' has a wrong offset!");
static_assert(offsetof(Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000010, "Member 'Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000014, "Member 'Crypo_PostProcess_AnimBP_C_ExecuteUbergraph_Crypo_PostProcess_AnimBP::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

}
