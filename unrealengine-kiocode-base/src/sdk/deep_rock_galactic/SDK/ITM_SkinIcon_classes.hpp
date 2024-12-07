#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_SkinIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FSD_structs.hpp"
#include "ENUM_SkinWidgetTypes_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_SkinIcon.ITM_SkinIcon_C
// 0x0060 (0x02C0 - 0x0260)
class UITM_SkinIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 DefaultItem;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_DLC_Indicator_C*                    DLC_Indicator;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               IconSizer;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PaintBucketOverlay;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SkinIcon;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemSkin*                              Skin;                                              // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Size;                                              // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsLocked;                                          // 0x029C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsDefault;                                         // 0x029D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShowBucket;                                        // 0x029E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EB5[0x1];                                     // 0x029F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Material;                                          // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutlineTint;                                       // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_SkinWidgetTypes                          BucketIcon;                                        // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowDLC;                                           // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ITM_SkinIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetSkin(class UItemSkin* InSkin, bool InIsLocked, bool InIsDefault);
	void SetFromMaterial(class UMaterialInterface* InMaterial, bool InIsLocked, bool InIsDefault, ENUM_SkinWidgetTypes InBucketIcon);
	void SetSize(float InSize);
	void GetIsLocked(bool* Param_IsLocked);
	void SetOutlineTint(const struct FLinearColor& Color);
	void SetBucketVisibility(bool Param_ShowBucket);
	void SetIconColor(const struct FLinearColor& InColorAndOpacity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_SkinIcon_C">();
	}
	static class UITM_SkinIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_SkinIcon_C>();
	}
};
static_assert(alignof(UITM_SkinIcon_C) == 0x000008, "Wrong alignment on UITM_SkinIcon_C");
static_assert(sizeof(UITM_SkinIcon_C) == 0x0002C0, "Wrong size on UITM_SkinIcon_C");
static_assert(offsetof(UITM_SkinIcon_C, UberGraphFrame) == 0x000260, "Member 'UITM_SkinIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, DefaultItem) == 0x000268, "Member 'UITM_SkinIcon_C::DefaultItem' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, DLC_Indicator) == 0x000270, "Member 'UITM_SkinIcon_C::DLC_Indicator' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, IconSizer) == 0x000278, "Member 'UITM_SkinIcon_C::IconSizer' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, PaintBucketOverlay) == 0x000280, "Member 'UITM_SkinIcon_C::PaintBucketOverlay' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, SkinIcon) == 0x000288, "Member 'UITM_SkinIcon_C::SkinIcon' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, Skin) == 0x000290, "Member 'UITM_SkinIcon_C::Skin' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, Size) == 0x000298, "Member 'UITM_SkinIcon_C::Size' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, IsLocked) == 0x00029C, "Member 'UITM_SkinIcon_C::IsLocked' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, IsDefault) == 0x00029D, "Member 'UITM_SkinIcon_C::IsDefault' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, ShowBucket) == 0x00029E, "Member 'UITM_SkinIcon_C::ShowBucket' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, Material) == 0x0002A0, "Member 'UITM_SkinIcon_C::Material' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, OutlineTint) == 0x0002A8, "Member 'UITM_SkinIcon_C::OutlineTint' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, BucketIcon) == 0x0002B8, "Member 'UITM_SkinIcon_C::BucketIcon' has a wrong offset!");
static_assert(offsetof(UITM_SkinIcon_C, ShowDLC) == 0x0002B9, "Member 'UITM_SkinIcon_C::ShowDLC' has a wrong offset!");

}

