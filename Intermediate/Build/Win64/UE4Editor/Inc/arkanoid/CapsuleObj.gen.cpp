// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid/CapsuleObj.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleObj() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_ACapsuleObj_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_ACapsuleObj();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_arkanoid();
// End Cross Module References
	void ACapsuleObj::StaticRegisterNativesACapsuleObj()
	{
	}
	UClass* Z_Construct_UClass_ACapsuleObj_NoRegister()
	{
		return ACapsuleObj::StaticClass();
	}
	struct Z_Construct_UClass_ACapsuleObj_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsuleObj_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsuleObj_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CapsuleObj.h" },
		{ "ModuleRelativePath", "CapsuleObj.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsuleObj_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsuleObj>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsuleObj_Statics::ClassParams = {
		&ACapsuleObj::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACapsuleObj_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsuleObj_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsuleObj()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsuleObj_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsuleObj, 2149595266);
	template<> ARKANOID_API UClass* StaticClass<ACapsuleObj>()
	{
		return ACapsuleObj::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsuleObj(Z_Construct_UClass_ACapsuleObj, &ACapsuleObj::StaticClass, TEXT("/Script/arkanoid"), TEXT("ACapsuleObj"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsuleObj);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
