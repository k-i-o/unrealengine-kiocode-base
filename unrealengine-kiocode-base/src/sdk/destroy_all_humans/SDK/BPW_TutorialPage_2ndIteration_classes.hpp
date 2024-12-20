#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPW_TutorialPage_2ndIteration

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BFGCore_structs.hpp"
#include "BFGCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPW_TutorialPage_2ndIteration.BPW_TutorialPage_2ndIteration_C
// 0x01E8 (0x0570 - 0x0388)
class UBPW_TutorialPage_2ndIteration_C final : public UBFGWidget_TutorialPage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Animation_Expand_Description_Short;                // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Shrink_Description_Short;                // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Frame_FadeOut;                           // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Frame_FadeIn;                            // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Hide;                                    // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Show;                                    // 0x03B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Expand_Hint;                             // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Shrink_Hint;                             // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Expand_Description;                      // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Expand_Details;                          // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Expand_Title;                            // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Shrink_Title;                            // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Shrink_Description;                      // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_Shrink_Details;                          // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Back;                                           // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Hints;                                          // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Title;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 I_Tex2D_Textbox_objectives_blured;                 // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Video;                                       // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Background;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_BackgroundFaded;                               // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_BackgroundFadedHighlighted;                    // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_BackgroundHighlighted;                         // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Icon;                                          // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_IconNotifier;                                  // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Description;                               // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Description_Short;                         // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Details;                                   // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_HintDetailed;                              // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_HintDismiss;                               // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Main;                                      // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_1;                                   // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RTB_Description;                                   // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RTB_DescriptionShort;                              // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RTB_Details;                                       // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RTB_HintDetailed;                                  // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RTB_Quote;                                         // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RTB_TitleLong;                                     // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RTB_TitleShort;                                    // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_IconNotifier;                                   // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_1;                                         // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_MinWidth;                                   // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_MinWidth_Short;                             // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBFGDynamicSpacer*                      SpacerFlash;                                       // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBFGDynamicSpacer*                      SpacerMain;                                        // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Content;                                        // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Details;                                        // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Frame;                                          // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBFGWidgetAnimationState*               FadingState_Details;                               // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBFGWidgetAnimationState*               FadingState_Description;                           // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBFGWidgetAnimationState*               FadingState_Title;                                 // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBFGWidgetAnimationState*               FadingState_Hint;                                  // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBFGWidgetAnimationState*               FadingState_Main;                                  // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                           MediaPlayer;                                       // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBFGWidgetAnimationState*               FadingState_Frame;                                 // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBFGWidgetAnimationState*               FadingState_Description_Short;                     // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpacerWidth_Description;                           // 0x0568(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPW_TutorialPage_2ndIteration(int32 EntryPoint);
	void UpdateShortTitle(const class FText& _strTitle);
	void OnFadingBegin_Main(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void OnFadingBegin_Frame(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void OnFadingBegin_Hint(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void OnFadingBegin_Title(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void OnFadingBegin_Details(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void OnFadingBegin_Description(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void OnFadingBegin_DescriptionShort(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void EnableDetailedHint(bool _bEnabled);
	void EnableDismissHint(bool _bEnabled);
	void UpdateShortDescriptionText(const class FText& _strText);
	void OnFadingEnd_DescriptionShort(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void UpdateLongTitle(const class FText& _strTitle);
	void UpdateDetailText(const class FText& _strText, const class FText& _strQuote);
	void ChangeStyleHinted(bool _bForce);
	void OnFadingEnd_Frame(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void SetInputActions(class UOverlay* _pOverlayInputActions);
	void UpdateDescriptionText(const class FText& _strText);
	void EnableFrameVisibility(bool _bValue);
	void UpdateIconBrush(const struct FSlateBrush& _iconBrush);
	void RebuildLayout();
	void CustomInit();
	void UpdateMedia(class UMediaSource* _pMediaSource);
	void OnFadingEnd_Main(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void OnFadingEnd_Hint(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void OnFadingEnd_Title(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void OnFadingEnd_Description(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void OnFadingEnd_Details(class UBFGWidgetAnimationState* InState, EBFGWidgetAnimationSubState InSubState);
	void ChangeStyleDetailed(bool _bForce);
	void ChangeStyleCompact(bool _bForce);
	void ChangeStyleCollapsed(bool _bForce);
	void ChangeStyleNormal(bool _bForce);
	void InitFadingStates();
	class FText GetInputActionUseTypeText(EBFGInputActionWidgetType _eType, float _holdTime);
	void SetNormalFadingState(bool InForce);

	struct FVector2D ComputeAbsoluteIconPosition() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPW_TutorialPage_2ndIteration_C">();
	}
	static class UBPW_TutorialPage_2ndIteration_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPW_TutorialPage_2ndIteration_C>();
	}
};
static_assert(alignof(UBPW_TutorialPage_2ndIteration_C) == 0x000008, "Wrong alignment on UBPW_TutorialPage_2ndIteration_C");
static_assert(sizeof(UBPW_TutorialPage_2ndIteration_C) == 0x000570, "Wrong size on UBPW_TutorialPage_2ndIteration_C");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, UberGraphFrame) == 0x000388, "Member 'UBPW_TutorialPage_2ndIteration_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Expand_Description_Short) == 0x000390, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Expand_Description_Short' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Shrink_Description_Short) == 0x000398, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Shrink_Description_Short' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Frame_FadeOut) == 0x0003A0, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Frame_FadeOut' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Frame_FadeIn) == 0x0003A8, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Frame_FadeIn' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Hide) == 0x0003B0, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Hide' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Show) == 0x0003B8, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Show' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Expand_Hint) == 0x0003C0, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Expand_Hint' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Shrink_Hint) == 0x0003C8, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Shrink_Hint' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Expand_Description) == 0x0003D0, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Expand_Description' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Expand_Details) == 0x0003D8, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Expand_Details' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Expand_Title) == 0x0003E0, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Expand_Title' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Shrink_Title) == 0x0003E8, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Shrink_Title' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Shrink_Description) == 0x0003F0, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Shrink_Description' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Animation_Shrink_Details) == 0x0003F8, "Member 'UBPW_TutorialPage_2ndIteration_C::Animation_Shrink_Details' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, HB_Back) == 0x000400, "Member 'UBPW_TutorialPage_2ndIteration_C::HB_Back' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, HB_Hints) == 0x000408, "Member 'UBPW_TutorialPage_2ndIteration_C::HB_Hints' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, HB_Title) == 0x000410, "Member 'UBPW_TutorialPage_2ndIteration_C::HB_Title' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, I_Tex2D_Textbox_objectives_blured) == 0x000418, "Member 'UBPW_TutorialPage_2ndIteration_C::I_Tex2D_Textbox_objectives_blured' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Image_2) == 0x000420, "Member 'UBPW_TutorialPage_2ndIteration_C::Image_2' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Image_3) == 0x000428, "Member 'UBPW_TutorialPage_2ndIteration_C::Image_3' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Image_4) == 0x000430, "Member 'UBPW_TutorialPage_2ndIteration_C::Image_4' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Image_Video) == 0x000438, "Member 'UBPW_TutorialPage_2ndIteration_C::Image_Video' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, IMG_Background) == 0x000440, "Member 'UBPW_TutorialPage_2ndIteration_C::IMG_Background' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, IMG_BackgroundFaded) == 0x000448, "Member 'UBPW_TutorialPage_2ndIteration_C::IMG_BackgroundFaded' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, IMG_BackgroundFadedHighlighted) == 0x000450, "Member 'UBPW_TutorialPage_2ndIteration_C::IMG_BackgroundFadedHighlighted' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, IMG_BackgroundHighlighted) == 0x000458, "Member 'UBPW_TutorialPage_2ndIteration_C::IMG_BackgroundHighlighted' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, IMG_Icon) == 0x000460, "Member 'UBPW_TutorialPage_2ndIteration_C::IMG_Icon' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, IMG_IconNotifier) == 0x000468, "Member 'UBPW_TutorialPage_2ndIteration_C::IMG_IconNotifier' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Overlay_Description) == 0x000470, "Member 'UBPW_TutorialPage_2ndIteration_C::Overlay_Description' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Overlay_Description_Short) == 0x000478, "Member 'UBPW_TutorialPage_2ndIteration_C::Overlay_Description_Short' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Overlay_Details) == 0x000480, "Member 'UBPW_TutorialPage_2ndIteration_C::Overlay_Details' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Overlay_HintDetailed) == 0x000488, "Member 'UBPW_TutorialPage_2ndIteration_C::Overlay_HintDetailed' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Overlay_HintDismiss) == 0x000490, "Member 'UBPW_TutorialPage_2ndIteration_C::Overlay_HintDismiss' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Overlay_Main) == 0x000498, "Member 'UBPW_TutorialPage_2ndIteration_C::Overlay_Main' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, RichTextBlock_1) == 0x0004A0, "Member 'UBPW_TutorialPage_2ndIteration_C::RichTextBlock_1' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, RTB_Description) == 0x0004A8, "Member 'UBPW_TutorialPage_2ndIteration_C::RTB_Description' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, RTB_DescriptionShort) == 0x0004B0, "Member 'UBPW_TutorialPage_2ndIteration_C::RTB_DescriptionShort' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, RTB_Details) == 0x0004B8, "Member 'UBPW_TutorialPage_2ndIteration_C::RTB_Details' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, RTB_HintDetailed) == 0x0004C0, "Member 'UBPW_TutorialPage_2ndIteration_C::RTB_HintDetailed' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, RTB_Quote) == 0x0004C8, "Member 'UBPW_TutorialPage_2ndIteration_C::RTB_Quote' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, RTB_TitleLong) == 0x0004D0, "Member 'UBPW_TutorialPage_2ndIteration_C::RTB_TitleLong' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, RTB_TitleShort) == 0x0004D8, "Member 'UBPW_TutorialPage_2ndIteration_C::RTB_TitleShort' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, SB_IconNotifier) == 0x0004E0, "Member 'UBPW_TutorialPage_2ndIteration_C::SB_IconNotifier' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, SizeBox_1) == 0x0004E8, "Member 'UBPW_TutorialPage_2ndIteration_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Spacer_MinWidth) == 0x0004F0, "Member 'UBPW_TutorialPage_2ndIteration_C::Spacer_MinWidth' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, Spacer_MinWidth_Short) == 0x0004F8, "Member 'UBPW_TutorialPage_2ndIteration_C::Spacer_MinWidth_Short' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, SpacerFlash) == 0x000500, "Member 'UBPW_TutorialPage_2ndIteration_C::SpacerFlash' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, SpacerMain) == 0x000508, "Member 'UBPW_TutorialPage_2ndIteration_C::SpacerMain' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, VB_Content) == 0x000510, "Member 'UBPW_TutorialPage_2ndIteration_C::VB_Content' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, VB_Details) == 0x000518, "Member 'UBPW_TutorialPage_2ndIteration_C::VB_Details' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, VB_Frame) == 0x000520, "Member 'UBPW_TutorialPage_2ndIteration_C::VB_Frame' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, FadingState_Details) == 0x000528, "Member 'UBPW_TutorialPage_2ndIteration_C::FadingState_Details' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, FadingState_Description) == 0x000530, "Member 'UBPW_TutorialPage_2ndIteration_C::FadingState_Description' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, FadingState_Title) == 0x000538, "Member 'UBPW_TutorialPage_2ndIteration_C::FadingState_Title' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, FadingState_Hint) == 0x000540, "Member 'UBPW_TutorialPage_2ndIteration_C::FadingState_Hint' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, FadingState_Main) == 0x000548, "Member 'UBPW_TutorialPage_2ndIteration_C::FadingState_Main' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, MediaPlayer) == 0x000550, "Member 'UBPW_TutorialPage_2ndIteration_C::MediaPlayer' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, FadingState_Frame) == 0x000558, "Member 'UBPW_TutorialPage_2ndIteration_C::FadingState_Frame' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, FadingState_Description_Short) == 0x000560, "Member 'UBPW_TutorialPage_2ndIteration_C::FadingState_Description_Short' has a wrong offset!");
static_assert(offsetof(UBPW_TutorialPage_2ndIteration_C, SpacerWidth_Description) == 0x000568, "Member 'UBPW_TutorialPage_2ndIteration_C::SpacerWidth_Description' has a wrong offset!");

}

