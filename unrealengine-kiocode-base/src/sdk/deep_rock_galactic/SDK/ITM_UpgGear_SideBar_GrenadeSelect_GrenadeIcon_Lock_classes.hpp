#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C
// 0x0030 (0x0290 - 0x0260)
class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_1;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ValueLabel;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock(int32 EntryPoint);
	void SetData(int32 CharacterLevel);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C">();
	}
	static class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C>();
	}
};
static_assert(alignof(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C) == 0x000008, "Wrong alignment on UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C");
static_assert(sizeof(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C) == 0x000290, "Wrong size on UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C");
static_assert(offsetof(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C, UberGraphFrame) == 0x000260, "Member 'UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C, Border_1) == 0x000268, "Member 'UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::Border_1' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C, Image_1) == 0x000270, "Member 'UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::Image_1' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C, Image_3) == 0x000278, "Member 'UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::Image_3' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C, Image_4) == 0x000280, "Member 'UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::Image_4' has a wrong offset!");
static_assert(offsetof(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C, ValueLabel) == 0x000288, "Member 'UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C::ValueLabel' has a wrong offset!");

}
