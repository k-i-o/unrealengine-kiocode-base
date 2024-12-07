#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LCD_MissionReadout_NoMissionSelected

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LCD_MissionReadout_NoMissionSelected.LCD_MissionReadout_NoMissionSelected_C
// 0x0010 (0x0270 - 0x0260)
class ULCD_MissionReadout_NoMissionSelected_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_41;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_LCD_MissionReadout_NoMissionSelected(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LCD_MissionReadout_NoMissionSelected_C">();
	}
	static class ULCD_MissionReadout_NoMissionSelected_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULCD_MissionReadout_NoMissionSelected_C>();
	}
};
static_assert(alignof(ULCD_MissionReadout_NoMissionSelected_C) == 0x000008, "Wrong alignment on ULCD_MissionReadout_NoMissionSelected_C");
static_assert(sizeof(ULCD_MissionReadout_NoMissionSelected_C) == 0x000270, "Wrong size on ULCD_MissionReadout_NoMissionSelected_C");
static_assert(offsetof(ULCD_MissionReadout_NoMissionSelected_C, UberGraphFrame) == 0x000260, "Member 'ULCD_MissionReadout_NoMissionSelected_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULCD_MissionReadout_NoMissionSelected_C, Image_41) == 0x000268, "Member 'ULCD_MissionReadout_NoMissionSelected_C::Image_41' has a wrong offset!");

}

