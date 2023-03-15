// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T3JellyJam/T3JellyJamGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT3JellyJamGameModeBase() {}
// Cross Module References
	T3JELLYJAM_API UClass* Z_Construct_UClass_AT3JellyJamGameModeBase_NoRegister();
	T3JELLYJAM_API UClass* Z_Construct_UClass_AT3JellyJamGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_T3JellyJam();
// End Cross Module References
	void AT3JellyJamGameModeBase::StaticRegisterNativesAT3JellyJamGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT3JellyJamGameModeBase);
	UClass* Z_Construct_UClass_AT3JellyJamGameModeBase_NoRegister()
	{
		return AT3JellyJamGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AT3JellyJamGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT3JellyJamGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T3JellyJam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT3JellyJamGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "T3JellyJamGameModeBase.h" },
		{ "ModuleRelativePath", "T3JellyJamGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT3JellyJamGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT3JellyJamGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT3JellyJamGameModeBase_Statics::ClassParams = {
		&AT3JellyJamGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AT3JellyJamGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT3JellyJamGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT3JellyJamGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AT3JellyJamGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT3JellyJamGameModeBase.OuterSingleton, Z_Construct_UClass_AT3JellyJamGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT3JellyJamGameModeBase.OuterSingleton;
	}
	template<> T3JELLYJAM_API UClass* StaticClass<AT3JellyJamGameModeBase>()
	{
		return AT3JellyJamGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT3JellyJamGameModeBase);
	struct Z_CompiledInDeferFile_FID_T3JellyJam_Source_T3JellyJam_T3JellyJamGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_T3JellyJam_Source_T3JellyJam_T3JellyJamGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT3JellyJamGameModeBase, AT3JellyJamGameModeBase::StaticClass, TEXT("AT3JellyJamGameModeBase"), &Z_Registration_Info_UClass_AT3JellyJamGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT3JellyJamGameModeBase), 807452668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_T3JellyJam_Source_T3JellyJam_T3JellyJamGameModeBase_h_2126517948(TEXT("/Script/T3JellyJam"),
		Z_CompiledInDeferFile_FID_T3JellyJam_Source_T3JellyJam_T3JellyJamGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_T3JellyJam_Source_T3JellyJam_T3JellyJamGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
