#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_FocusableCanvas

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_FocusableCanvas.UI_FocusableCanvas_C
// 0x0030 (0x0290 - 0x0260)
class UUI_FocusableCanvas_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                             Content;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFocusChanged;                                    // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoverChanged;                                    // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnFocusChanged__DelegateSignature(class UWidget* Widget, bool IsFocused);
	void OnHoverChanged__DelegateSignature(class UWidget* Widget, bool Param_IsHovered);
	void ExecuteUbergraph_UI_FocusableCanvas(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void Construct();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_FocusableCanvas_C">();
	}
	static class UUI_FocusableCanvas_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_FocusableCanvas_C>();
	}
};
static_assert(alignof(UUI_FocusableCanvas_C) == 0x000008, "Wrong alignment on UUI_FocusableCanvas_C");
static_assert(sizeof(UUI_FocusableCanvas_C) == 0x000290, "Wrong size on UUI_FocusableCanvas_C");
static_assert(offsetof(UUI_FocusableCanvas_C, UberGraphFrame) == 0x000260, "Member 'UUI_FocusableCanvas_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_FocusableCanvas_C, Content) == 0x000268, "Member 'UUI_FocusableCanvas_C::Content' has a wrong offset!");
static_assert(offsetof(UUI_FocusableCanvas_C, OnFocusChanged) == 0x000270, "Member 'UUI_FocusableCanvas_C::OnFocusChanged' has a wrong offset!");
static_assert(offsetof(UUI_FocusableCanvas_C, OnHoverChanged) == 0x000280, "Member 'UUI_FocusableCanvas_C::OnHoverChanged' has a wrong offset!");

}
