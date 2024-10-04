#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System

namespace Aspose {

namespace Page {

namespace Plugins {

/// <summary>
/// General operation result interface that defines common methods that concrete plugin operation result should implement.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IOperationResult : public virtual System::Object
{
    typedef IOperationResult ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Indicates whether the result is a path to an output file.
    /// </summary>
    /// <returns><c>true</c> if the result is a file; otherwise <c>false</c>.</returns>
    virtual bool get_IsFile() = 0;
    /// <summary>
    /// Indicates whether the result is an output stream.
    /// </summary>
    /// <returns><c>true</c> if the result is a stream object; otherwise <c>false</c>.</returns>
    virtual bool get_IsStream() = 0;
    /// <summary>
    /// Indicates whether the result is a text string.
    /// </summary>
    /// <returns><c>true</c> if the result is a string; otherwise <c>false</c>.</returns>
    virtual bool get_IsString() = 0;
    /// <summary>
    /// Indicates whether the result is a byte array.
    /// </summary>
    /// <returns><c>true</c> if the result is a byte array; otherwise <c>false</c>.</returns>
    virtual bool get_IsByteArray() = 0;
    /// <summary>
    /// Gets raw data.
    /// </summary>
    /// <returns>An <c>object</c> representing output data.</returns>
    virtual System::SharedPtr<System::Object> get_Data() = 0;
    
    /// <summary>
    /// Tries to convert the result to the file.
    /// </summary>
    /// <returns>A string representing the path to the output file if the result is file; otherwise <c>null</c>.</returns>
    virtual System::String ToFile() = 0;
    /// <summary>
    /// Tries to convert the result to the stream object.
    /// </summary>
    /// <returns>A stream object representing the output data if the result is stream; otherwise <c>null</c>.</returns>
    virtual System::SharedPtr<System::IO::Stream> ToStream() = 0;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


