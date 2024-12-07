#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_HealthBar

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_HealthBar.ITM_HealthBar_C
// 0x0020 (0x0280 - 0x0260)
class UITM_HealthBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           HealthProgress;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      Image_Health;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ENUM_MenuColors                               SegmentInnerTint;                                  // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ITM_HealthBar(int32 EntryPoint);
	void SetHealth(float Percent);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_HealthBar_C">();
	}
	static class UITM_HealthBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_HealthBar_C>();
	}
};
static_assert(alignof(UITM_HealthBar_C) == 0x000008, "Wrong alignment on UITM_HealthBar_C");
static_assert(sizeof(UITM_HealthBar_C) == 0x000280, "Wrong size on UITM_HealthBar_C");
static_assert(offsetof(UITM_HealthBar_C, UberGraphFrame) == 0x000260, "Member 'UITM_HealthBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_HealthBar_C, HealthProgress) == 0x000268, "Member 'UITM_HealthBar_C::HealthProgress' has a wrong offset!");
static_assert(offsetof(UITM_HealthBar_C, Image_Health) == 0x000270, "Member 'UITM_HealthBar_C::Image_Health' has a wrong offset!");
static_assert(offsetof(UITM_HealthBar_C, SegmentInnerTint) == 0x000278, "Member 'UITM_HealthBar_C::SegmentInnerTint' has a wrong offset!");

}

