#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_OpportunityOverheadDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BFGCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPW_OpportunityOverheadDisplay.BPW_OpportunityOverheadDisplay_C
// 0x0070 (0x0368 - 0x02F8)
class UBPW_OpportunityOverheadDisplay_C final : public UBFGWidget_HUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Spawn;                                             // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImageArrow;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageArrowEnemy;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageIcon;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_Crypto;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_Saucer;                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_OffScreen;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 InteractDecoratorString;                           // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   InteractDisplayString;                             // 0x0350(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BPW_OpportunityOverheadDisplay(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetRTB();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPW_OpportunityOverheadDisplay_C">();
	}
	static class UBPW_OpportunityOverheadDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPW_OpportunityOverheadDisplay_C>();
	}
};
static_assert(alignof(UBPW_OpportunityOverheadDisplay_C) == 0x000008, "Wrong alignment on UBPW_OpportunityOverheadDisplay_C");
static_assert(sizeof(UBPW_OpportunityOverheadDisplay_C) == 0x000368, "Wrong size on UBPW_OpportunityOverheadDisplay_C");
static_assert(offsetof(UBPW_OpportunityOverheadDisplay_C, UberGraphFrame) == 0x0002F8, "Member 'UBPW_OpportunityOverheadDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPW_OpportunityOverheadDisplay_C, Spawn) == 0x000300, "Member 'UBPW_OpportunityOverheadDisplay_C::Spawn' has a wrong offset!");
static_assert(offsetof(UBPW_OpportunityOverheadDisplay_C, ImageArrow) == 0x000308, "Member 'UBPW_OpportunityOverheadDisplay_C::ImageArrow' has a wrong offset!");
static_assert(offsetof(UBPW_OpportunityOverheadDisplay_C, ImageArrowEnemy) == 0x000310, "Member 'UBPW_OpportunityOverheadDisplay_C::ImageArrowEnemy' has a wrong offset!");
static_assert(offsetof(UBPW_OpportunityOverheadDisplay_C, ImageIcon) == 0x000318, "Member 'UBPW_OpportunityOverheadDisplay_C::ImageIcon' has a wrong offset!");
static_assert(offsetof(UBPW_OpportunityOverheadDisplay_C, ProgressBar) == 0x000320, "Member 'UBPW_OpportunityOverheadDisplay_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UBPW_OpportunityOverheadDisplay_C, RichTextBlock_Crypto) == 0x000328, "Member 'UBPW_OpportunityOverheadDisplay_C::RichTextBlock_Crypto' has a wrong offset!");
static_assert(offsetof(UBPW_OpportunityOverheadDisplay_C, RichTextBlock_Saucer) == 0x000330, "Member 'UBPW_OpportunityOverheadDisplay_C::RichTextBlock_Saucer' has a wrong offset!");
static_assert(offsetof(UBPW_OpportunityOverheadDisplay_C, VB_OffScreen) == 0x000338, "Member 'UBPW_OpportunityOverheadDisplay_C::VB_OffScreen' has a wrong offset!");
static_assert(offsetof(UBPW_OpportunityOverheadDisplay_C, InteractDecoratorString) == 0x000340, "Member 'UBPW_OpportunityOverheadDisplay_C::InteractDecoratorString' has a wrong offset!");
static_assert(offsetof(UBPW_OpportunityOverheadDisplay_C, InteractDisplayString) == 0x000350, "Member 'UBPW_OpportunityOverheadDisplay_C::InteractDisplayString' has a wrong offset!");

}

