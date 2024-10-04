#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IntegerParameterInit.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Specifies the number of copies of a job.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobcopiesalldocuments
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobCopiesAllDocuments final : public Aspose::Page::XPS::XpsMetadata::IntegerParameterInit, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobCopiesAllDocuments ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::IntegerParameterInit BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="value">The parameter value.</param>
    ASPOSE_PAGE_SHARED_API JobCopiesAllDocuments(int32_t value);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


