#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Option.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Feature.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsMetadata
{
class JobPrimaryBannerSheet;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the banner sheet to be output for the job. The banner sheet should be output on the default
/// <see cref="PageMediaSize"></see> and using the default <see cref="PageMediaType"></see>. The banner sheet should
/// be isolated from the remainder of the job. This means that any finishing or processing options (such as
/// <see cref="JobDuplexAllDocumentsContiguously"></see>, <see cref="JobStapleAllDocuments"></see>, or <see cref="JobBindAllDocuments"></see>)
/// should not include the banner sheet. The banner sheet should occur as the first sheet of the job.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobPrimaryBannerSheet final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobPrimaryBannerSheet ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents options of the <see cref="JobPrimaryBannerSheet"></see> feature.
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
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryBannerSheet::BannerSheetOption> None;
        /// <summary>
        /// Specifies the standard (device defined) banner sheet should be output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryBannerSheet::BannerSheetOption> Standard;
        /// <summary>
        /// Specifies a custom banner sheet should be output. If a <see cref="JobPrimaryBannerSheetSource"></see>
        /// <see cref="ParameterInit"></see> element is not specified,
        /// this Option should be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryBannerSheet::BannerSheetOption> Custom;
        
    private:
    
        BannerSheetOption(System::String name, bool isCustom = false);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BannerSheetOption, CODEPORTING_ARGS(System::String name, bool isCustom = false));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobPrimaryBannerSheet(const System::ArrayPtr<System::SharedPtr<JobPrimaryBannerSheet::BannerSheetOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


