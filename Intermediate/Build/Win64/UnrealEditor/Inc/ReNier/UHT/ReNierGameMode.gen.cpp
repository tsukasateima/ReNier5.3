// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReNier/ReNierGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReNierGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RENIER_API UClass* Z_Construct_UClass_AReNierGameMode();
	RENIER_API UClass* Z_Construct_UClass_AReNierGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReNier();
// End Cross Module References
	void AReNierGameMode::StaticRegisterNativesAReNierGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReNierGameMode);
	UClass* Z_Construct_UClass_AReNierGameMode_NoRegister()
	{
		return AReNierGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AReNierGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReNierGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ReNier,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AReNierGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReNierGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ReNierGameMode.h" },
		{ "ModuleRelativePath", "ReNierGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReNierGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReNierGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReNierGameMode_Statics::ClassParams = {
		&AReNierGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AReNierGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AReNierGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AReNierGameMode()
	{
		if (!Z_Registration_Info_UClass_AReNierGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReNierGameMode.OuterSingleton, Z_Construct_UClass_AReNierGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AReNierGameMode.OuterSingleton;
	}
	template<> RENIER_API UClass* StaticClass<AReNierGameMode>()
	{
		return AReNierGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReNierGameMode);
	AReNierGameMode::~AReNierGameMode() {}
	struct Z_CompiledInDeferFile_FID_ReNier_Source_ReNier_ReNierGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReNier_Source_ReNier_ReNierGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AReNierGameMode, AReNierGameMode::StaticClass, TEXT("AReNierGameMode"), &Z_Registration_Info_UClass_AReNierGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReNierGameMode), 1038154264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReNier_Source_ReNier_ReNierGameMode_h_4176464075(TEXT("/Script/ReNier"),
		Z_CompiledInDeferFile_FID_ReNier_Source_ReNier_ReNierGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ReNier_Source_ReNier_ReNierGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
