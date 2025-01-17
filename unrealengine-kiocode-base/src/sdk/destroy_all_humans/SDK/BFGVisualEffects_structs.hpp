#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFGVisualEffects

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct BFGVisualEffects.ClipmapMaterialLod
// 0x0010 (0x0010 - 0x0000)
struct FClipmapMaterialLod final
{
public:
	int32                                         LodLevel;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1134[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Material;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClipmapMaterialLod) == 0x000008, "Wrong alignment on FClipmapMaterialLod");
static_assert(sizeof(FClipmapMaterialLod) == 0x000010, "Wrong size on FClipmapMaterialLod");
static_assert(offsetof(FClipmapMaterialLod, LodLevel) == 0x000000, "Member 'FClipmapMaterialLod::LodLevel' has a wrong offset!");
static_assert(offsetof(FClipmapMaterialLod, Material) == 0x000008, "Member 'FClipmapMaterialLod::Material' has a wrong offset!");

// ScriptStruct BFGVisualEffects.VariationAttachmentSetup
// 0x0038 (0x0038 - 0x0000)
struct FVariationAttachmentSetup final
{
public:
	TSoftObjectPtr<class UStaticMesh>             AttachmentMesh;                                    // 0x0000(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AttachmentSocket;                                  // 0x0028(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         M_fProbability;                                    // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M_bOnlySpawnIfBoneEmpty;                           // 0x0034(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1135[0x3];                                     // 0x0035(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FVariationAttachmentSetup) == 0x000008, "Wrong alignment on FVariationAttachmentSetup");
static_assert(sizeof(FVariationAttachmentSetup) == 0x000038, "Wrong size on FVariationAttachmentSetup");
static_assert(offsetof(FVariationAttachmentSetup, AttachmentMesh) == 0x000000, "Member 'FVariationAttachmentSetup::AttachmentMesh' has a wrong offset!");
static_assert(offsetof(FVariationAttachmentSetup, AttachmentSocket) == 0x000028, "Member 'FVariationAttachmentSetup::AttachmentSocket' has a wrong offset!");
static_assert(offsetof(FVariationAttachmentSetup, M_fProbability) == 0x000030, "Member 'FVariationAttachmentSetup::M_fProbability' has a wrong offset!");
static_assert(offsetof(FVariationAttachmentSetup, M_bOnlySpawnIfBoneEmpty) == 0x000034, "Member 'FVariationAttachmentSetup::M_bOnlySpawnIfBoneEmpty' has a wrong offset!");

// ScriptStruct BFGVisualEffects.TextureVariationSetup
// 0x0040 (0x0040 - 0x0000)
struct FTextureVariationSetup final
{
public:
	int32                                         MaterialIndex;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MaterialName;                                      // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1136[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UMaterialInterface>      Material;                                          // 0x0010(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         M_fWeight;                                         // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         M_iSelectionGroup;                                 // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTextureVariationSetup) == 0x000008, "Wrong alignment on FTextureVariationSetup");
static_assert(sizeof(FTextureVariationSetup) == 0x000040, "Wrong size on FTextureVariationSetup");
static_assert(offsetof(FTextureVariationSetup, MaterialIndex) == 0x000000, "Member 'FTextureVariationSetup::MaterialIndex' has a wrong offset!");
static_assert(offsetof(FTextureVariationSetup, MaterialName) == 0x000004, "Member 'FTextureVariationSetup::MaterialName' has a wrong offset!");
static_assert(offsetof(FTextureVariationSetup, Material) == 0x000010, "Member 'FTextureVariationSetup::Material' has a wrong offset!");
static_assert(offsetof(FTextureVariationSetup, M_fWeight) == 0x000038, "Member 'FTextureVariationSetup::M_fWeight' has a wrong offset!");
static_assert(offsetof(FTextureVariationSetup, M_iSelectionGroup) == 0x00003C, "Member 'FTextureVariationSetup::M_iSelectionGroup' has a wrong offset!");

// ScriptStruct BFGVisualEffects.BFGNPCVariationDefinitionRow
// 0x0068 (0x0070 - 0x0008)
struct FBFGNPCVariationDefinitionRow final : public FTableRowBase
{
public:
	TSoftObjectPtr<class USkeletalMesh>           BodySkeletalMesh;                                  // 0x0008(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVariationAttachmentSetup>      Attachments;                                       // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FTextureVariationSetup>         TextureVariationSet;                               // 0x0040(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  GameplayTags;                                      // 0x0050(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBFGNPCVariationDefinitionRow) == 0x000008, "Wrong alignment on FBFGNPCVariationDefinitionRow");
static_assert(sizeof(FBFGNPCVariationDefinitionRow) == 0x000070, "Wrong size on FBFGNPCVariationDefinitionRow");
static_assert(offsetof(FBFGNPCVariationDefinitionRow, BodySkeletalMesh) == 0x000008, "Member 'FBFGNPCVariationDefinitionRow::BodySkeletalMesh' has a wrong offset!");
static_assert(offsetof(FBFGNPCVariationDefinitionRow, Attachments) == 0x000030, "Member 'FBFGNPCVariationDefinitionRow::Attachments' has a wrong offset!");
static_assert(offsetof(FBFGNPCVariationDefinitionRow, TextureVariationSet) == 0x000040, "Member 'FBFGNPCVariationDefinitionRow::TextureVariationSet' has a wrong offset!");
static_assert(offsetof(FBFGNPCVariationDefinitionRow, GameplayTags) == 0x000050, "Member 'FBFGNPCVariationDefinitionRow::GameplayTags' has a wrong offset!");

// ScriptStruct BFGVisualEffects.BFGVirtualActor
// 0x00D0 (0x00D0 - 0x0000)
struct alignas(0x10) FBFGVirtualActor final
{
public:
	uint8                                         Pad_1137[0xD0];                                    // 0x0000(0x00D0)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBFGVirtualActor) == 0x000010, "Wrong alignment on FBFGVirtualActor");
static_assert(sizeof(FBFGVirtualActor) == 0x0000D0, "Wrong size on FBFGVirtualActor");

// ScriptStruct BFGVisualEffects.BFGCustomVariation
// 0x0010 (0x0010 - 0x0000)
struct FBFGCustomVariation final
{
public:
	TArray<struct FBFGNPCVariationDefinitionRow>  M_Variations;                                      // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBFGCustomVariation) == 0x000008, "Wrong alignment on FBFGCustomVariation");
static_assert(sizeof(FBFGCustomVariation) == 0x000010, "Wrong size on FBFGCustomVariation");
static_assert(offsetof(FBFGCustomVariation, M_Variations) == 0x000000, "Member 'FBFGCustomVariation::M_Variations' has a wrong offset!");

// ScriptStruct BFGVisualEffects.BFGAnimationSetup
// 0x0018 (0x0018 - 0x0000)
struct FBFGAnimationSetup final
{
public:
	bool                                          M_bDynamicShared;                                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M_bDynamicEndPoseOnly;                             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M_bOnDemand;                                       // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1138[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_iNumConcurrent;                                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                          M_pSequence;                                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         M_fAnimLength;                                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1139[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBFGAnimationSetup) == 0x000008, "Wrong alignment on FBFGAnimationSetup");
static_assert(sizeof(FBFGAnimationSetup) == 0x000018, "Wrong size on FBFGAnimationSetup");
static_assert(offsetof(FBFGAnimationSetup, M_bDynamicShared) == 0x000000, "Member 'FBFGAnimationSetup::M_bDynamicShared' has a wrong offset!");
static_assert(offsetof(FBFGAnimationSetup, M_bDynamicEndPoseOnly) == 0x000001, "Member 'FBFGAnimationSetup::M_bDynamicEndPoseOnly' has a wrong offset!");
static_assert(offsetof(FBFGAnimationSetup, M_bOnDemand) == 0x000002, "Member 'FBFGAnimationSetup::M_bOnDemand' has a wrong offset!");
static_assert(offsetof(FBFGAnimationSetup, M_iNumConcurrent) == 0x000004, "Member 'FBFGAnimationSetup::M_iNumConcurrent' has a wrong offset!");
static_assert(offsetof(FBFGAnimationSetup, M_pSequence) == 0x000008, "Member 'FBFGAnimationSetup::M_pSequence' has a wrong offset!");
static_assert(offsetof(FBFGAnimationSetup, M_fAnimLength) == 0x000010, "Member 'FBFGAnimationSetup::M_fAnimLength' has a wrong offset!");

}

