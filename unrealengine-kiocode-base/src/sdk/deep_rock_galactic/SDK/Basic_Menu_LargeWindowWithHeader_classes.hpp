#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_Menu_LargeWindowWithHeader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C
// 0x00A0 (0x0300 - 0x0260)
class UBasic_Menu_LargeWindowWithHeader_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                        BackgroundBlur_1;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        BackgroundBlur_2;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar_Top2;                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBarMain;                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBarMain2;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBarTop;                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_headerText;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                HeaderBG;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                MainWindowBG;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                MainWindowBorder_Bottom;                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             PutStuffHere;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Bottom3;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             VersionTxt;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Edge_Tint;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   HeaderText;                                        // 0x02E0(0x0018)(Edit, BlueprintVisible)
	bool                                          DisableBackgroundBlur;                             // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_Basic_Menu_LargeWindowWithHeader(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Set_Header_Text(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Basic_Menu_LargeWindowWithHeader_C">();
	}
	static class UBasic_Menu_LargeWindowWithHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasic_Menu_LargeWindowWithHeader_C>();
	}
};
static_assert(alignof(UBasic_Menu_LargeWindowWithHeader_C) == 0x000008, "Wrong alignment on UBasic_Menu_LargeWindowWithHeader_C");
static_assert(sizeof(UBasic_Menu_LargeWindowWithHeader_C) == 0x000300, "Wrong size on UBasic_Menu_LargeWindowWithHeader_C");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, UberGraphFrame) == 0x000260, "Member 'UBasic_Menu_LargeWindowWithHeader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, BackgroundBlur_1) == 0x000268, "Member 'UBasic_Menu_LargeWindowWithHeader_C::BackgroundBlur_1' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, BackgroundBlur_2) == 0x000270, "Member 'UBasic_Menu_LargeWindowWithHeader_C::BackgroundBlur_2' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, Basic_Menu_ColorBar_Top2) == 0x000278, "Member 'UBasic_Menu_LargeWindowWithHeader_C::Basic_Menu_ColorBar_Top2' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, Basic_Menu_ColorBarMain) == 0x000280, "Member 'UBasic_Menu_LargeWindowWithHeader_C::Basic_Menu_ColorBarMain' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, Basic_Menu_ColorBarMain2) == 0x000288, "Member 'UBasic_Menu_LargeWindowWithHeader_C::Basic_Menu_ColorBarMain2' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, Basic_Menu_ColorBarTop) == 0x000290, "Member 'UBasic_Menu_LargeWindowWithHeader_C::Basic_Menu_ColorBarTop' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, DATA_headerText) == 0x000298, "Member 'UBasic_Menu_LargeWindowWithHeader_C::DATA_headerText' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, HeaderBG) == 0x0002A0, "Member 'UBasic_Menu_LargeWindowWithHeader_C::HeaderBG' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, MainWindowBG) == 0x0002A8, "Member 'UBasic_Menu_LargeWindowWithHeader_C::MainWindowBG' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, MainWindowBorder_Bottom) == 0x0002B0, "Member 'UBasic_Menu_LargeWindowWithHeader_C::MainWindowBorder_Bottom' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, PutStuffHere) == 0x0002B8, "Member 'UBasic_Menu_LargeWindowWithHeader_C::PutStuffHere' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, TXT_Bottom3) == 0x0002C0, "Member 'UBasic_Menu_LargeWindowWithHeader_C::TXT_Bottom3' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, VersionTxt) == 0x0002C8, "Member 'UBasic_Menu_LargeWindowWithHeader_C::VersionTxt' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, Edge_Tint) == 0x0002D0, "Member 'UBasic_Menu_LargeWindowWithHeader_C::Edge_Tint' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, HeaderText) == 0x0002E0, "Member 'UBasic_Menu_LargeWindowWithHeader_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_LargeWindowWithHeader_C, DisableBackgroundBlur) == 0x0002F8, "Member 'UBasic_Menu_LargeWindowWithHeader_C::DisableBackgroundBlur' has a wrong offset!");

}

