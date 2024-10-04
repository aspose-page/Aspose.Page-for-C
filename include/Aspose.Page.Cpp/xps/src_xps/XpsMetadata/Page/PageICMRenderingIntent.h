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
class PageICMRenderingIntent;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the rendering intent as defined by the ICC v2 Specification.
/// This value should be ignored if an image or graphical element has an embedded profile
/// that specifies the Rendering intent.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pageicmrenderingintent
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageICMRenderingIntent final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageICMRenderingIntent ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="PageICMRenderingIntent"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageICMRenderingIntentOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageICMRenderingIntentOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Absolute Colorimetric Rendering intent.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageICMRenderingIntent::PageICMRenderingIntentOption> AbsoluteColorimetric;
        /// <summary>
        /// Relative Colorimetric Rendering intent.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageICMRenderingIntent::PageICMRenderingIntentOption> RelativeColorimetric;
        /// <summary>
        /// Photographs Rendering intent.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageICMRenderingIntent::PageICMRenderingIntentOption> Photographs;
        /// <summary>
        /// Business Graphics Rendering intent.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageICMRenderingIntent::PageICMRenderingIntentOption> BusinessGraphics;
        
    private:
    
        PageICMRenderingIntentOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageICMRenderingIntentOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageICMRenderingIntent(const System::ArrayPtr<System::SharedPtr<PageICMRenderingIntent::PageICMRenderingIntentOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


