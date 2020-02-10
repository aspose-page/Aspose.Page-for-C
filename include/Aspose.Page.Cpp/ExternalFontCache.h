#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum_helpers.h>
#include <system/array.h>
#include <drawing/font_style.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace EPS { class PsDocument; } } }
namespace Aspose { namespace Foundation { namespace Drawing { class DrFont; } } }
namespace Aspose { namespace Foundation { namespace Drawing { enum class FontCapitals; } } }
namespace Aspose { namespace TrueType { class TTFont; } }

namespace Aspose {

namespace Page {

/// <summary>
/// Use this class to obtain font encapsulation in a form that is accepted by <see cref="Device"/>.
/// </summary>
class ExternalFontCache : public System::Object
{
    typedef ExternalFontCache ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::EPS::PsDocument;
    
public:

    /// <summary>
    /// Fetches <see cref="DrFont"/> by font family name, size and style.
    /// </summary>
    /// <param name="familyName">Font family name. </param>
    /// <param name="sizePoints">Font size in points (one point is 1/72 of inch). </param>
    /// <param name="style">Font style. </param>
    /// <returns>Returns DrFont</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Foundation::Drawing::DrFont> FetchDrFont(System::String familyName, float sizePoints, System::Drawing::FontStyle style);
    /// <summary>
    /// Fetches <see cref="DrFont"/> by font family name, size, style and font capitals.
    /// </summary>
    /// <param name="familyName">Font family name. </param>
    /// <param name="sizePoints">Font size in points (one point is 1/72 of inch). </param>
    /// <param name="style">Font style. </param>
    /// <param name="fontCapitals">Font capitals. </param>
    /// <returns>Returns DrFont</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Foundation::Drawing::DrFont> FetchDrFont(System::String familyName, float sizePoints, System::Drawing::FontStyle style, Aspose::Foundation::Drawing::FontCapitals fontCapitals);
    /// <summary>
    /// Fetches <see cref="DrFont"/> by font family name, size, style and alternative font family name.
    /// </summary>
    /// <param name="familyName">Font family name. </param>
    /// <param name="sizePoints">Font size in points (one point is 1/72 of inch). </param>
    /// <param name="style">Font style. </param>
    /// <param name="altFamilyName">Alternative font family name. </param>
    /// <returns>Returns DrFont</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Foundation::Drawing::DrFont> FetchDrFont(System::String familyName, float sizePoints, System::Drawing::FontStyle style, System::String altFamilyName);
    /// <summary>
    /// Fetches <see cref="DrFont"/> by font family name, size, style, font capitals and alternative font family name.
    /// </summary>
    /// <param name="familyName">Font family name. </param>
    /// <param name="sizePoints">Font size in points (one point is 1/72 of inch). </param>
    /// <param name="style">Font style. </param>
    /// <param name="altFamilyName">Alternative font family name. </param>
    /// <param name="fontCapitals">Font capitals. </param>        
    /// <returns>Returns DrFont</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Foundation::Drawing::DrFont> FetchDrFont(System::String familyName, float sizePoints, System::Drawing::FontStyle style, System::String altFamilyName, Aspose::Foundation::Drawing::FontCapitals fontCapitals);
    /// <summary>
    /// Fetches <see cref="TTFont"/> by font family name, style and alternative font family name.
    /// </summary>
    /// <param name="familyName">Font family name. </param>
    /// <param name="style">Font style. </param>
    /// <param name="altFamilyName">Alternative font family name. </param>
    /// <returns>Returns TTFont</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::TrueType::TTFont> FetchTTFont(System::String familyName, System::Drawing::FontStyle style, System::String altFamilyName);
    
protected:

    static void SetAdditionalFontsFolders(System::ArrayPtr<System::String> additionalFontFolders);
    
};

} // namespace Page
} // namespace Aspose


