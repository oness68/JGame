// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JGAME_JGameGameModeBase_generated_h
#error "JGameGameModeBase.generated.h already included, missing '#pragma once' in JGameGameModeBase.h"
#endif
#define JGAME_JGameGameModeBase_generated_h

#define JGame_Source_JGame_JGameGameModeBase_h_15_SPARSE_DATA
#define JGame_Source_JGame_JGameGameModeBase_h_15_RPC_WRAPPERS
#define JGame_Source_JGame_JGameGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define JGame_Source_JGame_JGameGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJGameGameModeBase(); \
	friend struct Z_Construct_UClass_AJGameGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AJGameGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/JGame"), NO_API) \
	DECLARE_SERIALIZER(AJGameGameModeBase)


#define JGame_Source_JGame_JGameGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAJGameGameModeBase(); \
	friend struct Z_Construct_UClass_AJGameGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AJGameGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/JGame"), NO_API) \
	DECLARE_SERIALIZER(AJGameGameModeBase)


#define JGame_Source_JGame_JGameGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJGameGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJGameGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJGameGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJGameGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJGameGameModeBase(AJGameGameModeBase&&); \
	NO_API AJGameGameModeBase(const AJGameGameModeBase&); \
public:


#define JGame_Source_JGame_JGameGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJGameGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJGameGameModeBase(AJGameGameModeBase&&); \
	NO_API AJGameGameModeBase(const AJGameGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJGameGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJGameGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJGameGameModeBase)


#define JGame_Source_JGame_JGameGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define JGame_Source_JGame_JGameGameModeBase_h_12_PROLOG
#define JGame_Source_JGame_JGameGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JGame_Source_JGame_JGameGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	JGame_Source_JGame_JGameGameModeBase_h_15_SPARSE_DATA \
	JGame_Source_JGame_JGameGameModeBase_h_15_RPC_WRAPPERS \
	JGame_Source_JGame_JGameGameModeBase_h_15_INCLASS \
	JGame_Source_JGame_JGameGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JGame_Source_JGame_JGameGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JGame_Source_JGame_JGameGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	JGame_Source_JGame_JGameGameModeBase_h_15_SPARSE_DATA \
	JGame_Source_JGame_JGameGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	JGame_Source_JGame_JGameGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	JGame_Source_JGame_JGameGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JGAME_API UClass* StaticClass<class AJGameGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JGame_Source_JGame_JGameGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
