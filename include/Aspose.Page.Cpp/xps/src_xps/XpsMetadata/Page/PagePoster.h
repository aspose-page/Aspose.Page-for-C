#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Page/IPagePrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Feature.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Document/IDocumentPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the output of a single page to multiple physical media sheets.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pageposter
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PagePoster final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PagePoster ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    ASPOSE_PAGE_SHARED_API PagePoster();
    
    /// <summary>
    /// Adds and option with a <code>PagesPerSheet</code> scored property value.
    /// Specifies the number of physical sheets per logical page.
    /// </summary>
    /// <param name="value">A <code>PagesPerSheet</code> scored property value.</param>
    /// <returns>This feature instance.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PagePoster> AddPagesPerSheetOption(int32_t value);
    
protected:

    virtual ASPOSE_PAGE_SHARED_API ~PagePoster();
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


