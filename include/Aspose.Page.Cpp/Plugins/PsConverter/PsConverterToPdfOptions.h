#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/Plugins/PsConverter/PsConverterOptions.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Page {

namespace Plugins {

/// <summary>
/// Represents PS/EPS to PDF converter options for <see cref="PsConverter"></see> plugin.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PsConverterToPdfOptions final : public Aspose::Page::Plugins::PsConverterOptions
{
    typedef PsConverterToPdfOptions ThisType;
    typedef Aspose::Page::Plugins::PsConverterOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns operation name.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_OperationName() override;
    
    /// <summary>
    /// Initializes new instance of the <see cref="PsConverterToPdfOptions"></see> object with default options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API PsConverterToPdfOptions();
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


