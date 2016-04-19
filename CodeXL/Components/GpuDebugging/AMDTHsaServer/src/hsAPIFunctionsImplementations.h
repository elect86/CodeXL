//==================================================================================
// Copyright (c) 2016 , Advanced Micro Devices, Inc.  All rights reserved.
//
/// \author AMD Developer Tools Team
/// \file hsAPIFunctionsImplementations.h
///
//==================================================================================
#ifndef __HSAPIFUNCTIONSIMPLEMENTATIONS_H
#define __HSAPIFUNCTIONSIMPLEMENTATIONS_H

// Forward declarations:
class osFilePath;

// Infra:
#include <AMDTBaseTools/Include/AMDTDefinitions.h>
#include <AMDTBaseTools/Include/gtString.h>
#include <AMDTBaseTools/Include/gtVector.h>
#include <AMDTAPIClasses/Include/apKernelDebuggingCommand.h>

bool gaIsInHSAKernelBreakpointImpl();
bool gaHSAGetCurrentLineImpl(gtUInt64& line, gtUInt64& addr);
bool gaHSAGetSourceFilePathImpl(osFilePath& srcPath, gtString& kernelName);
bool gaHSASetNextDebuggingCommandImpl(apKernelDebuggingCommand cmd);
bool gaHSASetBreakpointImpl(const gtString& kernelName, gtUInt64 line);
bool gaHSAListVariablesImpl(gtVector<gtString>& variables);
bool gaHSAGetVariableValueImpl(const gtString& varName, gtString& varValue, gtString& varValueHex, gtString& varType);
bool gaHSAListWorkItemsImpl(gtVector<gtUInt32>& o_gidLidWgid);
bool gaHSASetActiveWorkItemIndexImpl(gtUInt32 wiIndex);
bool gaHSAGetWorkDimsImpl(gtUByte& dims);



#endif // __HSAPIFUNCTIONSIMPLEMENTATIONS_H