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
class PageMediaColor;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the Media Color options and the characteristics of each option.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pagemediacolor
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageMediaColor final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageMediaColor ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="PageMediaColor"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageMediaColorOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageMediaColorOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Black.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Black;
        /// <summary>
        /// Blue.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Blue;
        /// <summary>
        /// Brown.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Brown;
        /// <summary>
        /// Gold.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Gold;
        /// <summary>
        /// Golden rod.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> GoldenRod;
        /// <summary>
        /// Gray.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Gray;
        /// <summary>
        /// Green.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Green;
        /// <summary>
        /// Ivory.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Ivory;
        /// <summary>
        ///  No color.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> NoColor;
        /// <summary>
        /// Orange.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Orange;
        /// <summary>
        /// Pink.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Pink;
        /// <summary>
        /// Red.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Red;
        /// <summary>
        /// Silver.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Silver;
        /// <summary>
        /// Turquoise.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Turquoise;
        /// <summary>
        /// Violet.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Violet;
        /// <summary>
        /// White.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> White;
        /// <summary>
        /// Yellow.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Yellow;
        
        /// <summary>
        /// Specifies a custom page color.
        /// </summary>
        /// <param name="mediaColorsRGB">The page color.</param>
        /// <returns>The option element for a custom color.</returns>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageMediaColor::PageMediaColorOption> Custom(System::String mediaColorsRGB);
        
    private:
    
        PageMediaColorOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageMediaColorOption, CODEPORTING_ARGS(System::String name));
        
        PageMediaColorOption(System::String name, System::String value);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageMediaColorOption, CODEPORTING_ARGS(System::String name, System::String value));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API PageMediaColor(const System::ArrayPtr<System::SharedPtr<PageMediaColor::PageMediaColorOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


