#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_LoadOut_PerksEquip_Slot

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FSD_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_OnClicked__DelegateSignature final
{
public:
	class UITM_LoadOut_PerksEquip_Slot_C*         SlotWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_OnClicked__DelegateSignature");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_OnClicked__DelegateSignature");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_OnClicked__DelegateSignature, SlotWidget) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_OnClicked__DelegateSignature::SlotWidget' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot
// 0x0008 (0x0008 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot) == 0x000004, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot) == 0x000008, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot, EntryPoint) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot, K2Node_Event_IsDesignTime) == 0x000005, "Member 'ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot, CallFunc_Not_PreBool_ReturnValue_1) == 0x000006, "Member 'ITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_PreConstruct");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_PreConstruct) == 0x000001, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_PreConstruct");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateIconAndBackground
// 0x0020 (0x0020 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground final
{
public:
	EPerkUsageType                                ActualSlotType;                                    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPerkUsageType                                CallFunc_GetUsageType_ReturnValue;                 // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPerkTierState                                Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPerkTierState                                Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPerkTierState                                Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E44[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentRank_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPerkTierState                                K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPerkTierState                                K2Node_Select_Default_1;                           // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E45[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_2;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground) == 0x000008, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground) == 0x000020, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, ActualSlotType) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::ActualSlotType' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, Temp_bool_Variable) == 0x000001, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, CallFunc_GetUsageType_ReturnValue) == 0x000003, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::CallFunc_GetUsageType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, Temp_byte_Variable) == 0x000004, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, Temp_byte_Variable_1) == 0x000005, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, Temp_bool_Variable_1) == 0x000006, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, Temp_byte_Variable_2) == 0x000007, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, Temp_bool_Variable_2) == 0x000008, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, CallFunc_SelectVisibility_IsVisible) == 0x00000A, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, CallFunc_SelectVisibility_VisibilityChanged) == 0x00000B, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, CallFunc_SelectVisibility_New_Visibility) == 0x00000C, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, CallFunc_GetCurrentRank_ReturnValue) == 0x000010, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::CallFunc_GetCurrentRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, CallFunc_IsValid_ReturnValue_2) == 0x000014, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, K2Node_Select_Default) == 0x000015, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, K2Node_Select_Default_1) == 0x000016, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground, K2Node_Select_Default_2) == 0x000018, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground::K2Node_Select_Default_2' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLockedIcon
// 0x0028 (0x0028 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon final
{
public:
	class UTexture2D*                             InTexture;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E46[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E47[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon) == 0x000008, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon) == 0x000028, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon, InTexture) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon::InTexture' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon, Temp_bool_Variable) == 0x000008, "Member 'ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon, Temp_object_Variable) == 0x000010, "Member 'ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon, K2Node_Select_Default) == 0x000020, "Member 'ITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon::K2Node_Select_Default' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLocked
// 0x0001 (0x0001 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_SetLocked final
{
public:
	bool                                          Param_IsLocked;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_SetLocked) == 0x000001, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_SetLocked");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_SetLocked) == 0x000001, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_SetLocked");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_SetLocked, Param_IsLocked) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_SetLocked::Param_IsLocked' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetPerkAsset
// 0x0008 (0x0008 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_SetPerkAsset final
{
public:
	class UPerkAsset*                             Param_PerkAsset;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_SetPerkAsset) == 0x000008, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_SetPerkAsset");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_SetPerkAsset) == 0x000008, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_SetPerkAsset");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_SetPerkAsset, Param_PerkAsset) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_SetPerkAsset::Param_PerkAsset' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkAsset
// 0x0020 (0x0020 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset final
{
public:
	class UPerkAsset*                             Param_PerkAsset;                                   // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E48[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPerkAsset*                             Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPerkAsset*                             K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset) == 0x000008, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset) == 0x000020, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset, Param_PerkAsset) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset::Param_PerkAsset' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset, Temp_bool_Variable) == 0x000008, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset, Temp_object_Variable) == 0x000010, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset, K2Node_Select_Default) == 0x000018, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset::K2Node_Select_Default' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetSlotType
// 0x0001 (0x0001 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_GetSlotType final
{
public:
	EPerkUsageType                                Param_SlotType;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_GetSlotType) == 0x000001, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_GetSlotType");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_GetSlotType) == 0x000001, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_GetSlotType");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetSlotType, Param_SlotType) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetSlotType::Param_SlotType' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsLocked
