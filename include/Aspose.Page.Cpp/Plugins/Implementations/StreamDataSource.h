#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.Page.Cpp/Plugins/IDataSource.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace Plugins
{
enum class DataType;
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
/// Represents stream data source for load and save operations of a plugin.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS StreamDataSource final : public Aspose::Page::Plugins::IDataSource
{
    typedef StreamDataSource ThisType;
    typedef Aspose::Page::Plugins::IDataSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Type of data source (stream).
    /// </summary>
    ASPOSE_PAGE_SHARED_API Aspose::Page::Plugins::DataType get_DataType() override;
    /// <summary>
    /// Gets the stream object of the current data source.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::IO::Stream> get_Data() const;
    
    /// <summary>
    /// Initializes new stream data source with the specified stream object.
    /// </summary>
    /// <param name="data">Stream object</param>
    ASPOSE_PAGE_SHARED_API StreamDataSource(System::SharedPtr<System::IO::Stream> data);
    
private:

    System::SharedPtr<System::IO::Stream> _data;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


