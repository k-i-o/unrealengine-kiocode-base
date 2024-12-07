#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FSDAnsel

#include "Basic.hpp"

#include "FSDAnsel_classes.hpp"
#include "FSDAnsel_parameters.hpp"


namespace SDK
{

// Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByDistance
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          NewCameraLocation                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          PreviousCameraLocation                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          OriginalCameraLocation                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          OutCameraLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   MaxDistance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFSDAnselFunctionLibrary::ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation, float MaxDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "ConstrainCameraByDistance");

	Params::FSDAnselFunctionLibrary_ConstrainCameraByDistance Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.NewCameraLocation = std::move(NewCameraLocation);
	Parms.PreviousCameraLocation = std::move(PreviousCameraLocation);
	Parms.OriginalCameraLocation = std::move(OriginalCameraLocation);
	Parms.MaxDistance = MaxDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = std::move(Parms.OutCameraLocation);
}


// Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByGeometry
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          NewCameraLocation                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          PreviousCameraLocation                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          OriginalCameraLocation                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          OutCameraLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFSDAnselFunctionLibrary::ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "ConstrainCameraByGeometry");

	Params::FSDAnselFunctionLibrary_ConstrainCameraByGeometry Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.NewCameraLocation = std::move(NewCameraLocation);
	Parms.PreviousCameraLocation = std::move(PreviousCameraLocation);
	Parms.OriginalCameraLocation = std::move(OriginalCameraLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = std::move(Parms.OutCameraLocation);
}


// Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAllowed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFSDAnselFunctionLibrary::IsPhotographyAllowed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "IsPhotographyAllowed");

	Params::FSDAnselFunctionLibrary_IsPhotographyAllowed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFSDAnselFunctionLibrary::IsPhotographyAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "IsPhotographyAvailable");

	Params::FSDAnselFunctionLibrary_IsPhotographyAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPause
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    bShouldAutoPause                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFSDAnselFunctionLibrary::SetAutoPause(const bool bShouldAutoPause)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "SetAutoPause");

	Params::FSDAnselFunctionLibrary_SetAutoPause Parms{};

	Parms.bShouldAutoPause = bShouldAutoPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPostprocess
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    bShouldAutoPostprocess                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFSDAnselFunctionLibrary::SetAutoPostprocess(const bool bShouldAutoPostprocess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "SetAutoPostprocess");

	Params::FSDAnselFunctionLibrary_SetAutoPostprocess Parms{};

	Parms.bShouldAutoPostprocess = bShouldAutoPostprocess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintCameraSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   CameraSize                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFSDAnselFunctionLibrary::SetCameraConstraintCameraSize(const float CameraSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "SetCameraConstraintCameraSize");

	Params::FSDAnselFunctionLibrary_SetCameraConstraintCameraSize Parms{};

	Parms.CameraSize = CameraSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintDistance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   MaxCameraDistance                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFSDAnselFunctionLibrary::SetCameraConstraintDistance(const float MaxCameraDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "SetCameraConstraintDistance");

	Params::FSDAnselFunctionLibrary_SetCameraConstraintDistance Parms{};

	Parms.MaxCameraDistance = MaxCameraDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraMovementSpeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   TranslationSpeed                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFSDAnselFunctionLibrary::SetCameraMovementSpeed(const float TranslationSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "SetCameraMovementSpeed");

	Params::FSDAnselFunctionLibrary_SetCameraMovementSpeed Parms{};

	Parms.TranslationSpeed = TranslationSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetIsPhotographyAllowed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    bIsPhotographyAllowed                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFSDAnselFunctionLibrary::SetIsPhotographyAllowed(const bool bIsPhotographyAllowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "SetIsPhotographyAllowed");

	Params::FSDAnselFunctionLibrary_SetIsPhotographyAllowed Parms{};

	Parms.bIsPhotographyAllowed = bIsPhotographyAllowed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetSettleFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   NumSettleFrames                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFSDAnselFunctionLibrary::SetSettleFrames(const int32 NumSettleFrames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "SetSettleFrames");

	Params::FSDAnselFunctionLibrary_SetSettleFrames Parms{};

	Parms.NumSettleFrames = NumSettleFrames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetUIControlVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUIControlEffectTarget                  UIControlTarget                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIsVisible                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFSDAnselFunctionLibrary::SetUIControlVisibility(class UObject* WorldContextObject, const EUIControlEffectTarget UIControlTarget, const bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "SetUIControlVisibility");

	Params::FSDAnselFunctionLibrary_SetUIControlVisibility Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.UIControlTarget = UIControlTarget;
	Parms.bIsVisible = bIsVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.StartPhotographySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFSDAnselFunctionLibrary::StartPhotographySession(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "StartPhotographySession");

	Params::FSDAnselFunctionLibrary_StartPhotographySession Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.StopPhotographySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFSDAnselFunctionLibrary::StopPhotographySession(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FSDAnselFunctionLibrary", "StopPhotographySession");

	Params::FSDAnselFunctionLibrary_StopPhotographySession Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

