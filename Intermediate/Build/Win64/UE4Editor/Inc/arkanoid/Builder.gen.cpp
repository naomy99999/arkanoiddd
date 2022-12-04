// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid/Builder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilder() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_ABuilder_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_ABuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_arkanoid();
// End Cross Module References
	void ABuilder::StaticRegisterNativesABuilder()
	{
	}
	UClass* Z_Construct_UClass_ABuilder_NoRegister()
	{
		return ABuilder::StaticClass();
	}
	struct Z_Construct_UClass_ABuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Builder.h" },
		{ "ModuleRelativePath", "Builder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilder_Statics::ClassParams = {
		&ABuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilder, 464945868);
	template<> ARKANOID_API UClass* StaticClass<ABuilder>()
	{
		return ABuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilder(Z_Construct_UClass_ABuilder, &ABuilder::StaticClass, TEXT("/Script/arkanoid"), TEXT("ABuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
