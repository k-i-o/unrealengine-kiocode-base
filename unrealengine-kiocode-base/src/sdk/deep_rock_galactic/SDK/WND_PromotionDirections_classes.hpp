#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WND_PromotionDirections

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WND_PromotionDirections.WND_PromotionDirections_C
// 0x0058 (0x02F8 - 0x02A0)
class UWND_PromotionDirections_C final : public UWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IntroOutro;                                        // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_Window_CutCorner_C*              Basic_Window_CutCorner;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Glow;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Outline;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Character;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_Special_ButtonCutCorner_C*         ITM_Special_ButtonCutCorner;                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PromotionTerminal;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextSizable*                       RichTextSizable_116;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Headline;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WND_PromotionDirections(int32 EntryPoint);
	void SetCharacter(class UPlayerCharacterID* Character);
	void BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void OnShown();
	void Finished_A0ADC2C4421D1470173667A7D2CBA086();
	bool ReceiveCanCloseWindow(class FName InActionName, const struct FKey& InKey, bool InIsMouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WND_PromotionDirections_C">();
	}
	static class UWND_PromotionDirections_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWND_PromotionDirections_C>();
	}
};
static_assert(alignof(UWND_PromotionDirections_C) == 0x000008, "Wrong alignment on UWND_PromotionDirections_C");
static_assert(sizeof(UWND_PromotionDirections_C) == 0x0002F8, "Wrong size on UWND_PromotionDirections_C");
static_assert(offsetof(UWND_PromotionDirections_C, UberGraphFrame) == 0x0002A0, "Member 'UWND_PromotionDirections_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWND_PromotionDirections_C, IntroOutro) == 0x0002A8, "Member 'UWND_PromotionDirections_C::IntroOutro' has a wrong offset!");
static_assert(offsetof(UWND_PromotionDirections_C, Basic_Window_CutCorner) == 0x0002B0, "Member 'UWND_PromotionDirections_C::Basic_Window_CutCorner' has a wrong offset!");
static_assert(offsetof(UWND_PromotionDirections_C, Border_Glow) == 0x0002B8, "Member 'UWND_PromotionDirections_C::Border_Glow' has a wrong offset!");
static_assert(offsetof(UWND_PromotionDirections_C, Border_Outline) == 0x0002C0, "Member 'UWND_PromotionDirections_C::Border_Outline' has a wrong offset!");
static_assert(offsetof(UWND_PromotionDirections_C, Image_BG) == 0x0002C8, "Member 'UWND_PromotionDirections_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UWND_PromotionDirections_C, Image_Character) == 0x0002D0, "Member 'UWND_PromotionDirections_C::Image_Character' has a wrong offset!");
static_assert(offsetof(UWND_PromotionDirections_C, ITM_Special_ButtonCutCorner) == 0x0002D8, "Member 'UWND_PromotionDirections_C::ITM_Special_ButtonCutCorner' has a wrong offset!");
static_assert(offsetof(UWND_PromotionDirections_C, PromotionTerminal) == 0x0002E0, "Member 'UWND_PromotionDirections_C::PromotionTerminal' has a wrong offset!");
static_assert(offsetof(UWND_PromotionDirections_C, RichTextSizable_116) == 0x0002E8, "Member 'UWND_PromotionDirections_C::RichTextSizable_116' has a wrong offset!");
static_assert(offsetof(UWND_PromotionDirections_C, TextBlock_Headline) == 0x0002F0, "Member 'UWND_PromotionDirections_C::TextBlock_Headline' has a wrong offset!");

}
