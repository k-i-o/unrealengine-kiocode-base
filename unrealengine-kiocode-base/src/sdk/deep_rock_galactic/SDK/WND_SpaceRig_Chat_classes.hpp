#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_SpaceRig_Chat

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WND_SpaceRig_Chat.WND_SpaceRig_Chat_C
// 0x0008 (0x0268 - 0x0260)
class UWND_SpaceRig_Chat_C final : public UUserWidget
{
public:
	class UHUD_Chat_C*                            HUD_Chat;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WND_SpaceRig_Chat_C">();
	}
	static class UWND_SpaceRig_Chat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWND_SpaceRig_Chat_C>();
	}
};
static_assert(alignof(UWND_SpaceRig_Chat_C) == 0x000008, "Wrong alignment on UWND_SpaceRig_Chat_C");
static_assert(sizeof(UWND_SpaceRig_Chat_C) == 0x000268, "Wrong size on UWND_SpaceRig_Chat_C");
static_assert(offsetof(UWND_SpaceRig_Chat_C, HUD_Chat) == 0x000260, "Member 'UWND_SpaceRig_Chat_C::HUD_Chat' has a wrong offset!");

}

