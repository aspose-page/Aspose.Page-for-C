#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/Plugins/XpsConverter/XpsConverterOptions.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace Plugins {

/// <summary>
/// Represents XPS to PDF converter options for <see cref="XpsConverter"></see> plugin.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsConverterToPdfOptions final : public Aspose::Page::Plugins::XpsConverterOptions
{
    typedef XpsConverterToPdfOptions ThisType;
    typedef Aspose::Page::Plugins::XpsConverterOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns operation name.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_OperationName() override;
    /// <summary>
    /// Gets/sets the array of numbers of pages in XPS document to convert. If not set all pages will be converted.
    /// </summary>
    ASPOSE_PAGE_SHARED_API const System::ArrayPtr<int32_t>& get_PageNumbers() const;
    /// <summary>
    /// Gets/sets the array of numbers of pages in XPS document to convert. If not set all pages will be converted.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_PageNumbers(System::ArrayPtr<int32_t> value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="XpsConverterToPdfOptions"></see> object with default options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsConverterToPdfOptions();
    
private:

    System::ArrayPtr<int32_t> pr_PageNumbers;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


