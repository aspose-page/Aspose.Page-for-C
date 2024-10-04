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
class PagePhotoPrintingIntent;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Indicates a high-level intent to the driver for population of photo printing settings.
/// These settings deal with the expected output quality a user may specify when printing photos.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/pagephotoprintingintent
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PagePhotoPrintingIntent final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem
{
    typedef PagePhotoPrintingIntent ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    typedef Aspose::Page::XPS::XpsMetadata::IPagePrintTicketItem BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Defines <see cref="PagePhotoPrintingIntent"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS PagePhotoPrintingIntentOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef PagePhotoPrintingIntentOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// No Photoprinting Intent (Allows the application to specify no intent resolution.
        /// PrintTicket settings should not be altered)
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PagePhotoPrintingIntent::PagePhotoPrintingIntentOption> None;
        /// <summary>
        /// Best Quality Photoprinting (Provided mostly for marketing reasons; utilizes the highest capabilities of the device)
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PagePhotoPrintingIntent::PagePhotoPrintingIntentOption> PhotoBest;
        /// <summary>
        /// Draft Quality Photoprinting (Quick, low ink volume print for proofing purposes)
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PagePhotoPrintingIntent::PagePhotoPrintingIntentOption> PhotoDraft;
        /// <summary>
        /// Standard Quality Photoprinting (OEM suggested settings for standard photo-printing)
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<PagePhotoPrintingIntent::PagePhotoPrintingIntentOption> PhotoStandard;
        
    private:
    
        PagePhotoPrintingIntentOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PagePhotoPrintingIntentOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array or feature option.</param>
    ASPOSE_PAGE_SHARED_API PagePhotoPrintingIntent(const System::ArrayPtr<System::SharedPtr<PagePhotoPrintingIntent::PagePhotoPrintingIntentOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


