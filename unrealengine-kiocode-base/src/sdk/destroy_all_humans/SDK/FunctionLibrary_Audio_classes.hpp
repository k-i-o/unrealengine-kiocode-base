#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FunctionLibrary_Audio

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FunctionLibrary_Audio.FunctionLibrary_Audio_C
// 0x0000 (0x0028 - 0x0028)
class UFunctionLibrary_Audio_C final : public UBlueprintFunctionLibrary
{
public:
	static void PlayUISound(const class FString& Context, bool UsedController, bool UsedMouse, bool UsedKeyboard, float Pitch, class UObject* __WorldContext);
	static void SomethingHappens(class UObject* __WorldContext);
	static void Stop_BackgroundMusic(class UObject* __WorldContext);
	static void Start_BackgroundMusic(class UObject* __WorldContext);
	static bool Start_CSSounds(class AActor* WhichOwner, const struct FGameplayTag& WhichGameplayTag, const struct FGameplayTagContainer& WhichGameplayTags, class UAnimSequenceBase* WhichAnimation, class UObject* __WorldContext);
	static bool End_CSSounds(class AActor* WhichOwner, const struct FGameplayTag& WhichGameplayTag, const struct FGameplayTagContainer& WhichGameplayTags, class UObject* __WorldContext);
	static void IsPlayerInSaucer(class APawn* PlayerPawn, class UObject* __WorldContext, bool* IsInSaucer);
	static void Play_PersistentSound(class USoundBase* Sound_To_Play, class UObject* __WorldContext);
	static void UISound_CalculatePitch(float TimeNow, float LastTime, const class FString& Context, bool UsedController_In, bool UsedMouse_In, bool UsedKeyboard_In, class UObject* __WorldContext, float* ThisTime_Hover);
	static void Start_ChallengeMusic(class UObject* __WorldContext);
	static void Stop_ChallengeMusic(class UObject* __WorldContext);
	static void DistanceSound_For_Guns(class AActor* WeaponActor, class APawn* PlayerPawn, float Distance_For_Far_Sound, class UObject* __WorldContext, float* Distance, float* OutputParameter);
	static void Stop_All_Soundmixes(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FunctionLibrary_Audio_C">();
	}
	static class UFunctionLibrary_Audio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFunctionLibrary_Audio_C>();
	}
};
static_assert(alignof(UFunctionLibrary_Audio_C) == 0x000008, "Wrong alignment on UFunctionLibrary_Audio_C");
static_assert(sizeof(UFunctionLibrary_Audio_C) == 0x000028, "Wrong size on UFunctionLibrary_Audio_C");

}
