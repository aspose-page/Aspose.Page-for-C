﻿#pragma once
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
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/documenturi
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DocumentURI final : public Aspose::Page::XPS::XpsMetadata::URIProperty
{
    typedef DocumentURI ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::URIProperty BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="documentURI">The document URI.</param>
    ASPOSE_PAGE_SHARED_API DocumentURI(System::String documentURI);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


