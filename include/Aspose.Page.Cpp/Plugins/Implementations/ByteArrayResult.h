#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/Plugins/IOperationResult.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace Plugins
{
class PsConverter;
class XpsConverter;
} // namespace Plugins
} // namespace Page
} // namespace Aspose
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
/// Represents operation result in the form of the bytes array.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ByteArrayResult final : public Aspose::Page::Plugins::IOperationResult
{
    typedef ByteArrayResult ThisType;
    typedef Aspose::Page::Plugins::IOperationResult BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::Plugins::XpsConverter;
    friend class Aspose::Page::Plugins::PsConverter;
    
public:

    /// <summary>
    /// Indicates whether the result is a path to an output file.
    /// </summary>
    /// <returns><c>true</c> if the result is a file; otherwise <c>false</c>.</returns>
    ASPOSE_PAGE_SHARED_API bool get_IsFile() override;
    /// <summary>
    /// Indicates whether the result is an output stream.
    /// </summary>
    /// <returns><c>true</c> if the result is a stream object; otherwise <c>false</c>.</returns>
    ASPOSE_PAGE_SHARED_API bool get_IsStream() override;
    /// <summary>
    /// Indicates whether the result is a text string.
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
    /// Tries to convert the result to a file.
    /// </summary>
    /// <returns>A string representing the path to the output file if the result is file; otherwise <c>null</c>.</returns>
    ASPOSE_PAGE_SHARED_API System::String ToFile() override;
    /// <summary>
    /// Tries to convert the result to a stream object.
    /// </summary>
    /// <returns>A stream object representing the output data if the result is stream; otherwise <c>null</c>.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::IO::Stream> ToStream() override;
    
protected:

    /// <summary>
    /// Initializes a new instance with the array of bytes array.
    /// </summary>
    /// <param name="data">Array of array of bytes. It is used for conversion of document to image. One byte array contains bytes of one page image.</param>
    ByteArrayResult(System::ArrayPtr<System::ArrayPtr<uint8_t>> data);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ByteArrayResult, CODEPORTING_ARGS(System::ArrayPtr<System::ArrayPtr<uint8_t>> data));
    
private:

    System::ArrayPtr<System::ArrayPtr<uint8_t>> data;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


