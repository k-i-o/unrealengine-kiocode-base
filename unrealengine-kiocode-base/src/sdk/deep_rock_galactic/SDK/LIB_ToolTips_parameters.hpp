#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LIB_ToolTips

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function LIB_ToolTips.LIB_ToolTips_C.CreateBasicToolTip
// 0x0078 (0x0078 - 0x0000)
struct LIB_ToolTips_C_CreateBasicToolTip final
{
public:
	class UWidget*                                Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                              Position;                                          // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Alignment;                                         // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       ToolTipWidget;                                     // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       Widget;                                            // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3065[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x0060(0x0018)()
};
static_assert(alignof(LIB_ToolTips_C_CreateBasicToolTip) == 0x000008, "Wrong alignment on LIB_ToolTips_C_CreateBasicToolTip");
static_assert(sizeof(LIB_ToolTips_C_CreateBasicToolTip) == 0x000078, "Wrong size on LIB_ToolTips_C_CreateBasicToolTip");
static_assert(offsetof(LIB_ToolTips_C_CreateBasicToolTip, Target) == 0x000000, "Member 'LIB_ToolTips_C_CreateBasicToolTip::Target' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBasicToolTip, Text) == 0x000008, "Member 'LIB_ToolTips_C_CreateBasicToolTip::Text' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBasicToolTip, Position) == 0x000020, "Member 'LIB_ToolTips_C_CreateBasicToolTip::Position' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBasicToolTip, Alignment) == 0x000028, "Member 'LIB_ToolTips_C_CreateBasicToolTip::Alignment' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBasicToolTip, __WorldContext) == 0x000030, "Member 'LIB_ToolTips_C_CreateBasicToolTip::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBasicToolTip, ToolTipWidget) == 0x000038, "Member 'LIB_ToolTips_C_CreateBasicToolTip::ToolTipWidget' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBasicToolTip, Widget) == 0x000040, "Member 'LIB_ToolTips_C_CreateBasicToolTip::Widget' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBasicToolTip, Temp_bool_Variable) == 0x000048, "Member 'LIB_ToolTips_C_CreateBasicToolTip::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBasicToolTip, CallFunc_TextIsEmpty_ReturnValue) == 0x000049, "Member 'LIB_ToolTips_C_CreateBasicToolTip::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBasicToolTip, CallFunc_GetOwningPlayer_ReturnValue) == 0x000050, "Member 'LIB_ToolTips_C_CreateBasicToolTip::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBasicToolTip, CallFunc_Create_ReturnValue) == 0x000058, "Member 'LIB_ToolTips_C_CreateBasicToolTip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBasicToolTip, K2Node_Select_Default) == 0x000060, "Member 'LIB_ToolTips_C_CreateBasicToolTip::K2Node_Select_Default' has a wrong offset!");

