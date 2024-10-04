#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/StringParameterInit.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
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
/// Specifies a comment associated with the job. Example: "Please deliver to room 1234 when completed".
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobcomment
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobComment final : public Aspose::Page::XPS::XpsMetadata::StringParameterInit, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobComment ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::StringParameterInit BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="value">The parameter value.</param>
    ASPOSE_PAGE_SHARED_API JobComment(System::String value);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


