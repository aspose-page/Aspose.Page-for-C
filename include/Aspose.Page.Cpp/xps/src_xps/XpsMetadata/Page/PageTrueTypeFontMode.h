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
class PageTrueTypeFontMode;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the method of TrueType font handling to be used.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pagetruetypefontmode
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageTrueTypeFontMode final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageTrueTypeFontMode ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="PageTrueTypeFontMode"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageTrueTypeFontModeOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageTrueTypeFontModeOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Automatic handling of TrueType font.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageTrueTypeFontMode::PageTrueTypeFontModeOption> Automatic;
        /// <summary>
        /// TrueType font is downloaded as outline font.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageTrueTypeFontMode::PageTrueTypeFontModeOption> DownloadAsOutlineFont;
        /// <summary>
        /// TrueType font is downloaded as raster font.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageTrueTypeFontMode::PageTrueTypeFontModeOption> DownloadAsRasterFont;
        /// <summary>
        /// TrueType font is downloaded as native true type font.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageTrueTypeFontMode::PageTrueTypeFontModeOption> DownloadAsNativeTrueTypeFont;
        /// <summary>
        /// TrueType font is rendered as a bitmap.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageTrueTypeFontMode::PageTrueTypeFontModeOption> RenderAsBitmap;
        
    private:
    
        PageTrueTypeFontModeOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageTrueTypeFontModeOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageTrueTypeFontMode(const System::ArrayPtr<System::SharedPtr<PageTrueTypeFontMode::PageTrueTypeFontModeOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


