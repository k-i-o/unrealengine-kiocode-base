#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ImageTinted

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ImageTinted.UI_ImageTinted_C
// 0x00A0 (0x0300 - 0x0260)
class UUI_ImageTinted_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ImageWidget;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            Brush;                                             // 0x0270(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	ENUM_MenuColors                               Tint;                                              // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_36C4[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Tint_Opacity;                                      // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ImageTinted(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetBrush(const struct FSlateBrush& InBrush);
	void SetTint(ENUM_MenuColors InTint, float InOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture, bool MatchSize);
	void GetBrush(struct FSlateBrush* Param_Brush);
	void SelectTint(ENUM_MenuColors FLASE, ENUM_MenuColors TURR, bool Condition);
	void SetBrushSize(const struct FVector2D& Brush_Image_Size);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ImageTinted_C">();
	}
	static class UUI_ImageTinted_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ImageTinted_C>();
	}
};
static_assert(alignof(UUI_ImageTinted_C) == 0x000008, "Wrong alignment on UUI_ImageTinted_C");
static_assert(sizeof(UUI_ImageTinted_C) == 0x000300, "Wrong size on UUI_ImageTinted_C");
static_assert(offsetof(UUI_ImageTinted_C, UberGraphFrame) == 0x000260, "Member 'UUI_ImageTinted_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ImageTinted_C, ImageWidget) == 0x000268, "Member 'UUI_ImageTinted_C::ImageWidget' has a wrong offset!");
static_assert(offsetof(UUI_ImageTinted_C, Brush) == 0x000270, "Member 'UUI_ImageTinted_C::Brush' has a wrong offset!");
static_assert(offsetof(UUI_ImageTinted_C, Tint) == 0x0002F8, "Member 'UUI_ImageTinted_C::Tint' has a wrong offset!");
static_assert(offsetof(UUI_ImageTinted_C, Tint_Opacity) == 0x0002FC, "Member 'UUI_ImageTinted_C::Tint_Opacity' has a wrong offset!");

}
