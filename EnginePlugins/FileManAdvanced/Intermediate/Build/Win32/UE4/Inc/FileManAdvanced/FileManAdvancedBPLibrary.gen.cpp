// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileManAdvanced/Public/FileManAdvancedBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileManAdvancedBPLibrary() {}
// Cross Module References
	FILEMANADVANCED_API UClass* Z_Construct_UClass_UFileManAdvancedBPLibrary_NoRegister();
	FILEMANADVANCED_API UClass* Z_Construct_UClass_UFileManAdvancedBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FileManAdvanced();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFileManAdvancedBPLibrary::execLastModifiedTime)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UFileManAdvancedBPLibrary::LastModifiedTime(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManAdvancedBPLibrary::execDeleteDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileManAdvancedBPLibrary::DeleteDirectory(Z_Param_FolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManAdvancedBPLibrary::execCreateDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileManAdvancedBPLibrary::CreateDirectory(Z_Param_FolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManAdvancedBPLibrary::execGetEngineDirectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileManAdvancedBPLibrary::GetEngineDirectory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManAdvancedBPLibrary::execGetLaunchDirectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileManAdvancedBPLibrary::GetLaunchDirectory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManAdvancedBPLibrary::execGetMainDirectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileManAdvancedBPLibrary::GetMainDirectory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManAdvancedBPLibrary::execLoadTextureFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UFileManAdvancedBPLibrary::LoadTextureFromFile(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManAdvancedBPLibrary::execWriteFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileManAdvancedBPLibrary::WriteFile(Z_Param_Content,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManAdvancedBPLibrary::execReadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileManAdvancedBPLibrary::ReadFile(Z_Param_FileName,Z_Param_Out_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManAdvancedBPLibrary::execGetFilesInPath)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_SearchSubfolders);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileManAdvancedBPLibrary::GetFilesInPath(Z_Param_Out_Files,Z_Param_Path,Z_Param_SearchSubfolders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManAdvancedBPLibrary::execDeleteFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileManAdvancedBPLibrary::DeleteFile(Z_Param_FileName);
		P_NATIVE_END;
	}
	void UFileManAdvancedBPLibrary::StaticRegisterNativesUFileManAdvancedBPLibrary()
	{
		UClass* Class = UFileManAdvancedBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDirectory", &UFileManAdvancedBPLibrary::execCreateDirectory },
			{ "DeleteDirectory", &UFileManAdvancedBPLibrary::execDeleteDirectory },
			{ "DeleteFile", &UFileManAdvancedBPLibrary::execDeleteFile },
			{ "GetEngineDirectory", &UFileManAdvancedBPLibrary::execGetEngineDirectory },
			{ "GetFilesInPath", &UFileManAdvancedBPLibrary::execGetFilesInPath },
			{ "GetLaunchDirectory", &UFileManAdvancedBPLibrary::execGetLaunchDirectory },
			{ "GetMainDirectory", &UFileManAdvancedBPLibrary::execGetMainDirectory },
			{ "LastModifiedTime", &UFileManAdvancedBPLibrary::execLastModifiedTime },
			{ "LoadTextureFromFile", &UFileManAdvancedBPLibrary::execLoadTextureFromFile },
			{ "ReadFile", &UFileManAdvancedBPLibrary::execReadFile },
			{ "WriteFile", &UFileManAdvancedBPLibrary::execWriteFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics
	{
		struct FileManAdvancedBPLibrary_eventCreateDirectory_Parms
		{
			FString FolderName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventCreateDirectory_Parms, FolderName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManAdvancedBPLibrary_eventCreateDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManAdvancedBPLibrary_eventCreateDirectory_Parms), &Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManAdvanced|Directories" },
		{ "Comment", "/** Creates a new directory at the specified path. */" },
		{ "Keywords", "Make Add New Folder" },
		{ "ModuleRelativePath", "Public/FileManAdvancedBPLibrary.h" },
		{ "ToolTip", "Creates a new directory at the specified path." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManAdvancedBPLibrary, nullptr, "CreateDirectory", nullptr, nullptr, sizeof(FileManAdvancedBPLibrary_eventCreateDirectory_Parms), Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics
	{
		struct FileManAdvancedBPLibrary_eventDeleteDirectory_Parms
		{
			FString FolderName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventDeleteDirectory_Parms, FolderName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManAdvancedBPLibrary_eventDeleteDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManAdvancedBPLibrary_eventDeleteDirectory_Parms), &Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManAdvanced|Directories" },
		{ "Comment", "/** Deletes a directory and all files inside. */" },
		{ "Keywords", "Delete Trash Folder" },
		{ "ModuleRelativePath", "Public/FileManAdvancedBPLibrary.h" },
		{ "ToolTip", "Deletes a directory and all files inside." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManAdvancedBPLibrary, nullptr, "DeleteDirectory", nullptr, nullptr, sizeof(FileManAdvancedBPLibrary_eventDeleteDirectory_Parms), Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics
	{
		struct FileManAdvancedBPLibrary_eventDeleteFile_Parms
		{
			FString FileName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventDeleteFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManAdvancedBPLibrary_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManAdvancedBPLibrary_eventDeleteFile_Parms), &Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManAdvanced|Files" },
		{ "Comment", "/** Deletes a file. */" },
		{ "ModuleRelativePath", "Public/FileManAdvancedBPLibrary.h" },
		{ "ToolTip", "Deletes a file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManAdvancedBPLibrary, nullptr, "DeleteFile", nullptr, nullptr, sizeof(FileManAdvancedBPLibrary_eventDeleteFile_Parms), Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory_Statics
	{
		struct FileManAdvancedBPLibrary_eventGetEngineDirectory_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventGetEngineDirectory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManAdvanced|Directories" },
		{ "Comment", "/** Returns the base Engine Directory. */" },
		{ "Keywords", "Load Get Directory" },
		{ "ModuleRelativePath", "Public/FileManAdvancedBPLibrary.h" },
		{ "ToolTip", "Returns the base Engine Directory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManAdvancedBPLibrary, nullptr, "GetEngineDirectory", nullptr, nullptr, sizeof(FileManAdvancedBPLibrary_eventGetEngineDirectory_Parms), Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics
	{
		struct FileManAdvancedBPLibrary_eventGetFilesInPath_Parms
		{
			TArray<FString> Files;
			FString Path;
			bool SearchSubfolders;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_SearchSubfolders_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SearchSubfolders;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventGetFilesInPath_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventGetFilesInPath_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_SearchSubfolders_SetBit(void* Obj)
	{
		((FileManAdvancedBPLibrary_eventGetFilesInPath_Parms*)Obj)->SearchSubfolders = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_SearchSubfolders = { "SearchSubfolders", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManAdvancedBPLibrary_eventGetFilesInPath_Parms), &Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_SearchSubfolders_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManAdvancedBPLibrary_eventGetFilesInPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManAdvancedBPLibrary_eventGetFilesInPath_Parms), &Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_Files_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_Files,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_SearchSubfolders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManAdvanced|Directories" },
		{ "Comment", "/** Gets all files in a folder. If you search subfolders, node returns full paths. */" },
		{ "Keywords", "All Files Directory" },
		{ "ModuleRelativePath", "Public/FileManAdvancedBPLibrary.h" },
		{ "ToolTip", "Gets all files in a folder. If you search subfolders, node returns full paths." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManAdvancedBPLibrary, nullptr, "GetFilesInPath", nullptr, nullptr, sizeof(FileManAdvancedBPLibrary_eventGetFilesInPath_Parms), Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory_Statics
	{
		struct FileManAdvancedBPLibrary_eventGetLaunchDirectory_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventGetLaunchDirectory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManAdvanced|Directories" },
		{ "Comment", "/** Returns the directory the application was launched from. */" },
		{ "Keywords", "Load Get Directory" },
		{ "ModuleRelativePath", "Public/FileManAdvancedBPLibrary.h" },
		{ "ToolTip", "Returns the directory the application was launched from." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManAdvancedBPLibrary, nullptr, "GetLaunchDirectory", nullptr, nullptr, sizeof(FileManAdvancedBPLibrary_eventGetLaunchDirectory_Parms), Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory_Statics
	{
		struct FileManAdvancedBPLibrary_eventGetMainDirectory_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventGetMainDirectory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManAdvanced|Directories" },
		{ "Comment", "/** Returns the Project Directory. */" },
		{ "Keywords", "Load Get Directory" },
		{ "ModuleRelativePath", "Public/FileManAdvancedBPLibrary.h" },
		{ "ToolTip", "Returns the Project Directory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManAdvancedBPLibrary, nullptr, "GetMainDirectory", nullptr, nullptr, sizeof(FileManAdvancedBPLibrary_eventGetMainDirectory_Parms), Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics
	{
		struct FileManAdvancedBPLibrary_eventLastModifiedTime_Parms
		{
			FString FileName;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventLastModifiedTime_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventLastModifiedTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManAdvanced|Files" },
		{ "Comment", "/** Returns a file's \"last modified\" timestamp. */" },
		{ "Keywords", "Get Last Modified Time Created" },
		{ "ModuleRelativePath", "Public/FileManAdvancedBPLibrary.h" },
		{ "ToolTip", "Returns a file's \"last modified\" timestamp." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManAdvancedBPLibrary, nullptr, "LastModifiedTime", nullptr, nullptr, sizeof(FileManAdvancedBPLibrary_eventLastModifiedTime_Parms), Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics
	{
		struct FileManAdvancedBPLibrary_eventLoadTextureFromFile_Parms
		{
			FString FileName;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventLoadTextureFromFile_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::NewProp_FileName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventLoadTextureFromFile_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManAdvanced|Files" },
		{ "Comment", "/** Gets image file, returns a Texture2D object reference. */" },
		{ "Keywords", "Load Get Image" },
		{ "ModuleRelativePath", "Public/FileManAdvancedBPLibrary.h" },
		{ "ToolTip", "Gets image file, returns a Texture2D object reference." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManAdvancedBPLibrary, nullptr, "LoadTextureFromFile", nullptr, nullptr, sizeof(FileManAdvancedBPLibrary_eventLoadTextureFromFile_Parms), Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics
	{
		struct FileManAdvancedBPLibrary_eventReadFile_Parms
		{
			FString FileName;
			FString Content;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventReadFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventReadFile_Parms, Content), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManAdvancedBPLibrary_eventReadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManAdvancedBPLibrary_eventReadFile_Parms), &Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManAdvanced|Files" },
		{ "Comment", "/** Reads a file, then returns its content. */" },
		{ "Keywords", "Load Get Text" },
		{ "ModuleRelativePath", "Public/FileManAdvancedBPLibrary.h" },
		{ "ToolTip", "Reads a file, then returns its content." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManAdvancedBPLibrary, nullptr, "ReadFile", nullptr, nullptr, sizeof(FileManAdvancedBPLibrary_eventReadFile_Parms), Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics
	{
		struct FileManAdvancedBPLibrary_eventWriteFile_Parms
		{
			FString Content;
			FString FileName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventWriteFile_Parms, Content), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManAdvancedBPLibrary_eventWriteFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManAdvancedBPLibrary_eventWriteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManAdvancedBPLibrary_eventWriteFile_Parms), &Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManAdvanced|Files" },
		{ "Comment", "/** Writes content to a file. Returns true if success! */" },
		{ "Keywords", "Save Set Text" },
		{ "ModuleRelativePath", "Public/FileManAdvancedBPLibrary.h" },
		{ "ToolTip", "Writes content to a file. Returns true if success!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManAdvancedBPLibrary, nullptr, "WriteFile", nullptr, nullptr, sizeof(FileManAdvancedBPLibrary_eventWriteFile_Parms), Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileManAdvancedBPLibrary_NoRegister()
	{
		return UFileManAdvancedBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFileManAdvancedBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileManAdvancedBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FileManAdvanced,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileManAdvancedBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileManAdvancedBPLibrary_CreateDirectory, "CreateDirectory" }, // 1745754887
		{ &Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteDirectory, "DeleteDirectory" }, // 1040867163
		{ &Z_Construct_UFunction_UFileManAdvancedBPLibrary_DeleteFile, "DeleteFile" }, // 503788342
		{ &Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetEngineDirectory, "GetEngineDirectory" }, // 1737122667
		{ &Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetFilesInPath, "GetFilesInPath" }, // 70906137
		{ &Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetLaunchDirectory, "GetLaunchDirectory" }, // 2895373439
		{ &Z_Construct_UFunction_UFileManAdvancedBPLibrary_GetMainDirectory, "GetMainDirectory" }, // 3040068953
		{ &Z_Construct_UFunction_UFileManAdvancedBPLibrary_LastModifiedTime, "LastModifiedTime" }, // 4177793932
		{ &Z_Construct_UFunction_UFileManAdvancedBPLibrary_LoadTextureFromFile, "LoadTextureFromFile" }, // 2733590850
		{ &Z_Construct_UFunction_UFileManAdvancedBPLibrary_ReadFile, "ReadFile" }, // 3755508055
		{ &Z_Construct_UFunction_UFileManAdvancedBPLibrary_WriteFile, "WriteFile" }, // 1921076564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileManAdvancedBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FileManAdvancedBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FileManAdvancedBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileManAdvancedBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileManAdvancedBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileManAdvancedBPLibrary_Statics::ClassParams = {
		&UFileManAdvancedBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileManAdvancedBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileManAdvancedBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileManAdvancedBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileManAdvancedBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileManAdvancedBPLibrary, 3920259670);
	template<> FILEMANADVANCED_API UClass* StaticClass<UFileManAdvancedBPLibrary>()
	{
		return UFileManAdvancedBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileManAdvancedBPLibrary(Z_Construct_UClass_UFileManAdvancedBPLibrary, &UFileManAdvancedBPLibrary::StaticClass, TEXT("/Script/FileManAdvanced"), TEXT("UFileManAdvancedBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileManAdvancedBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
