#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SimpleAngleIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C
// 0x0048 (0x02A8 - 0x0260)
class UUI_SimpleAngleIndicator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimFadeIn;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      ArrowLeft;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      ArrowRight;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ClippingCanvas;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeRanges;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Angle;                                             // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeightOffset;                                      // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ClippingSize;                                      // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ArrowSize;                                         // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ArrowOffset;                                       // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetAngle(float AngleDegrees);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_UI_SimpleAngleIndicator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SimpleAngleIndicator_C">();
	}
	static class UUI_SimpleAngleIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SimpleAngleIndicator_C>();
	}
};
static_assert(alignof(UUI_SimpleAngleIndicator_C) == 0x000008, "Wrong alignment on UUI_SimpleAngleIndicator_C");
static_assert(sizeof(UUI_SimpleAngleIndicator_C) == 0x0002A8, "Wrong size on UUI_SimpleAngleIndicator_C");
static_assert(offsetof(UUI_SimpleAngleIndicator_C, UberGraphFrame) == 0x000260, "Member 'UUI_SimpleAngleIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SimpleAngleIndicator_C, AnimFadeIn) == 0x000268, "Member 'UUI_SimpleAngleIndicator_C::AnimFadeIn' has a wrong offset!");
static_assert(offsetof(UUI_SimpleAngleIndicator_C, ArrowLeft) == 0x000270, "Member 'UUI_SimpleAngleIndicator_C::ArrowLeft' has a wrong offset!");
static_assert(offsetof(UUI_SimpleAngleIndicator_C, ArrowRight) == 0x000278, "Member 'UUI_SimpleAngleIndicator_C::ArrowRight' has a wrong offset!");
static_assert(offsetof(UUI_SimpleAngleIndicator_C, ClippingCanvas) == 0x000280, "Member 'UUI_SimpleAngleIndicator_C::ClippingCanvas' has a wrong offset!");
static_assert(offsetof(UUI_SimpleAngleIndicator_C, SizeRanges) == 0x000288, "Member 'UUI_SimpleAngleIndicator_C::SizeRanges' has a wrong offset!");
static_assert(offsetof(UUI_SimpleAngleIndicator_C, Angle) == 0x000290, "Member 'UUI_SimpleAngleIndicator_C::Angle' has a wrong offset!");
static_assert(offsetof(UUI_SimpleAngleIndicator_C, HeightOffset) == 0x000294, "Member 'UUI_SimpleAngleIndicator_C::HeightOffset' has a wrong offset!");
static_assert(offsetof(UUI_SimpleAngleIndicator_C, ClippingSize) == 0x000298, "Member 'UUI_SimpleAngleIndicator_C::ClippingSize' has a wrong offset!");
static_assert(offsetof(UUI_SimpleAngleIndicator_C, ArrowSize) == 0x0002A0, "Member 'UUI_SimpleAngleIndicator_C::ArrowSize' has a wrong offset!");
static_assert(offsetof(UUI_SimpleAngleIndicator_C, ArrowOffset) == 0x0002A4, "Member 'UUI_SimpleAngleIndicator_C::ArrowOffset' has a wrong offset!");

}

