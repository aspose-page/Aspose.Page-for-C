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
/// Base class for all integer parameter initializers.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IntegerParameterInit : public Aspose::Page::XPS::XpsMetadata::ParameterInit
{
    typedef IntegerParameterInit ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::ParameterInit BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// For integer- or decimal-valued parameters, defines the smallest allowed value.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API int32_t get_MinValue();
    /// <summary>
    /// For integer- or decimal-valued parameters, defines the largest allowed value.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API int32_t get_MaxValue();
    /// <summary>
    /// For integer- or decimal-valued parameters, the value of the parameter should be a multiple of this number.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API int32_t get_Multiple();
    
    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="name">The parameter name.</param>
    /// <param name="value">The parameter value.</param>
    ASPOSE_PAGE_SHARED_API IntegerParameterInit(System::String name, int32_t value);
    
private:

    void Validate(int32_t value);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


