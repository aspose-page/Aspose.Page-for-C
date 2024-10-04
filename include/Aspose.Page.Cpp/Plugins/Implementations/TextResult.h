#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.Page.Cpp/Plugins/IOperationResult.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Page {

namespace Plugins {

/// <summary>
/// Represents operation result in the form of string.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS StringResult final : public Aspose::Page::Plugins::IOperationResult
{
    typedef StringResult ThisType;
    typedef Aspose::Page::Plugins::IOperationResult BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Indicates whether the result is a path to an output file.
    /// </summary>
    /// <returns><c>true</c> if the result is a file; otherwise <c>false</c>.</returns>
    ASPOSE_PAGE_SHARED_API bool get_IsFile() override;
    /// <summary>
    /// Indicates whether the result is a path to an output file.
    /// </summary>
    /// <returns><c>true</c> if the result is a stream object; otherwise <c>false</c>.</returns>
    ASPOSE_PAGE_SHARED_API bool get_IsStream() override;
    /// <summary>
    /// Indicates whether the result is a string.
    /// </summary>
    /// <returns><c>true</c> if the result is a string; otherwise <c>false</c>.</returns>
    ASPOSE_PAGE_SHARED_API bool get_IsString() override;
    /// <summary>
    /// Indicates whether the result is a byte array.
    /// </summary>
    /// <returns><c>true</c> if the result is a byte array; otherwise <c>false</c>.</returns>
    ASPOSE_PAGE_SHARED_API bool get_IsByteArray() override;
    /// <summary>
    /// Gets raw data.
    /// </summary>
    /// <returns>An <c>object</c> representing output data.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> get_Data() override;
    /// <summary>
    /// Returns string representation of the result.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_Text();
    
    /// <summary>
    /// Tries to convert the result to a file.
    /// </summary>
    /// <returns>A string representing the path to the output file if the result is file; otherwise <c>null</c>.</returns>
    ASPOSE_PAGE_SHARED_API System::String ToFile() override;
    /// <summary>
    /// Tries to convert the result to a stream object.
    /// </summary>
    /// <returns>A stream object representing the output data if the result is stream; otherwise <c>null</c>.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::IO::Stream> ToStream() override;
    /// <summary>
    /// Tries to convert the result to a string.
    /// </summary>
    /// <returns>A string representing the text content if the result is string; otherwise returns base.ToString().</returns>
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Initializes new StringResult instance with a string.
    /// </summary>
    /// <param name="result">String representing the result</param>
    StringResult(System::String result);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StringResult, CODEPORTING_ARGS(System::String result));
    
private:

    System::SharedPtr<System::Object> _data;
    
    System::String ToString_NonConst();
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


