#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OBJ_1st_PointExtraction

#include "Basic.hpp"

#include "FSD_structs.hpp"


namespace SDK::Params
{

// Function OBJ_1st_PointExtraction.OBJ_1st_PointExtraction_C.GetMissionIcon
// 0x0030 (0x0030 - 0x0000)
struct OBJ_1st_PointExtraction_C_GetMissionIcon final
{
public:
	struct FObjectiveMissionIcon                  ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FObjectiveMissionIcon                  K2Node_MakeStruct_ObjectiveMissionIcon;            // 0x0018(0x0018)(NoDestructor)
};
static_assert(alignof(OBJ_1st_PointExtraction_C_GetMissionIcon) == 0x000008, "Wrong alignment on OBJ_1st_PointExtraction_C_GetMissionIcon");
static_assert(sizeof(OBJ_1st_PointExtraction_C_GetMissionIcon) == 0x000030, "Wrong size on OBJ_1st_PointExtraction_C_GetMissionIcon");
static_assert(offsetof(OBJ_1st_PointExtraction_C_GetMissionIcon, ReturnValue) == 0x000000, "Member 'OBJ_1st_PointExtraction_C_GetMissionIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(OBJ_1st_PointExtraction_C_GetMissionIcon, K2Node_MakeStruct_ObjectiveMissionIcon) == 0x000018, "Member 'OBJ_1st_PointExtraction_C_GetMissionIcon::K2Node_MakeStruct_ObjectiveMissionIcon' has a wrong offset!");

}
