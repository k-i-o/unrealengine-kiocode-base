#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Overlay

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct Overlay.OverlayItem
// 0x0028 (0x0028 - 0x0000)
struct FOverlayItem final
{
public:
	struct FTimespan                              StartTime;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                              EndTime;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Text;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Position;                                          // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOverlayItem) == 0x000008, "Wrong alignment on FOverlayItem");
static_assert(sizeof(FOverlayItem) == 0x000028, "Wrong size on FOverlayItem");
static_assert(offsetof(FOverlayItem, StartTime) == 0x000000, "Member 'FOverlayItem::StartTime' has a wrong offset!");
static_assert(offsetof(FOverlayItem, EndTime) == 0x000008, "Member 'FOverlayItem::EndTime' has a wrong offset!");
static_assert(offsetof(FOverlayItem, Text) == 0x000010, "Member 'FOverlayItem::Text' has a wrong offset!");
static_assert(offsetof(FOverlayItem, Position) == 0x000020, "Member 'FOverlayItem::Position' has a wrong offset!");

}
