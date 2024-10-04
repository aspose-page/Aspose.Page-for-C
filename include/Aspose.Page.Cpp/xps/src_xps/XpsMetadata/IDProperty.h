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
class DocumentID;
class JobID;
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
/// The base class for <see cref="JobID"></see> and <see cref="DocumentID"></see> properties classes.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IDProperty : public Aspose::Page::XPS::XpsMetadata::Property
{
    typedef IDProperty ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Property BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::DocumentID;
    friend class Aspose::Page::XPS::XpsMetadata::JobID;
    
protected:

    IDProperty(System::String name, System::String jobID);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(IDProperty, CODEPORTING_ARGS(System::String name, System::String jobID));
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


