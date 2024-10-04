#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/ParameterInit.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Base class for all string parameter initializers.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS StringParameterInit : public Aspose::Page::XPS::XpsMetadata::ParameterInit
{
    typedef StringParameterInit ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::ParameterInit BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// For string values, defines the shortest allowed string.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API int32_t get_MinLength();
    /// <summary>
    /// For string values, defines the longest allowed string.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API int32_t get_MaxLength();
    
    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="name">The parameter name.</param>
    /// <param name="value">The parameter value.</param>
    ASPOSE_PAGE_SHARED_API StringParameterInit(System::String name, System::String value);
    
private:

    void Validate(System::String value);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


