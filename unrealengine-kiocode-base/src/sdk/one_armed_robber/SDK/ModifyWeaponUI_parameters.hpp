#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModifyWeaponUI

#include "Basic.hpp"

#include "ShopItemCategory_structs.hpp"


namespace SDK::Params
{

// Function ModifyWeaponUI.ModifyWeaponUI_C.ExecuteUbergraph_ModifyWeaponUI
// 0x01B8 (0x01B8 - 0x0000)
struct ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGunModChild_C*                         CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGunModChild_C*                         CallFunc_Create_ReturnValue_1;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopItemUI_C*                          CallFunc_Create_ReturnValue_2;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULoadoutUI_C*                           CallFunc_Create_ReturnValue_3;                     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             K2Node_Event_Category_1;                           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             K2Node_Event_Category;                             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Event_ItemInfo;                             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SalePrice;                            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    CallFunc_GetAllWidgetsWithInterface_FoundWidgets;  // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference)
	class AMainMenuPlayer_C*                      K2Node_DynamicCast_AsMain_Menu_Player;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors;      // 0x00A0(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMenuUIInteraface_C>   K2Node_DynamicCast_AsMenu_UIInteraface;            // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EShopItemCategory                             K2Node_CustomEvent_Category;                       // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D3[0x5];                                       // 0x00D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARobberController_C*                    K2Node_DynamicCast_AsRobber_Controller;            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         CallFunc_GetInventoryItemsInCategory_Inventory;    // 0x00F0(0x0010)(ReferenceParm)
	class UClass*                                 K2Node_ClassDynamicCast_AsShop_Item_Weapon_Base;   // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Array_Get_Item_1;                         // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IMenuUIInteraface_C>   K2Node_DynamicCast_AsMenu_UIInteraface_1;          // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         Temp_class_Variable;                               // 0x0148(0x0010)(ReferenceParm)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         Temp_class_Variable_1;                             // 0x0160(0x0010)(ReferenceParm)
	class UClass*                                 CallFunc_Array_Get_Item_2;                         // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x017D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_17E[0x2];                                      // 0x017E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         CallFunc_SortItemsByUnlockLevel_Sorted_items;      // 0x0180(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item_3;                         // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsShop_Item_Weapon_Mod_Base; // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI) == 0x000008, "Wrong alignment on ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI");
static_assert(sizeof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI) == 0x0001B8, "Wrong size on ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, EntryPoint) == 0x000000, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Create_ReturnValue_1) == 0x000010, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Create_ReturnValue_2) == 0x000018, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, Temp_int_Array_Index_Variable) == 0x000020, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, Temp_int_Loop_Counter_Variable_1) == 0x000030, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, Temp_int_Loop_Counter_Variable_2) == 0x000034, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Add_IntInt_ReturnValue_1) == 0x000038, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Add_IntInt_ReturnValue_2) == 0x00003C, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, Temp_int_Loop_Counter_Variable_3) == 0x000040, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Add_IntInt_ReturnValue_3) == 0x000044, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, Temp_int_Array_Index_Variable_2) == 0x000048, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Create_ReturnValue_3) == 0x000050, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_Event_Category_1) == 0x000058, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_Event_Category_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_Event_Category) == 0x000059, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_Event_Category' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_Event_ItemInfo) == 0x000060, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_Event_ItemInfo' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_Event_SalePrice) == 0x000068, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_Event_SalePrice' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000070, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_GetAllWidgetsWithInterface_FoundWidgets) == 0x000078, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_GetAllWidgetsWithInterface_FoundWidgets' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_DynamicCast_AsMain_Menu_Player) == 0x000088, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_DynamicCast_AsMain_Menu_Player' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Array_Length_ReturnValue) == 0x000094, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_GetAllActorsWithInterface_OutActors) == 0x0000A0, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_GetAllActorsWithInterface_OutActors' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Array_Length_ReturnValue_1) == 0x0000B8, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_DynamicCast_AsMenu_UIInteraface) == 0x0000C0, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_DynamicCast_AsMenu_UIInteraface' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000D1, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_CustomEvent_Category) == 0x0000D2, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_CustomEvent_Category' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_GetPlayerController_ReturnValue) == 0x0000D8, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_DynamicCast_AsRobber_Controller) == 0x0000E0, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_DynamicCast_AsRobber_Controller' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_DynamicCast_bSuccess_2) == 0x0000E8, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_GetInventoryItemsInCategory_Inventory) == 0x0000F0, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_GetInventoryItemsInCategory_Inventory' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_ClassDynamicCast_AsShop_Item_Weapon_Base) == 0x000100, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_ClassDynamicCast_AsShop_Item_Weapon_Base' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_ClassDynamicCast_bSuccess) == 0x000108, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, Temp_int_Array_Index_Variable_3) == 0x00010C, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Array_Get_Item_1) == 0x000110, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_DynamicCast_AsMenu_UIInteraface_1) == 0x000118, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_DynamicCast_AsMenu_UIInteraface_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_DynamicCast_bSuccess_3) == 0x000128, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_AddChild_ReturnValue) == 0x000130, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_AddChild_ReturnValue_1) == 0x000138, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_AddChild_ReturnValue_2) == 0x000140, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, Temp_class_Variable) == 0x000148, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_Event_IsDesignTime) == 0x000158, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, Temp_class_Variable_1) == 0x000160, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Array_Get_Item_2) == 0x000170, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Array_Length_ReturnValue_2) == 0x000178, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00017C, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Less_IntInt_ReturnValue_2) == 0x00017D, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_SortItemsByUnlockLevel_Sorted_items) == 0x000180, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_SortItemsByUnlockLevel_Sorted_items' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Array_Length_ReturnValue_3) == 0x000190, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Array_Get_Item_3) == 0x000198, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Less_IntInt_ReturnValue_3) == 0x0001A0, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_ClassDynamicCast_AsShop_Item_Weapon_Mod_Base) == 0x0001A8, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_ClassDynamicCast_AsShop_Item_Weapon_Mod_Base' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, K2Node_ClassDynamicCast_bSuccess_1) == 0x0001B0, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Array_Contains_ReturnValue) == 0x0001B1, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_Array_Contains_ReturnValue_1) == 0x0001B2, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001B3, "Member 'ModifyWeaponUI_C_ExecuteUbergraph_ModifyWeaponUI::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function ModifyWeaponUI.ModifyWeaponUI_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ModifyWeaponUI_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ModifyWeaponUI_C_PreConstruct) == 0x000001, "Wrong alignment on ModifyWeaponUI_C_PreConstruct");
static_assert(sizeof(ModifyWeaponUI_C_PreConstruct) == 0x000001, "Wrong size on ModifyWeaponUI_C_PreConstruct");
static_assert(offsetof(ModifyWeaponUI_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ModifyWeaponUI_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ModifyWeaponUI.ModifyWeaponUI_C.FindAttachmentsOfCategory
// 0x0001 (0x0001 - 0x0000)
struct ModifyWeaponUI_C_FindAttachmentsOfCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModifyWeaponUI_C_FindAttachmentsOfCategory) == 0x000001, "Wrong alignment on ModifyWeaponUI_C_FindAttachmentsOfCategory");
static_assert(sizeof(ModifyWeaponUI_C_FindAttachmentsOfCategory) == 0x000001, "Wrong size on ModifyWeaponUI_C_FindAttachmentsOfCategory");
static_assert(offsetof(ModifyWeaponUI_C_FindAttachmentsOfCategory, Category) == 0x000000, "Member 'ModifyWeaponUI_C_FindAttachmentsOfCategory::Category' has a wrong offset!");

// Function ModifyWeaponUI.ModifyWeaponUI_C.PreviewItem
// 0x0010 (0x0010 - 0x0000)
struct ModifyWeaponUI_C_PreviewItem final
{
public:
	class UClass*                                 ItemInfo;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SalePrice;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModifyWeaponUI_C_PreviewItem) == 0x000008, "Wrong alignment on ModifyWeaponUI_C_PreviewItem");
