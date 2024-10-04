#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IDProperty.h"
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
/// Specifies a unique ID for the job.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobid
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobID final : public Aspose::Page::XPS::XpsMetadata::IDProperty
{
    typedef JobID ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::IDProperty BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="jobID">The job ID.</param>
    ASPOSE_PAGE_SHARED_API JobID(System::String jobID);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


