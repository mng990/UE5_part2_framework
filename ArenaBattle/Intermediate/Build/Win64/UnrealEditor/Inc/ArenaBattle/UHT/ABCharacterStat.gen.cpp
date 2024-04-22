// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/GameData/ABCharacterStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterStat() {}
// Cross Module References
	ARENABATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FABCharacterStat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

static_assert(std::is_polymorphic<FABCharacterStat>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FABCharacterStat cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ABCharacterStat;
class UScriptStruct* FABCharacterStat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ABCharacterStat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ABCharacterStat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FABCharacterStat, Z_Construct_UPackage__Script_ArenaBattle(), TEXT("ABCharacterStat"));
	}
	return Z_Registration_Info_UScriptStruct_ABCharacterStat.OuterSingleton;
}
template<> ARENABATTLE_API UScriptStruct* StaticStruct<FABCharacterStat>()
{
	return FABCharacterStat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FABCharacterStat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FABCharacterStat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameData/ABCharacterStat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FABCharacterStat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MaxHp_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "GameData/ABCharacterStat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MaxHp = { "MaxHp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FABCharacterStat, MaxHp), METADATA_PARAMS(Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MaxHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MaxHp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "GameData/ABCharacterStat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FABCharacterStat, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "GameData/ABCharacterStat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FABCharacterStat, AttackRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "GameData/ABCharacterStat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FABCharacterStat, AttackSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "GameData/ABCharacterStat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FABCharacterStat, MovementSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MovementSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FABCharacterStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MaxHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MovementSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FABCharacterStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ABCharacterStat",
		sizeof(FABCharacterStat),
		alignof(FABCharacterStat),
		Z_Construct_UScriptStruct_FABCharacterStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FABCharacterStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FABCharacterStat()
	{
		if (!Z_Registration_Info_UScriptStruct_ABCharacterStat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ABCharacterStat.InnerSingleton, Z_Construct_UScriptStruct_FABCharacterStat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ABCharacterStat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_GameData_ABCharacterStat_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_GameData_ABCharacterStat_h_Statics::ScriptStructInfo[] = {
		{ FABCharacterStat::StaticStruct, Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewStructOps, TEXT("ABCharacterStat"), &Z_Registration_Info_UScriptStruct_ABCharacterStat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FABCharacterStat), 3874772067U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_GameData_ABCharacterStat_h_2907150064(TEXT("/Script/ArenaBattle"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_GameData_ABCharacterStat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_GameData_ABCharacterStat_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
