#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LCD_ActiveEventEndDateDisplay

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LCD_ActiveEventEndDateDisplay.LCD_ActiveEventEndDateDisplay_C
// 0x0100 (0x0360 - 0x0260)
class ULCD_ActiveEventEndDateDisplay_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade_Out;                                          // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             CountdownText;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EventEndBox;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EventImageLeft;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EventImageRight;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EventNameBox;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_41;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDateTime                              EndDate;                                           // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Refresh_Handle;                                    // 0x02A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CurrentDisplayedEventImage;                        // 0x02B0(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Active_Displayed_Event_index;                      // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F2A[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFSDEvent*>                      ActiveEvents;                                      // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           CheckForEventHandle;                               // 0x0350(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CheckForEventCount;                                // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SequenceEvent__ENTRYPOINTLCD_ActiveEventEndDateDisplay_0();
	void ChangeEvent();
	void GetEventToDisplay(class UFSDEvent** EventToDisplay);
	void CheckForActiveEvents();
	void Refresh();
	void Construct();
	void ExecuteUbergraph_LCD_ActiveEventEndDateDisplay(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LCD_ActiveEventEndDateDisplay_C">();
	}
	static class ULCD_ActiveEventEndDateDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULCD_ActiveEventEndDateDisplay_C>();
	}
};
static_assert(alignof(ULCD_ActiveEventEndDateDisplay_C) == 0x000008, "Wrong alignment on ULCD_ActiveEventEndDateDisplay_C");
static_assert(sizeof(ULCD_ActiveEventEndDateDisplay_C) == 0x000360, "Wrong size on ULCD_ActiveEventEndDateDisplay_C");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, UberGraphFrame) == 0x000260, "Member 'ULCD_ActiveEventEndDateDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, Fade_Out) == 0x000268, "Member 'ULCD_ActiveEventEndDateDisplay_C::Fade_Out' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, CountdownText) == 0x000270, "Member 'ULCD_ActiveEventEndDateDisplay_C::CountdownText' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, EventEndBox) == 0x000278, "Member 'ULCD_ActiveEventEndDateDisplay_C::EventEndBox' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, EventImageLeft) == 0x000280, "Member 'ULCD_ActiveEventEndDateDisplay_C::EventImageLeft' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, EventImageRight) == 0x000288, "Member 'ULCD_ActiveEventEndDateDisplay_C::EventImageRight' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, EventNameBox) == 0x000290, "Member 'ULCD_ActiveEventEndDateDisplay_C::EventNameBox' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, Image_41) == 0x000298, "Member 'ULCD_ActiveEventEndDateDisplay_C::Image_41' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, EndDate) == 0x0002A0, "Member 'ULCD_ActiveEventEndDateDisplay_C::EndDate' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, Refresh_Handle) == 0x0002A8, "Member 'ULCD_ActiveEventEndDateDisplay_C::Refresh_Handle' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, CurrentDisplayedEventImage) == 0x0002B0, "Member 'ULCD_ActiveEventEndDateDisplay_C::CurrentDisplayedEventImage' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, Active_Displayed_Event_index) == 0x000338, "Member 'ULCD_ActiveEventEndDateDisplay_C::Active_Displayed_Event_index' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, ActiveEvents) == 0x000340, "Member 'ULCD_ActiveEventEndDateDisplay_C::ActiveEvents' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, CheckForEventHandle) == 0x000350, "Member 'ULCD_ActiveEventEndDateDisplay_C::CheckForEventHandle' has a wrong offset!");
static_assert(offsetof(ULCD_ActiveEventEndDateDisplay_C, CheckForEventCount) == 0x000358, "Member 'ULCD_ActiveEventEndDateDisplay_C::CheckForEventCount' has a wrong offset!");

}

