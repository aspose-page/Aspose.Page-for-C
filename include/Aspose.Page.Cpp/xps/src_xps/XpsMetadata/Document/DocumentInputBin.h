#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/InputBin.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Document/IDocumentPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the installed input bin in a device or the full list of supported bins for a device.
/// The <see cref="JobInputBin"></see>, <see cref="DocumentInputBin"></see>, and <see cref="PageInputBin"></see>
/// keywords are mutually exclusive. Both should not be specified simultaneously in a PrintTicket
/// or Print Capabilities document.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/documentinputbin
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DocumentInputBin final : public Aspose::Page::XPS::XpsMetadata::InputBin, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem
{
    typedef DocumentInputBin ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::InputBin BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="items">An array of items specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API DocumentInputBin(const System::ArrayPtr<System::SharedPtr<InputBin::IInputBinItem>>& items);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