// 0x0001 (0x0001 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_GetIsLocked final
{
public:
	bool                                          Param_IsLocked;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_GetIsLocked) == 0x000001, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_GetIsLocked");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_GetIsLocked) == 0x000001, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_GetIsLocked");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetIsLocked, Param_IsLocked) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetIsLocked::Param_IsLocked' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetHovered
// 0x0001 (0x0001 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_SetHovered final
{
public:
	bool                                          Param_Hovered;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_SetHovered) == 0x000001, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_SetHovered");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_SetHovered) == 0x000001, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_SetHovered");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_SetHovered, Param_Hovered) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_SetHovered::Param_Hovered' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetSelected
// 0x0002 (0x0002 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_SetSelected final
{
public:
	bool                                          InSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_SetSelected) == 0x000001, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_SetSelected");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_SetSelected) == 0x000002, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_SetSelected");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_SetSelected, InSelected) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_SetSelected::InSelected' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_SetSelected, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'ITM_LoadOut_PerksEquip_Slot_C_SetSelected::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateSelectionBorder
// 0x0048 (0x0048 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E49[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENUM_MenuColors                               Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               Temp_byte_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Temp_float_Variable;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4A[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               K2Node_Select_Default_1;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E4B[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_2;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColorsAndOpacity_OutputColor;         // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder) == 0x000008, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder) == 0x000048, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, Temp_bool_Variable) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, Temp_object_Variable) == 0x000008, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, Temp_object_Variable_1) == 0x000010, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, Temp_bool_Variable_1) == 0x000018, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, Temp_byte_Variable) == 0x000019, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, Temp_byte_Variable_1) == 0x00001A, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, Temp_bool_Variable_2) == 0x00001B, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, Temp_float_Variable) == 0x00001C, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, Temp_float_Variable_1) == 0x000020, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, K2Node_Select_Default) == 0x000028, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, K2Node_Select_Default_1) == 0x000030, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, CallFunc_BooleanOR_ReturnValue) == 0x000031, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, K2Node_Select_Default_2) == 0x000034, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder, CallFunc_MenuColorsAndOpacity_OutputColor) == 0x000038, "Member 'ITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder::CallFunc_MenuColorsAndOpacity_OutputColor' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsSelected
// 0x0001 (0x0001 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_GetIsSelected final
{
public:
	bool                                          Param_IsSelected;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_GetIsSelected) == 0x000001, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_GetIsSelected");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_GetIsSelected) == 0x000001, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_GetIsSelected");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetIsSelected, Param_IsSelected) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetIsSelected::Param_IsSelected' has a wrong offset!");

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkToolTip
// 0x0050 (0x0050 - 0x0000)
struct ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       BasicToolTip;                                      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E4C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWindowManager*                         CallFunc_GetWindowManager_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOrCreateSingletonWidget_WidgetCreated; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E4D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBasic_ToolTip_C*                       CallFunc_GetOrCreateSingletonWidget_ReturnValue;   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E4E[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentRank_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWindowManager*                         CallFunc_GetWindowManager_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOrCreateSingletonWidget_WidgetCreated_1; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E4F[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Perk_ToolTip_C*                     CallFunc_GetOrCreateSingletonWidget_ReturnValue_1; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip) == 0x000008, "Wrong alignment on ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip");
static_assert(sizeof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip) == 0x000050, "Wrong size on ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip, ReturnValue) == 0x000000, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip::ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip, BasicToolTip) == 0x000008, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip::BasicToolTip' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip, CallFunc_GetWindowManager_ReturnValue) == 0x000018, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip::CallFunc_GetWindowManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip, CallFunc_GetOrCreateSingletonWidget_WidgetCreated) == 0x000020, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip::CallFunc_GetOrCreateSingletonWidget_WidgetCreated' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip, CallFunc_GetOrCreateSingletonWidget_ReturnValue) == 0x000028, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip::CallFunc_GetOrCreateSingletonWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip, CallFunc_GetCurrentRank_ReturnValue) == 0x000034, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip::CallFunc_GetCurrentRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip, CallFunc_GetWindowManager_ReturnValue_1) == 0x000038, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip::CallFunc_GetWindowManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip, CallFunc_GetOrCreateSingletonWidget_WidgetCreated_1) == 0x000040, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip::CallFunc_GetOrCreateSingletonWidget_WidgetCreated_1' has a wrong offset!");
static_assert(offsetof(ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip, CallFunc_GetOrCreateSingletonWidget_ReturnValue_1) == 0x000048, "Member 'ITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip::CallFunc_GetOrCreateSingletonWidget_ReturnValue_1' has a wrong offset!");

}
