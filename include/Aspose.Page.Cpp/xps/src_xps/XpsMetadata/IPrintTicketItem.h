#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Basic interface for classes that can be a print ticket item.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IPrintTicketItem : public virtual System::Object
{
    typedef IPrintTicketItem ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns item name.
    /// </summary>
    virtual System::String get_Name() = 0;
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


