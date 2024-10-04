#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

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
class DocumentBannerSheet;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the banner sheet to be output for a particular document. The banner sheet should be output on the default
/// <see cref="PageMediaSize"></see> and using the default <see cref="PageMediaType"></see>. The banner sheet should
/// be also isolated from the remainder of the job. This means that any finishing or processing options (such as
/// <see cref="DocumentDuplex"></see>, <see cref="DocumentStaple"></see>, or <see cref="DocumentBinding"></see>)
/// should not include the banner sheet. The banner sheet may or may not be isolated from the remainder of the job.
/// This means that any job finishing or processing options, may include the document banner sheet.
/// The banner sheet should occur as the first sheet of the document.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/documentbannersheet
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DocumentBannerSheet final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem
{
    typedef DocumentBannerSheet ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents options of the <see cref="DocumentBannerSheet"></see> feature.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS BannerSheetOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef BannerSheetOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies no banner sheet should be output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentBannerSheet::BannerSheetOption> None;
        /// <summary>
        /// Specifies the standard (device defined) banner sheet should be output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentBannerSheet::BannerSheetOption> Standard;
        /// <summary>
        /// Specifies a custom banner sheet should be output. If a <see cref="DocumentBannerSheetSource"></see>
        /// <see cref="ParameterInit"></see> element is not specified, this Option should be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<DocumentBannerSheet::BannerSheetOption> Custom;
        
    private:
    
        BannerSheetOption(System::String name, bool isCustom = false);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BannerSheetOption, CODEPORTING_ARGS(System::String name, bool isCustom = false));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API DocumentBannerSheet(const System::ArrayPtr<System::SharedPtr<DocumentBannerSheet::BannerSheetOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


