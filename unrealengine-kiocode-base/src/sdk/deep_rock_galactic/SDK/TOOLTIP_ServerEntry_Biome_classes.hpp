#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TOOLTIP_ServerEntry_Biome

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C
// 0x0098 (0x02F8 - 0x0260)
class UTOOLTIP_ServerEntry_Biome_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_MinimalWindow_C*            Basic_Menu_MinimalWindow;                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BiomeImage;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BiomeName;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ContentBox;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlanetZoneImage;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextSizable*                       ShowProfileText;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                         ResourceFont;                                      // 0x0298(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UBiome*                                 Biome;                                             // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void SetData(class UBiome* InBiome);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TOOLTIP_ServerEntry_Biome(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TOOLTIP_ServerEntry_Biome_C">();
	}
	static class UTOOLTIP_ServerEntry_Biome_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTOOLTIP_ServerEntry_Biome_C>();
	}
};
static_assert(alignof(UTOOLTIP_ServerEntry_Biome_C) == 0x000008, "Wrong alignment on UTOOLTIP_ServerEntry_Biome_C");
static_assert(sizeof(UTOOLTIP_ServerEntry_Biome_C) == 0x0002F8, "Wrong size on UTOOLTIP_ServerEntry_Biome_C");
static_assert(offsetof(UTOOLTIP_ServerEntry_Biome_C, UberGraphFrame) == 0x000260, "Member 'UTOOLTIP_ServerEntry_Biome_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTOOLTIP_ServerEntry_Biome_C, Basic_Menu_MinimalWindow) == 0x000268, "Member 'UTOOLTIP_ServerEntry_Biome_C::Basic_Menu_MinimalWindow' has a wrong offset!");
static_assert(offsetof(UTOOLTIP_ServerEntry_Biome_C, BiomeImage) == 0x000270, "Member 'UTOOLTIP_ServerEntry_Biome_C::BiomeImage' has a wrong offset!");
static_assert(offsetof(UTOOLTIP_ServerEntry_Biome_C, BiomeName) == 0x000278, "Member 'UTOOLTIP_ServerEntry_Biome_C::BiomeName' has a wrong offset!");
static_assert(offsetof(UTOOLTIP_ServerEntry_Biome_C, ContentBox) == 0x000280, "Member 'UTOOLTIP_ServerEntry_Biome_C::ContentBox' has a wrong offset!");
static_assert(offsetof(UTOOLTIP_ServerEntry_Biome_C, PlanetZoneImage) == 0x000288, "Member 'UTOOLTIP_ServerEntry_Biome_C::PlanetZoneImage' has a wrong offset!");
static_assert(offsetof(UTOOLTIP_ServerEntry_Biome_C, ShowProfileText) == 0x000290, "Member 'UTOOLTIP_ServerEntry_Biome_C::ShowProfileText' has a wrong offset!");
static_assert(offsetof(UTOOLTIP_ServerEntry_Biome_C, ResourceFont) == 0x000298, "Member 'UTOOLTIP_ServerEntry_Biome_C::ResourceFont' has a wrong offset!");
static_assert(offsetof(UTOOLTIP_ServerEntry_Biome_C, Biome) == 0x0002F0, "Member 'UTOOLTIP_ServerEntry_Biome_C::Biome' has a wrong offset!");

}
