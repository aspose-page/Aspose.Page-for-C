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
class JobAccountingSheet;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the accounting sheet to be output for the job. The accounting sheet should be output on the default
/// <see cref="PageMediaSize"></see> and using the default <see cref="PageMediaType"></see>. The accounting sheet should to
/// be isolated from the remainder of the job. This means that any finishing or processing options (such as 
/// <code>JobDuplex</code>, <code>JobStaple</code>, or <code>JobBinding</code>) should not include the accounting sheet.
/// The accounting sheet may occur as the first or last page of the job at the implementer's discretion.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobaccountingsheet
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobAccountingSheet final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobAccountingSheet ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="JobAccountingSheet"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS JobAccountingSheetOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef JobAccountingSheetOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        ///  Specifies no accounting sheet will be output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobAccountingSheet::JobAccountingSheetOption> None;
        /// <summary>
        /// Specifies the standard (device defined) accounting sheet should be output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobAccountingSheet::JobAccountingSheetOption> Standard;
        
    private:
    
        JobAccountingSheetOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JobAccountingSheetOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobAccountingSheet(const System::ArrayPtr<System::SharedPtr<JobAccountingSheet::JobAccountingSheetOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


