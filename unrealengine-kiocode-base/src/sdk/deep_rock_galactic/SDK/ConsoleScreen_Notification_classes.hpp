#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleScreen_Notification

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ConsoleScreen_Notification.ConsoleScreen_Notification_C
// 0x00F0 (0x0350 - 0x0260)
class UConsoleScreen_Notification_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ping;                                              // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 LeftIcon;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NotificationLabel;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightIcon;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TextBackground;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TextBorder;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   NotificationText;                                  // 0x0298(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         TextSize;                                          // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpperCase;                                         // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3A40[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            IconBrush;                                         // 0x02B8(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	ENUM_MenuColors                               IconColor;                                         // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3A41[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCategoryID*                            CategoryID;                                        // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ConsoleScreen_Notification(int32 EntryPoint);
	void OnItemCategoryChanged();
	void SetNotificationCategory(class UCategoryID* Param_CategoryID);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetNotificationText(const class FText& Text);
	void SetNotificationIcon(class UTexture2D* Texture);
	void SetTextSize(int32 InTextSize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConsoleScreen_Notification_C">();
	}
	static class UConsoleScreen_Notification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleScreen_Notification_C>();
	}
};
static_assert(alignof(UConsoleScreen_Notification_C) == 0x000008, "Wrong alignment on UConsoleScreen_Notification_C");
static_assert(sizeof(UConsoleScreen_Notification_C) == 0x000350, "Wrong size on UConsoleScreen_Notification_C");
static_assert(offsetof(UConsoleScreen_Notification_C, UberGraphFrame) == 0x000260, "Member 'UConsoleScreen_Notification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Notification_C, Ping) == 0x000268, "Member 'UConsoleScreen_Notification_C::Ping' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Notification_C, LeftIcon) == 0x000270, "Member 'UConsoleScreen_Notification_C::LeftIcon' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Notification_C, NotificationLabel) == 0x000278, "Member 'UConsoleScreen_Notification_C::NotificationLabel' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Notification_C, RightIcon) == 0x000280, "Member 'UConsoleScreen_Notification_C::RightIcon' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Notification_C, TextBackground) == 0x000288, "Member 'UConsoleScreen_Notification_C::TextBackground' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Notification_C, TextBorder) == 0x000290, "Member 'UConsoleScreen_Notification_C::TextBorder' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Notification_C, NotificationText) == 0x000298, "Member 'UConsoleScreen_Notification_C::NotificationText' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Notification_C, TextSize) == 0x0002B0, "Member 'UConsoleScreen_Notification_C::TextSize' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Notification_C, UpperCase) == 0x0002B4, "Member 'UConsoleScreen_Notification_C::UpperCase' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Notification_C, IconBrush) == 0x0002B8, "Member 'UConsoleScreen_Notification_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Notification_C, IconColor) == 0x000340, "Member 'UConsoleScreen_Notification_C::IconColor' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Notification_C, CategoryID) == 0x000348, "Member 'UConsoleScreen_Notification_C::CategoryID' has a wrong offset!");

}

