#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Property.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Page/IPagePrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Document/IDocumentPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the imaged canvas for layout and rendering. This will be reported based on
/// <see cref="PageMediaSize"></see> and <see cref="PageOrientation"></see>.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pageimageablesize
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageImageableSize final : public Aspose::Page::XPS::XpsMetadata::Property, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageImageableSize ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Property BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="width">An <code>ImageableSizeWidth</code> property value.</param>
    /// <param name="height">An <code>ImageableSizeHeight</code> property value.</param>
    ASPOSE_PAGE_SHARED_API PageImageableSize(int32_t width, int32_t height);
    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="width">An <code>ImageableSizeWidth</code> property value.</param>
    /// <param name="height">An <code>ImageableSizeHeight</code> property value.</param>
    /// <param name="originWidth">An <code>ImageableArea</code> sub-property's <code>OriginWidth</code> property value.</param>
    /// <param name="originHeight">An <code>ImageableArea</code> sub-property's <code>OriginHeight</code> property value.</param>
    /// <param name="extentWidth">An <code>ImageableArea</code> sub-property's <code>ExtentWidth</code> property value.</param>
    /// <param name="extentHeight">An <code>ImageableArea</code> sub-property's <code>ExtentHeight</code> property value.</param>
    ASPOSE_PAGE_SHARED_API PageImageableSize(int32_t width, int32_t height, int32_t originWidth, int32_t originHeight, int32_t extentWidth, int32_t extentHeight);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


