#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_Trading_Resource

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_Trading_Resource.ITM_Trading_Resource_C
// 0x00C0 (0x0320 - 0x0260)
class UITM_Trading_Resource_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       GradiantFadeIn;                                    // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                B_Add;                                             // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                B_Subtract;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_BG_CutCorner_W_Image_C*          Basic_BG_CutCorner_W_Image;                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Glow;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Hover;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CreditsIcon_Buy;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CreditsIcon_Sell;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Resource;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_GradientBackground;                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_AmountOwned;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_BuyPrice;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ResourceName;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_SellPrice;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResourceData*                          Resource;                                          // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChangeAmout;                                       // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountOwned;                                       // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_Trading_BasketItem_C*              TradeBasket;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             AmoutUpdated;                                      // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CreditsLeft;                                       // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoClearAnim;                                       // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DoTradeAnim;                                       // 0x0305(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OutroPlaying;                                      // 0x0306(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55FA[0x1];                                     // 0x0307(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RollCounter;                                       // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55FB[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           RollCounter_Handle;                                // 0x0310(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrIncrementAmount;                               // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateChangeAmount(int32 IncrementAmount, bool* DidUpdate);
	void PreConstruct(bool IsDesignTime);
	void SetData(class UResourceData* Param_Resource, class UITM_Trading_BasketItem_C* Param_TradeBasket);
	void UpdateNumber(bool Param_DoClearAnim, bool Param_DoTradeAnim, float InitialDelay);
	void SetAvailableBalance(int32 Param_CreditsLeft);
	void ClearAmount();
	void UpdateAmountOwned();
	void FadeFinished();
	void BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
	void IncrementAmount();
	void Construct();
	void ResourceUpdated(class UResourceData* Param_Resource, float CurrentAmount);
	void ExecuteUbergraph_ITM_Trading_Resource(int32 EntryPoint);
	void AmoutUpdated__DelegateSignature(bool Param_DoClearAnim, bool Param_DoTradeAnim);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_Trading_Resource_C">();
	}
	static class UITM_Trading_Resource_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_Trading_Resource_C>();
	}
};
static_assert(alignof(UITM_Trading_Resource_C) == 0x000008, "Wrong alignment on UITM_Trading_Resource_C");
static_assert(sizeof(UITM_Trading_Resource_C) == 0x000320, "Wrong size on UITM_Trading_Resource_C");
static_assert(offsetof(UITM_Trading_Resource_C, UberGraphFrame) == 0x000260, "Member 'UITM_Trading_Resource_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, GradiantFadeIn) == 0x000268, "Member 'UITM_Trading_Resource_C::GradiantFadeIn' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, B_Add) == 0x000270, "Member 'UITM_Trading_Resource_C::B_Add' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, B_Subtract) == 0x000278, "Member 'UITM_Trading_Resource_C::B_Subtract' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, Basic_BG_CutCorner_W_Image) == 0x000280, "Member 'UITM_Trading_Resource_C::Basic_BG_CutCorner_W_Image' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, Border_Glow) == 0x000288, "Member 'UITM_Trading_Resource_C::Border_Glow' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, Button_Hover) == 0x000290, "Member 'UITM_Trading_Resource_C::Button_Hover' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, CreditsIcon_Buy) == 0x000298, "Member 'UITM_Trading_Resource_C::CreditsIcon_Buy' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, CreditsIcon_Sell) == 0x0002A0, "Member 'UITM_Trading_Resource_C::CreditsIcon_Sell' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, Icon_Resource) == 0x0002A8, "Member 'UITM_Trading_Resource_C::Icon_Resource' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, Image_GradientBackground) == 0x0002B0, "Member 'UITM_Trading_Resource_C::Image_GradientBackground' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, Text_AmountOwned) == 0x0002B8, "Member 'UITM_Trading_Resource_C::Text_AmountOwned' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, Text_BuyPrice) == 0x0002C0, "Member 'UITM_Trading_Resource_C::Text_BuyPrice' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, Text_ResourceName) == 0x0002C8, "Member 'UITM_Trading_Resource_C::Text_ResourceName' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, Text_SellPrice) == 0x0002D0, "Member 'UITM_Trading_Resource_C::Text_SellPrice' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, Resource) == 0x0002D8, "Member 'UITM_Trading_Resource_C::Resource' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, ChangeAmout) == 0x0002E0, "Member 'UITM_Trading_Resource_C::ChangeAmout' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, AmountOwned) == 0x0002E4, "Member 'UITM_Trading_Resource_C::AmountOwned' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, TradeBasket) == 0x0002E8, "Member 'UITM_Trading_Resource_C::TradeBasket' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, AmoutUpdated) == 0x0002F0, "Member 'UITM_Trading_Resource_C::AmoutUpdated' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, CreditsLeft) == 0x000300, "Member 'UITM_Trading_Resource_C::CreditsLeft' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, DoClearAnim) == 0x000304, "Member 'UITM_Trading_Resource_C::DoClearAnim' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, DoTradeAnim) == 0x000305, "Member 'UITM_Trading_Resource_C::DoTradeAnim' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, OutroPlaying) == 0x000306, "Member 'UITM_Trading_Resource_C::OutroPlaying' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, RollCounter) == 0x000308, "Member 'UITM_Trading_Resource_C::RollCounter' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, RollCounter_Handle) == 0x000310, "Member 'UITM_Trading_Resource_C::RollCounter_Handle' has a wrong offset!");
static_assert(offsetof(UITM_Trading_Resource_C, CurrIncrementAmount) == 0x000318, "Member 'UITM_Trading_Resource_C::CurrIncrementAmount' has a wrong offset!");

}
