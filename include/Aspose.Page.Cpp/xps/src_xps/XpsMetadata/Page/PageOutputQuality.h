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
class PageOutputQuality;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the negative setting of the output.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pageoutputquality
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PageOutputQuality final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PageOutputQuality ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Defines <see cref="PageOutputQuality"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PageOutputQualityOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PageOutputQualityOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies the intent for automatic output (allow the client to automatically choose the best settings).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOutputQuality::PageOutputQualityOption> Automatic;
        /// <summary>
        /// Specifies the intent for draft output (balanced for draft quality text and graphics).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOutputQuality::PageOutputQualityOption> Draft;
        /// <summary>
        /// Specifies the intent for fax output (balanced for standard fax quality).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOutputQuality::PageOutputQualityOption> Fax;
        /// <summary>
        /// Specifies the intent for high quality output (balanced for high quality text and graphics).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOutputQuality::PageOutputQualityOption> High;
        /// <summary>
        /// Specifies the intent for normal output (balanced for good quality text and graphics).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOutputQuality::PageOutputQualityOption> Normal;
        /// <summary>
        /// Specifies the intent for photographic output (images should have the highest quality).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOutputQuality::PageOutputQualityOption> Photographic;
        /// <summary>
        /// Specifies the intent for text only output (graphics may output poorly or not at all).
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PageOutputQuality::PageOutputQualityOption> Text;
        
    private:
    
        PageOutputQualityOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageOutputQualityOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array or feature option.</param>
    ASPOSE_PAGE_SHARED_API PageOutputQuality(const System::ArrayPtr<System::SharedPtr<PageOutputQuality::PageOutputQualityOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


