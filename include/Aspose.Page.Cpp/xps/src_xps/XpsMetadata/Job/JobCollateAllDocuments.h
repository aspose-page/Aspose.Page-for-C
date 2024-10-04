#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Collate.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the collating characteristics of the output. All documents in each individual job are collated.
/// <see cref="DocumentCollate"></see> and <see cref="JobCollateAllDocuments"></see> are mutually exclusive.
/// The behavior and implementation of whether both or only one of these keywords is implemented is left to the driver.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobcollatealldocuments
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobCollateAllDocuments final : public Aspose::Page::XPS::XpsMetadata::Collate, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobCollateAllDocuments ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Collate BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobCollateAllDocuments(const System::ArrayPtr<System::SharedPtr<Collate::CollateOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


