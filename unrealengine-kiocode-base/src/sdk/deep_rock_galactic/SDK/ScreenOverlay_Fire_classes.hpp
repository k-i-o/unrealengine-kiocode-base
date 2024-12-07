#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScreenOverlay_Fire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ScreenOverlay_Fire.ScreenOverlay_Fire_C
// 0x0030 (0x02A0 - 0x0270)
class UScreenOverlay_Fire_C final : public UPlayerAfflictionOverlayWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimJitter;                                        // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimPulse;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimFading;                                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 AfflictionImage;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         FadeDuration;                                      // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ScreenOverlay_Fire(int32 EntryPoint);
	void ReceiveEndOverlay();
	void Construct();
	void ReceiveBeginOverlay(class UTexture2D* InTexture, const struct FLinearColor& InTint);
	void OnAnimFadingFinished();
	void Play_Fade(EUMGSequencePlayMode PlayMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScreenOverlay_Fire_C">();
	}
	static class UScreenOverlay_Fire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScreenOverlay_Fire_C>();
	}
};
static_assert(alignof(UScreenOverlay_Fire_C) == 0x000008, "Wrong alignment on UScreenOverlay_Fire_C");
static_assert(sizeof(UScreenOverlay_Fire_C) == 0x0002A0, "Wrong size on UScreenOverlay_Fire_C");
static_assert(offsetof(UScreenOverlay_Fire_C, UberGraphFrame) == 0x000270, "Member 'UScreenOverlay_Fire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScreenOverlay_Fire_C, AnimJitter) == 0x000278, "Member 'UScreenOverlay_Fire_C::AnimJitter' has a wrong offset!");
static_assert(offsetof(UScreenOverlay_Fire_C, AnimPulse) == 0x000280, "Member 'UScreenOverlay_Fire_C::AnimPulse' has a wrong offset!");
static_assert(offsetof(UScreenOverlay_Fire_C, AnimFading) == 0x000288, "Member 'UScreenOverlay_Fire_C::AnimFading' has a wrong offset!");
static_assert(offsetof(UScreenOverlay_Fire_C, AfflictionImage) == 0x000290, "Member 'UScreenOverlay_Fire_C::AfflictionImage' has a wrong offset!");
static_assert(offsetof(UScreenOverlay_Fire_C, FadeDuration) == 0x000298, "Member 'UScreenOverlay_Fire_C::FadeDuration' has a wrong offset!");

}

