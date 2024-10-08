﻿#pragma once
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
/// Specifies the source for a custom back-cover primary sheet for the job.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobprimarycoverbacksource
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobPrimaryCoverBackSource final : public Aspose::Page::XPS::XpsMetadata::StringParameterInit, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobPrimaryCoverBackSource ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::StringParameterInit BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="value">The parameter value.</param>
    ASPOSE_PAGE_SHARED_API JobPrimaryCoverBackSource(System::String value);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


