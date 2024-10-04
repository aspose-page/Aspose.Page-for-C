#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPrintTicketElementChild.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// The base interface for classes that may be <see cref="PrintTicket"></see> root element items.
/// It is also the base interface for interfaces that define a scoping prefix.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IPrintTicketItem : public virtual Aspose::Page::XPS::XpsMetadata::IPrintTicketElementChild
{
    typedef IPrintTicketItem ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::IPrintTicketElementChild BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


