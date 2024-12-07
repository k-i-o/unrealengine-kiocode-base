#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_DefaultLabel

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "ENUM_AcuminCondensedTypeface_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_DefaultLabel.HUD_DefaultLabel_C
// 0x0058 (0x02B8 - 0x0260)
class UHUD_DefaultLabel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Label;                                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0270(0x0018)(Edit, BlueprintVisible)
	int32                                         Font_Size;                                         // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_AcuminCondensedTypeface                  Typeface;                                          // 0x028C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETextJustify                                  Justification;                                     // 0x028D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36D8[0x2];                                     // 0x028E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFontOutlineSettings                   Outline_Settings;                                  // 0x0290(0x0020)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	float                                         Min_Desired_Width;                                 // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               TextColor;                                         // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HUD_DefaultLabel(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetText(const class FText& NewText);
	void SetFontSize(int32 InFontSize);
	void SetTypeFace(ENUM_AcuminCondensedTypeface Param_Typeface);
	void SetJustification(ETextJustify InJustification);
	void SetOutlineSettings(const struct FFontOutlineSettings& InFontInfo_OutlineSettings);
	void SetTextColor(ENUM_MenuColors ColorSelector);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_DefaultLabel_C">();
	}
	static class UHUD_DefaultLabel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_DefaultLabel_C>();
	}
};
static_assert(alignof(UHUD_DefaultLabel_C) == 0x000008, "Wrong alignment on UHUD_DefaultLabel_C");
static_assert(sizeof(UHUD_DefaultLabel_C) == 0x0002B8, "Wrong size on UHUD_DefaultLabel_C");
static_assert(offsetof(UHUD_DefaultLabel_C, UberGraphFrame) == 0x000260, "Member 'UHUD_DefaultLabel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_DefaultLabel_C, Label) == 0x000268, "Member 'UHUD_DefaultLabel_C::Label' has a wrong offset!");
static_assert(offsetof(UHUD_DefaultLabel_C, Text) == 0x000270, "Member 'UHUD_DefaultLabel_C::Text' has a wrong offset!");
static_assert(offsetof(UHUD_DefaultLabel_C, Font_Size) == 0x000288, "Member 'UHUD_DefaultLabel_C::Font_Size' has a wrong offset!");
static_assert(offsetof(UHUD_DefaultLabel_C, Typeface) == 0x00028C, "Member 'UHUD_DefaultLabel_C::Typeface' has a wrong offset!");
static_assert(offsetof(UHUD_DefaultLabel_C, Justification) == 0x00028D, "Member 'UHUD_DefaultLabel_C::Justification' has a wrong offset!");
static_assert(offsetof(UHUD_DefaultLabel_C, Outline_Settings) == 0x000290, "Member 'UHUD_DefaultLabel_C::Outline_Settings' has a wrong offset!");
static_assert(offsetof(UHUD_DefaultLabel_C, Min_Desired_Width) == 0x0002B0, "Member 'UHUD_DefaultLabel_C::Min_Desired_Width' has a wrong offset!");
static_assert(offsetof(UHUD_DefaultLabel_C, TextColor) == 0x0002B4, "Member 'UHUD_DefaultLabel_C::TextColor' has a wrong offset!");

}

