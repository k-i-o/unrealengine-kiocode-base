#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DepthCountWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_DepthCountWidget.BP_DepthCountWidget_C
// 0x0040 (0x02A0 - 0x0260)
class UBP_DepthCountWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AlertBlink;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_50;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_4;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_5;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_6;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlockDepth;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Depth;                                             // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DepthCountWidget(int32 EntryPoint);
	void Construct();
	void SetProgress(float Progress);
	void UpdateDepthText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DepthCountWidget_C">();
	}
	static class UBP_DepthCountWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DepthCountWidget_C>();
	}
};
static_assert(alignof(UBP_DepthCountWidget_C) == 0x000008, "Wrong alignment on UBP_DepthCountWidget_C");
static_assert(sizeof(UBP_DepthCountWidget_C) == 0x0002A0, "Wrong size on UBP_DepthCountWidget_C");
static_assert(offsetof(UBP_DepthCountWidget_C, UberGraphFrame) == 0x000260, "Member 'UBP_DepthCountWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_DepthCountWidget_C, AlertBlink) == 0x000268, "Member 'UBP_DepthCountWidget_C::AlertBlink' has a wrong offset!");
static_assert(offsetof(UBP_DepthCountWidget_C, Image_50) == 0x000270, "Member 'UBP_DepthCountWidget_C::Image_50' has a wrong offset!");
static_assert(offsetof(UBP_DepthCountWidget_C, TextBlock_4) == 0x000278, "Member 'UBP_DepthCountWidget_C::TextBlock_4' has a wrong offset!");
static_assert(offsetof(UBP_DepthCountWidget_C, TextBlock_5) == 0x000280, "Member 'UBP_DepthCountWidget_C::TextBlock_5' has a wrong offset!");
static_assert(offsetof(UBP_DepthCountWidget_C, TextBlock_6) == 0x000288, "Member 'UBP_DepthCountWidget_C::TextBlock_6' has a wrong offset!");
static_assert(offsetof(UBP_DepthCountWidget_C, TextBlockDepth) == 0x000290, "Member 'UBP_DepthCountWidget_C::TextBlockDepth' has a wrong offset!");
static_assert(offsetof(UBP_DepthCountWidget_C, Depth) == 0x000298, "Member 'UBP_DepthCountWidget_C::Depth' has a wrong offset!");

}

