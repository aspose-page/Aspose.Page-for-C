#pragma once

#include <system/string.h>
#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsMetadata {

/// <summary>
/// Basic interface for classes that can be a print ticket item.
/// </summary>
class IPrintTicketItem : public virtual System::Object
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
} // namespace Xps
} // namespace Page
} // namespace Aspose


