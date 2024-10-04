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
class JobOutputOptimization;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the job processing, intended to optimize the output for particular use scenarios as indicated by the option specified.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/joboutputoptimization
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobOutputOptimization final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobOutputOptimization ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="JobOutputOptimization"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS JobOutputOptimizationOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef JobOutputOptimizationOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// pecifies the job processing be optimized for archive output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobOutputOptimization::JobOutputOptimizationOption> ArchiveFormat;
        /// <summary>
        /// Specifies the job processing be optimized for portability (cross-device) of output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobOutputOptimization::JobOutputOptimizationOption> OptimizeForPortability;
        /// <summary>
        /// Specifies the job processing be optimized for quality of output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobOutputOptimization::JobOutputOptimizationOption> OptimizeForQuality;
        /// <summary>
        /// Specifies the job processing be optimized for speed of output.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobOutputOptimization::JobOutputOptimizationOption> OptimizeForSpeed;
        /// <summary>
        /// Specifies the job processing should not be optimized for a particular scenario.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobOutputOptimization::JobOutputOptimizationOption> None;
        
    private:
    
        JobOutputOptimizationOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JobOutputOptimizationOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobOutputOptimization(const System::ArrayPtr<System::SharedPtr<JobOutputOptimization::JobOutputOptimizationOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


