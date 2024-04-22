// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Item/ABScrollItemData.h"
#include "ArenaBattle/GameData/ABCharacterStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABScrollItemData() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABItemData();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABScrollItemData();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABScrollItemData_NoRegister();
	ARENABATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FABCharacterStat();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABScrollItemData::StaticRegisterNativesUABScrollItemData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABScrollItemData);
	UClass* Z_Construct_UClass_UABScrollItemData_NoRegister()
	{
		return UABScrollItemData::StaticClass();
	}
	struct Z_Construct_UClass_UABScrollItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseStat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseStat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABScrollItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UABItemData,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABScrollItemData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Item/ABScrollItemData.h" },
		{ "ModuleRelativePath", "Item/ABScrollItemData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABScrollItemData_Statics::NewProp_BaseStat_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Item/ABScrollItemData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABScrollItemData_Statics::NewProp_BaseStat = { "BaseStat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABScrollItemData, BaseStat), Z_Construct_UScriptStruct_FABCharacterStat, METADATA_PARAMS(Z_Construct_UClass_UABScrollItemData_Statics::NewProp_BaseStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABScrollItemData_Statics::NewProp_BaseStat_MetaData)) }; // 3874772067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABScrollItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABScrollItemData_Statics::NewProp_BaseStat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABScrollItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABScrollItemData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABScrollItemData_Statics::ClassParams = {
		&UABScrollItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABScrollItemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABScrollItemData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABScrollItemData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABScrollItemData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABScrollItemData()
	{
		if (!Z_Registration_Info_UClass_UABScrollItemData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABScrollItemData.OuterSingleton, Z_Construct_UClass_UABScrollItemData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABScrollItemData.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABScrollItemData>()
	{
		return UABScrollItemData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABScrollItemData);
	UABScrollItemData::~UABScrollItemData() {}
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Item_ABScrollItemData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Item_ABScrollItemData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABScrollItemData, UABScrollItemData::StaticClass, TEXT("UABScrollItemData"), &Z_Registration_Info_UClass_UABScrollItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABScrollItemData), 3159677232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Item_ABScrollItemData_h_1284792165(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Item_ABScrollItemData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Item_ABScrollItemData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
