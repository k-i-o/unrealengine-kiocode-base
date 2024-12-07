#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RewardUnlock_SkinUnlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "FSD_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_RewardUnlock_SkinUnlock.UI_RewardUnlock_SkinUnlock_C
// 0x0050 (0x02B8 - 0x0268)
class UUI_RewardUnlock_SkinUnlock_C final : public URewardWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CelebrateAnim;                                     // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CategoryIcon;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CategorySizer;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               IconOverlay;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_CharacterIcon_C*                   ITM_CharacterIcon;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UITM_GeneratedIcon_Item_C*              ITM_GeneratedIcon;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Subtitle;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TextAndCharacterBox;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             UnlockTitle;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_RewardUnlock_SkinUnlock(int32 EntryPoint);
	void Construct();
	void PlayReceiveAnim();
	void PreConstruct(bool IsDesignTime);
	void GetUnlockDetails(class FText* OutTitle, class FText* OutSubTitle, class UTexture** Icon);
	void SelectCharacterID(class UPlayerCharacterID* OptionalID, class UPlayerCharacterID** OutputPin);
	void SetCharacterIcon(class UPlayerCharacterID* CharacterID, class UPlayerCharacterID** OutCharacterID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_RewardUnlock_SkinUnlock_C">();
	}
	static class UUI_RewardUnlock_SkinUnlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_RewardUnlock_SkinUnlock_C>();
	}
};
static_assert(alignof(UUI_RewardUnlock_SkinUnlock_C) == 0x000008, "Wrong alignment on UUI_RewardUnlock_SkinUnlock_C");
static_assert(sizeof(UUI_RewardUnlock_SkinUnlock_C) == 0x0002B8, "Wrong size on UUI_RewardUnlock_SkinUnlock_C");
static_assert(offsetof(UUI_RewardUnlock_SkinUnlock_C, UberGraphFrame) == 0x000268, "Member 'UUI_RewardUnlock_SkinUnlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_RewardUnlock_SkinUnlock_C, CelebrateAnim) == 0x000270, "Member 'UUI_RewardUnlock_SkinUnlock_C::CelebrateAnim' has a wrong offset!");
static_assert(offsetof(UUI_RewardUnlock_SkinUnlock_C, CategoryIcon) == 0x000278, "Member 'UUI_RewardUnlock_SkinUnlock_C::CategoryIcon' has a wrong offset!");
static_assert(offsetof(UUI_RewardUnlock_SkinUnlock_C, CategorySizer) == 0x000280, "Member 'UUI_RewardUnlock_SkinUnlock_C::CategorySizer' has a wrong offset!");
static_assert(offsetof(UUI_RewardUnlock_SkinUnlock_C, IconOverlay) == 0x000288, "Member 'UUI_RewardUnlock_SkinUnlock_C::IconOverlay' has a wrong offset!");
static_assert(offsetof(UUI_RewardUnlock_SkinUnlock_C, ITM_CharacterIcon) == 0x000290, "Member 'UUI_RewardUnlock_SkinUnlock_C::ITM_CharacterIcon' has a wrong offset!");
static_assert(offsetof(UUI_RewardUnlock_SkinUnlock_C, ITM_GeneratedIcon) == 0x000298, "Member 'UUI_RewardUnlock_SkinUnlock_C::ITM_GeneratedIcon' has a wrong offset!");
static_assert(offsetof(UUI_RewardUnlock_SkinUnlock_C, Subtitle) == 0x0002A0, "Member 'UUI_RewardUnlock_SkinUnlock_C::Subtitle' has a wrong offset!");
static_assert(offsetof(UUI_RewardUnlock_SkinUnlock_C, TextAndCharacterBox) == 0x0002A8, "Member 'UUI_RewardUnlock_SkinUnlock_C::TextAndCharacterBox' has a wrong offset!");
static_assert(offsetof(UUI_RewardUnlock_SkinUnlock_C, UnlockTitle) == 0x0002B0, "Member 'UUI_RewardUnlock_SkinUnlock_C::UnlockTitle' has a wrong offset!");

}

