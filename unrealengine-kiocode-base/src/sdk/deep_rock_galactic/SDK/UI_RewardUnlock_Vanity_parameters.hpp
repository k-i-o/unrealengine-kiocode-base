#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RewardUnlock_Vanity

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FSD_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.ExecuteUbergraph_UI_RewardUnlock_Vanity
// 0x0120 (0x0120 - 0x0000)
struct UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CD1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVanityReward*                          K2Node_DynamicCast_AsVanity_Reward;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD2[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UArmorMaterialVanityItem*               K2Node_DynamicCast_AsArmor_Material_Vanity_Item;   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD3[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     CallFunc_SetCharacterIcon_OutCharacterID;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD4[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     CallFunc_SelectCharacterID_OutputPin;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPickaxePartReward*                     K2Node_DynamicCast_AsPickaxe_Part_Reward;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD5[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     CallFunc_SelectCharacterID_OutputPin_1;            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPickaxePartLocation                          CallFunc_GetPrefferedLocation_ReturnValue;         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CD6[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetUnlockDetails_OutTitle;                // 0x00B0(0x0018)()
	class FText                                   CallFunc_GetUnlockDetails_OutSubTitle;             // 0x00C8(0x0018)()
	class UTexture*                               CallFunc_GetUnlockDetails_Icon;                    // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD7[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD8[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0100(0x0018)()
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x011E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity) == 0x000008, "Wrong alignment on UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity");
static_assert(sizeof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity) == 0x000120, "Wrong size on UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, EntryPoint) == 0x000000, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_MenuColors_OutputColor) == 0x000004, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_MenuColors_OutputColor_1) == 0x000040, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, K2Node_DynamicCast_AsVanity_Reward) == 0x000058, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::K2Node_DynamicCast_AsVanity_Reward' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, K2Node_DynamicCast_AsArmor_Material_Vanity_Item) == 0x000068, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::K2Node_DynamicCast_AsArmor_Material_Vanity_Item' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_SetCharacterIcon_OutCharacterID) == 0x000078, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_SetCharacterIcon_OutCharacterID' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_Not_PreBool_ReturnValue) == 0x000080, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_SelectCharacterID_OutputPin) == 0x000088, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_SelectCharacterID_OutputPin' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, K2Node_DynamicCast_AsPickaxe_Part_Reward) == 0x000090, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::K2Node_DynamicCast_AsPickaxe_Part_Reward' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, K2Node_DynamicCast_bSuccess_2) == 0x000098, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_SelectCharacterID_OutputPin_1) == 0x0000A0, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_SelectCharacterID_OutputPin_1' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_GetPrefferedLocation_ReturnValue) == 0x0000A8, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_GetPrefferedLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_GetUnlockDetails_OutTitle) == 0x0000B0, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_GetUnlockDetails_OutTitle' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_GetUnlockDetails_OutSubTitle) == 0x0000C8, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_GetUnlockDetails_OutSubTitle' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_GetUnlockDetails_Icon) == 0x0000E0, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_GetUnlockDetails_Icon' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000E8, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, K2Node_DynamicCast_AsTexture_2D) == 0x0000F0, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, K2Node_DynamicCast_bSuccess_3) == 0x0000F8, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_TextToUpper_ReturnValue) == 0x000100, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_SelectVisibility_IsVisible) == 0x000118, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_SelectVisibility_VisibilityChanged) == 0x000119, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_SelectVisibility_New_Visibility) == 0x00011A, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, K2Node_Event_IsDesignTime) == 0x00011B, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00011C, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_Not_PreBool_ReturnValue_1) == 0x00011D, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity, CallFunc_IsVisible_ReturnValue) == 0x00011E, "Member 'UI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_RewardUnlock_Vanity_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_RewardUnlock_Vanity_C_PreConstruct) == 0x000001, "Wrong alignment on UI_RewardUnlock_Vanity_C_PreConstruct");
static_assert(sizeof(UI_RewardUnlock_Vanity_C_PreConstruct) == 0x000001, "Wrong size on UI_RewardUnlock_Vanity_C_PreConstruct");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_RewardUnlock_Vanity_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.GetUnlockDetails
// 0x0140 (0x0140 - 0x0000)
struct UI_RewardUnlock_Vanity_C_GetUnlockDetails final
{
public:
	class FText                                   OutTitle;                                          // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   OutSubTitle;                                       // 0x0018(0x0018)(Parm, OutParm)
	class UTexture*                               Icon;                                              // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPickaxePartReward*                     K2Node_DynamicCast_AsPickaxe_Part_Reward;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD9[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVanityReward*                          K2Node_DynamicCast_AsVanity_Reward;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPickaxePartLocation                          CallFunc_GetPrefferedLocation_ReturnValue;         // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CDA[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               CallFunc_GetIcon_ReturnValue;                      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetPickaxePartLocationTitle_OutTitle;     // 0x0060(0x0018)()
	class FText                                   CallFunc_GetCraftableName_ReturnValue;             // 0x0078(0x0018)(ConstParm)
	EVanitySlot                                   CallFunc_GetVanitySlot_ReturnValue;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CDB[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetVanitySlotTitle_OutTitle;              // 0x0098(0x0018)()
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00D8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0128(0x0018)()
};
static_assert(alignof(UI_RewardUnlock_Vanity_C_GetUnlockDetails) == 0x000008, "Wrong alignment on UI_RewardUnlock_Vanity_C_GetUnlockDetails");
static_assert(sizeof(UI_RewardUnlock_Vanity_C_GetUnlockDetails) == 0x000140, "Wrong size on UI_RewardUnlock_Vanity_C_GetUnlockDetails");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, OutTitle) == 0x000000, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::OutTitle' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, OutSubTitle) == 0x000018, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::OutSubTitle' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, Icon) == 0x000030, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::Icon' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, K2Node_DynamicCast_AsPickaxe_Part_Reward) == 0x000038, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::K2Node_DynamicCast_AsPickaxe_Part_Reward' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, K2Node_DynamicCast_AsVanity_Reward) == 0x000048, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::K2Node_DynamicCast_AsVanity_Reward' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, CallFunc_GetPrefferedLocation_ReturnValue) == 0x000051, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::CallFunc_GetPrefferedLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, CallFunc_GetIcon_ReturnValue) == 0x000058, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::CallFunc_GetIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, CallFunc_GetPickaxePartLocationTitle_OutTitle) == 0x000060, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::CallFunc_GetPickaxePartLocationTitle_OutTitle' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, CallFunc_GetCraftableName_ReturnValue) == 0x000078, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::CallFunc_GetCraftableName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, CallFunc_GetVanitySlot_ReturnValue) == 0x000090, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::CallFunc_GetVanitySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, CallFunc_GetVanitySlotTitle_OutTitle) == 0x000098, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::CallFunc_GetVanitySlotTitle_OutTitle' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, CallFunc_GetDisplayName_ReturnValue) == 0x0000B0, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C0, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, K2Node_MakeStruct_FormatArgumentData) == 0x0000D8, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, K2Node_MakeArray_Array) == 0x000118, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_GetUnlockDetails, CallFunc_Format_ReturnValue) == 0x000128, "Member 'UI_RewardUnlock_Vanity_C_GetUnlockDetails::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.SelectCharacterID
// 0x0038 (0x0038 - 0x0000)
struct UI_RewardUnlock_Vanity_C_SelectCharacterID final
{
public:
	class UPlayerCharacterID*                     OptionalID;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterID*                     OutputPin;                                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CDC[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFSDPlayerState*                        CallFunc_GetOwningFSDPlayerState_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterID*                     CallFunc_GetSelectedCharacterID_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CDD[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCharacterID*                     K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_RewardUnlock_Vanity_C_SelectCharacterID) == 0x000008, "Wrong alignment on UI_RewardUnlock_Vanity_C_SelectCharacterID");
static_assert(sizeof(UI_RewardUnlock_Vanity_C_SelectCharacterID) == 0x000038, "Wrong size on UI_RewardUnlock_Vanity_C_SelectCharacterID");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SelectCharacterID, OptionalID) == 0x000000, "Member 'UI_RewardUnlock_Vanity_C_SelectCharacterID::OptionalID' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SelectCharacterID, OutputPin) == 0x000008, "Member 'UI_RewardUnlock_Vanity_C_SelectCharacterID::OutputPin' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SelectCharacterID, Temp_bool_Variable) == 0x000010, "Member 'UI_RewardUnlock_Vanity_C_SelectCharacterID::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SelectCharacterID, CallFunc_GetOwningFSDPlayerState_ReturnValue) == 0x000018, "Member 'UI_RewardUnlock_Vanity_C_SelectCharacterID::CallFunc_GetOwningFSDPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SelectCharacterID, CallFunc_GetSelectedCharacterID_ReturnValue) == 0x000020, "Member 'UI_RewardUnlock_Vanity_C_SelectCharacterID::CallFunc_GetSelectedCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SelectCharacterID, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'UI_RewardUnlock_Vanity_C_SelectCharacterID::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SelectCharacterID, K2Node_Select_Default) == 0x000030, "Member 'UI_RewardUnlock_Vanity_C_SelectCharacterID::K2Node_Select_Default' has a wrong offset!");

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.SetCharacterIcon
// 0x0018 (0x0018 - 0x0000)
struct UI_RewardUnlock_Vanity_C_SetCharacterIcon final
{
public:
	class UPlayerCharacterID*                     CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterID*                     OutCharacterID;                                    // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_IsVisible;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectVisibility_VisibilityChanged;       // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_SelectVisibility_New_Visibility;          // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_RewardUnlock_Vanity_C_SetCharacterIcon) == 0x000008, "Wrong alignment on UI_RewardUnlock_Vanity_C_SetCharacterIcon");
static_assert(sizeof(UI_RewardUnlock_Vanity_C_SetCharacterIcon) == 0x000018, "Wrong size on UI_RewardUnlock_Vanity_C_SetCharacterIcon");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SetCharacterIcon, CharacterID) == 0x000000, "Member 'UI_RewardUnlock_Vanity_C_SetCharacterIcon::CharacterID' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SetCharacterIcon, OutCharacterID) == 0x000008, "Member 'UI_RewardUnlock_Vanity_C_SetCharacterIcon::OutCharacterID' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SetCharacterIcon, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'UI_RewardUnlock_Vanity_C_SetCharacterIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SetCharacterIcon, CallFunc_SelectVisibility_IsVisible) == 0x000011, "Member 'UI_RewardUnlock_Vanity_C_SetCharacterIcon::CallFunc_SelectVisibility_IsVisible' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SetCharacterIcon, CallFunc_SelectVisibility_VisibilityChanged) == 0x000012, "Member 'UI_RewardUnlock_Vanity_C_SetCharacterIcon::CallFunc_SelectVisibility_VisibilityChanged' has a wrong offset!");
static_assert(offsetof(UI_RewardUnlock_Vanity_C_SetCharacterIcon, CallFunc_SelectVisibility_New_Visibility) == 0x000013, "Member 'UI_RewardUnlock_Vanity_C_SetCharacterIcon::CallFunc_SelectVisibility_New_Visibility' has a wrong offset!");

}
