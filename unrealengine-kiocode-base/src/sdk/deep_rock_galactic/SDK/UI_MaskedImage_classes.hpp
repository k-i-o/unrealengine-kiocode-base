#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MaskedImage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MaskedImage.UI_MaskedImage_C
// 0x0078 (0x02D8 - 0x0260)
class UUI_MaskedImage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 MaskedImage;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             Image;                                             // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              ImageSize;                                         // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          AutoSize;                                          // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_38F6[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            ImageTint;                                         // 0x0288(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture*                               Mask;                                              // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Invert_Mask;                                       // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	ESlateBrushDrawType                           DrawAs;                                            // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_38F7[0x6];                                     // 0x02BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Material;                                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Mask_Black;                                        // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_38F8[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                BrushImage;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_MaskedImage(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetImage(class UTexture2D* Value, bool Match_Size);
	void SetImageSize(const struct FVector2D& DesiredSize);
	void SetImageTint(const struct FSlateColor& TintColor);
	void SetMask(class UTexture* Value);
	void SetMaskInverted(bool Invert);
	void SetDrawAs(ESlateBrushDrawType InBrush_DrawAs);
	void UpdateMaterial();
	void SetMaskBlack(bool Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MaskedImage_C">();
	}
	static class UUI_MaskedImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MaskedImage_C>();
	}
};
static_assert(alignof(UUI_MaskedImage_C) == 0x000008, "Wrong alignment on UUI_MaskedImage_C");
static_assert(sizeof(UUI_MaskedImage_C) == 0x0002D8, "Wrong size on UUI_MaskedImage_C");
static_assert(offsetof(UUI_MaskedImage_C, UberGraphFrame) == 0x000260, "Member 'UUI_MaskedImage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_MaskedImage_C, MaskedImage) == 0x000268, "Member 'UUI_MaskedImage_C::MaskedImage' has a wrong offset!");
static_assert(offsetof(UUI_MaskedImage_C, Image) == 0x000270, "Member 'UUI_MaskedImage_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_MaskedImage_C, ImageSize) == 0x000278, "Member 'UUI_MaskedImage_C::ImageSize' has a wrong offset!");
static_assert(offsetof(UUI_MaskedImage_C, AutoSize) == 0x000280, "Member 'UUI_MaskedImage_C::AutoSize' has a wrong offset!");
static_assert(offsetof(UUI_MaskedImage_C, ImageTint) == 0x000288, "Member 'UUI_MaskedImage_C::ImageTint' has a wrong offset!");
static_assert(offsetof(UUI_MaskedImage_C, Mask) == 0x0002B0, "Member 'UUI_MaskedImage_C::Mask' has a wrong offset!");
static_assert(offsetof(UUI_MaskedImage_C, Invert_Mask) == 0x0002B8, "Member 'UUI_MaskedImage_C::Invert_Mask' has a wrong offset!");
static_assert(offsetof(UUI_MaskedImage_C, DrawAs) == 0x0002B9, "Member 'UUI_MaskedImage_C::DrawAs' has a wrong offset!");
static_assert(offsetof(UUI_MaskedImage_C, Material) == 0x0002C0, "Member 'UUI_MaskedImage_C::Material' has a wrong offset!");
static_assert(offsetof(UUI_MaskedImage_C, Mask_Black) == 0x0002C8, "Member 'UUI_MaskedImage_C::Mask_Black' has a wrong offset!");
static_assert(offsetof(UUI_MaskedImage_C, BrushImage) == 0x0002D0, "Member 'UUI_MaskedImage_C::BrushImage' has a wrong offset!");

}

