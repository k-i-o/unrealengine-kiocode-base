#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KnoMAnim

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct knoMAnim.knoMAnim_C.AnimBlueprintGeneratedConstantData
// 0x012F (0x0130 - 0x0001)
struct KnoMAnim::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_2396[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_76;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_77;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_78;                                  // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_79;                                 // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_80;                                  // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_81;                                 // 0x0024(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2397[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_82;                                // 0x0028(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_83;                               // 0x002C(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_84;                                // 0x0058(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_85;                                 // 0x005C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_86;                                 // 0x005D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_87;                                 // 0x005E(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2398[0x1];                                     // 0x005F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_88;                                 // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_89;                                 // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_90;                                  // 0x0070(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2399[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_91;                               // 0x0078(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0098(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0118(0x0018)()
};
static_assert(alignof(KnoMAnim::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on KnoMAnim::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(KnoMAnim::FAnimBlueprintGeneratedConstantData) == 0x000130, "Wrong size on KnoMAnim::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __NameProperty_76) == 0x000004, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__NameProperty_76' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __NameProperty_77) == 0x00000C, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__NameProperty_77' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __IntProperty_78) == 0x000014, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__IntProperty_78' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __NameProperty_79) == 0x000018, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__NameProperty_79' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __IntProperty_80) == 0x000020, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__IntProperty_80' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __BoolProperty_81) == 0x000024, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__BoolProperty_81' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __FloatProperty_82) == 0x000028, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__FloatProperty_82' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __StructProperty_83) == 0x00002C, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__StructProperty_83' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __FloatProperty_84) == 0x000058, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__FloatProperty_84' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __BoolProperty_85) == 0x00005C, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__BoolProperty_85' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __EnumProperty_86) == 0x00005D, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__EnumProperty_86' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __ByteProperty_87) == 0x00005E, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__ByteProperty_87' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __NameProperty_88) == 0x000060, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__NameProperty_88' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __NameProperty_89) == 0x000068, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__NameProperty_89' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __IntProperty_90) == 0x000070, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__IntProperty_90' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, __StructProperty_91) == 0x000078, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::__StructProperty_91' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000098, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(KnoMAnim::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000118, "Member 'KnoMAnim::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct knoMAnim.knoMAnim_C.AnimBlueprintGeneratedMutableData
// 0x0000 (0x0001 - 0x0001)
struct KnoMAnim::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
};
static_assert(alignof(KnoMAnim::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on KnoMAnim::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(KnoMAnim::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong size on KnoMAnim::FAnimBlueprintGeneratedMutableData");

}

