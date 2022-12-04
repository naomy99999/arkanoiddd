// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARKANOID_Subscriber_generated_h
#error "Subscriber.generated.h already included, missing '#pragma once' in Subscriber.h"
#endif
#define ARKANOID_Subscriber_generated_h

#define arkanoidd_master_Source_arkanoid_Subscriber_h_11_SPARSE_DATA
#define arkanoidd_master_Source_arkanoid_Subscriber_h_11_RPC_WRAPPERS
#define arkanoidd_master_Source_arkanoid_Subscriber_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define arkanoidd_master_Source_arkanoid_Subscriber_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARKANOID_API USubscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubscriber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARKANOID_API, USubscriber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubscriber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARKANOID_API USubscriber(USubscriber&&); \
	ARKANOID_API USubscriber(const USubscriber&); \
public:


#define arkanoidd_master_Source_arkanoid_Subscriber_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARKANOID_API USubscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARKANOID_API USubscriber(USubscriber&&); \
	ARKANOID_API USubscriber(const USubscriber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARKANOID_API, USubscriber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubscriber); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubscriber)


#define arkanoidd_master_Source_arkanoid_Subscriber_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSubscriber(); \
	friend struct Z_Construct_UClass_USubscriber_Statics; \
public: \
	DECLARE_CLASS(USubscriber, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/arkanoid"), ARKANOID_API) \
	DECLARE_SERIALIZER(USubscriber)


#define arkanoidd_master_Source_arkanoid_Subscriber_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	arkanoidd_master_Source_arkanoid_Subscriber_h_11_GENERATED_UINTERFACE_BODY() \
	arkanoidd_master_Source_arkanoid_Subscriber_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define arkanoidd_master_Source_arkanoid_Subscriber_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	arkanoidd_master_Source_arkanoid_Subscriber_h_11_GENERATED_UINTERFACE_BODY() \
	arkanoidd_master_Source_arkanoid_Subscriber_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define arkanoidd_master_Source_arkanoid_Subscriber_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISubscriber() {} \
public: \
	typedef USubscriber UClassType; \
	typedef ISubscriber ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define arkanoidd_master_Source_arkanoid_Subscriber_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~ISubscriber() {} \
public: \
	typedef USubscriber UClassType; \
	typedef ISubscriber ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define arkanoidd_master_Source_arkanoid_Subscriber_h_8_PROLOG
#define arkanoidd_master_Source_arkanoid_Subscriber_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	arkanoidd_master_Source_arkanoid_Subscriber_h_11_SPARSE_DATA \
	arkanoidd_master_Source_arkanoid_Subscriber_h_11_RPC_WRAPPERS \
	arkanoidd_master_Source_arkanoid_Subscriber_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define arkanoidd_master_Source_arkanoid_Subscriber_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	arkanoidd_master_Source_arkanoid_Subscriber_h_11_SPARSE_DATA \
	arkanoidd_master_Source_arkanoid_Subscriber_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	arkanoidd_master_Source_arkanoid_Subscriber_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class USubscriber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID arkanoidd_master_Source_arkanoid_Subscriber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
