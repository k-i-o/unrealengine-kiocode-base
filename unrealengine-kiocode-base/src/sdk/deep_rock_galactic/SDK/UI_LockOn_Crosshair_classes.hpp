#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LockOn_Crosshair

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_LockOn_Crosshair.UI_LockOn_Crosshair_C
// 0x0030 (0x0290 - 0x0260)
class UUI_LockOn_Crosshair_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimAngle;                                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Circle;                                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RotationPanel;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Angle;                                             // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         AngleOffset;                                       // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShowCircle;                                        // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void SetCircleVisible(bool InVisible);
	void SetAngle(float Param_Angle);
	void PreConstruct(bool IsDesignTime);
	void Ping(float PlaybackSpeed);
	void ExecuteUbergraph_UI_LockOn_Crosshair(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_LockOn_Crosshair_C">();
	}
	static class UUI_LockOn_Crosshair_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_LockOn_Crosshair_C>();
	}
};
static_assert(alignof(UUI_LockOn_Crosshair_C) == 0x000008, "Wrong alignment on UUI_LockOn_Crosshair_C");
static_assert(sizeof(UUI_LockOn_Crosshair_C) == 0x000290, "Wrong size on UUI_LockOn_Crosshair_C");
static_assert(offsetof(UUI_LockOn_Crosshair_C, UberGraphFrame) == 0x000260, "Member 'UUI_LockOn_Crosshair_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_LockOn_Crosshair_C, AnimAngle) == 0x000268, "Member 'UUI_LockOn_Crosshair_C::AnimAngle' has a wrong offset!");
static_assert(offsetof(UUI_LockOn_Crosshair_C, Circle) == 0x000270, "Member 'UUI_LockOn_Crosshair_C::Circle' has a wrong offset!");
static_assert(offsetof(UUI_LockOn_Crosshair_C, RotationPanel) == 0x000278, "Member 'UUI_LockOn_Crosshair_C::RotationPanel' has a wrong offset!");
static_assert(offsetof(UUI_LockOn_Crosshair_C, Angle) == 0x000280, "Member 'UUI_LockOn_Crosshair_C::Angle' has a wrong offset!");
static_assert(offsetof(UUI_LockOn_Crosshair_C, AngleOffset) == 0x000284, "Member 'UUI_LockOn_Crosshair_C::AngleOffset' has a wrong offset!");
static_assert(offsetof(UUI_LockOn_Crosshair_C, ShowCircle) == 0x000288, "Member 'UUI_LockOn_Crosshair_C::ShowCircle' has a wrong offset!");

}
