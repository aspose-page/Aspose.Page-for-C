#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

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
/// General data source interface that defines common members that concrete data sources should implement.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IDataSource : public virtual System::Object
{
    typedef IDataSource ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Type of data source (file or stream).
    /// </summary>
    virtual Aspose::Page::Plugins::DataType get_DataType() = 0;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


