// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapMotion_init() {}
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapEventSignature__DelegateSignature();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapTrackingModeSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LeapMotion()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LeapMotion_LeapEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LeapMotion_LeapTrackingModeSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/LeapMotion",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEE47A2F3,
				0xDEB1FBBE,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
