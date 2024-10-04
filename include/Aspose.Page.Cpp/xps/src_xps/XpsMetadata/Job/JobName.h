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
/// Specifies a descriptive name for the job.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobname
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobName final : public Aspose::Page::XPS::XpsMetadata::NameProperty
{
    typedef JobName ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::NameProperty BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="jobName">The job name.</param>
    ASPOSE_PAGE_SHARED_API JobName(System::String jobName);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


