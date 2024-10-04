#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

/// <summary>
/// This interface give access to main parameters of glyphs.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IGlyph : public virtual System::Object
{
    typedef IGlyph ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns advanced width of the glyph.
    /// </summary>
    virtual float get_AdvanceWidth() = 0;
    /// <summary>
    /// Returns char code of the glyph.
    /// </summary>
    virtual char16_t get_CharCode() = 0;
    /// <summary>
    /// Returns left side bearing of the glyph.
    /// </summary>
    virtual float get_LeftSideBearing() = 0;
    
};

} // namespace Page
} // namespace Aspose


