#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/OutputBin.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the installed output bin in a device or the full list of supported bins for a device.
/// The <see cref="JobOutputBin"></see>, <see cref="DocumentOutputBin"></see> and <see cref="PageOutputBin"></see> keywords
/// are mutually exclusive only one should be specified in a PrintTicket or Print Capabilities document.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/joboutputbin
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS JobOutputBin final : public Aspose::Page::XPS::XpsMetadata::OutputBin, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem
{
    typedef JobOutputBin ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::OutputBin BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="items">An array of items specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API JobOutputBin(const System::ArrayPtr<System::SharedPtr<OutputBin::IOutputBinItem>>& items);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


