#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TickerText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_TickerText.UI_TickerText_C
// 0x0048 (0x02A8 - 0x0260)
class UUI_TickerText_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextSizable*                       RichTextSizable_211;                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_1;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Progress;                                          // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Width;                                             // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             RichTextStyle;                                     // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0288(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TextLength;                                        // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetText(const class FText& TickerText);
	void SetSpeed(float Param_Speed);
	void SetStyle(class UDataTable* NewTextStyleSet);
	void ExecuteUbergraph_UI_TickerText(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_TickerText_C">();
	}
	static class UUI_TickerText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_TickerText_C>();
	}
};
static_assert(alignof(UUI_TickerText_C) == 0x000008, "Wrong alignment on UUI_TickerText_C");
static_assert(sizeof(UUI_TickerText_C) == 0x0002A8, "Wrong size on UUI_TickerText_C");
static_assert(offsetof(UUI_TickerText_C, UberGraphFrame) == 0x000260, "Member 'UUI_TickerText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_TickerText_C, RichTextSizable_211) == 0x000268, "Member 'UUI_TickerText_C::RichTextSizable_211' has a wrong offset!");
static_assert(offsetof(UUI_TickerText_C, SizeBox_1) == 0x000270, "Member 'UUI_TickerText_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UUI_TickerText_C, Progress) == 0x000278, "Member 'UUI_TickerText_C::Progress' has a wrong offset!");
static_assert(offsetof(UUI_TickerText_C, Width) == 0x00027C, "Member 'UUI_TickerText_C::Width' has a wrong offset!");
static_assert(offsetof(UUI_TickerText_C, RichTextStyle) == 0x000280, "Member 'UUI_TickerText_C::RichTextStyle' has a wrong offset!");
static_assert(offsetof(UUI_TickerText_C, Text) == 0x000288, "Member 'UUI_TickerText_C::Text' has a wrong offset!");
static_assert(offsetof(UUI_TickerText_C, TextLength) == 0x0002A0, "Member 'UUI_TickerText_C::TextLength' has a wrong offset!");
static_assert(offsetof(UUI_TickerText_C, Speed) == 0x0002A4, "Member 'UUI_TickerText_C::Speed' has a wrong offset!");

}
