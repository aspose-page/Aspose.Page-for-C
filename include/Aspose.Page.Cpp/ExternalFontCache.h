#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.
//using System.Drawing;
//using Aspose.Page.EPS.Postscript;

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using Aspose.Page.Drawing;
// using FontStyle = Aspose.Page.Drawing.FontStyle;
// using TFont = Aspose.Page.Drawing.Font;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/enum_helpers.h>
#include <system/array.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace EPS
{
class PsDocument;
} // namespace EPS
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
class Font;
enum class FontStyle;
} // namespace Drawing
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
    
    friend class Aspose::Page::EPS::PsDocument;
    
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
    /*public DrFont FetchDrFont(string familyName, float sizePoints, FontStyle style, string altFamilyName)
            {
                return new DrFont(Aspose.TrueType.ExternalFontCache.Instance.FetchDrFont(familyName, sizePoints, style, altFamilyName));
            }*/
    /// <summary>
    /// Fetches <see cref="DrFont"></see> by font family name, size, style, font capitals and alternative font family name.
    /// </summary>
    /// <param name="familyName">Font family name. </param>
    /// <param name="sizePoints">Font size in points (one point is 1/72 of inch). </param>
    /// <param name="style">Font style. </param>
    /// <param name="altFamilyName">Alternative font family name. </param>
    /// <param name="fontCapitals">Font capitals. </param>        
    /// <returns>Returns DrFont</returns>
    /*public DrFont FetchDrFont(string familyName, float sizePoints, FontStyle style, string altFamilyName, FontCapitals fontCapitals)
            {
                return Aspose.TrueType.ExternalFontCache.Instance.FetchDrFont(familyName, sizePoints, style, altFamilyName, fontCapitals);
            }*/
    /// <summary>
    /// Fetches <see cref="System::Drawing::Font"></see> by font family name, style and size.
    /// </summary>
    /// <param name="familyName">Font family name. </param>
    /// <param name="altFamilyName">Alternative font family name. </param>
    /// <param name="style">Font style. </param>
    /// <returns>Returns TTFont</returns>
    /*public Aspose.TrueType.TTFont FetchTTFont(string familyName, FontStyle style, string altFamilyName)
            {
                return Aspose.TrueType.ExternalFontCache.Instance.FetchTTFont(familyName, style, altFamilyName);
            }*/
    /// <summary>
    /// Creates <see cref="System::Drawing::Font"></see> by font family name, style and size.
    /// </summary>
    /// <param name="familyName">Font family name. </param>
    /// /// <param name="size">Font size in points (one point is 1/72 of inch). </param>
    /// <param name="style">Font style. </param>
    /// <returns>Returns Font object.</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Font> CreateFontByFamilyName(System::String familyName, float size, System::Drawing::FontStyle style);
    
protected:

    static void SetAdditionalFontsFolders(System::ArrayPtr<System::String> additionalFontFolders);
    
};

} // namespace Page
} // namespace Aspose


