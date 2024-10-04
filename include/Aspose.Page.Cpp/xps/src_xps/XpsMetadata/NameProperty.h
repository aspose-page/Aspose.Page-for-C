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
class DocumentName;
class JobName;
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
/// The base class for <see cref="JobName"></see> and <see cref="DocumentName"></see> properties classes.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS NameProperty : public Aspose::Page::XPS::XpsMetadata::Property
{
    typedef NameProperty ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Property BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentName;
    friend class Aspose::Page::XPS::XpsMetadata::JobName;
    
protected:

    NameProperty(System::String name, System::String jobName);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NameProperty, CODEPORTING_ARGS(System::String name, System::String jobName));
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


