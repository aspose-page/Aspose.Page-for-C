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
class JobPrimaryCoverBack;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the back (ending) cover sheet. Each job will have a separate primary sheet.
/// The cover sheet should be printed on the <see cref="PageMediaSize"></see> and <see cref="PageMediaType"></see>
/// used for the final page of the job. The cover sheet should be integrated into processing options
/// (such as <see cref="JobDuplexAllDocumentsContiguously"></see>, <see cref="JobNUpAllDocumentsContiguously"></see>)
/// as indicated by the Option specified.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobprimarycoverback
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobPrimaryCoverBack final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobPrimaryCoverBack ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="JobPrimaryCoverBack"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS CoverBackOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef CoverBackOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies no cover will be output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryCoverBack::CoverBackOption> NoCover;
        /// <summary>
        /// Specifies the cover indicated by "CoverBackSource" should be printed on the back side
        /// of the cover sheet. If a <see cref="JobPrimaryCoverBackSource"></see> <see cref="ParameterInit"></see>
        /// element is not specified, this Option should be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryCoverBack::CoverBackOption> PrintBack;
        /// <summary>
        /// Specifies the cover indicated by "CoverBackSource" may be printed on either sides
        /// of the cover sheet. If a <see cref="JobPrimaryCoverBackSource"></see> <see cref="ParameterInit"></see>
        /// element is not specified, this Option should be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryCoverBack::CoverBackOption> PrintBoth;
        /// <summary>
        /// Specifies the cover indicated by "CoverBackSource" should be printed on the front side
        /// of the cover sheet. If a <see cref="JobPrimaryCoverBackSource"></see> <see cref="ParameterInit"></see>
        /// element is not specified, this Option should be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryCoverBack::CoverBackOption> PrintFront;
        /// <summary>
        /// Specifies a blank cover sheet should be printed.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPrimaryCoverBack::CoverBackOption> BlankCover;
        
    private:
    
        CoverBackOption(System::String name, bool addSource = true);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CoverBackOption, CODEPORTING_ARGS(System::String name, bool addSource = true));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobPrimaryCoverBack(const System::ArrayPtr<System::SharedPtr<JobPrimaryCoverBack::CoverBackOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