// Function LIB_ToolTips.LIB_ToolTips_C.CreateBiomeToolTip
// 0x0050 (0x0050 - 0x0000)
struct LIB_ToolTips_C_CreateBiomeToolTip final
{
public:
	class UWidget*                                Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Alignment;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResourceData*                          ResourceA;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResourceData*                          ResourceB;                                         // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBiome_ToolTip_C*                       ToolTipWidget;                                     // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBiome_ToolTip_C*                       Widget;                                            // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBiome_ToolTip_C*                       CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LIB_ToolTips_C_CreateBiomeToolTip) == 0x000008, "Wrong alignment on LIB_ToolTips_C_CreateBiomeToolTip");
static_assert(sizeof(LIB_ToolTips_C_CreateBiomeToolTip) == 0x000050, "Wrong size on LIB_ToolTips_C_CreateBiomeToolTip");
static_assert(offsetof(LIB_ToolTips_C_CreateBiomeToolTip, Target) == 0x000000, "Member 'LIB_ToolTips_C_CreateBiomeToolTip::Target' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBiomeToolTip, Position) == 0x000008, "Member 'LIB_ToolTips_C_CreateBiomeToolTip::Position' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBiomeToolTip, Alignment) == 0x000010, "Member 'LIB_ToolTips_C_CreateBiomeToolTip::Alignment' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBiomeToolTip, ResourceA) == 0x000018, "Member 'LIB_ToolTips_C_CreateBiomeToolTip::ResourceA' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBiomeToolTip, ResourceB) == 0x000020, "Member 'LIB_ToolTips_C_CreateBiomeToolTip::ResourceB' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBiomeToolTip, __WorldContext) == 0x000028, "Member 'LIB_ToolTips_C_CreateBiomeToolTip::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBiomeToolTip, ToolTipWidget) == 0x000030, "Member 'LIB_ToolTips_C_CreateBiomeToolTip::ToolTipWidget' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBiomeToolTip, Widget) == 0x000038, "Member 'LIB_ToolTips_C_CreateBiomeToolTip::Widget' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBiomeToolTip, CallFunc_GetOwningPlayer_ReturnValue) == 0x000040, "Member 'LIB_ToolTips_C_CreateBiomeToolTip::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateBiomeToolTip, CallFunc_Create_ReturnValue) == 0x000048, "Member 'LIB_ToolTips_C_CreateBiomeToolTip::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function LIB_ToolTips.LIB_ToolTips_C.CreateToolTip
// 0x0040 (0x0040 - 0x0000)
struct LIB_ToolTips_C_CreateToolTip final
{
public:
	class UWidget*                                ToolTipTarget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ToolTipClass;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Offset;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            OutToolTip;                                        // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            ToolTip;                                           // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LIB_ToolTips_C_CreateToolTip) == 0x000008, "Wrong alignment on LIB_ToolTips_C_CreateToolTip");
static_assert(sizeof(LIB_ToolTips_C_CreateToolTip) == 0x000040, "Wrong size on LIB_ToolTips_C_CreateToolTip");
static_assert(offsetof(LIB_ToolTips_C_CreateToolTip, ToolTipTarget) == 0x000000, "Member 'LIB_ToolTips_C_CreateToolTip::ToolTipTarget' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateToolTip, ToolTipClass) == 0x000008, "Member 'LIB_ToolTips_C_CreateToolTip::ToolTipClass' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateToolTip, Offset) == 0x000010, "Member 'LIB_ToolTips_C_CreateToolTip::Offset' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateToolTip, __WorldContext) == 0x000018, "Member 'LIB_ToolTips_C_CreateToolTip::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateToolTip, OutToolTip) == 0x000020, "Member 'LIB_ToolTips_C_CreateToolTip::OutToolTip' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateToolTip, ToolTip) == 0x000028, "Member 'LIB_ToolTips_C_CreateToolTip::ToolTip' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateToolTip, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'LIB_ToolTips_C_CreateToolTip::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateToolTip, CallFunc_Create_ReturnValue) == 0x000038, "Member 'LIB_ToolTips_C_CreateToolTip::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function LIB_ToolTips.LIB_ToolTips_C.CreateInputToolTip
// 0x00A8 (0x00A8 - 0x0000)
struct LIB_ToolTips_C_CreateInputToolTip final
{
public:
	class UWidget*                                Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                              Position;                                          // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Alignment;                                         // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   Key_Default;                                       // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FKey                                   Key_Console_Override;                              // 0x0048(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0060(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       ToolTipWidget;                                     // 0x0068(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       Widget;                                            // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3066[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBasic_ToolTip_C*                       CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x0090(0x0018)()
};
static_assert(alignof(LIB_ToolTips_C_CreateInputToolTip) == 0x000008, "Wrong alignment on LIB_ToolTips_C_CreateInputToolTip");
static_assert(sizeof(LIB_ToolTips_C_CreateInputToolTip) == 0x0000A8, "Wrong size on LIB_ToolTips_C_CreateInputToolTip");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, Target) == 0x000000, "Member 'LIB_ToolTips_C_CreateInputToolTip::Target' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, Text) == 0x000008, "Member 'LIB_ToolTips_C_CreateInputToolTip::Text' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, Position) == 0x000020, "Member 'LIB_ToolTips_C_CreateInputToolTip::Position' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, Alignment) == 0x000028, "Member 'LIB_ToolTips_C_CreateInputToolTip::Alignment' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, Key_Default) == 0x000030, "Member 'LIB_ToolTips_C_CreateInputToolTip::Key_Default' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, Key_Console_Override) == 0x000048, "Member 'LIB_ToolTips_C_CreateInputToolTip::Key_Console_Override' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, __WorldContext) == 0x000060, "Member 'LIB_ToolTips_C_CreateInputToolTip::__WorldContext' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, ToolTipWidget) == 0x000068, "Member 'LIB_ToolTips_C_CreateInputToolTip::ToolTipWidget' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, Widget) == 0x000070, "Member 'LIB_ToolTips_C_CreateInputToolTip::Widget' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, Temp_bool_Variable) == 0x000078, "Member 'LIB_ToolTips_C_CreateInputToolTip::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, CallFunc_TextIsEmpty_ReturnValue) == 0x000079, "Member 'LIB_ToolTips_C_CreateInputToolTip::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, CallFunc_GetOwningPlayer_ReturnValue) == 0x000080, "Member 'LIB_ToolTips_C_CreateInputToolTip::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, CallFunc_Create_ReturnValue) == 0x000088, "Member 'LIB_ToolTips_C_CreateInputToolTip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LIB_ToolTips_C_CreateInputToolTip, K2Node_Select_Default) == 0x000090, "Member 'LIB_ToolTips_C_CreateInputToolTip::K2Node_Select_Default' has a wrong offset!");

}

