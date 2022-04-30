#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Page {

/// <summary>
/// This interface is used for dervices that renders document to a stream.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IStreamable : public virtual System::Object
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


