#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Widget_DropPod_AltitudeMeter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C
// 0x0050 (0x02B0 - 0x0260)
class UWidget_DropPod_AltitudeMeter_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AlertBlink;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar;                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar_146;                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar_C_148;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar_C_149;                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeaderText;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_41;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlockDepth;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Depth;                                             // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Widget_DropPod_AltitudeMeter(int32 EntryPoint);
	void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
	void Construct();
	void SetProgress(float Progress);
	void UpdateDepthText();
	void UpdateHeader(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Widget_DropPod_AltitudeMeter_C">();
	}
	static class UWidget_DropPod_AltitudeMeter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWidget_DropPod_AltitudeMeter_C>();
	}
};
static_assert(alignof(UWidget_DropPod_AltitudeMeter_C) == 0x000008, "Wrong alignment on UWidget_DropPod_AltitudeMeter_C");
static_assert(sizeof(UWidget_DropPod_AltitudeMeter_C) == 0x0002B0, "Wrong size on UWidget_DropPod_AltitudeMeter_C");
static_assert(offsetof(UWidget_DropPod_AltitudeMeter_C, UberGraphFrame) == 0x000260, "Member 'UWidget_DropPod_AltitudeMeter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWidget_DropPod_AltitudeMeter_C, AlertBlink) == 0x000268, "Member 'UWidget_DropPod_AltitudeMeter_C::AlertBlink' has a wrong offset!");
static_assert(offsetof(UWidget_DropPod_AltitudeMeter_C, Basic_Menu_ColorBar) == 0x000270, "Member 'UWidget_DropPod_AltitudeMeter_C::Basic_Menu_ColorBar' has a wrong offset!");
static_assert(offsetof(UWidget_DropPod_AltitudeMeter_C, Basic_Menu_ColorBar_146) == 0x000278, "Member 'UWidget_DropPod_AltitudeMeter_C::Basic_Menu_ColorBar_146' has a wrong offset!");
static_assert(offsetof(UWidget_DropPod_AltitudeMeter_C, Basic_Menu_ColorBar_C_148) == 0x000280, "Member 'UWidget_DropPod_AltitudeMeter_C::Basic_Menu_ColorBar_C_148' has a wrong offset!");
static_assert(offsetof(UWidget_DropPod_AltitudeMeter_C, Basic_Menu_ColorBar_C_149) == 0x000288, "Member 'UWidget_DropPod_AltitudeMeter_C::Basic_Menu_ColorBar_C_149' has a wrong offset!");
static_assert(offsetof(UWidget_DropPod_AltitudeMeter_C, HeaderText) == 0x000290, "Member 'UWidget_DropPod_AltitudeMeter_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UWidget_DropPod_AltitudeMeter_C, Image_41) == 0x000298, "Member 'UWidget_DropPod_AltitudeMeter_C::Image_41' has a wrong offset!");
static_assert(offsetof(UWidget_DropPod_AltitudeMeter_C, TextBlockDepth) == 0x0002A0, "Member 'UWidget_DropPod_AltitudeMeter_C::TextBlockDepth' has a wrong offset!");
static_assert(offsetof(UWidget_DropPod_AltitudeMeter_C, Depth) == 0x0002A8, "Member 'UWidget_DropPod_AltitudeMeter_C::Depth' has a wrong offset!");

}
