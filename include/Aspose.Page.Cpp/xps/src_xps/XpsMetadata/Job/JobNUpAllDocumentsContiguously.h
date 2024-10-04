#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/NUp.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the output of multiple logical pages to a single physical sheet. All documents in the job
/// are compiled together contiguously. <see cref="JobNUpAllDocumentsContiguously"></see> and <see cref="DocumentNUp"></see>
/// are mutually exclusive. It is up to the driver to determine constraint handling between these keywords.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobnupalldocumentscontiguously
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobNUpAllDocumentsContiguously final : public Aspose::Page::XPS::XpsMetadata::NUp, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobNUpAllDocumentsContiguously ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::NUp BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="items">An array of items specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobNUpAllDocumentsContiguously(const System::ArrayPtr<System::SharedPtr<NUp::INUpItem>>& items);
    
    /// <summary>
    /// Adds and option with a <code>PagesPerSheet</code> scored property value.
    /// Specifies the number of logical pages per physical sheet.
    /// </summary>
    /// <param name="value">A <code>PagesPerSheet</code> scored property value.
    /// Supported set can be any set of integers E.g. {1,2,4,6,8,9,16}.</param>
    /// <returns>This feature instance.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<JobNUpAllDocumentsContiguously> AddPagesPerSheetOption(int32_t value);
    
protected:

    virtual ASPOSE_PAGE_SHARED_API ~JobNUpAllDocumentsContiguously();
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