static_assert(sizeof(ModifyWeaponUI_C_PreviewItem) == 0x000010, "Wrong size on ModifyWeaponUI_C_PreviewItem");
static_assert(offsetof(ModifyWeaponUI_C_PreviewItem, ItemInfo) == 0x000000, "Member 'ModifyWeaponUI_C_PreviewItem::ItemInfo' has a wrong offset!");
static_assert(offsetof(ModifyWeaponUI_C_PreviewItem, SalePrice) == 0x000008, "Member 'ModifyWeaponUI_C_PreviewItem::SalePrice' has a wrong offset!");

// Function ModifyWeaponUI.ModifyWeaponUI_C.DragItemFromCategory
// 0x0001 (0x0001 - 0x0000)
struct ModifyWeaponUI_C_DragItemFromCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModifyWeaponUI_C_DragItemFromCategory) == 0x000001, "Wrong alignment on ModifyWeaponUI_C_DragItemFromCategory");
static_assert(sizeof(ModifyWeaponUI_C_DragItemFromCategory) == 0x000001, "Wrong size on ModifyWeaponUI_C_DragItemFromCategory");
static_assert(offsetof(ModifyWeaponUI_C_DragItemFromCategory, Category) == 0x000000, "Member 'ModifyWeaponUI_C_DragItemFromCategory::Category' has a wrong offset!");

// Function ModifyWeaponUI.ModifyWeaponUI_C.ChangeCategory
// 0x0001 (0x0001 - 0x0000)
struct ModifyWeaponUI_C_ChangeCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ModifyWeaponUI_C_ChangeCategory) == 0x000001, "Wrong alignment on ModifyWeaponUI_C_ChangeCategory");
static_assert(sizeof(ModifyWeaponUI_C_ChangeCategory) == 0x000001, "Wrong size on ModifyWeaponUI_C_ChangeCategory");
static_assert(offsetof(ModifyWeaponUI_C_ChangeCategory, Category) == 0x000000, "Member 'ModifyWeaponUI_C_ChangeCategory::Category' has a wrong offset!");

}
