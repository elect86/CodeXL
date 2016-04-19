//=====================================================================================
// Copyright (c) 2015 Advanced Micro Devices, Inc.
/// \author GPU Developer Tools
/// \file
/// \brief Callback function provided to the AMDLoggingRegistration object in the APIWrapping code.
//=====================================================================================

#ifndef APIWRAPPER_LOGGER_H
#define APIWRAPPER_LOGGER_H

#include "AMDLoggingRegistration.h"

/// Callback function provided to the AMDLoggingRegistration object in th APIWrapping code. This function will be called
/// when a log message is generated bye the APIWrapper.
/// \param pUser User data.
/// \param type The message type.
/// \param msg The message to be printed.
extern void fprintf_callback(void* pUser, const AMDLogType type, char const* const msg);

//#define USE_APIWRAPPER

#endif