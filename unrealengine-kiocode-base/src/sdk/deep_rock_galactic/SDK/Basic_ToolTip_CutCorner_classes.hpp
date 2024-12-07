#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_ToolTip_CutCorner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C
// 0x0088 (0x02E8 - 0x0260)
class UBasic_ToolTip_CutCorner_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimFadeIn;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_BG;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_ToolTipHeadline;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_TooltipText;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Outline;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Content;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ToolTipSizer;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Headline;                                          // 0x02A8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   Text;                                              // 0x02C0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector2D                              Position;                                          // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Alignment;                                         // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Basic_ToolTip_CutCorner(int32 EntryPoint);
	void Set_Tool_Tip_Owner(class UWidget* Owner);
	void PreConstruct(bool IsDesignTime);
	void SetTarget(class UWidget* Target_Widget);
	void SetText(const class FText& Param_Headline, const class FText& Param_Text);
	void SetPostionAndAlignment(const struct FVector2D& InPosition, const struct FVector2D& InAlignment);
	void SetMinWidth(float MinWidth);
	void SetMaxWidth(float MaxWidth);
	void SetWidth(float InWidthOverride);
	void FadeIn(float Duration);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Basic_ToolTip_CutCorner_C">();
	}
	static class UBasic_ToolTip_CutCorner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasic_ToolTip_CutCorner_C>();
	}
};
static_assert(alignof(UBasic_ToolTip_CutCorner_C) == 0x000008, "Wrong alignment on UBasic_ToolTip_CutCorner_C");
static_assert(sizeof(UBasic_ToolTip_CutCorner_C) == 0x0002E8, "Wrong size on UBasic_ToolTip_CutCorner_C");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, UberGraphFrame) == 0x000260, "Member 'UBasic_ToolTip_CutCorner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, AnimFadeIn) == 0x000268, "Member 'UBasic_ToolTip_CutCorner_C::AnimFadeIn' has a wrong offset!");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, Intro) == 0x000270, "Member 'UBasic_ToolTip_CutCorner_C::Intro' has a wrong offset!");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, Border_BG) == 0x000278, "Member 'UBasic_ToolTip_CutCorner_C::Border_BG' has a wrong offset!");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, DATA_ToolTipHeadline) == 0x000280, "Member 'UBasic_ToolTip_CutCorner_C::DATA_ToolTipHeadline' has a wrong offset!");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, DATA_TooltipText) == 0x000288, "Member 'UBasic_ToolTip_CutCorner_C::DATA_TooltipText' has a wrong offset!");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, Image_Outline) == 0x000290, "Member 'UBasic_ToolTip_CutCorner_C::Image_Outline' has a wrong offset!");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, Overlay_Content) == 0x000298, "Member 'UBasic_ToolTip_CutCorner_C::Overlay_Content' has a wrong offset!");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, ToolTipSizer) == 0x0002A0, "Member 'UBasic_ToolTip_CutCorner_C::ToolTipSizer' has a wrong offset!");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, Headline) == 0x0002A8, "Member 'UBasic_ToolTip_CutCorner_C::Headline' has a wrong offset!");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, Text) == 0x0002C0, "Member 'UBasic_ToolTip_CutCorner_C::Text' has a wrong offset!");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, Position) == 0x0002D8, "Member 'UBasic_ToolTip_CutCorner_C::Position' has a wrong offset!");
static_assert(offsetof(UBasic_ToolTip_CutCorner_C, Alignment) == 0x0002E0, "Member 'UBasic_ToolTip_CutCorner_C::Alignment' has a wrong offset!");

}

