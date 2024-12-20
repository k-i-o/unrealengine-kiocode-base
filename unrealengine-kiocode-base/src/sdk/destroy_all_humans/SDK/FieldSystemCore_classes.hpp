#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FieldSystemCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class FieldSystemCore.FieldSystem
// 0x0018 (0x0040 - 0x0028)
class UFieldSystem final : public UObject
{
public:
	uint8                                         Pad_2004[0x18];                                    // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldSystem">();
	}
	static class UFieldSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldSystem>();
	}
};
static_assert(alignof(UFieldSystem) == 0x000008, "Wrong alignment on UFieldSystem");
static_assert(sizeof(UFieldSystem) == 0x000040, "Wrong size on UFieldSystem");

}

