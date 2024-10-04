#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Property.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsMetadata
{
class DocumentURI;
class JobURI;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The base class for <see cref="JobURI"></see> and <see cref="DocumentURI"></see> properties classes.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS URIProperty : public Aspose::Page::XPS::XpsMetadata::Property
{
    typedef URIProperty ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Property BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentURI;
    friend class Aspose::Page::XPS::XpsMetadata::JobURI;
    
protected:

    URIProperty(System::String name, System::String jobURI);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(URIProperty, CODEPORTING_ARGS(System::String name, System::String jobURI));
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


