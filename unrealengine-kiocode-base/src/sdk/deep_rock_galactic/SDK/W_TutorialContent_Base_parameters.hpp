#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TutorialContent_Base

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.ExecuteUbergraph_W_TutorialContent_Base
// 0x0060 (0x0060 - 0x0000)
struct W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Counter;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Denominator;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3770[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_TaskHeader;                     // 0x0010(0x0018)()
	class FText                                   K2Node_CustomEvent_TaskText;                       // 0x0028(0x0018)()
	class FText                                   K2Node_CustomEvent_CheckBoxText;                   // 0x0040(0x0018)()
	class UTexture2D*                             K2Node_CustomEvent_Image;                          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base) == 0x000008, "Wrong alignment on W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base");
static_assert(sizeof(W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base) == 0x000060, "Wrong size on W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base");
static_assert(offsetof(W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base, EntryPoint) == 0x000000, "Member 'W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base, K2Node_CustomEvent_Counter) == 0x000004, "Member 'W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base::K2Node_CustomEvent_Counter' has a wrong offset!");
static_assert(offsetof(W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base, K2Node_CustomEvent_Denominator) == 0x000008, "Member 'W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base::K2Node_CustomEvent_Denominator' has a wrong offset!");
static_assert(offsetof(W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base, K2Node_CustomEvent_TaskHeader) == 0x000010, "Member 'W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base::K2Node_CustomEvent_TaskHeader' has a wrong offset!");
static_assert(offsetof(W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base, K2Node_CustomEvent_TaskText) == 0x000028, "Member 'W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base::K2Node_CustomEvent_TaskText' has a wrong offset!");
static_assert(offsetof(W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base, K2Node_CustomEvent_CheckBoxText) == 0x000040, "Member 'W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base::K2Node_CustomEvent_CheckBoxText' has a wrong offset!");
static_assert(offsetof(W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base, K2Node_CustomEvent_Image) == 0x000058, "Member 'W_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base::K2Node_CustomEvent_Image' has a wrong offset!");

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetTaskCounter
// 0x0008 (0x0008 - 0x0000)
struct W_TutorialContent_Base_C_SetTaskCounter final
{
public:
	int32                                         Counter;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Denominator;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TutorialContent_Base_C_SetTaskCounter) == 0x000004, "Wrong alignment on W_TutorialContent_Base_C_SetTaskCounter");
static_assert(sizeof(W_TutorialContent_Base_C_SetTaskCounter) == 0x000008, "Wrong size on W_TutorialContent_Base_C_SetTaskCounter");
static_assert(offsetof(W_TutorialContent_Base_C_SetTaskCounter, Counter) == 0x000000, "Member 'W_TutorialContent_Base_C_SetTaskCounter::Counter' has a wrong offset!");
static_assert(offsetof(W_TutorialContent_Base_C_SetTaskCounter, Denominator) == 0x000004, "Member 'W_TutorialContent_Base_C_SetTaskCounter::Denominator' has a wrong offset!");

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetImage
// 0x0008 (0x0008 - 0x0000)
struct W_TutorialContent_Base_C_SetImage final
{
public:
	class UTexture2D*                             Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TutorialContent_Base_C_SetImage) == 0x000008, "Wrong alignment on W_TutorialContent_Base_C_SetImage");
static_assert(sizeof(W_TutorialContent_Base_C_SetImage) == 0x000008, "Wrong size on W_TutorialContent_Base_C_SetImage");
static_assert(offsetof(W_TutorialContent_Base_C_SetImage, Image) == 0x000000, "Member 'W_TutorialContent_Base_C_SetImage::Image' has a wrong offset!");

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetText
// 0x0048 (0x0048 - 0x0000)
struct W_TutorialContent_Base_C_SetText final
{
public:
	class FText                                   TaskHeader;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   TaskText;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CheckBoxText;                                      // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_TutorialContent_Base_C_SetText) == 0x000008, "Wrong alignment on W_TutorialContent_Base_C_SetText");
static_assert(sizeof(W_TutorialContent_Base_C_SetText) == 0x000048, "Wrong size on W_TutorialContent_Base_C_SetText");
static_assert(offsetof(W_TutorialContent_Base_C_SetText, TaskHeader) == 0x000000, "Member 'W_TutorialContent_Base_C_SetText::TaskHeader' has a wrong offset!");
static_assert(offsetof(W_TutorialContent_Base_C_SetText, TaskText) == 0x000018, "Member 'W_TutorialContent_Base_C_SetText::TaskText' has a wrong offset!");
static_assert(offsetof(W_TutorialContent_Base_C_SetText, CheckBoxText) == 0x000030, "Member 'W_TutorialContent_Base_C_SetText::CheckBoxText' has a wrong offset!");

}

