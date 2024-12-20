#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AppleVision

#include "Basic.hpp"

#include "AppleVision_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy
// 0x0060 (0x0088 - 0x0028)
class UAppleVisionDetectFacesAsyncTaskBlueprintProxy final : public UObject
{
public:
	uint8                                         Pad_11EF[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnSuccess;                                         // 0x0030(0x0018)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnFailure;                                         // 0x0048(0x0018)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_11F0[0x10];                                    // 0x0060(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFaceDetectionResult                   FaceDetectionResult;                               // 0x0070(0x0010)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                         Pad_11F1[0x8];                                     // 0x0080(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* CreateProxyObjectForDetectFaces(class UTexture* SourceImage);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppleVisionDetectFacesAsyncTaskBlueprintProxy">();
	}
	static class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppleVisionDetectFacesAsyncTaskBlueprintProxy>();
	}
};
static_assert(alignof(UAppleVisionDetectFacesAsyncTaskBlueprintProxy) == 0x000008, "Wrong alignment on UAppleVisionDetectFacesAsyncTaskBlueprintProxy");
static_assert(sizeof(UAppleVisionDetectFacesAsyncTaskBlueprintProxy) == 0x000088, "Wrong size on UAppleVisionDetectFacesAsyncTaskBlueprintProxy");
static_assert(offsetof(UAppleVisionDetectFacesAsyncTaskBlueprintProxy, OnSuccess) == 0x000030, "Member 'UAppleVisionDetectFacesAsyncTaskBlueprintProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UAppleVisionDetectFacesAsyncTaskBlueprintProxy, OnFailure) == 0x000048, "Member 'UAppleVisionDetectFacesAsyncTaskBlueprintProxy::OnFailure' has a wrong offset!");
static_assert(offsetof(UAppleVisionDetectFacesAsyncTaskBlueprintProxy, FaceDetectionResult) == 0x000070, "Member 'UAppleVisionDetectFacesAsyncTaskBlueprintProxy::FaceDetectionResult' has a wrong offset!");

}

