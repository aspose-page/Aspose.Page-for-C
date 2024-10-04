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
class JobPrimaryCoverFront;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the front (beginning) cover sheet. The entire job will have a single primary sheet.
/// The cover sheet should be printed on the <see cref="PageMediaSize"></see> and <see cref="PageMediaType"></see>
/// used for the first page of the job. The cover sheet should be integrated into processing options
/// (such as <see cref="JobDuplexAllDocumentsContiguously"></see>, <see cref="JobNUpAllDocumentsContiguously"></see>)
/// as indicated by the Option specified.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobprimarycoverfront
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobPrimaryCoverFront final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobPrimaryCoverFront ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="JobPrimaryCoverFront"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS CoverFrontOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef CoverFrontOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies no cover will be output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryCoverFront::CoverFrontOption> NoCover;
        /// <summary>
        /// Specifies the cover indicated by "CoverFrontSource" should be printed on the back side 
        /// of the cover sheet. If a <see cref="JobPrimaryCoverFrontSource"></see> <see cref="ParameterInit"></see>
        /// element is not specified, this Option should be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryCoverFront::CoverFrontOption> PrintBack;
        /// <summary>
        /// Specifies the cover indicated by "CoverFrontSource" may be printed on either side 
        /// of the cover sheet. If a <see cref="JobPrimaryCoverFrontSource"></see> <see cref="ParameterInit"></see>
        /// element is not specified, this Option should be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryCoverFront::CoverFrontOption> PrintBoth;
        /// <summary>
        /// Specifies the cover indicated by "CoverFrontSource" should be printed on the front side
        /// of the cover sheet. If a <see cref="JobPrimaryCoverFrontSource"></see> <see cref="ParameterInit"></see>
        /// element is not specified, this Option should be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryCoverFront::CoverFrontOption> PrintFront;
        /// <summary>
        /// Specifies a blank cover sheet should be printed.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryCoverFront::CoverFrontOption> BlankCover;
        
    private:
    
        CoverFrontOption(System::String name, bool addSource = true);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CoverFrontOption, CODEPORTING_ARGS(System::String name, bool addSource = true));
        
    };
    
    
protected:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    JobPrimaryCoverFront(const System::ArrayPtr<System::SharedPtr<JobPrimaryCoverFront::CoverFrontOption>>& options);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JobPrimaryCoverFront, CODEPORTING_ARGS(const System::ArrayPtr<System::SharedPtr<JobPrimaryCoverFront::CoverFrontOption>>& options));
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


