#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Page.EPS.Postscript;

#include <system/object.h>
#include <system/enum_helpers.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace Font
{
class DrFont;
} // namespace Font
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Drawing
{
enum class FontStyle;
} // namespace Drawing
class String;
} // namespace System

namespace Aspose {

namespace Page {

/// <summary>
/// Use this class to obtain font encapsulation in a form that is accepted by <see cref="Device"></see>.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ExternalFontCache : public System::Object
{
    typedef ExternalFontCache ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Fetches <see cref="DrFont"></see> by font family name, size and style.
    /// </summary>
    /// <param name="familyName">Font family name. </param>
    /// <param name="sizePoints">Font size in points (one point is 1/72 of inch). </param>
    /// <param name="style">Font style. </param>
    /// <returns>Returns DrFont</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<Font::DrFont> FetchDrFont(System::String familyName, float sizePoints, System::Drawing::FontStyle style);
    /// <summary>
    /// Fetches <see cref="DrFont"></see> by font family name, size, style and font capitals.
    /// </summary>
    /// <param name="familyName">Font family name. </param>
    /// <param name="sizePoints">Font size in points (one point is 1/72 of inch). </param>
    /// <param name="style">Font style. </param>
    /// <param name="fontCapitals">Font capitals. </param>
    /// <returns>Returns DrFont</returns>
    /*public DrFont FetchDrFont(string familyName, float sizePoints, FontStyle style, FontCapitals fontCapitals)
            {
                return Aspose.TrueType.ExternalFontCache.Instance.FetchDrFont(familyName, sizePoints, style, fontCapitals);
            }*/
    /// <summary>
    /// Fetches <see cref="DrFont"></see> by font family name, size, style and alternative font family name.
    /// </summary>
    /// <param name="familyName">Font family name. </param>
    /// <param name="sizePoints">Font size in points (one point is 1/72 of inch). </param>
    /// <param name="style">Font style. </param>
    /// <param name="altFamilyName">Alternative font family name. </param>
    /// <returns>Returns DrFont</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Font::DrFont> FetchDrFont(System::String familyName, float sizePoints, System::Drawing::FontStyle style, System::String altFamilyName);
    
};

} // namespace Page
} // namespace Aspose


