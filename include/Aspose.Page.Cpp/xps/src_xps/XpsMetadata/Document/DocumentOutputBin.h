#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/OutputBin.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Document/IDocumentPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the full list of supported bins for the device. Allows specification of output
/// bin on a per document basis. The <see cref="JobOutputBin"></see>, <see cref="DocumentOutputBin"></see> and
/// <see cref="PageOutputBin"></see> keywords are mutually exclusive only one should be specified in
/// a PrintTicket or Print Capabilities document.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/documentoutputbin
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DocumentOutputBin final : public Aspose::Page::XPS::XpsMetadata::OutputBin, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem
{
    typedef DocumentOutputBin ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::OutputBin BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="items">An array of items specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API DocumentOutputBin(const System::ArrayPtr<System::SharedPtr<OutputBin::IOutputBinItem>>& items);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


