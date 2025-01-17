#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DH

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DH.DummyObject
// 0x0000 (0x0028 - 0x0028)
class UDummyObject final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DummyObject">();
	}
	static class UDummyObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDummyObject>();
	}
};
static_assert(alignof(UDummyObject) == 0x000008, "Wrong alignment on UDummyObject");
static_assert(sizeof(UDummyObject) == 0x000028, "Wrong size on UDummyObject");

}

