#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_Image

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "MenuColorAndOpacity_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Basic_Image.Basic_Image_C
// 0x0210 (0x0470 - 0x0260)
class UBasic_Image_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimFadeIn;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImageComponent;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            Brush;                                             // 0x0278(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	ENUM_MenuColors                               Tint;                                              // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2E69[0x3];                                     // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TintOpacity;                                       // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<class FName, float>                      Scalars;                                           // 0x0308(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<class FName, struct FLinearColor>        Vectors;                                           // 0x0358(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<class FName, TSoftObjectPtr<class UTexture>> Textures;                                          // 0x03A8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<class FName, struct FMenuColorAndOpacity> MenuColors;                                        // 0x03F8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly)
	class FText                                   BasicToolTipText;                                  // 0x0448(0x0018)(Edit, BlueprintVisible)
	struct FVector2D                              BasicToolTipPosition;                              // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              BasicToolTipAlignment;                             // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Basic_Image(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void GetBrush(struct FSlateBrush* Param_Brush);
	void SetBrush(const struct FSlateBrush& InBrush);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SelectTint(ENUM_MenuColors FLASE, ENUM_MenuColors TURR, bool Condition, ENUM_MenuColors* SelectedTint);
	void SetTint(ENUM_MenuColors InTint);
	void SetTintOpacity(float InOpacity);
	void SetTintAndOpacity(ENUM_MenuColors InTint, float InTintOpacity);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
	void SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> Texture, bool bMatchSize);
	void SetBrushSize(const struct FVector2D& DesiredSize);
	void GetBrushSize(struct FVector2D* Brush_Image_Size);
	void FadeIn(float InDuration);
	void FadeOut(float InDuration);
	void SetDynamicMaterialScalar(class FName ParameterName, float Value);
	void SetDynamicMaterialVector(class FName ParameterName, const struct FLinearColor& Value);
	void SetDynamicMaterialTexture(class FName ParameterName, class UTexture* Value);
	void SetDynamicMaterialValues();
	class UWidget* GetBasicToolTip();
	void SetBasicToolTip(const class FText& Param_BasicToolTipText, const struct FVector2D& Param_BasicToolTipPosition, const struct FVector2D& Param_BasicToolTipAlignment);
	void ScaleToFitX(float InWidth);
	void ScaleToFitY(float InHeight);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Basic_Image_C">();
	}
	static class UBasic_Image_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasic_Image_C>();
	}
};
static_assert(alignof(UBasic_Image_C) == 0x000008, "Wrong alignment on UBasic_Image_C");
static_assert(sizeof(UBasic_Image_C) == 0x000470, "Wrong size on UBasic_Image_C");
static_assert(offsetof(UBasic_Image_C, UberGraphFrame) == 0x000260, "Member 'UBasic_Image_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasic_Image_C, AnimFadeIn) == 0x000268, "Member 'UBasic_Image_C::AnimFadeIn' has a wrong offset!");
static_assert(offsetof(UBasic_Image_C, ImageComponent) == 0x000270, "Member 'UBasic_Image_C::ImageComponent' has a wrong offset!");
static_assert(offsetof(UBasic_Image_C, Brush) == 0x000278, "Member 'UBasic_Image_C::Brush' has a wrong offset!");
static_assert(offsetof(UBasic_Image_C, Tint) == 0x000300, "Member 'UBasic_Image_C::Tint' has a wrong offset!");
static_assert(offsetof(UBasic_Image_C, TintOpacity) == 0x000304, "Member 'UBasic_Image_C::TintOpacity' has a wrong offset!");
static_assert(offsetof(UBasic_Image_C, Scalars) == 0x000308, "Member 'UBasic_Image_C::Scalars' has a wrong offset!");
static_assert(offsetof(UBasic_Image_C, Vectors) == 0x000358, "Member 'UBasic_Image_C::Vectors' has a wrong offset!");
static_assert(offsetof(UBasic_Image_C, Textures) == 0x0003A8, "Member 'UBasic_Image_C::Textures' has a wrong offset!");
static_assert(offsetof(UBasic_Image_C, MenuColors) == 0x0003F8, "Member 'UBasic_Image_C::MenuColors' has a wrong offset!");
static_assert(offsetof(UBasic_Image_C, BasicToolTipText) == 0x000448, "Member 'UBasic_Image_C::BasicToolTipText' has a wrong offset!");
static_assert(offsetof(UBasic_Image_C, BasicToolTipPosition) == 0x000460, "Member 'UBasic_Image_C::BasicToolTipPosition' has a wrong offset!");
static_assert(offsetof(UBasic_Image_C, BasicToolTipAlignment) == 0x000468, "Member 'UBasic_Image_C::BasicToolTipAlignment' has a wrong offset!");

}
