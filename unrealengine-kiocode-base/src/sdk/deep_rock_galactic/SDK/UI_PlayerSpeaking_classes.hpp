#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerSpeaking

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PlayerSpeaking.UI_PlayerSpeaking_C
// 0x0038 (0x0298 - 0x0260)
class UUI_PlayerSpeaking_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Image_C*                         Basic_Image;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Size;                                              // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2D05[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDPlayerState*                        PlayerState;                                       // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChanged;                                         // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CollapseWhenHidden;                                // 0x0290(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void OnChanged__DelegateSignature(bool InTalking);
	void ExecuteUbergraph_UI_PlayerSpeaking(int32 EntryPoint);
	void SetPlayerState(class AFSDPlayerState* NewPlayerState);
	void OnTalkingChanged(bool IsTalking);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PlayerSpeaking_C">();
	}
	static class UUI_PlayerSpeaking_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PlayerSpeaking_C>();
	}
};
static_assert(alignof(UUI_PlayerSpeaking_C) == 0x000008, "Wrong alignment on UUI_PlayerSpeaking_C");
static_assert(sizeof(UUI_PlayerSpeaking_C) == 0x000298, "Wrong size on UUI_PlayerSpeaking_C");
static_assert(offsetof(UUI_PlayerSpeaking_C, UberGraphFrame) == 0x000260, "Member 'UUI_PlayerSpeaking_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_PlayerSpeaking_C, Basic_Image) == 0x000268, "Member 'UUI_PlayerSpeaking_C::Basic_Image' has a wrong offset!");
static_assert(offsetof(UUI_PlayerSpeaking_C, Size) == 0x000270, "Member 'UUI_PlayerSpeaking_C::Size' has a wrong offset!");
static_assert(offsetof(UUI_PlayerSpeaking_C, PlayerState) == 0x000278, "Member 'UUI_PlayerSpeaking_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UUI_PlayerSpeaking_C, OnChanged) == 0x000280, "Member 'UUI_PlayerSpeaking_C::OnChanged' has a wrong offset!");
static_assert(offsetof(UUI_PlayerSpeaking_C, CollapseWhenHidden) == 0x000290, "Member 'UUI_PlayerSpeaking_C::CollapseWhenHidden' has a wrong offset!");

}
