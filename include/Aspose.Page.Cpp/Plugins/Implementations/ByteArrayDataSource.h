#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

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

namespace Aspose {

namespace Page {

namespace Plugins {

/// <summary>
/// Represents byte array data source for save operations of a plugin.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ByteArrayDataSource final : public Aspose::Page::Plugins::IDataSource
{
    typedef ByteArrayDataSource ThisType;
    typedef Aspose::Page::Plugins::IDataSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Type of data source (byte array).
    /// </summary>
    ASPOSE_PAGE_SHARED_API Aspose::Page::Plugins::DataType get_DataType() override;
    
    /// <summary>
    /// Initializes new byte array data source.
    /// </summary>
    /// <param name="data">A byte array.</param>
    ASPOSE_PAGE_SHARED_API ByteArrayDataSource();
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


