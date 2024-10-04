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
class JobPageOrder;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Defines the order of physical pages for the output.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobpageorder
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobPageOrder final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobPageOrder ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="JobPageOrder"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS JobPageOrderOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef JobPageOrderOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Specifies front to back page order.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPageOrder::JobPageOrderOption> Standard;
        /// <summary>
        /// Specifies back to front page order.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobPageOrder::JobPageOrderOption> Reverse;
        
    private:
    
        JobPageOrderOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JobPageOrderOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobPageOrder(const System::ArrayPtr<System::SharedPtr<JobPageOrder::JobPageOrderOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


