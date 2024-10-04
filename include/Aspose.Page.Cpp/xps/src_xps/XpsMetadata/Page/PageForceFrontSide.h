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
class PageForceFrontSide;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Forces the output to appear on the front of a media sheet. Relevant to media sheets with different
/// surfaces on each side. In cases where this feature interferes with processing options (such as
/// <see cref="DocumentDuplex"></see>), <code>PageForceFrontSide</code> takes precedence for the specific
/// page to which the feature applies.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageForceFrontSide final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageForceFrontSide ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="PageForceFrontSide"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageForceFrontSideOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageForceFrontSideOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies output is restricted to the front side of the sheet.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageForceFrontSide::PageForceFrontSideOption> ForceFrontSide;
        /// <summary>
        /// Specifies no output restrictions.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageForceFrontSide::PageForceFrontSideOption> None;
        
    private:
    
        PageForceFrontSideOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageForceFrontSideOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageForceFrontSide(const System::ArrayPtr<System::SharedPtr<PageForceFrontSide::PageForceFrontSideOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


