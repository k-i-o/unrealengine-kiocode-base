#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_RadarPoint_Resupply

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function HUD_RadarPoint_Resupply.HUD_RadarPoint_Resupply_C.InitPoint
// 0x0018 (0x0018 - 0x0000)
struct HUD_RadarPoint_Resupply_C_InitPoint final
{
public:
	class URadarPointComponent*                   RadarComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_542D[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_RadarPoint_Resupply_C_InitPoint) == 0x000008, "Wrong alignment on HUD_RadarPoint_Resupply_C_InitPoint");
static_assert(sizeof(HUD_RadarPoint_Resupply_C_InitPoint) == 0x000018, "Wrong size on HUD_RadarPoint_Resupply_C_InitPoint");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_InitPoint, RadarComponent) == 0x000000, "Member 'HUD_RadarPoint_Resupply_C_InitPoint::RadarComponent' has a wrong offset!");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_InitPoint, Success) == 0x000008, "Member 'HUD_RadarPoint_Resupply_C_InitPoint::Success' has a wrong offset!");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_InitPoint, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x00000C, "Member 'HUD_RadarPoint_Resupply_C_InitPoint::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_InitPoint, CallFunc_Add_FloatFloat_ReturnValue) == 0x000010, "Member 'HUD_RadarPoint_Resupply_C_InitPoint::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function HUD_RadarPoint_Resupply.HUD_RadarPoint_Resupply_C.Get3dPosition
// 0x0028 (0x0028 - 0x0000)
struct HUD_RadarPoint_Resupply_C_Get3dPosition final
{
public:
	struct FVector                                Pos;                                               // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_542E[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_RadarPoint_Resupply_C_Get3dPosition) == 0x000008, "Wrong alignment on HUD_RadarPoint_Resupply_C_Get3dPosition");
static_assert(sizeof(HUD_RadarPoint_Resupply_C_Get3dPosition) == 0x000028, "Wrong size on HUD_RadarPoint_Resupply_C_Get3dPosition");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_Get3dPosition, Pos) == 0x000000, "Member 'HUD_RadarPoint_Resupply_C_Get3dPosition::Pos' has a wrong offset!");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_Get3dPosition, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'HUD_RadarPoint_Resupply_C_Get3dPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_Get3dPosition, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'HUD_RadarPoint_Resupply_C_Get3dPosition::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_Get3dPosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'HUD_RadarPoint_Resupply_C_Get3dPosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function HUD_RadarPoint_Resupply.HUD_RadarPoint_Resupply_C.UpdatePoint
// 0x0014 (0x0014 - 0x0000)
struct HUD_RadarPoint_Resupply_C_UpdatePoint final
{
public:
	float                                         Alpha;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VerticalDist;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Destroy;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_542F[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUD_RadarPoint_Resupply_C_UpdatePoint) == 0x000004, "Wrong alignment on HUD_RadarPoint_Resupply_C_UpdatePoint");
static_assert(sizeof(HUD_RadarPoint_Resupply_C_UpdatePoint) == 0x000014, "Wrong size on HUD_RadarPoint_Resupply_C_UpdatePoint");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_UpdatePoint, Alpha) == 0x000000, "Member 'HUD_RadarPoint_Resupply_C_UpdatePoint::Alpha' has a wrong offset!");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_UpdatePoint, VerticalDist) == 0x000004, "Member 'HUD_RadarPoint_Resupply_C_UpdatePoint::VerticalDist' has a wrong offset!");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_UpdatePoint, Destroy) == 0x000008, "Member 'HUD_RadarPoint_Resupply_C_UpdatePoint::Destroy' has a wrong offset!");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_UpdatePoint, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x00000C, "Member 'HUD_RadarPoint_Resupply_C_UpdatePoint::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_RadarPoint_Resupply_C_UpdatePoint, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000010, "Member 'HUD_RadarPoint_Resupply_C_UpdatePoint::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

}
