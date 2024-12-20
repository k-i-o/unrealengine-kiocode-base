#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActorSequence

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "ActorSequence_structs.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"


namespace SDK
{

// Class ActorSequence.ActorSequence
// 0x0028 (0x0378 - 0x0350)
class UActorSequence final : public UMovieSceneSequence
{
public:
	class UMovieScene*                            MovieScene;                                        // 0x0350(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FActorSequenceObjectReferenceMap       ObjectReferences;                                  // 0x0358(0x0020)(NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActorSequence">();
	}
	static class UActorSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActorSequence>();
	}
};
static_assert(alignof(UActorSequence) == 0x000008, "Wrong alignment on UActorSequence");
static_assert(sizeof(UActorSequence) == 0x000378, "Wrong size on UActorSequence");
static_assert(offsetof(UActorSequence, MovieScene) == 0x000350, "Member 'UActorSequence::MovieScene' has a wrong offset!");
static_assert(offsetof(UActorSequence, ObjectReferences) == 0x000358, "Member 'UActorSequence::ObjectReferences' has a wrong offset!");

// Class ActorSequence.ActorSequenceComponent
// 0x0028 (0x0150 - 0x0128)
class UActorSequenceComponent final : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings    PlaybackSettings;                                  // 0x0128(0x0014)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1240[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UActorSequence*                         Sequence;                                          // 0x0140(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActorSequencePlayer*                   SequencePlayer;                                    // 0x0148(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActorSequenceComponent">();
	}
	static class UActorSequenceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActorSequenceComponent>();
	}
};
static_assert(alignof(UActorSequenceComponent) == 0x000008, "Wrong alignment on UActorSequenceComponent");
static_assert(sizeof(UActorSequenceComponent) == 0x000150, "Wrong size on UActorSequenceComponent");
static_assert(offsetof(UActorSequenceComponent, PlaybackSettings) == 0x000128, "Member 'UActorSequenceComponent::PlaybackSettings' has a wrong offset!");
static_assert(offsetof(UActorSequenceComponent, Sequence) == 0x000140, "Member 'UActorSequenceComponent::Sequence' has a wrong offset!");
static_assert(offsetof(UActorSequenceComponent, SequencePlayer) == 0x000148, "Member 'UActorSequenceComponent::SequencePlayer' has a wrong offset!");

// Class ActorSequence.ActorSequencePlayer
// 0x0000 (0x07F8 - 0x07F8)
class UActorSequencePlayer final : public UMovieSceneSequencePlayer
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActorSequencePlayer">();
	}
	static class UActorSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActorSequencePlayer>();
	}
};
static_assert(alignof(UActorSequencePlayer) == 0x000008, "Wrong alignment on UActorSequencePlayer");
static_assert(sizeof(UActorSequencePlayer) == 0x0007F8, "Wrong size on UActorSequencePlayer");

}

