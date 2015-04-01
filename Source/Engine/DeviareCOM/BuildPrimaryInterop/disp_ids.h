/*
 * Copyright (C) 2010-2015 Nektra S.A., Buenos Aires, Argentina.
 * All rights reserved. Contact: http://www.nektra.com
 *
 *
 * This file is part of Deviare
 *
 *
 * Commercial License Usage
 * ------------------------
 * Licensees holding valid commercial Deviare licenses may use this file
 * in accordance with the commercial license agreement provided with the
 * Software or, alternatively, in accordance with the terms contained in
 * a written agreement between you and Nektra.  For licensing terms and
 * conditions see http://www.nektra.com/licensing/. Use the contact form
 * at http://www.nektra.com/contact/ for further information.
 *
 *
 * GNU General Public License Usage
 * --------------------------------
 * Alternatively, this file may be used under the terms of the GNU General
 * Public License version 3.0 as published by the Free Software Foundation
 * and appearing in the file LICENSE.GPL included in the packaging of this
 * file.  Please visit http://www.gnu.org/copyleft/gpl.html and review the
 * information to ensure the GNU General Public License version 3.0
 * requirements will be met.
 *
 **/

typedef [v1_enum] enum eNktDispIds {
  dispidNktObjectUserData = 1000,
  dispidNktObjectInterfaceError,
  dispidNktObjectDeviareId,
  dispidNktObjectToString,
  dispidNktObjectGetObjectFromDeviareId,
  //----
  dispidNktProcessId = 1,
  dispidNktProcessParentId,
  dispidNktProcessPlatformBits,
  dispidNktProcessThreadsCount,
  dispidNktProcessPriorityBaseClass,
  dispidNktProcessPath,
  dispidNktProcessName,
  dispidNktProcessUserName,
  dispidNktProcessDomainName,
  dispidNktProcessLogonSID,
  dispidNktProcessIcon,
  dispidNktProcessDefaultIcon,
  dispidNktProcessIsActive,
  dispidNktProcessTerminate,
  dispidNktProcessModules,
  dispidNktProcessModuleByName,
  dispidNktProcessModuleByAddress,
  dispidNktProcessFunctionByName,
  dispidNktProcessFunctionByAddress,
  dispidNktProcessHandle,
  dispidNktProcessFileHeader,
  dispidNktProcessOptionalHeader,
  dispidNktProcessSections,
  dispidNktProcessPrivilege,
  dispidNktProcessMemory,
  dispidNktProcessInvalidateCache,
  //----
  dispidNktProcessesEnumCount = 1,
  dispidNktProcessesEnumGetAt,
  dispidNktProcessesEnumFirst,
  dispidNktProcessesEnumLast,
  dispidNktProcessesEnumNext,
  dispidNktProcessesEnumPrevious,
  dispidNktProcessesEnumGetByDeviareId,
  dispidNktProcessesEnumGetById,
  dispidNktProcessesEnumGetByName,
  //----
  dispidNktModuleProcessId = 1,
  dispidNktModuleBaseAddress,
  dispidNktModuleSize,
  dispidNktModuleName,
  dispidNktModulePath,
  dispidNktModuleFileName,
  dispidNktModuleHandle,
  dispidNktModuleExportedFunctions,
  dispidNktModuleFunctionByOrdinal,
  dispidNktModuleFunctionByName,
  dispidNktModuleFunctionByAddress,
  dispidNktModuleFileHeader,
  dispidNktModuleOptionalHeader,
  dispidNktModuleSections,
  dispidNktModulePlatformBits,
  //----
  dispidNktModulesEnumCount,
  dispidNktModulesEnumGetAt,
  dispidNktModulesEnumFirst,
  dispidNktModulesEnumLast,
  dispidNktModulesEnumNext,
  dispidNktModulesEnumPrevious,
  dispidNktModulesEnumGetByDeviareId,
  dispidNktModulesEnumGetByName,
  dispidNktModulesEnumGetByAddress,
  dispidNktModulesEnumFunctionByName,
  dispidNktModulesEnumFunctionByAddress,
  //----  
  dispidNktExportedFunctionOrdinal = 1,
  dispidNktExportedFunctionName,
  dispidNktExportedFunctionModuleName,
  dispidNktExportedFunctionCompleteName,
  dispidNktExportedFunctionIsForwarded,
  dispidNktExportedFunctionForwardedApiName,
  dispidNktExportedFunctionForwardedModuleName,
  dispidNktExportedFunctionForwardedCompleteName,
  dispidNktExportedFunctionAddrBase,
  dispidNktExportedFunctionAddrOffset,
  dispidNktExportedFunctionAddr,
  dispidNktExportedFunctionCallingConv,
  dispidNktExportedFunctionDbObject,
  dispidNktExportedFunctionHasDeclaration,
  dispidNktExportedFunctionDeclaration,
  //----  
  dispidNktExportedFunctionsEnumCount = 1,
  dispidNktExportedFunctionsEnumGetAt,
  dispidNktExportedFunctionsEnumFirst,
  dispidNktExportedFunctionsEnumLast,
  dispidNktExportedFunctionsEnumNext,
  dispidNktExportedFunctionsEnumPrevious,
  dispidNktExportedFunctionsEnumGetByDeviareId,
  dispidNktExportedFunctionsEnumGetByOrdinal,
  dispidNktExportedFunctionsEnumGetByName,
  dispidNktExportedFunctionsEnumGetByAddress,
  //----  
  dispidNktHookId = 1,
  dispidNktHookDestroy,
  dispidNktHookAttach,
  dispidNktHookDetach,
  dispidNktHookEnable,
  dispidNktHookState,
  dispidNktHookHook,
  dispidNktHookUnhook,
  dispidNktHookAddCustomHandler,
  dispidNktHookRemoveAllHandlers,
  dispidNktHookFunctionName,
  dispidNktHookFlags,
  dispidNktHookLastError,
  dispidNktHookQueryOverwrite,
  //----
  dispidNktHooksEnumCount = 1,
  dispidNktHooksEnumGetAt,
  dispidNktHooksEnumFirst,
  dispidNktHooksEnumLast,
  dispidNktHooksEnumNext,
  dispidNktHooksEnumPrevious,
  dispidNktHooksEnumGetByDeviareId,
  dispidNktHooksEnumGetById,
  dispidNktHooksEnumAdd,
  dispidNktHooksEnumAttach,
  dispidNktHooksEnumDetach,
  dispidNktHooksEnumEnable,
  dispidNktHooksEnumHook,
  dispidNktHooksEnumUnhook,
  dispidNktHooksEnumQueryOverwrite,
  //----
  dispidNktParamAddress = 1,
  dispidNktParamClass,
  dispidNktParamBasicType,
  dispidNktParamName,
  dispidNktParamDeclaration,
  dispidNktParamFlags,
  dispidNktParamIsPointer,
  dispidNktParamIsArray,
  dispidNktParamArrayMaxHint,
  dispidNktParamIsAnsiString,
  dispidNktParamIsWideString,
  dispidNktParamIntResourceString,
  dispidNktParamGuidString,
  dispidNktParamEvaluate,
  dispidNktParamIndexedEvaluate,
  dispidNktParamFullEvaluate,
  dispidNktParamFieldsCount,
  dispidNktParamField,
  dispidNktParamFields,
  dispidNktParamValue,
  dispidNktParamValueAt,
  dispidNktParamValueArray,
  dispidNktParamValueArrayAt,
  dispidNktParamReadString,
  dispidNktParamReadStringN,
  dispidNktParamWriteString,
  dispidNktParamStringLength,
  dispidNktParamCharVal,
  dispidNktParamByteVal,
  dispidNktParamShortVal,
  dispidNktParamUShortVal,
  dispidNktParamLongVal,
  dispidNktParamULongVal,
  dispidNktParamLongLongVal,
  dispidNktParamULongLongVal,
  dispidNktParamSSizeTVal,
  dispidNktParamSizeTVal,
  dispidNktParamFloatVal,
  dispidNktParamDoubleVal,
  dispidNktParamCharValAt,
  dispidNktParamByteValAt,
  dispidNktParamShortValAt,
  dispidNktParamUShortValAt,
  dispidNktParamLongValAt,
  dispidNktParamULongValAt,
  dispidNktParamLongLongValAt,
  dispidNktParamULongLongValAt,
  dispidNktParamSSizeTValAt,
  dispidNktParamSizeTValAt,
  dispidNktParamFloatValAt,
  dispidNktParamDoubleValAt,
  dispidNktParamPointerVal,
  dispidNktParamIsNullPointer,
  dispidNktParamMemory,
  dispidNktParamCastTo,
  dispidNktParamTypeName,
  //----
  dispidNktParamsEnumCount = 1,
  dispidNktParamsEnumGetAt,
  dispidNktParamsEnumFirst,
  dispidNktParamsEnumLast,
  dispidNktParamsEnumNext,
  dispidNktParamsEnumPrevious,
  dispidNktParamsEnumGetByDeviareId,
  //----
  dispidNktHookCallInfoIsPreCall = 1,
  dispidNktHookCallInfoCookie,
  dispidNktHookCallInfoLastError,
  dispidNktHookCallInfoCurrentTimeMs,
  dispidNktHookCallInfoElapsedTimeMs,
  dispidNktHookCallInfoChildsElapsedTimeMs,
  dispidNktHookCallInfoHook,
  dispidNktHookCallInfoProcess,
  dispidNktHookCallInfoThreadId,
  dispidNktHookCallInfoStackTrace,
  dispidNktHookCallInfoParams,
  dispidNktHookCallInfoResult,
  dispidNktHookCallInfoCustomParams,
  dispidNktHookCallInfoRegister,
  dispidNktHookCallInfoFloatingRegister,
  dispidNktHookCallInfoSkipCall,
  dispidNktHookCallInfoKernelModeTimeMs,
  dispidNktHookCallInfoUserModeTimeMs,
  dispidNktHookCallInfoCpuClockCycles,
  dispidNktHookCallInfoReadIntercallData,
  dispidNktHookCallInfoWriteIntercallData,
  dispidNktHookCallInfoCallDepth,
  //----
  dispidNktProcessMemoryGetProtection = 1,
  dispidNktProcessMemoryReadMem,
  dispidNktProcessMemoryWriteMem,
  dispidNktProcessMemoryRead,
  dispidNktProcessMemoryReadArray,
  dispidNktProcessMemoryWrite,
  dispidNktProcessMemoryReadString,
  dispidNktProcessMemoryReadStringN,
  dispidNktProcessMemoryWriteString,
  dispidNktProcessMemoryStringLength,
  dispidNktProcessMemoryCharVal,
  dispidNktProcessMemoryByteVal,
  dispidNktProcessMemoryShortVal,
  dispidNktProcessMemoryUShortVal,
  dispidNktProcessMemoryLongVal,
  dispidNktProcessMemoryULongVal,
  dispidNktProcessMemoryLongLongVal,
  dispidNktProcessMemoryULongLongVal,
  dispidNktProcessMemorySSizeTVal,
  dispidNktProcessMemorySizeTVal,
  dispidNktProcessMemoryFloatVal,
  dispidNktProcessMemoryDoubleVal,
  dispidNktProcessMemoryAllocMem,
  dispidNktProcessMemoryFreeMem,
  dispidNktProcessMemoryBuildParam,
  /*
  dispidNktProcessMemoryReadMem2,
  */
  //----
  dispidNktStackTraceNearestFunction = 1,
  dispidNktStackTraceModule,
  dispidNktStackTraceOffset,
  dispidNktStackTraceAddress,
  dispidNktStackTraceNearestSymbol,
  dispidNktStackTraceParams,
  dispidNktStackTraceResult,
  //----
  dispidNktSpyMgrLicenseKey = 1,
  dispidNktSpyMgrDatabasePath,
  dispidNktSpyMgrAgentPath,
  dispidNktSpyMgrInitialize,
  dispidNktSpyMgrProcesses,
  dispidNktSpyMgrHooks,
  dispidNktSpyMgrCreateHook,
  dispidNktSpyMgrCreateHookForAddress,
  dispidNktSpyMgrDestroyHook,
  dispidNktSpyMgrLoadCustomDll,
  dispidNktSpyMgrUnloadCustomDll,
  dispidNktSpyMgrCallCustomApi,
  dispidNktSpyMgrProcessFromPID,
  dispidNktSpyMgrProcessMemoryFromPID,
  dispidNktSpyMgrCreateProcess,
  dispidNktSpyMgrResumeProcess,
  dispidNktSpyMgrTerminateProcess,
  dispidNktSpyMgrFindProcessId,
  dispidNktSpyMgrRealFilePath,
  dispidNktSpyMgrDbFunctions,
  dispidNktSpyMgrDbModules,
  dispidNktSpyMgrProcessHandle,
  dispidNktSpyMgrCheckProduct,
  dispidNktSpyMgrLicenseEMail, //not used anymore
  dispidNktSpyMgrGetWindowProc,
  dispidNktSpyMgrDbObjects,
  dispidNktSpyMgrCreateHooksCollection,
  dispidNktSpyMgrLoadAgent,
  dispidNktSpyMgrProcessMemory,
  dispidNktSpyMgrCreateProcessWithLogon,
  dispidNktSpyMgrSettingOverride,
  dispidNktSpyMgrUnloadAgent,
  dispidNktSpyMgrCreateProcessWithToken,
  //----
  dispidNktHookCallInfoPluginIsPreCall = 1,
  dispidNktHookCallInfoPluginCookie,
  dispidNktHookCallInfoPluginLastError,
  dispidNktHookCallInfoPluginCurrentTimeMs,
  dispidNktHookCallInfoPluginElapsedTimeMs,
  dispidNktHookCallInfoPluginChildsElapsedTimeMs,
  dispidNktHookCallInfoPluginHookInfo,
  dispidNktHookCallInfoPluginSubIndex,
  dispidNktHookCallInfoPluginThreadId,
  dispidNktHookCallInfoPluginStackTrace,
  dispidNktHookCallInfoPluginParams,
  dispidNktHookCallInfoPluginResult,
  dispidNktHookCallInfoPluginCustomParams,
  dispidNktHookCallInfoPluginRegister,
  dispidNktHookCallInfoPluginFloatingRegister,
  dispidNktHookCallInfoPluginSkipCall,
  dispidNktHookCallInfoPluginAdd,
  dispidNktHookCallInfoPluginAddString,
  dispidNktHookCallInfoPluginAddChar,
  dispidNktHookCallInfoPluginAddByte,
  dispidNktHookCallInfoPluginAddShort,
  dispidNktHookCallInfoPluginAddUShort,
  dispidNktHookCallInfoPluginAddLong,
  dispidNktHookCallInfoPluginAddULong,
  dispidNktHookCallInfoPluginAddLongLong,
  dispidNktHookCallInfoPluginAddULongLong,
  dispidNktHookCallInfoPluginAddSSizeT,
  dispidNktHookCallInfoPluginAddSizeT,
  dispidNktHookCallInfoPluginAddFloat,
  dispidNktHookCallInfoPluginAddDouble,
  dispidNktHookCallInfoPluginInvalidate,
  dispidNktHookCallInfoPluginFilterSpyMgrEvent,
  dispidNktHookCallInfoPluginKernelModeTimeMs,
  dispidNktHookCallInfoPluginUserModeTimeMs,
  dispidNktHookCallInfoPluginCpuClockCycles,
  dispidNktHookCallInfoPluginSendCustomMessage, //not used anymore
  dispidNktHookCallInfoPluginCurrentProcess,
  dispidNktHookCallInfoPluginReadIntercallData,
  dispidNktHookCallInfoPluginWriteIntercallData,
  dispidNktHookCallInfoPluginCallDepth,
  //----
  dispidNktHookInfoId = 1,
  dispidNktHookInfoFunctionName,
  dispidNktHookInfoAddress,
  dispidNktHookInfoDbObject,
  dispidNktHookInfoSendCustomMessage,
  dispidNktHookInfoThreadIgnore,
  dispidNktHookInfoInvalidateCache,
  dispidNktHookInfoCurrentProcess,
  //----
  dispidNktDbObjectId = 1,
  dispidNktDbObjectClass,
  dispidNktDbObjectFundamentalType,
  dispidNktDbObjectDeclaration,
  dispidNktDbObjectName,
  dispidNktDbObjectSize,
  dispidNktDbObjectAlign,
  dispidNktDbObjectIsArray,
  dispidNktDbObjectArrayMaxHint,
  dispidNktDbObjectFlags,
  dispidNktDbObjectItemsCount,
  dispidNktDbObjectNameToIndex,
  dispidNktDbObjectItem,
  dispidNktDbObjectItems,
  dispidNktDbObjectItemName,
  dispidNktDbObjectItemFlags,
  dispidNktDbObjectItemMemberType,
  dispidNktDbObjectItemStructOffset,
  dispidNktDbObjectItemStructBits,
  dispidNktDbObjectItemEnumValue,
  dispidNktDbObjectItemDeclaration,
  dispidNktDbObjectFuncCallingConvention,
  dispidNktDbObjectFunctionReturn,
  dispidNktDbObjectFunctionReturnFlags,
  dispidNktDbObjectFunctionReturnDeclaration,
  dispidNktDbObjectDbModules,
  dispidNktDbObjectIsAnsiString,
  dispidNktDbObjectIsWideString,
  dispidNktDbObjectIsGuid,
  dispidNktDbObjectEvaluate,
  dispidNktDbObjectIndexedEvaluate,
  dispidNktDbObjectFullEvaluate,
  //----
  dispidNktDbObjectsEnumCount = 1,
  dispidNktDbObjectsEnumGetAt,
  dispidNktDbObjectsEnumFirst,
  dispidNktDbObjectsEnumLast,
  dispidNktDbObjectsEnumNext,
  dispidNktDbObjectsEnumPrevious,
  dispidNktDbObjectsEnumGetById,
  dispidNktDbObjectsEnumGetByName,
  //----
  dispidNktDbModuleId = 1,
  dispidNktDbModuleName,
  dispidNktDbModuleDbFunctions,
  //----
  dispidNktDbModulesEnumCount = 1,
  dispidNktDbModulesEnumGetAt,
  dispidNktDbModulesEnumFirst,
  dispidNktDbModulesEnumLast,
  dispidNktDbModulesEnumNext,
  dispidNktDbModulesEnumPrevious,
  dispidNktDbModulesEnumGetById,
  dispidNktDbModulesEnumGetByName,
  //----
  dispidNktToolsExtractIcon = 1,
  dispidNktToolsGetFileNameFromHandle,
  dispidNktToolsLocateFunctionSymbolInPdb,
  //----
  dispidNktProcessEventsOnCustomDllLoad = 1,
  dispidNktProcessEventsOnCustomDllUnload,
  dispidNktProcessEventsOnCustomApiCall,
  dispidNktProcessEventsOnHookStateChanged,
  dispidNktProcessEventsOnFunctionCalled,
  dispidNktProcessEventsOnCreateProcessCall,
  dispidNktProcessEventsOnLoadLibraryCall,
  dispidNktProcessEventsOnFreeLibraryCall,
  dispidNktProcessEventsOnAgentLoad,
  dispidNktProcessEventsOnAgentUnload,
  dispidNktProcessEventsOnLoadLibraryCall2,
  dispidNktProcessEventsOnFreeLibraryCall2,
  dispidNktProcessEventsOnCustomMessage,
  dispidNktProcessEventsOnCustomMessage2,
  dispidNktProcessEventsOnHookOverwritten,
  //----
  dispidNktHookEventsOnStateChanged = 1,
  dispidNktHookEventsOnFunctionCalled,
  dispidNktHookEventsOnHookOverwritten,
  //----
  dispidNktSpyMgrEventsOnCustomDllLoad = 1,
  dispidNktSpyMgrEventsOnCustomDllUnload,
  dispidNktSpyMgrEventsOnCustomApiCall,
  dispidNktSpyMgrEventsOnHookStateChanged,
  dispidNktSpyMgrEventsOnFunctionCalled,
  dispidNktSpyMgrEventsOnCreateProcessCall,
  dispidNktSpyMgrEventsOnLoadLibraryCall,
  dispidNktSpyMgrEventsOnFreeLibraryCall,
  dispidNktSpyMgrEventsOnProcessStarted,
  dispidNktSpyMgrEventsOnProcessTerminated,
  dispidNktSpyMgrEventsOnAgentLoad,
  dispidNktSpyMgrEventsOnAgentUnload,
  dispidNktSpyMgrEventsOnLoadLibraryCall2,
  dispidNktSpyMgrEventsOnFreeLibraryCall2,
  dispidNktSpyMgrEventsOnCustomMessage,
  dispidNktSpyMgrEventsOnCustomMessage2,
  dispidNktSpyMgrEventsOnHookOverwritten,
  //----
  dispidNktHookCallInfoPluginEventsOnSetup = 1,
  dispidNktHookCallInfoPluginEventsOnFunctionCalled,
  //----
  dispidNktStructPEFileHeaderMachine = 1,
  dispidNktStructPEFileHeaderNumberOfSections,
  dispidNktStructPEFileHeaderTimeDateStamp,
  dispidNktStructPEFileHeaderPointerToSymbolTable,
  dispidNktStructPEFileHeaderNumberOfSymbols,
  dispidNktStructPEFileHeaderSizeOfOptionalHeader,
  dispidNktStructPEFileHeaderCharacteristics,
  //----
  dispidNktStructPEOptionalHeaderMagic = 1,
  dispidNktStructPEOptionalHeaderMajorLinkerVersion,
  dispidNktStructPEOptionalHeaderMinorLinkerVersion,
  dispidNktStructPEOptionalHeaderSizeOfCode,
  dispidNktStructPEOptionalHeaderSizeOfInitializedData,
  dispidNktStructPEOptionalHeaderSizeOfUninitializedData,
  dispidNktStructPEOptionalHeaderAddressOfEntryPoint,
  dispidNktStructPEOptionalHeaderBaseOfCode,
  dispidNktStructPEOptionalHeaderImageBase,
  dispidNktStructPEOptionalHeaderSectionAlignment,
  dispidNktStructPEOptionalHeaderFileAlignment,
  dispidNktStructPEOptionalHeaderMajorOperatingSystemVersion,
  dispidNktStructPEOptionalHeaderMinorOperatingSystemVersion,
  dispidNktStructPEOptionalHeaderMajorImageVersion,
  dispidNktStructPEOptionalHeaderMinorImageVersion,
  dispidNktStructPEOptionalHeaderMajorSubsystemVersion,
  dispidNktStructPEOptionalHeaderMinorSubsystemVersion,
  dispidNktStructPEOptionalHeaderWin32VersionValue,
  dispidNktStructPEOptionalHeaderSizeOfImage,
  dispidNktStructPEOptionalHeaderSizeOfHeaders,
  dispidNktStructPEOptionalHeaderCheckSum,
  dispidNktStructPEOptionalHeaderSubsystem,
  dispidNktStructPEOptionalHeaderDllCharacteristics,
  dispidNktStructPEOptionalHeaderSizeOfStackReserve,
  dispidNktStructPEOptionalHeaderSizeOfStackCommit,
  dispidNktStructPEOptionalHeaderSizeOfHeapReserve,
  dispidNktStructPEOptionalHeaderSizeOfHeapCommit,
  dispidNktStructPEOptionalHeaderLoaderFlags,
  dispidNktStructPEOptionalHeaderNumberOfRvaAndSizes,
  dispidNktStructPEOptionalHeaderDataDirectoryStart,
  dispidNktStructPEOptionalHeaderDataDirectoryEnd,
  //----
  dispidNktStructPESectionsCount = 1,
  dispidNktStructPESectionsName,
  dispidNktStructPESectionsStartAddress,
  dispidNktStructPESectionsEndAddress,
  dispidNktStructPESectionsCharacteristics,
  //----
  dispidNktPdbFunctionSymbolAddrOffset = 1,
  dispidNktPdbFunctionSymbolPlatformBits,
  dispidNktPdbFunctionSymbolName,
  dispidNktPdbFunctionSymbolModuleName,
  dispidNktPdbFunctionSymbolCompleteName
} eNktDispIds;