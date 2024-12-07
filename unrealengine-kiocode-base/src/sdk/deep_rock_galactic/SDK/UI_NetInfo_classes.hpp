#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_NetInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_NetInfo.UI_NetInfo_C
// 0x00A0 (0x0300 - 0x0260)
class UUI_NetInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         PktLossBox;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_FPS;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Jitter;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Ping;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PktLoss_PlayerName;                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PktLossIn;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PktLossOut;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                         Font;                                              // 0x02A0(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash)
	ETextJustify                                  Justification;                                     // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_316F[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NetInfoLevel;                                      // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_NetInfo(int32 EntryPoint);
	void OnNetInfoLevelChanged(int32 NewValue);
	void SlowTick();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void GetPlayerName(class AFSDPlayerController* PlayerController, class FString* Param_Name);
	void GetPktLossString(class FText* Names, class FText* PktLossIn, class FText* PktLossOut, class FText* Ping, class FText* Jitter, bool* IsValid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_NetInfo_C">();
	}
	static class UUI_NetInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_NetInfo_C>();
	}
};
static_assert(alignof(UUI_NetInfo_C) == 0x000008, "Wrong alignment on UUI_NetInfo_C");
static_assert(sizeof(UUI_NetInfo_C) == 0x000300, "Wrong size on UUI_NetInfo_C");
static_assert(offsetof(UUI_NetInfo_C, UberGraphFrame) == 0x000260, "Member 'UUI_NetInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_NetInfo_C, PktLossBox) == 0x000268, "Member 'UUI_NetInfo_C::PktLossBox' has a wrong offset!");
static_assert(offsetof(UUI_NetInfo_C, TextBlock_FPS) == 0x000270, "Member 'UUI_NetInfo_C::TextBlock_FPS' has a wrong offset!");
static_assert(offsetof(UUI_NetInfo_C, TextBlock_Jitter) == 0x000278, "Member 'UUI_NetInfo_C::TextBlock_Jitter' has a wrong offset!");
static_assert(offsetof(UUI_NetInfo_C, TextBlock_Ping) == 0x000280, "Member 'UUI_NetInfo_C::TextBlock_Ping' has a wrong offset!");
static_assert(offsetof(UUI_NetInfo_C, TextBlock_PktLoss_PlayerName) == 0x000288, "Member 'UUI_NetInfo_C::TextBlock_PktLoss_PlayerName' has a wrong offset!");
static_assert(offsetof(UUI_NetInfo_C, TextBlock_PktLossIn) == 0x000290, "Member 'UUI_NetInfo_C::TextBlock_PktLossIn' has a wrong offset!");
static_assert(offsetof(UUI_NetInfo_C, TextBlock_PktLossOut) == 0x000298, "Member 'UUI_NetInfo_C::TextBlock_PktLossOut' has a wrong offset!");
static_assert(offsetof(UUI_NetInfo_C, Font) == 0x0002A0, "Member 'UUI_NetInfo_C::Font' has a wrong offset!");
static_assert(offsetof(UUI_NetInfo_C, Justification) == 0x0002F8, "Member 'UUI_NetInfo_C::Justification' has a wrong offset!");
static_assert(offsetof(UUI_NetInfo_C, NetInfoLevel) == 0x0002FC, "Member 'UUI_NetInfo_C::NetInfoLevel' has a wrong offset!");

}

