#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

/// <summary>
/// This interface is used for dervices that renders document to a stream.
/// </summary>
class IStreamable : public virtual System::Object
{
    typedef IStreamable ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or specifies an output stream.
    /// </summary>
    virtual System::SharedPtr<System::IO::Stream> get_OutputStream() = 0;
    /// <summary>
    /// Gets or specifies an output stream.
    /// </summary>
    virtual void set_OutputStream(System::SharedPtr<System::IO::Stream> value) = 0;
    
};

} // namespace Page
} // namespace Aspose


