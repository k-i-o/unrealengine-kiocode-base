#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PointOfInterest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PointOfInterest.UI_PointOfInterest_C
// 0x0048 (0x02A8 - 0x0260)
class UUI_PointOfInterest_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Pulse;                                             // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ring;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Finished;                                          // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                             Texture;                                           // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Init(class UTexture2D* Param_Texture);
	void Construct();
	void OnIntroFinished();
	void OnOutroFinished();
	void ExecuteUbergraph_UI_PointOfInterest(int32 EntryPoint);
	void Finished__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PointOfInterest_C">();
	}
	static class UUI_PointOfInterest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PointOfInterest_C>();
	}
};
static_assert(alignof(UUI_PointOfInterest_C) == 0x000008, "Wrong alignment on UUI_PointOfInterest_C");
static_assert(sizeof(UUI_PointOfInterest_C) == 0x0002A8, "Wrong size on UUI_PointOfInterest_C");
static_assert(offsetof(UUI_PointOfInterest_C, UberGraphFrame) == 0x000260, "Member 'UUI_PointOfInterest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_PointOfInterest_C, Outro) == 0x000268, "Member 'UUI_PointOfInterest_C::Outro' has a wrong offset!");
static_assert(offsetof(UUI_PointOfInterest_C, Intro) == 0x000270, "Member 'UUI_PointOfInterest_C::Intro' has a wrong offset!");
static_assert(offsetof(UUI_PointOfInterest_C, Pulse) == 0x000278, "Member 'UUI_PointOfInterest_C::Pulse' has a wrong offset!");
static_assert(offsetof(UUI_PointOfInterest_C, Icon) == 0x000280, "Member 'UUI_PointOfInterest_C::Icon' has a wrong offset!");
static_assert(offsetof(UUI_PointOfInterest_C, Ring) == 0x000288, "Member 'UUI_PointOfInterest_C::Ring' has a wrong offset!");
static_assert(offsetof(UUI_PointOfInterest_C, Finished) == 0x000290, "Member 'UUI_PointOfInterest_C::Finished' has a wrong offset!");
static_assert(offsetof(UUI_PointOfInterest_C, Texture) == 0x0002A0, "Member 'UUI_PointOfInterest_C::Texture' has a wrong offset!");

}

