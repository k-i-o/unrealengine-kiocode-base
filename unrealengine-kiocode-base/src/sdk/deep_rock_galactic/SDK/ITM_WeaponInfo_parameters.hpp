#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_WeaponInfo

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ITM_WeaponInfo.ITM_WeaponInfo_C.ExecuteUbergraph_ITM_WeaponInfo
// 0x00A0 (0x00A0 - 0x0000)
struct ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C3D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDSaveGame*                           CallFunc_GetFSDSaveGame_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFSDPlayerState*                        K2Node_DynamicCast_AsFSDPlayer_State;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C3E[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColorsAndOpacity_OutputColor;         // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColorsAndOpacity_OutputColor_1;       // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C3F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     CallFunc_GetSelectedCharacterID_ReturnValue;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemID*                                CallFunc_GetEquippedItemID_ReturnValue;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColorsAndOpacity_OutputColor_2;       // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemData*                              CallFunc_GetItemData_ReturnValue;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class AItem>                      CallFunc_GetItemClass_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UItemUpgrade*                           CallFunc_GetEquippedOverclock_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USchematicCategory*                     CallFunc_FromUpgrade_OutSchematicCategory;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C40[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     CallFunc_GetSelectedCharacterID_ReturnValue_1;     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUpgradableGearComponent*               CallFunc_GetComponentFromClass_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo) == 0x000008, "Wrong alignment on ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo");
static_assert(sizeof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo) == 0x0000A0, "Wrong size on ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, EntryPoint) == 0x000000, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_GetFSDSaveGame_ReturnValue) == 0x000008, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_GetFSDSaveGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, K2Node_DynamicCast_AsFSDPlayer_State) == 0x000018, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::K2Node_DynamicCast_AsFSDPlayer_State' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, K2Node_Event_IsDesignTime) == 0x000021, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_MenuColorsAndOpacity_OutputColor) == 0x000024, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_MenuColorsAndOpacity_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_MenuColorsAndOpacity_OutputColor_1) == 0x000034, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_MenuColorsAndOpacity_OutputColor_1' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_GetSelectedCharacterID_ReturnValue) == 0x000048, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_GetSelectedCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_GetEquippedItemID_ReturnValue) == 0x000050, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_GetEquippedItemID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_MenuColorsAndOpacity_OutputColor_2) == 0x000058, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_MenuColorsAndOpacity_OutputColor_2' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_GetItemData_ReturnValue) == 0x000068, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_GetItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_GetItemClass_ReturnValue) == 0x000070, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_GetItemClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_GetEquippedOverclock_ReturnValue) == 0x000078, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_GetEquippedOverclock_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_FromUpgrade_OutSchematicCategory) == 0x000080, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_FromUpgrade_OutSchematicCategory' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_GetSelectedCharacterID_ReturnValue_1) == 0x000090, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_GetSelectedCharacterID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo, CallFunc_GetComponentFromClass_ReturnValue) == 0x000098, "Member 'ITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo::CallFunc_GetComponentFromClass_ReturnValue' has a wrong offset!");

// Function ITM_WeaponInfo.ITM_WeaponInfo_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_WeaponInfo_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_WeaponInfo_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_WeaponInfo_C_PreConstruct");
static_assert(sizeof(ITM_WeaponInfo_C_PreConstruct) == 0x000001, "Wrong size on ITM_WeaponInfo_C_PreConstruct");
static_assert(offsetof(ITM_WeaponInfo_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_WeaponInfo_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_WeaponInfo.ITM_WeaponInfo_C.GetStatsToolTip
// 0x0038 (0x0038 - 0x0000)
struct ITM_WeaponInfo_C_GetStatsToolTip final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UITM_Loadout_GearStats_C*               ToolTip;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWindowManager*                         CallFunc_GetWindowManager_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOrCreateSingletonWidget_WidgetCreated; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C41[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UITM_Loadout_GearStats_C*               CallFunc_GetOrCreateSingletonWidget_ReturnValue;   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_WeaponInfo_C_GetStatsToolTip) == 0x000008, "Wrong alignment on ITM_WeaponInfo_C_GetStatsToolTip");
static_assert(sizeof(ITM_WeaponInfo_C_GetStatsToolTip) == 0x000038, "Wrong size on ITM_WeaponInfo_C_GetStatsToolTip");
static_assert(offsetof(ITM_WeaponInfo_C_GetStatsToolTip, ReturnValue) == 0x000000, "Member 'ITM_WeaponInfo_C_GetStatsToolTip::ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_GetStatsToolTip, ToolTip) == 0x000008, "Member 'ITM_WeaponInfo_C_GetStatsToolTip::ToolTip' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_GetStatsToolTip, K2Node_MakeStruct_Margin) == 0x000010, "Member 'ITM_WeaponInfo_C_GetStatsToolTip::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_GetStatsToolTip, CallFunc_GetWindowManager_ReturnValue) == 0x000020, "Member 'ITM_WeaponInfo_C_GetStatsToolTip::CallFunc_GetWindowManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_GetStatsToolTip, CallFunc_GetOrCreateSingletonWidget_WidgetCreated) == 0x000028, "Member 'ITM_WeaponInfo_C_GetStatsToolTip::CallFunc_GetOrCreateSingletonWidget_WidgetCreated' has a wrong offset!");
static_assert(offsetof(ITM_WeaponInfo_C_GetStatsToolTip, CallFunc_GetOrCreateSingletonWidget_ReturnValue) == 0x000030, "Member 'ITM_WeaponInfo_C_GetStatsToolTip::CallFunc_GetOrCreateSingletonWidget_ReturnValue' has a wrong offset!");

}
