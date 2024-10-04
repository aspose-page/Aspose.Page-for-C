#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/URIProperty.h"
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
/// Specifies a uniform resource identifier (URI) for the document.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/joburi
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobURI final : public Aspose::Page::XPS::XpsMetadata::URIProperty
{
    typedef JobURI ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::URIProperty BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="jobURI">The job URI.</param>
    ASPOSE_PAGE_SHARED_API JobURI(System::String jobURI);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


