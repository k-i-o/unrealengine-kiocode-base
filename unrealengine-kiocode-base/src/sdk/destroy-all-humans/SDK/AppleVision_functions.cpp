#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AppleVision

#include "Basic.hpp"

#include "AppleVision_classes.hpp"
#include "AppleVision_parameters.hpp"


namespace SDK
{

// Function AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy.CreateProxyObjectForDetectFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                         SourceImage                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAppleVisionDetectFacesAsyncTaskBlueprintProxy*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* UAppleVisionDetectFacesAsyncTaskBlueprintProxy::CreateProxyObjectForDetectFaces(class UTexture* SourceImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AppleVisionDetectFacesAsyncTaskBlueprintProxy", "CreateProxyObjectForDetectFaces");

	Params::AppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces Parms{};

	Parms.SourceImage = SourceImage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
