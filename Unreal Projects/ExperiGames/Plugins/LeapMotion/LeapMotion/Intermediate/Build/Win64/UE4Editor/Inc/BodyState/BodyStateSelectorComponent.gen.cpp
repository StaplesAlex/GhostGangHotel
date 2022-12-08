// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateSelectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateSelectorComponent() {}
// Cross Module References
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSelectorComponent_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSelectorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BodyState();
// End Cross Module References
	void UBodyStateSelectorComponent::StaticRegisterNativesUBodyStateSelectorComponent()
	{
	}
	UClass* Z_Construct_UClass_UBodyStateSelectorComponent_NoRegister()
	{
		return UBodyStateSelectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateSelectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateSelectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSelectorComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "//Disable this component in bp until v3.1 when the multi-player selection and replication functionality gets implemented\n" },
		{ "IncludePath", "BodyStateSelectorComponent.h" },
		{ "ModuleRelativePath", "Public/BodyStateSelectorComponent.h" },
		{ "ToolTip", "Disable this component in bp until v3.1 when the multi-player selection and replication functionality gets implemented" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateSelectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateSelectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateSelectorComponent_Statics::ClassParams = {
		&UBodyStateSelectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateSelectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateSelectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateSelectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateSelectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateSelectorComponent, 2488259866);
	template<> BODYSTATE_API UClass* StaticClass<UBodyStateSelectorComponent>()
	{
		return UBodyStateSelectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateSelectorComponent(Z_Construct_UClass_UBodyStateSelectorComponent, &UBodyStateSelectorComponent::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateSelectorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateSelectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
