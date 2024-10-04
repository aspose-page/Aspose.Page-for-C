#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Page/IPagePrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Feature.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Document/IDocumentPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsMetadata
{
class PageOrientation;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the orientation of the physical media sheet.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pageorientation
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageOrientation final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageOrientation ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="PageOrientation"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageOrientationOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageOrientationOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Content is rotated on the page 90 degrees CCW relative to standard (portrait) orientation.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOrientation::PageOrientationOption> Landscape;
        /// <summary>
        /// Standard Orientation.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOrientation::PageOrientationOption> Portrait;
        /// <summary>
        /// Content is rotated on the page 270 degrees CCW relative to standard (portrait) orientation.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOrientation::PageOrientationOption> ReverseLandscape;
        /// <summary>
        /// Content is rotated on the page 180 degrees relative to standard (portrait) orientation.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOrientation::PageOrientationOption> ReversePortrait;
        
    private:
    
        PageOrientationOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageOrientationOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageOrientation(const System::ArrayPtr<System::SharedPtr<PageOrientation::PageOrientationOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


