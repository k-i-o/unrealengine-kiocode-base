#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PRW_LockedWeapon

#include "Basic.hpp"


namespace SDK::Params
{

// Function PRW_LockedWeapon.PRW_LockedWeapon_C.ExecuteUbergraph_PRW_LockedWeapon
// 0x0020 (0x0020 - 0x0000)
struct PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3433[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      K2Node_DynamicCast_AsUI_Image_Tinted;              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon) == 0x000008, "Wrong alignment on PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon");
static_assert(sizeof(PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon) == 0x000020, "Wrong size on PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon");
static_assert(offsetof(PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon, EntryPoint) == 0x000000, "Member 'PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon::EntryPoint' has a wrong offset!");
static_assert(offsetof(PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000008, "Member 'PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon, K2Node_DynamicCast_AsUI_Image_Tinted) == 0x000010, "Member 'PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon::K2Node_DynamicCast_AsUI_Image_Tinted' has a wrong offset!");
static_assert(offsetof(PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

