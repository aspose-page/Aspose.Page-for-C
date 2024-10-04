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
class JobDigitalSignatureProcessing;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes configuring the digital signature processing for the entire job.
/// Applicable only to content that contains digital signatures.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobdigitalsignatureprocessing
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobDigitalSignatureProcessing final : public Aspose::Page::XPS::XpsMetadata::Feature, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobDigitalSignatureProcessing ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Feature BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the <see cref="JobDigitalSignatureProcessing"></see> feature options.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS JobDigitalSignatureProcessingOption final : public Aspose::Page::XPS::XpsMetadata::Option
    {
        typedef JobDigitalSignatureProcessingOption ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Option BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Print the job regardless of the validity of the digital signatures. Digital signatures MAY be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDigitalSignatureProcessing::JobDigitalSignatureProcessingOption> PrintInvalidSignatures;
        /// <summary>
        /// Print the job regardless of the validity of the digital signatures.
        /// In the event an invalid signature is encountered, an error page should print at the end of the job.
        /// Digital signatures MUST not be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDigitalSignatureProcessing::JobDigitalSignatureProcessingOption> PrintInvalidSignaturesWithErrorReport;
        /// <summary>
        /// Print the job only if all digital signatures are valid. Digital signatures MUST not be ignored.
        /// </summary>
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<JobDigitalSignatureProcessing::JobDigitalSignatureProcessingOption> PrintOnlyValidSignatures;
        
    private:
    
        JobDigitalSignatureProcessingOption(System::String name);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JobDigitalSignatureProcessingOption, CODEPORTING_ARGS(System::String name));
        
    };
    
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobDigitalSignatureProcessing(const System::ArrayPtr<System::SharedPtr<JobDigitalSignatureProcessing::JobDigitalSignatureProcessingOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


