#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BeerBuff_SpaceRig

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C
// 0x0018 (0x0278 - 0x0260)
class UUI_BeerBuff_Spacerig_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BuffImage;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_3;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_BeerBuff_Spacerig(int32 EntryPoint);
	void On_Buff_Changed(class UTemporaryBuff* buff);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnLoaded_E76038A2482A1272456904B10D0684E1(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BeerBuff_Spacerig_C">();
	}
	static class UUI_BeerBuff_Spacerig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BeerBuff_Spacerig_C>();
	}
};
static_assert(alignof(UUI_BeerBuff_Spacerig_C) == 0x000008, "Wrong alignment on UUI_BeerBuff_Spacerig_C");
static_assert(sizeof(UUI_BeerBuff_Spacerig_C) == 0x000278, "Wrong size on UUI_BeerBuff_Spacerig_C");
static_assert(offsetof(UUI_BeerBuff_Spacerig_C, UberGraphFrame) == 0x000260, "Member 'UUI_BeerBuff_Spacerig_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_BeerBuff_Spacerig_C, BuffImage) == 0x000268, "Member 'UUI_BeerBuff_Spacerig_C::BuffImage' has a wrong offset!");
static_assert(offsetof(UUI_BeerBuff_Spacerig_C, SizeBox_3) == 0x000270, "Member 'UUI_BeerBuff_Spacerig_C::SizeBox_3' has a wrong offset!");

}
