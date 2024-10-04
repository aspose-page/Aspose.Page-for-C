#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Staple.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the stapling characteristics of the output. All documents in the job are stapled together.
/// The <see cref="JobStapleAllDocuments"></see> and <see cref="DocumentStaple"></see> keywords are mutually exclusive.
/// It is up to the driver to determine constraint handling between these keywords.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobstaplealldocuments
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobStapleAllDocuments final : public Aspose::Page::XPS::XpsMetadata::Staple, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobStapleAllDocuments ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Staple BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobStapleAllDocuments(const System::ArrayPtr<System::SharedPtr<Staple::StapleOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


