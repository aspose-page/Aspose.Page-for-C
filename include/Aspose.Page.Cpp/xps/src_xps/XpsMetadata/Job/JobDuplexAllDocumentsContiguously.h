#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Duplex.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the duplex characteristics of the output. The duplex feature allows for printing on
/// both sides of the media. All Documents in the job are duplexed together contiguously.
/// <see cref="JobDuplexAllDocumentsContiguously"></see> and <see cref="DocumentDuplex"></see> are mutually exclusive.
/// It is up to the driver to determine constraint handling between these keywords.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobduplexalldocumentscontiguously
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobDuplexAllDocumentsContiguously final : public Aspose::Page::XPS::XpsMetadata::Duplex, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobDuplexAllDocumentsContiguously ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Duplex BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobDuplexAllDocumentsContiguously(const System::ArrayPtr<System::SharedPtr<Duplex::DuplexOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


