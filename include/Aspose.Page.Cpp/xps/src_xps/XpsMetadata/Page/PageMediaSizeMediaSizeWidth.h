﻿#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Page/IPagePrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IntegerParameterInit.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Document/IDocumentPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Specifies the dimension <code>MediaSizeHeight</code> direction for the Custom <code>MediaSize</code> option.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pagemediasizemediasizewidth
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageMediaSizeMediaSizeWidth final : public Aspose::Page::XPS::XpsMetadata::IntegerParameterInit, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageMediaSizeMediaSizeWidth ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::IntegerParameterInit BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="value">The parameter value.</param>
    ASPOSE_PAGE_SHARED_API PageMediaSizeMediaSizeWidth(int32_t value);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


