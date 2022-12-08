// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNamedSkeletonData;
class UBodyStateSkeleton;
struct FRotator;
struct FBodyStateBoneMeta;
enum class EBodyStateBasicBoneType : uint8;
struct FTransform;
struct FBodyStateBoneData;
class UBodyStateBone;
class UBodyStateArm;
#ifdef BODYSTATE_BodyStateSkeleton_generated_h
#error "BodyStateSkeleton.generated.h already included, missing '#pragma once' in BodyStateSkeleton.h"
#endif
#define BODYSTATE_BodyStateSkeleton_generated_h

#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedSkeletonData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FNamedSkeletonData>();

#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedBoneMeta_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FNamedBoneMeta>();

#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyedTransform_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FKeyedTransform>();

#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedBoneData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BODYSTATE_API UScriptStruct* StaticStruct<struct FNamedBoneData>();

#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_SPARSE_DATA
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_RPC_WRAPPERS \
	virtual void Multi_UpdateBodyState_Implementation(const FNamedSkeletonData InBodyStateSkeleton); \
	virtual bool ServerUpdateBodyState_Validate(const FNamedSkeletonData ); \
	virtual void ServerUpdateBodyState_Implementation(const FNamedSkeletonData InBodyStateSkeleton); \
 \
	DECLARE_FUNCTION(execMulti_UpdateBodyState); \
	DECLARE_FUNCTION(execServerUpdateBodyState); \
	DECLARE_FUNCTION(execMergeFromOtherSkeleton); \
	DECLARE_FUNCTION(execSetFromOtherSkeleton); \
	DECLARE_FUNCTION(execSetFromNamedSkeletonData); \
	DECLARE_FUNCTION(execGetMinimalNamedSkeletonData); \
	DECLARE_FUNCTION(execChangeBasis); \
	DECLARE_FUNCTION(execSetMetaForBone); \
	DECLARE_FUNCTION(execSetTransformForBone); \
	DECLARE_FUNCTION(execSetDataForBone); \
	DECLARE_FUNCTION(execResetToDefaultSkeleton); \
	DECLARE_FUNCTION(execBoneNamed); \
	DECLARE_FUNCTION(execBoneForEnum); \
	DECLARE_FUNCTION(execHead); \
	DECLARE_FUNCTION(execRightArm); \
	DECLARE_FUNCTION(execLeftArm); \
	DECLARE_FUNCTION(execRootBone);


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multi_UpdateBodyState_Implementation(const FNamedSkeletonData InBodyStateSkeleton); \
	virtual bool ServerUpdateBodyState_Validate(const FNamedSkeletonData ); \
	virtual void ServerUpdateBodyState_Implementation(const FNamedSkeletonData InBodyStateSkeleton); \
 \
	DECLARE_FUNCTION(execMulti_UpdateBodyState); \
	DECLARE_FUNCTION(execServerUpdateBodyState); \
	DECLARE_FUNCTION(execMergeFromOtherSkeleton); \
	DECLARE_FUNCTION(execSetFromOtherSkeleton); \
	DECLARE_FUNCTION(execSetFromNamedSkeletonData); \
	DECLARE_FUNCTION(execGetMinimalNamedSkeletonData); \
	DECLARE_FUNCTION(execChangeBasis); \
	DECLARE_FUNCTION(execSetMetaForBone); \
	DECLARE_FUNCTION(execSetTransformForBone); \
	DECLARE_FUNCTION(execSetDataForBone); \
	DECLARE_FUNCTION(execResetToDefaultSkeleton); \
	DECLARE_FUNCTION(execBoneNamed); \
	DECLARE_FUNCTION(execBoneForEnum); \
	DECLARE_FUNCTION(execHead); \
	DECLARE_FUNCTION(execRightArm); \
	DECLARE_FUNCTION(execLeftArm); \
	DECLARE_FUNCTION(execRootBone);


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_EVENT_PARMS \
	struct BodyStateSkeleton_eventMulti_UpdateBodyState_Parms \
	{ \
		FNamedSkeletonData InBodyStateSkeleton; \
	}; \
	struct BodyStateSkeleton_eventServerUpdateBodyState_Parms \
	{ \
		FNamedSkeletonData InBodyStateSkeleton; \
	};


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_CALLBACK_WRAPPERS
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyStateSkeleton(); \
	friend struct Z_Construct_UClass_UBodyStateSkeleton_Statics; \
public: \
	DECLARE_CLASS(UBodyStateSkeleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateSkeleton)


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateSkeleton(); \
	friend struct Z_Construct_UClass_UBodyStateSkeleton_Statics; \
public: \
	DECLARE_CLASS(UBodyStateSkeleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateSkeleton)


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateSkeleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateSkeleton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateSkeleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateSkeleton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateSkeleton(UBodyStateSkeleton&&); \
	NO_API UBodyStateSkeleton(const UBodyStateSkeleton&); \
public:


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateSkeleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateSkeleton(UBodyStateSkeleton&&); \
	NO_API UBodyStateSkeleton(const UBodyStateSkeleton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateSkeleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateSkeleton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateSkeleton)


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrivateLeftArm() { return STRUCT_OFFSET(UBodyStateSkeleton, PrivateLeftArm); } \
	FORCEINLINE static uint32 __PPO__PrivateRightArm() { return STRUCT_OFFSET(UBodyStateSkeleton, PrivateRightArm); }


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_67_PROLOG \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_EVENT_PARMS


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_SPARSE_DATA \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_RPC_WRAPPERS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_CALLBACK_WRAPPERS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_INCLASS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_SPARSE_DATA \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_CALLBACK_WRAPPERS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodyStateSkeleton."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BODYSTATE_API UClass* StaticClass<class UBodyStateSkeleton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
