#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/StringParameterInit.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Document/IDocumentPrintTicketItem.h"
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
/// Describes the output range of the document in pages. The parameter value must conform to the following structure:
/// - PageRangeText: "PageRange" or "PageRange,PageRange"
/// - PageRange: "PageNumber" or "PageNumber-PageNumber"
/// - PageNumber: 1 to N, where N is the number of pages in the document.If PageNumber > N, then PageNumber = N.
/// Whitespace in the string should be ignored.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/documentpageranges
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DocumentPageRanges final : public Aspose::Page::XPS::XpsMetadata::StringParameterInit, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem
{
    typedef DocumentPageRanges ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::StringParameterInit BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="value">The parameter value.</param>
    ASPOSE_PAGE_SHARED_API DocumentPageRanges(System::String value);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


