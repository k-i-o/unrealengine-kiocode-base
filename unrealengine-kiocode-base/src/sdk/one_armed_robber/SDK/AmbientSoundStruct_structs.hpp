#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbientSoundStruct

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct AmbientSoundStruct.AmbientSoundStruct
// 0x0010 (0x0010 - 0x0000)
struct FAmbientSoundStruct final
{
public:
	class USoundBase*                             Sound_2_5A350B19484DDC20D887F38BC088F397;          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Stopsonalarm__8_0FE8126A44802F34F172CB865A4D836A;  // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Volume_5_33C8BB5B47322A4F6B3F9D9A99E2CF2A;         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FAmbientSoundStruct) == 0x000008, "Wrong alignment on FAmbientSoundStruct");
static_assert(sizeof(FAmbientSoundStruct) == 0x000010, "Wrong size on FAmbientSoundStruct");
static_assert(offsetof(FAmbientSoundStruct, Sound_2_5A350B19484DDC20D887F38BC088F397) == 0x000000, "Member 'FAmbientSoundStruct::Sound_2_5A350B19484DDC20D887F38BC088F397' has a wrong offset!");
static_assert(offsetof(FAmbientSoundStruct, Stopsonalarm__8_0FE8126A44802F34F172CB865A4D836A) == 0x000008, "Member 'FAmbientSoundStruct::Stopsonalarm__8_0FE8126A44802F34F172CB865A4D836A' has a wrong offset!");
static_assert(offsetof(FAmbientSoundStruct, Volume_5_33C8BB5B47322A4F6B3F9D9A99E2CF2A) == 0x00000C, "Member 'FAmbientSoundStruct::Volume_5_33C8BB5B47322A4F6B3F9D9A99E2CF2A' has a wrong offset!");

}
