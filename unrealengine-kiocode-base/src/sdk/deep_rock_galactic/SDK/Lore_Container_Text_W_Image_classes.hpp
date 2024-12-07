#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lore_Container_Text_W_Image

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C
// 0x00A0 (0x0300 - 0x0260)
class ULore_Container_Text_W_Image_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_ColorBar_C*                 ColorbarTextSeparator;                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Outer;                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Item;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ImageBorder;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_Body;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Image;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Header;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Text;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 WindowColorBar;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMinersManualData*                      Data;                                              // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Headline;                                          // 0x02B8(0x0018)(Edit, BlueprintVisible)
	class FText                                   Text;                                              // 0x02D0(0x0018)(Edit, BlueprintVisible)
	class UTexture2D*                             Image;                                             // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseStyle2;                                         // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          MoveImageToRightSide;                              // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4BC4[0x2];                                     // 0x02F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ImageSize;                                         // 0x02F4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Lore_Container_Text_W_Image(int32 EntryPoint);
	void Refresh();
	void SetData(class UMinersManualData* Param_Data);
	void AddItem(class UWidget* Content, EHorizontalAlignment InHorizontalAlignment, EVerticalAlignment InVerticalAlignment, const struct FMargin& InPadding, ESlateSizeRule Size_Rule);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lore_Container_Text_W_Image_C">();
	}
	static class ULore_Container_Text_W_Image_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULore_Container_Text_W_Image_C>();
	}
};
static_assert(alignof(ULore_Container_Text_W_Image_C) == 0x000008, "Wrong alignment on ULore_Container_Text_W_Image_C");
static_assert(sizeof(ULore_Container_Text_W_Image_C) == 0x000300, "Wrong size on ULore_Container_Text_W_Image_C");
static_assert(offsetof(ULore_Container_Text_W_Image_C, UberGraphFrame) == 0x000260, "Member 'ULore_Container_Text_W_Image_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, ColorbarTextSeparator) == 0x000268, "Member 'ULore_Container_Text_W_Image_C::ColorbarTextSeparator' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, HorizontalBox_Outer) == 0x000270, "Member 'ULore_Container_Text_W_Image_C::HorizontalBox_Outer' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, Image_Item) == 0x000278, "Member 'ULore_Container_Text_W_Image_C::Image_Item' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, ImageBorder) == 0x000280, "Member 'ULore_Container_Text_W_Image_C::ImageBorder' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, RichTextBlock_Body) == 0x000288, "Member 'ULore_Container_Text_W_Image_C::RichTextBlock_Body' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, SizeBox_Image) == 0x000290, "Member 'ULore_Container_Text_W_Image_C::SizeBox_Image' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, TextBlock_Header) == 0x000298, "Member 'ULore_Container_Text_W_Image_C::TextBlock_Header' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, VerticalBox_Text) == 0x0002A0, "Member 'ULore_Container_Text_W_Image_C::VerticalBox_Text' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, WindowColorBar) == 0x0002A8, "Member 'ULore_Container_Text_W_Image_C::WindowColorBar' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, Data) == 0x0002B0, "Member 'ULore_Container_Text_W_Image_C::Data' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, Headline) == 0x0002B8, "Member 'ULore_Container_Text_W_Image_C::Headline' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, Text) == 0x0002D0, "Member 'ULore_Container_Text_W_Image_C::Text' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, Image) == 0x0002E8, "Member 'ULore_Container_Text_W_Image_C::Image' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, UseStyle2) == 0x0002F0, "Member 'ULore_Container_Text_W_Image_C::UseStyle2' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, MoveImageToRightSide) == 0x0002F1, "Member 'ULore_Container_Text_W_Image_C::MoveImageToRightSide' has a wrong offset!");
static_assert(offsetof(ULore_Container_Text_W_Image_C, ImageSize) == 0x0002F4, "Member 'ULore_Container_Text_W_Image_C::ImageSize' has a wrong offset!");

}

