// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid/HardBrick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHardBrick() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_AHardBrick_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_AHardBrick();
	ARKANOID_API UClass* Z_Construct_UClass_ABrick();
	UPackage* Z_Construct_UPackage__Script_arkanoid();
// End Cross Module References
	void AHardBrick::StaticRegisterNativesAHardBrick()
	{
	}
	UClass* Z_Construct_UClass_AHardBrick_NoRegister()
	{
		return AHardBrick::StaticClass();
	}
	struct Z_Construct_UClass_AHardBrick_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHardBrick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABrick,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHardBrick_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HardBrick.h" },
		{ "ModuleRelativePath", "HardBrick.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHardBrick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHardBrick>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHardBrick_Statics::ClassParams = {
		&AHardBrick::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHardBrick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHardBrick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHardBrick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHardBrick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHardBrick, 3696007512);
	template<> ARKANOID_API UClass* StaticClass<AHardBrick>()
	{
		return AHardBrick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHardBrick(Z_Construct_UClass_AHardBrick, &AHardBrick::StaticClass, TEXT("/Script/arkanoid"), TEXT("AHardBrick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHardBrick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
