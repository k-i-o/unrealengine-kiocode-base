#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_CrossHair_Wallsaw

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_CrossHair_Wallsaw.HUD_CrossHair_Wallsaw_C
// 0x0028 (0x0288 - 0x0260)
class UHUD_CrossHair_Wallsaw_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Dot;                                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineLeft;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineRight;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_351;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void ExecuteUbergraph_HUD_CrossHair_Wallsaw(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_CrossHair_Wallsaw_C">();
	}
	static class UHUD_CrossHair_Wallsaw_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_CrossHair_Wallsaw_C>();
	}
};
static_assert(alignof(UHUD_CrossHair_Wallsaw_C) == 0x000008, "Wrong alignment on UHUD_CrossHair_Wallsaw_C");
static_assert(sizeof(UHUD_CrossHair_Wallsaw_C) == 0x000288, "Wrong size on UHUD_CrossHair_Wallsaw_C");
static_assert(offsetof(UHUD_CrossHair_Wallsaw_C, UberGraphFrame) == 0x000260, "Member 'UHUD_CrossHair_Wallsaw_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_Wallsaw_C, Dot) == 0x000268, "Member 'UHUD_CrossHair_Wallsaw_C::Dot' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_Wallsaw_C, LineLeft) == 0x000270, "Member 'UHUD_CrossHair_Wallsaw_C::LineLeft' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_Wallsaw_C, LineRight) == 0x000278, "Member 'UHUD_CrossHair_Wallsaw_C::LineRight' has a wrong offset!");
static_assert(offsetof(UHUD_CrossHair_Wallsaw_C, TextBlock_351) == 0x000280, "Member 'UHUD_CrossHair_Wallsaw_C::TextBlock_351' has a wrong offset!");

}
