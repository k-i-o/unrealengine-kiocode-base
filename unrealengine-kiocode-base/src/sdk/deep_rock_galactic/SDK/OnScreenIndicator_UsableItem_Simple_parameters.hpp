#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnScreenIndicator_UsableItem_Simple

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple
// 0x00D0 (0x00D0 - 0x0000)
struct OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isVisible;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsVisible)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3702[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AItem* Item)>            K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x002C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItem*                                  K2Node_CustomEvent_Item;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       K2Node_DynamicCast_AsPlayer_Character;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3703[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem*                                  CallFunc_GetEquippedItem_ReturnValue;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3704[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetProgress_ReturnValue;                  // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3705[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x009C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x00AC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3706[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUsableAggregator*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple) == 0x000008, "Wrong alignment on OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple");
static_assert(sizeof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple) == 0x0000D0, "Wrong size on OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, EntryPoint) == 0x000000, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::EntryPoint' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, K2Node_CustomEvent_isVisible) == 0x000004, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::K2Node_CustomEvent_isVisible' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, Temp_bool_Variable) == 0x000005, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, Temp_byte_Variable) == 0x000006, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, Temp_byte_Variable_1) == 0x000007, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, K2Node_Select_Default) == 0x000018, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, K2Node_Event_MyGeometry) == 0x00002C, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, K2Node_Event_InDeltaTime) == 0x000064, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000068, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, K2Node_CustomEvent_Item) == 0x000070, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, K2Node_DynamicCast_AsPlayer_Character) == 0x000078, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, CallFunc_IsValid_ReturnValue) == 0x000081, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, CallFunc_GetEquippedItem_ReturnValue) == 0x000088, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::CallFunc_GetEquippedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, CallFunc_GetProgress_ReturnValue) == 0x000094, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::CallFunc_GetProgress_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, K2Node_Event_IsDesignTime) == 0x000098, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, CallFunc_MenuColors_OutputColor) == 0x00009C, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, CallFunc_MenuColors_OutputColor_1) == 0x0000AC, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, CallFunc_GetComponentByClass_ReturnValue) == 0x0000C0, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple, CallFunc_IsValid_ReturnValue_2) == 0x0000C8, "Member 'OnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.VisChanged
// 0x0001 (0x0001 - 0x0000)
struct OnScreenIndicator_UsableItem_Simple_C_VisChanged final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OnScreenIndicator_UsableItem_Simple_C_VisChanged) == 0x000001, "Wrong alignment on OnScreenIndicator_UsableItem_Simple_C_VisChanged");
static_assert(sizeof(OnScreenIndicator_UsableItem_Simple_C_VisChanged) == 0x000001, "Wrong size on OnScreenIndicator_UsableItem_Simple_C_VisChanged");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_VisChanged, Param_IsVisible) == 0x000000, "Member 'OnScreenIndicator_UsableItem_Simple_C_VisChanged::Param_IsVisible' has a wrong offset!");

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct OnScreenIndicator_UsableItem_Simple_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OnScreenIndicator_UsableItem_Simple_C_PreConstruct) == 0x000001, "Wrong alignment on OnScreenIndicator_UsableItem_Simple_C_PreConstruct");
static_assert(sizeof(OnScreenIndicator_UsableItem_Simple_C_PreConstruct) == 0x000001, "Wrong size on OnScreenIndicator_UsableItem_Simple_C_PreConstruct");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'OnScreenIndicator_UsableItem_Simple_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnItemEquipped
// 0x0008 (0x0008 - 0x0000)
struct OnScreenIndicator_UsableItem_Simple_C_OnItemEquipped final
{
public:
	class AItem*                                  Param_Item;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OnScreenIndicator_UsableItem_Simple_C_OnItemEquipped) == 0x000008, "Wrong alignment on OnScreenIndicator_UsableItem_Simple_C_OnItemEquipped");
static_assert(sizeof(OnScreenIndicator_UsableItem_Simple_C_OnItemEquipped) == 0x000008, "Wrong size on OnScreenIndicator_UsableItem_Simple_C_OnItemEquipped");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_OnItemEquipped, Param_Item) == 0x000000, "Member 'OnScreenIndicator_UsableItem_Simple_C_OnItemEquipped::Param_Item' has a wrong offset!");

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Tick
// 0x003C (0x003C - 0x0000)
struct OnScreenIndicator_UsableItem_Simple_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OnScreenIndicator_UsableItem_Simple_C_Tick) == 0x000004, "Wrong alignment on OnScreenIndicator_UsableItem_Simple_C_Tick");
static_assert(sizeof(OnScreenIndicator_UsableItem_Simple_C_Tick) == 0x00003C, "Wrong size on OnScreenIndicator_UsableItem_Simple_C_Tick");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_Tick, MyGeometry) == 0x000000, "Member 'OnScreenIndicator_UsableItem_Simple_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(OnScreenIndicator_UsableItem_Simple_C_Tick, InDeltaTime) == 0x000038, "Member 'OnScreenIndicator_UsableItem_Simple_C_Tick::InDeltaTime' has a wrong offset!");

}

