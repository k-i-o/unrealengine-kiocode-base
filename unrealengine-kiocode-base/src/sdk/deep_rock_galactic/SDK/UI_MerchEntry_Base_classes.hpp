#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MerchEntry_Base

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MerchEntry_Base.UI_MerchEntry_Base_C
// 0x0030 (0x0290 - 0x0260)
class UUI_MerchEntry_Base_C : public UUserWidget
{
public:
	class FString                                 SteamURL;                                          // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 StatKey;                                           // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 StatMenuKey;                                       // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void OpenLink();
	void Log(const class FString& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MerchEntry_Base_C">();
	}
	static class UUI_MerchEntry_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MerchEntry_Base_C>();
	}
};
static_assert(alignof(UUI_MerchEntry_Base_C) == 0x000008, "Wrong alignment on UUI_MerchEntry_Base_C");
static_assert(sizeof(UUI_MerchEntry_Base_C) == 0x000290, "Wrong size on UUI_MerchEntry_Base_C");
static_assert(offsetof(UUI_MerchEntry_Base_C, SteamURL) == 0x000260, "Member 'UUI_MerchEntry_Base_C::SteamURL' has a wrong offset!");
static_assert(offsetof(UUI_MerchEntry_Base_C, StatKey) == 0x000270, "Member 'UUI_MerchEntry_Base_C::StatKey' has a wrong offset!");
static_assert(offsetof(UUI_MerchEntry_Base_C, StatMenuKey) == 0x000280, "Member 'UUI_MerchEntry_Base_C::StatMenuKey' has a wrong offset!");

}
