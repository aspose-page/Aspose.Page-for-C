#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace EPS {

/// <summary>
/// This class defines a set of constants for saving fonts.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS FontConstants : public System::Object
{
    typedef FontConstants ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Key of property indicating whether to embed fonts in saved document
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& EMBED_FONTS();
    /// <summary>
    /// Key of property indicating a type of font  to use when saving document
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& EMBED_FONTS_AS();
    /// <summary>
    /// "Type1" font type value for "EMBED_FONTS_AS" key
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& EMBED_FONTS_TYPE1();
    /// <summary>
    /// "Type3" font type value for "EMBED_FONTS_AS" key
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& EMBED_FONTS_TYPE3();
    /// <summary>
    /// "TrueType" font type value for "EMBED_FONTS_AS" key
    /// </summary>
    static ASPOSE_PAGE_SHARED_API const System::String& EMBED_FONTS_TRUETYPE();
    
    /// <summary>
    /// <returns>available "EMBED_FONTS_AS" values.</returns>
    /// </summary>
    static ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::String> get_EmbedFontsAsList();
    
private:

    FontConstants();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontConstants, CODEPORTING_ARGS());
    
};

} // namespace EPS
} // namespace Page
} // namespace Aspose


