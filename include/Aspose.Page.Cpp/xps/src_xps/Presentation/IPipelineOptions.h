#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace Presentation {

/// <summary>
/// Defines conversion options related to pipeline configuration.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IPipelineOptions : public virtual System::Object
{
    typedef IPipelineOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the size of a portion of pages to pass from node to node.
    /// </summary>
    virtual int32_t get_BatchSize() = 0;
    /// <summary>
    /// Specifies the size of a portion of pages to pass from node to node.
    /// </summary>
    virtual void set_BatchSize(int32_t value) = 0;
    
};

} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


