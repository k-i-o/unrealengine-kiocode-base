#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerListModifierSetting_FilterRule_Toggle

#include "Basic.hpp"

#include "HDMain_structs.hpp"


namespace SDK::Params
{

// Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.OnBoolSettingChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_ServerListModifierSetting_FilterRule_Toggle_C_OnBoolSettingChanged__DelegateSignature final
{
public:
	class UClass*                                 Param_Rule;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHDFilterRuleParams                    RuleParams;                                        // 0x0008(0x0002)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_OnBoolSettingChanged__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ServerListModifierSetting_FilterRule_Toggle_C_OnBoolSettingChanged__DelegateSignature");
static_assert(sizeof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_OnBoolSettingChanged__DelegateSignature) == 0x000010, "Wrong size on WBP_ServerListModifierSetting_FilterRule_Toggle_C_OnBoolSettingChanged__DelegateSignature");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_OnBoolSettingChanged__DelegateSignature, Param_Rule) == 0x000000, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_OnBoolSettingChanged__DelegateSignature::Param_Rule' has a wrong offset!");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_OnBoolSettingChanged__DelegateSignature, RuleParams) == 0x000008, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_OnBoolSettingChanged__DelegateSignature::RuleParams' has a wrong offset!");

// Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle
// 0x0008 (0x0008 - 0x0000)
struct WBP_ServerListModifierSetting_FilterRule_Toggle_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle) == 0x000004, "Wrong alignment on WBP_ServerListModifierSetting_FilterRule_Toggle_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle");
static_assert(sizeof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle) == 0x000008, "Wrong size on WBP_ServerListModifierSetting_FilterRule_Toggle_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle, EntryPoint) == 0x000000, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle, K2Node_ComponentBoundEvent_bIsChecked) == 0x000005, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");

// Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_ServerListModifierSetting_FilterRule_Toggle_C_BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_ServerListModifierSetting_FilterRule_Toggle_C_BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
static_assert(sizeof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on WBP_ServerListModifierSetting_FilterRule_Toggle_C_BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ServerListModifierSetting_FilterRule_Toggle_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_ServerListModifierSetting_FilterRule_Toggle_C_PreConstruct");
static_assert(sizeof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_PreConstruct) == 0x000001, "Wrong size on WBP_ServerListModifierSetting_FilterRule_Toggle_C_PreConstruct");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.SetCheckedRuleParams
// 0x0002 (0x0002 - 0x0000)
struct WBP_ServerListModifierSetting_FilterRule_Toggle_C_SetCheckedRuleParams final
{
public:
	struct FHDFilterRuleParams                    NewParams;                                         // 0x0000(0x0002)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_SetCheckedRuleParams) == 0x000001, "Wrong alignment on WBP_ServerListModifierSetting_FilterRule_Toggle_C_SetCheckedRuleParams");
static_assert(sizeof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_SetCheckedRuleParams) == 0x000002, "Wrong size on WBP_ServerListModifierSetting_FilterRule_Toggle_C_SetCheckedRuleParams");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_SetCheckedRuleParams, NewParams) == 0x000000, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_SetCheckedRuleParams::NewParams' has a wrong offset!");

// Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.GetCheckedRuleParams
// 0x0002 (0x0002 - 0x0000)
struct WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetCheckedRuleParams final
{
public:
	struct FHDFilterRuleParams                    Params_0;                                          // 0x0000(0x0002)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetCheckedRuleParams) == 0x000001, "Wrong alignment on WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetCheckedRuleParams");
static_assert(sizeof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetCheckedRuleParams) == 0x000002, "Wrong size on WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetCheckedRuleParams");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetCheckedRuleParams, Params_0) == 0x000000, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetCheckedRuleParams::Params_0' has a wrong offset!");

// Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.GetFilterRulePair
// 0x0010 (0x0010 - 0x0000)
struct WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetFilterRulePair final
{
public:
	class UClass*                                 Param_Rule;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHDFilterRuleParams                    RuleParams;                                        // 0x0008(0x0002)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetFilterRulePair) == 0x000008, "Wrong alignment on WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetFilterRulePair");
static_assert(sizeof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetFilterRulePair) == 0x000010, "Wrong size on WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetFilterRulePair");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetFilterRulePair, Param_Rule) == 0x000000, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetFilterRulePair::Param_Rule' has a wrong offset!");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetFilterRulePair, RuleParams) == 0x000008, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_GetFilterRulePair::RuleParams' has a wrong offset!");

// Function WBP_ServerListModifierSetting_FilterRule_Toggle.WBP_ServerListModifierSetting_FilterRule_Toggle_C.IsFilterEnabled
// 0x0004 (0x0004 - 0x0000)
struct WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled final
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled) == 0x000001, "Wrong alignment on WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled");
static_assert(sizeof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled) == 0x000004, "Wrong size on WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled, bActive) == 0x000000, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled::bActive' has a wrong offset!");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled, CallFunc_GetIsEnabled_ReturnValue) == 0x000001, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled, CallFunc_IsChecked_ReturnValue) == 0x000002, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'WBP_ServerListModifierSetting_FilterRule_Toggle_C_IsFilterEnabled::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
