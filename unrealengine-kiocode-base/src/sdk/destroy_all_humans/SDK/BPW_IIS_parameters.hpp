#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_IIS

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BPW_IIS.BPW_IIS_C.ExecuteUbergraph_BPW_IIS
// 0x0038 (0x0038 - 0x0000)
struct BPW_IIS_C_ExecuteUbergraph_BPW_IIS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2373[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue1;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue2;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ComputeFadingSpeed_ReturnValue;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2374[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue3;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPW_IIS_C_ExecuteUbergraph_BPW_IIS) == 0x000008, "Wrong alignment on BPW_IIS_C_ExecuteUbergraph_BPW_IIS");
static_assert(sizeof(BPW_IIS_C_ExecuteUbergraph_BPW_IIS) == 0x000038, "Wrong size on BPW_IIS_C_ExecuteUbergraph_BPW_IIS");
static_assert(offsetof(BPW_IIS_C_ExecuteUbergraph_BPW_IIS, EntryPoint) == 0x000000, "Member 'BPW_IIS_C_ExecuteUbergraph_BPW_IIS::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPW_IIS_C_ExecuteUbergraph_BPW_IIS, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BPW_IIS_C_ExecuteUbergraph_BPW_IIS::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BPW_IIS_C_ExecuteUbergraph_BPW_IIS, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BPW_IIS_C_ExecuteUbergraph_BPW_IIS::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPW_IIS_C_ExecuteUbergraph_BPW_IIS, CallFunc_PlayAnimation_ReturnValue1) == 0x000010, "Member 'BPW_IIS_C_ExecuteUbergraph_BPW_IIS::CallFunc_PlayAnimation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BPW_IIS_C_ExecuteUbergraph_BPW_IIS, CallFunc_PlayAnimation_ReturnValue2) == 0x000018, "Member 'BPW_IIS_C_ExecuteUbergraph_BPW_IIS::CallFunc_PlayAnimation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BPW_IIS_C_ExecuteUbergraph_BPW_IIS, CallFunc_ComputeFadingSpeed_ReturnValue) == 0x000020, "Member 'BPW_IIS_C_ExecuteUbergraph_BPW_IIS::CallFunc_ComputeFadingSpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPW_IIS_C_ExecuteUbergraph_BPW_IIS, CallFunc_PlayAnimation_ReturnValue3) == 0x000028, "Member 'BPW_IIS_C_ExecuteUbergraph_BPW_IIS::CallFunc_PlayAnimation_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BPW_IIS_C_ExecuteUbergraph_BPW_IIS, Temp_bool_IsClosed_Variable) == 0x000030, "Member 'BPW_IIS_C_ExecuteUbergraph_BPW_IIS::Temp_bool_IsClosed_Variable' has a wrong offset!");

// Function BPW_IIS.BPW_IIS_C.OnMouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct BPW_IIS_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
static_assert(alignof(BPW_IIS_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on BPW_IIS_C_OnMouseButtonDown");
static_assert(sizeof(BPW_IIS_C_OnMouseButtonDown) == 0x000218, "Wrong size on BPW_IIS_C_OnMouseButtonDown");
static_assert(offsetof(BPW_IIS_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'BPW_IIS_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(BPW_IIS_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'BPW_IIS_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(BPW_IIS_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'BPW_IIS_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(BPW_IIS_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000160, "Member 'BPW_IIS_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

}

