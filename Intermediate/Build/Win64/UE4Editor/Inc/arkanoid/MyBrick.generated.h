// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARKANOID_MyBrick_generated_h
#error "MyBrick.generated.h already included, missing '#pragma once' in MyBrick.h"
#endif
#define ARKANOID_MyBrick_generated_h

#define arkanoidd_master_Source_arkanoid_MyBrick_h_15_SPARSE_DATA
#define arkanoidd_master_Source_arkanoid_MyBrick_h_15_RPC_WRAPPERS
#define arkanoidd_master_Source_arkanoid_MyBrick_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define arkanoidd_master_Source_arkanoid_MyBrick_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyBrick(); \
	friend struct Z_Construct_UClass_AMyBrick_Statics; \
public: \
	DECLARE_CLASS(AMyBrick, ABrick, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/arkanoid"), NO_API) \
	DECLARE_SERIALIZER(AMyBrick)


#define arkanoidd_master_Source_arkanoid_MyBrick_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyBrick(); \
	friend struct Z_Construct_UClass_AMyBrick_Statics; \
public: \
	DECLARE_CLASS(AMyBrick, ABrick, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/arkanoid"), NO_API) \
	DECLARE_SERIALIZER(AMyBrick)


#define arkanoidd_master_Source_arkanoid_MyBrick_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyBrick(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyBrick) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBrick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBrick); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBrick(AMyBrick&&); \
	NO_API AMyBrick(const AMyBrick&); \
public:


#define arkanoidd_master_Source_arkanoid_MyBrick_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyBrick() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBrick(AMyBrick&&); \
	NO_API AMyBrick(const AMyBrick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBrick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBrick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyBrick)


#define arkanoidd_master_Source_arkanoid_MyBrick_h_15_PRIVATE_PROPERTY_OFFSET
#define arkanoidd_master_Source_arkanoid_MyBrick_h_12_PROLOG
#define arkanoidd_master_Source_arkanoid_MyBrick_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	arkanoidd_master_Source_arkanoid_MyBrick_h_15_PRIVATE_PROPERTY_OFFSET \
	arkanoidd_master_Source_arkanoid_MyBrick_h_15_SPARSE_DATA \
	arkanoidd_master_Source_arkanoid_MyBrick_h_15_RPC_WRAPPERS \
	arkanoidd_master_Source_arkanoid_MyBrick_h_15_INCLASS \
	arkanoidd_master_Source_arkanoid_MyBrick_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define arkanoidd_master_Source_arkanoid_MyBrick_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	arkanoidd_master_Source_arkanoid_MyBrick_h_15_PRIVATE_PROPERTY_OFFSET \
	arkanoidd_master_Source_arkanoid_MyBrick_h_15_SPARSE_DATA \
	arkanoidd_master_Source_arkanoid_MyBrick_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	arkanoidd_master_Source_arkanoid_MyBrick_h_15_INCLASS_NO_PURE_DECLS \
	arkanoidd_master_Source_arkanoid_MyBrick_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class AMyBrick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID arkanoidd_master_Source_arkanoid_MyBrick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
