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
class IPluginOptions;
class ResultContainer;
} // namespace Plugins
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace Plugins {

/// <summary>
/// General plugin interface that defines common methods that concrete plugin should implement.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IPlugin : public virtual System::Object
{
    typedef IPlugin ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Charges a plugin to process with defined options
    /// </summary>
    /// <param name="options">An options object containing instructions for the plugin</param>
    /// <returns>An ResultContainer object containing the result of the processing</returns>
    virtual System::SharedPtr<ResultContainer> Process(System::SharedPtr<IPluginOptions> options) = 0;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


