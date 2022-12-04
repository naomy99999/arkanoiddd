// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARKANOID_State_generated_h
#error "State.generated.h already included, missing '#pragma once' in State.h"
#endif
#define ARKANOID_State_generated_h

#define arkanoidd_master_Source_arkanoid_State_h_13_SPARSE_DATA
#define arkanoidd_master_Source_arkanoid_State_h_13_RPC_WRAPPERS
#define arkanoidd_master_Source_arkanoid_State_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define arkanoidd_master_Source_arkanoid_State_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARKANOID_API UState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARKANOID_API, UState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARKANOID_API UState(UState&&); \
	ARKANOID_API UState(const UState&); \
public:


#define arkanoidd_master_Source_arkanoid_State_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARKANOID_API UState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARKANOID_API UState(UState&&); \
	ARKANOID_API UState(const UState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARKANOID_API, UState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UState); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UState)


#define arkanoidd_master_Source_arkanoid_State_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUState(); \
	friend struct Z_Construct_UClass_UState_Statics; \
public: \
	DECLARE_CLASS(UState, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/arkanoid"), ARKANOID_API) \
	DECLARE_SERIALIZER(UState)


#define arkanoidd_master_Source_arkanoid_State_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	arkanoidd_master_Source_arkanoid_State_h_13_GENERATED_UINTERFACE_BODY() \
	arkanoidd_master_Source_arkanoid_State_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define arkanoidd_master_Source_arkanoid_State_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	arkanoidd_master_Source_arkanoid_State_h_13_GENERATED_UINTERFACE_BODY() \
	arkanoidd_master_Source_arkanoid_State_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define arkanoidd_master_Source_arkanoid_State_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IState() {} \
public: \
	typedef UState UClassType; \
	typedef IState ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define arkanoidd_master_Source_arkanoid_State_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IState() {} \
public: \
	typedef UState UClassType; \
	typedef IState ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define arkanoidd_master_Source_arkanoid_State_h_10_PROLOG
#define arkanoidd_master_Source_arkanoid_State_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	arkanoidd_master_Source_arkanoid_State_h_13_SPARSE_DATA \
	arkanoidd_master_Source_arkanoid_State_h_13_RPC_WRAPPERS \
	arkanoidd_master_Source_arkanoid_State_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define arkanoidd_master_Source_arkanoid_State_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	arkanoidd_master_Source_arkanoid_State_h_13_SPARSE_DATA \
	arkanoidd_master_Source_arkanoid_State_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	arkanoidd_master_Source_arkanoid_State_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class UState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID arkanoidd_master_Source_arkanoid_State_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
