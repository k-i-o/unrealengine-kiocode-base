#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Menu_ServerStatus

#include "Basic.hpp"


namespace SDK::Params
{

// Function Menu_ServerStatus.Menu_ServerStatus_C.ExecuteUbergraph_Menu_ServerStatus
// 0x0018 (0x0018 - 0x0000)
struct Menu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDPlayerState*                        K2Node_CustomEvent_PlayerState;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGeneratedMission*                      K2Node_CustomEvent_Mission;                        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Menu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus) == 0x000008, "Wrong alignment on Menu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus");
static_assert(sizeof(Menu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus) == 0x000018, "Wrong size on Menu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus");
static_assert(offsetof(Menu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus, EntryPoint) == 0x000000, "Member 'Menu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus::EntryPoint' has a wrong offset!");
static_assert(offsetof(Menu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus, K2Node_CustomEvent_PlayerState) == 0x000008, "Member 'Menu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus::K2Node_CustomEvent_PlayerState' has a wrong offset!");
static_assert(offsetof(Menu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus, K2Node_CustomEvent_Mission) == 0x000010, "Member 'Menu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus::K2Node_CustomEvent_Mission' has a wrong offset!");

// Function Menu_ServerStatus.Menu_ServerStatus_C.OnMissionSelected
// 0x0008 (0x0008 - 0x0000)
struct Menu_ServerStatus_C_OnMissionSelected final
{
public:
	class UGeneratedMission*                      Mission;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Menu_ServerStatus_C_OnMissionSelected) == 0x000008, "Wrong alignment on Menu_ServerStatus_C_OnMissionSelected");
static_assert(sizeof(Menu_ServerStatus_C_OnMissionSelected) == 0x000008, "Wrong size on Menu_ServerStatus_C_OnMissionSelected");
static_assert(offsetof(Menu_ServerStatus_C_OnMissionSelected, Mission) == 0x000000, "Member 'Menu_ServerStatus_C_OnMissionSelected::Mission' has a wrong offset!");

// Function Menu_ServerStatus.Menu_ServerStatus_C.OnPlayerJoined
// 0x0008 (0x0008 - 0x0000)
struct Menu_ServerStatus_C_OnPlayerJoined final
{
public:
	class AFSDPlayerState*                        PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Menu_ServerStatus_C_OnPlayerJoined) == 0x000008, "Wrong alignment on Menu_ServerStatus_C_OnPlayerJoined");
static_assert(sizeof(Menu_ServerStatus_C_OnPlayerJoined) == 0x000008, "Wrong size on Menu_ServerStatus_C_OnPlayerJoined");
static_assert(offsetof(Menu_ServerStatus_C_OnPlayerJoined, PlayerState) == 0x000000, "Member 'Menu_ServerStatus_C_OnPlayerJoined::PlayerState' has a wrong offset!");

}
