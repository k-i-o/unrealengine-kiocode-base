#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MobilityStatusBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MobilityStatusBar.WBP_MobilityStatusBar_C
// 0x0020 (0x0250 - 0x0230)
class UWBP_MobilityStatusBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PingUIAnim;                                        // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                           StatusBar;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusPingImg;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_MobilityStatusBar(int32 EntryPoint);
	void PingValueFull();
	void SetPercent(float InPercent, bool bInitial);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MobilityStatusBar_C">();
	}
	static class UWBP_MobilityStatusBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MobilityStatusBar_C>();
	}
};
static_assert(alignof(UWBP_MobilityStatusBar_C) == 0x000008, "Wrong alignment on UWBP_MobilityStatusBar_C");
static_assert(sizeof(UWBP_MobilityStatusBar_C) == 0x000250, "Wrong size on UWBP_MobilityStatusBar_C");
static_assert(offsetof(UWBP_MobilityStatusBar_C, UberGraphFrame) == 0x000230, "Member 'UWBP_MobilityStatusBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MobilityStatusBar_C, PingUIAnim) == 0x000238, "Member 'UWBP_MobilityStatusBar_C::PingUIAnim' has a wrong offset!");
static_assert(offsetof(UWBP_MobilityStatusBar_C, StatusBar) == 0x000240, "Member 'UWBP_MobilityStatusBar_C::StatusBar' has a wrong offset!");
static_assert(offsetof(UWBP_MobilityStatusBar_C, StatusPingImg) == 0x000248, "Member 'UWBP_MobilityStatusBar_C::StatusPingImg' has a wrong offset!");

}

