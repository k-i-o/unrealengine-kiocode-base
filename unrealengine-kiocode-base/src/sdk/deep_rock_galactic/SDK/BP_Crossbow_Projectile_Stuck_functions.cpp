#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Crossbow_Projectile_Stuck

#include "Basic.hpp"

#include "BP_Crossbow_Projectile_Stuck_classes.hpp"


namespace SDK
{

// Function BP_Crossbow_Projectile_Stuck.BP_Crossbow_Projectile_Stuck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Crossbow_Projectile_Stuck_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Crossbow_Projectile_Stuck_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

