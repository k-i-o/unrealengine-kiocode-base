#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoreScreen_Template

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoreScreen_Template.LoreScreen_Template_C
// 0x0098 (0x02F8 - 0x0260)
class ULoreScreen_Template_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       MovieIntro;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar;                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderImage;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Gradient;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MovieBackground;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULore_Content_Text_Header_C*            Lore_Content_Text_Header;                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MovieCanvas;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Holder;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_MovieCanvas;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             PutStuffHere;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Holder;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_OuterSizer;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                           MediaPlayer;                                       // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaTexture*                          MediaTexture;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnShown;                                           // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CanScroll;                                         // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnShown__DelegateSignature();
	void ExecuteUbergraph_LoreScreen_Template(int32 EntryPoint);
	void OnOpened(const class FString& OpenedUrl);
	void SetHeaderMaterial(class UMaterialInterface* Material, const struct FVector2D& Size);
	void SetHeaderImage(class UTexture2D* Param_HeaderImage, bool Strech, float VerticalFillPercent, bool UseGradient);
	void SetHeaderMovie(const class UMediaSource* MediaSource);
	void PreConstruct(bool IsDesignTime);
	void SetHeadline(const class FText& Param_SetHeadline, class UTexture2D* Icon, const struct FObjectiveMissionIcon& MissionIcon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoreScreen_Template_C">();
	}
	static class ULoreScreen_Template_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoreScreen_Template_C>();
	}
};
static_assert(alignof(ULoreScreen_Template_C) == 0x000008, "Wrong alignment on ULoreScreen_Template_C");
static_assert(sizeof(ULoreScreen_Template_C) == 0x0002F8, "Wrong size on ULoreScreen_Template_C");
static_assert(offsetof(ULoreScreen_Template_C, UberGraphFrame) == 0x000260, "Member 'ULoreScreen_Template_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, MovieIntro) == 0x000268, "Member 'ULoreScreen_Template_C::MovieIntro' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, Basic_Menu_ColorBar) == 0x000270, "Member 'ULoreScreen_Template_C::Basic_Menu_ColorBar' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, HeaderImage) == 0x000278, "Member 'ULoreScreen_Template_C::HeaderImage' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, Image_Background) == 0x000280, "Member 'ULoreScreen_Template_C::Image_Background' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, Image_Gradient) == 0x000288, "Member 'ULoreScreen_Template_C::Image_Gradient' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, Image_MovieBackground) == 0x000290, "Member 'ULoreScreen_Template_C::Image_MovieBackground' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, Lore_Content_Text_Header) == 0x000298, "Member 'ULoreScreen_Template_C::Lore_Content_Text_Header' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, MovieCanvas) == 0x0002A0, "Member 'ULoreScreen_Template_C::MovieCanvas' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, Overlay_Holder) == 0x0002A8, "Member 'ULoreScreen_Template_C::Overlay_Holder' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, Overlay_MovieCanvas) == 0x0002B0, "Member 'ULoreScreen_Template_C::Overlay_MovieCanvas' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, PutStuffHere) == 0x0002B8, "Member 'ULoreScreen_Template_C::PutStuffHere' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, ScrollBox_Holder) == 0x0002C0, "Member 'ULoreScreen_Template_C::ScrollBox_Holder' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, SizeBox_OuterSizer) == 0x0002C8, "Member 'ULoreScreen_Template_C::SizeBox_OuterSizer' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, MediaPlayer) == 0x0002D0, "Member 'ULoreScreen_Template_C::MediaPlayer' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, MediaTexture) == 0x0002D8, "Member 'ULoreScreen_Template_C::MediaTexture' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, OnShown) == 0x0002E0, "Member 'ULoreScreen_Template_C::OnShown' has a wrong offset!");
static_assert(offsetof(ULoreScreen_Template_C, CanScroll) == 0x0002F0, "Member 'ULoreScreen_Template_C::CanScroll' has a wrong offset!");

}

