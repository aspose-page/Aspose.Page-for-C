#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Job/IJobPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/HolePunch.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/Document/IDocumentPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Describes the hole punching characteristics of the output. Each document is punched separately.
/// The <see cref="JobHolePunch"></see> and <see cref="DocumentHolePunch"></see> keywords are mutually exclusive.
/// Both should not be specified simultaneously in a PrintTicket or Print Capabilities document.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/documentholepunch
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DocumentHolePunch final : public Aspose::Page::XPS::XpsMetadata::HolePunch, public Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem, public Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem
{
    typedef DocumentHolePunch ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::HolePunch BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IJobPrintTicketItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IDocumentPrintTicketItem BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="options">An array of options specific for the feature.</param>
    ASPOSE_PAGE_SHARED_API DocumentHolePunch(const System::ArrayPtr<System::SharedPtr<HolePunch::HolePunchOption>>& options);
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


