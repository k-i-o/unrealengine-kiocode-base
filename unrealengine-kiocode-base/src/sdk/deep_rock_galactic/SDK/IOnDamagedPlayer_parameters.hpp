#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IOnDamagedPlayer

#include "Basic.hpp"


namespace SDK::Params
{

// Function IOnDamagedPlayer.IOnDamagedPlayer_C.OnDamagedPlayer
// 0x0010 (0x0010 - 0x0000)
struct IOnDamagedPlayer_C_OnDamagedPlayer final
{
public:
	class APlayerCharacter*                       Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Amount;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IOnDamagedPlayer_C_OnDamagedPlayer) == 0x000008, "Wrong alignment on IOnDamagedPlayer_C_OnDamagedPlayer");
static_assert(sizeof(IOnDamagedPlayer_C_OnDamagedPlayer) == 0x000010, "Wrong size on IOnDamagedPlayer_C_OnDamagedPlayer");
static_assert(offsetof(IOnDamagedPlayer_C_OnDamagedPlayer, Player) == 0x000000, "Member 'IOnDamagedPlayer_C_OnDamagedPlayer::Player' has a wrong offset!");
static_assert(offsetof(IOnDamagedPlayer_C_OnDamagedPlayer, Amount) == 0x000008, "Member 'IOnDamagedPlayer_C_OnDamagedPlayer::Amount' has a wrong offset!");

}
