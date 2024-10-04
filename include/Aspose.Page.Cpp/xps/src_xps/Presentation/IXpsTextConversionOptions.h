#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace Presentation {

/// <summary>
/// Defines options for conversion of XPS to other formats.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IXpsTextConversionOptions : public virtual System::Object
{
    typedef IXpsTextConversionOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// In XPS, some text elements may contain references to alternate glyph forms
    /// that do not correspond to any character code in the font.
    /// If this flag is set to true, the text from such XPS elements is converted to graphic shapes.
    /// Then the text itself appears transparent on top. This leaves the text of such elements selectable.
    /// But the side effect is that the output file may be much larger than the original.
    /// If this flag is set to false, the characters that should be displayed as alternate forms
    /// are replaced with some other characters that become mapped to the alternate glyph forms.
    /// Therefore the text, although still selectable, will be modified and likely become unreadable.
    /// </summary>
    virtual bool get_PreserveText() = 0;
    /// <summary>
    /// In XPS, some text elements may contain references to alternate glyph forms
    /// that do not correspond to any character code in the font.
    /// If this flag is set to true, the text from such XPS elements is converted to graphic shapes.
    /// Then the text itself appears transparent on top. This leaves the text of such elements selectable.
    /// But the side effect is that the output file may be much larger than the original.
    /// If this flag is set to false, the characters that should be displayed as alternate forms
    /// are replaced with some other characters that become mapped to the alternate glyph forms.
    /// Therefore the text, although still selectable, will be modified and likely become unreadable.
    /// </summary>
    virtual void set_PreserveText(bool value) = 0;
    
};

} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


