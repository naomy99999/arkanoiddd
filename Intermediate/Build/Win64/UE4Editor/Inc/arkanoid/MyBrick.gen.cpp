// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid/MyBrick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBrick() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_AMyBrick_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_AMyBrick();
	ARKANOID_API UClass* Z_Construct_UClass_ABrick();
	UPackage* Z_Construct_UPackage__Script_arkanoid();
// End Cross Module References
	void AMyBrick::StaticRegisterNativesAMyBrick()
	{
	}
	UClass* Z_Construct_UClass_AMyBrick_NoRegister()
	{
		return AMyBrick::StaticClass();
	}
	struct Z_Construct_UClass_AMyBrick_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyBrick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABrick,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBrick_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyBrick.h" },
		{ "ModuleRelativePath", "MyBrick.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyBrick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBrick>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyBrick_Statics::ClassParams = {
		&AMyBrick::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyBrick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBrick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyBrick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyBrick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyBrick, 2688250269);
	template<> ARKANOID_API UClass* StaticClass<AMyBrick>()
	{
		return AMyBrick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyBrick(Z_Construct_UClass_AMyBrick, &AMyBrick::StaticClass, TEXT("/Script/arkanoid"), TEXT("AMyBrick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyBrick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
