// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gimmick/ABStageGimmick.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ARENABATTLE_ABStageGimmick_generated_h
#error "ABStageGimmick.generated.h already included, missing '#pragma once' in ABStageGimmick.h"
#endif
#define ARENABATTLE_ABStageGimmick_generated_h

#define FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageChangedDelegateWrapper_Statics; \
	ARENABATTLE_API static class UScriptStruct* StaticStruct();


template<> ARENABATTLE_API UScriptStruct* StaticStruct<struct FStageChangedDelegateWrapper>();

#define FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_SPARSE_DATA
#define FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRewardTriggerBeginOverlap); \
	DECLARE_FUNCTION(execOnOpponentDestroyed); \
	DECLARE_FUNCTION(execOnGateTriggerBeginOverlap); \
	DECLARE_FUNCTION(execOnStageTriggerBeginOverlap);


#define FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRewardTriggerBeginOverlap); \
	DECLARE_FUNCTION(execOnOpponentDestroyed); \
	DECLARE_FUNCTION(execOnGateTriggerBeginOverlap); \
	DECLARE_FUNCTION(execOnStageTriggerBeginOverlap);


#define FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_ACCESSORS
#define FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABStageGimmick(); \
	friend struct Z_Construct_UClass_AABStageGimmick_Statics; \
public: \
	DECLARE_CLASS(AABStageGimmick, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABStageGimmick)


#define FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAABStageGimmick(); \
	friend struct Z_Construct_UClass_AABStageGimmick_Statics; \
public: \
	DECLARE_CLASS(AABStageGimmick, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABStageGimmick)


#define FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABStageGimmick(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABStageGimmick) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABStageGimmick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABStageGimmick); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABStageGimmick(AABStageGimmick&&); \
	NO_API AABStageGimmick(const AABStageGimmick&); \
public: \
	NO_API virtual ~AABStageGimmick();


#define FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABStageGimmick(AABStageGimmick&&); \
	NO_API AABStageGimmick(const AABStageGimmick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABStageGimmick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABStageGimmick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABStageGimmick) \
	NO_API virtual ~AABStageGimmick();


#define FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_33_PROLOG
#define FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_SPARSE_DATA \
	FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_RPC_WRAPPERS \
	FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_ACCESSORS \
	FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_INCLASS \
	FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_SPARSE_DATA \
	FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_ACCESSORS \
	FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_INCLASS_NO_PURE_DECLS \
	FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AABStageGimmick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h


#define FOREACH_ENUM_ESTAGESTATE(op) \
	op(EStageState::READY) \
	op(EStageState::FIGHT) \
	op(EStageState::REWARD) \
	op(EStageState::NEXT) 

enum class EStageState : uint8;
template<> struct TIsUEnumClass<EStageState> { enum { Value = true }; };
template<> ARENABATTLE_API UEnum* StaticEnum<EStageState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
