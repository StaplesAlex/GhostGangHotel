// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBodyStateFinger;
#ifdef BODYSTATE_BodyStateArm_generated_h
#error "BodyStateArm.generated.h already included, missing '#pragma once' in BodyStateArm.h"
#endif
#define BODYSTATE_BodyStateArm_generated_h

#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_SPARSE_DATA
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_RPC_WRAPPERS
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyStateFinger(); \
	friend struct Z_Construct_UClass_UBodyStateFinger_Statics; \
public: \
	DECLARE_CLASS(UBodyStateFinger, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateFinger)


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateFinger(); \
	friend struct Z_Construct_UClass_UBodyStateFinger_Statics; \
public: \
	DECLARE_CLASS(UBodyStateFinger, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateFinger)


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateFinger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateFinger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateFinger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateFinger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateFinger(UBodyStateFinger&&); \
	NO_API UBodyStateFinger(const UBodyStateFinger&); \
public:


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateFinger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateFinger(UBodyStateFinger&&); \
	NO_API UBodyStateFinger(const UBodyStateFinger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateFinger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateFinger); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateFinger)


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_9_PROLOG
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_SPARSE_DATA \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_RPC_WRAPPERS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_INCLASS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_SPARSE_DATA \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodyStateFinger."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BODYSTATE_API UClass* StaticClass<class UBodyStateFinger>();

#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_SPARSE_DATA
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPinkyFinger); \
	DECLARE_FUNCTION(execRingFinger); \
	DECLARE_FUNCTION(execMiddleFinger); \
	DECLARE_FUNCTION(execIndexFinger); \
	DECLARE_FUNCTION(execThumbFinger);


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPinkyFinger); \
	DECLARE_FUNCTION(execRingFinger); \
	DECLARE_FUNCTION(execMiddleFinger); \
	DECLARE_FUNCTION(execIndexFinger); \
	DECLARE_FUNCTION(execThumbFinger);


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyStateHand(); \
	friend struct Z_Construct_UClass_UBodyStateHand_Statics; \
public: \
	DECLARE_CLASS(UBodyStateHand, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateHand)


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateHand(); \
	friend struct Z_Construct_UClass_UBodyStateHand_Statics; \
public: \
	DECLARE_CLASS(UBodyStateHand, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateHand)


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateHand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateHand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateHand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateHand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateHand(UBodyStateHand&&); \
	NO_API UBodyStateHand(const UBodyStateHand&); \
public:


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateHand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateHand(UBodyStateHand&&); \
	NO_API UBodyStateHand(const UBodyStateHand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateHand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateHand); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateHand)


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_32_PROLOG
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_SPARSE_DATA \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_RPC_WRAPPERS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_INCLASS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_SPARSE_DATA \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodyStateHand."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BODYSTATE_API UClass* StaticClass<class UBodyStateHand>();

#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_SPARSE_DATA
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_RPC_WRAPPERS
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyStateArm(); \
	friend struct Z_Construct_UClass_UBodyStateArm_Statics; \
public: \
	DECLARE_CLASS(UBodyStateArm, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateArm)


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateArm(); \
	friend struct Z_Construct_UClass_UBodyStateArm_Statics; \
public: \
	DECLARE_CLASS(UBodyStateArm, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateArm)


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateArm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateArm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateArm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateArm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateArm(UBodyStateArm&&); \
	NO_API UBodyStateArm(const UBodyStateArm&); \
public:


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateArm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateArm(UBodyStateArm&&); \
	NO_API UBodyStateArm(const UBodyStateArm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateArm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateArm); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateArm)


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_63_PROLOG
#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_SPARSE_DATA \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_RPC_WRAPPERS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_INCLASS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_SPARSE_DATA \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h_66_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodyStateArm."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BODYSTATE_API UClass* StaticClass<class UBodyStateArm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateArm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
