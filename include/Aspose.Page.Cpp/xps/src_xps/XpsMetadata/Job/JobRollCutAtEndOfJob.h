#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/RollCut.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the cutting method for roll paper. The roll should be cut at the end of the job.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/jobrollcutatendofjob
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobRollCutAtEndOfJob final : public Aspose::Page::XPS::XpsMetadata::RollCut, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobRollCutAtEndOfJob ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::RollCut BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobRollCutAtEndOfJob(const System::ArrayPtr<System::SharedPtr<RollCut::RollCutOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


