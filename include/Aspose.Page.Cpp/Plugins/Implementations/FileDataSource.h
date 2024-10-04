#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

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
/// Represents file data source for load and save operations of a plugin.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS FileDataSource final : public Aspose::Page::Plugins::IDataSource
{
    typedef FileDataSource ThisType;
    typedef Aspose::Page::Plugins::IDataSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Type of data source (file).
    /// </summary>
    ASPOSE_PAGE_SHARED_API Aspose::Page::Plugins::DataType get_DataType() override;
    /// <summary>
    /// Gets the path to the file of the current data source.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_Path() const;
    
    /// <summary>
    /// Initializes new file data source with the specified path.
    /// </summary>
    /// <param name="path">A string representing the path to the source file.</param>
    ASPOSE_PAGE_SHARED_API FileDataSource(System::String path);
    
private:

    System::String _path;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


