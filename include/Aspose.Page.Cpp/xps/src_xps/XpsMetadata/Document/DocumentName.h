#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/NameProperty.h"
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
/// Specifies a descriptive name for the document.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/documentname
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DocumentName final : public Aspose::Page::XPS::XpsMetadata::NameProperty
{
    typedef DocumentName ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::NameProperty BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="documentName">The document name.</param>
    ASPOSE_PAGE_SHARED_API DocumentName(System::String documentName);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


