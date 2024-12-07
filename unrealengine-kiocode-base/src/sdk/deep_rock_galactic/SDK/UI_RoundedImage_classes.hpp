#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RoundedImage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_RoundedImage.UI_RoundedImage_C
// 0x0028 (0x0288 - 0x0260)
class UUI_RoundedImage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 RoundedImage;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Material;                                          // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Radius;                                            // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EdgeSharpness;                                     // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_RoundedImage(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateMaterial();
	void SetImage(class UTexture2D* Param_Texture);

	void OnPaint(struct FPaintContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_RoundedImage_C">();
	}
	static class UUI_RoundedImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_RoundedImage_C>();
	}
};
static_assert(alignof(UUI_RoundedImage_C) == 0x000008, "Wrong alignment on UUI_RoundedImage_C");
static_assert(sizeof(UUI_RoundedImage_C) == 0x000288, "Wrong size on UUI_RoundedImage_C");
static_assert(offsetof(UUI_RoundedImage_C, UberGraphFrame) == 0x000260, "Member 'UUI_RoundedImage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_RoundedImage_C, RoundedImage) == 0x000268, "Member 'UUI_RoundedImage_C::RoundedImage' has a wrong offset!");
static_assert(offsetof(UUI_RoundedImage_C, Material) == 0x000270, "Member 'UUI_RoundedImage_C::Material' has a wrong offset!");
static_assert(offsetof(UUI_RoundedImage_C, Texture) == 0x000278, "Member 'UUI_RoundedImage_C::Texture' has a wrong offset!");
static_assert(offsetof(UUI_RoundedImage_C, Radius) == 0x000280, "Member 'UUI_RoundedImage_C::Radius' has a wrong offset!");
static_assert(offsetof(UUI_RoundedImage_C, EdgeSharpness) == 0x000284, "Member 'UUI_RoundedImage_C::EdgeSharpness' has a wrong offset!");

}

