#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STA_SpiderBoss_Pheromone

#include "Basic.hpp"

#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STA_SpiderBoss_Pheromone.STA_SpiderBoss_Pheromone_C
// 0x0000 (0x0108 - 0x0108)
class USTA_SpiderBoss_Pheromone_C final : public UStatusEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STA_SpiderBoss_Pheromone_C">();
	}
	static class USTA_SpiderBoss_Pheromone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTA_SpiderBoss_Pheromone_C>();
	}
};
static_assert(alignof(USTA_SpiderBoss_Pheromone_C) == 0x000008, "Wrong alignment on USTA_SpiderBoss_Pheromone_C");
static_assert(sizeof(USTA_SpiderBoss_Pheromone_C) == 0x000108, "Wrong size on USTA_SpiderBoss_Pheromone_C");

}
