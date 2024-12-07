#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_RadarPoint_Player

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_RadarPoint_Player.HUD_RadarPoint_Player_C
// 0x0018 (0x0278 - 0x0260)
class UHUD_RadarPoint_Player_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerCharacter*                       Player;                                            // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MarkedForDestruction;                              // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Deactivate();
	void UpdatePoint(float Alpha, float VerticalDist, bool* Destroy);
	void Get3dPosition(struct FVector* Pos);
	void InitPoint(class URadarPointComponent* RadarComponent, bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_RadarPoint_Player_C">();
	}
	static class UHUD_RadarPoint_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_RadarPoint_Player_C>();
	}
};
static_assert(alignof(UHUD_RadarPoint_Player_C) == 0x000008, "Wrong alignment on UHUD_RadarPoint_Player_C");
static_assert(sizeof(UHUD_RadarPoint_Player_C) == 0x000278, "Wrong size on UHUD_RadarPoint_Player_C");
static_assert(offsetof(UHUD_RadarPoint_Player_C, Image_0) == 0x000260, "Member 'UHUD_RadarPoint_Player_C::Image_0' has a wrong offset!");
static_assert(offsetof(UHUD_RadarPoint_Player_C, Player) == 0x000268, "Member 'UHUD_RadarPoint_Player_C::Player' has a wrong offset!");
static_assert(offsetof(UHUD_RadarPoint_Player_C, MarkedForDestruction) == 0x000270, "Member 'UHUD_RadarPoint_Player_C::MarkedForDestruction' has a wrong offset!");

}

