#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Foundation
{
namespace Drawing
{
class DrFont;
} // namespace Drawing
} // namespace Foundation
namespace Page
{
class IGlyph;
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
namespace Drawing2D
{
class GraphicsPath;
class Matrix;
} // namespace Drawing2D
class Font;
enum class FontStyle;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Page {

/// <summary>
/// This interface give access to main parameters of font.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ITrFont : public System::Object
{
    typedef ITrFont ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a type of font in Adobe classification. 
    /// </summary>
    virtual int32_t get_FontType() = 0;
    /// <summary>
    /// Returns font name.
    /// </summary>
    virtual System::String get_FontName() = 0;
    /// <summary>
    /// Returns the name of the encoding.
    /// </summary>
    virtual System::String get_EncodingTable() = 0;
    /// <summary>
    /// Returns enbcoding array.
    /// </summary>
    virtual System::ArrayPtr<System::String> get_Encoding() = 0;
    /// <summary>
    /// Returns mapping between character name and glyph.
    /// </summary>
    virtual System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<IGlyph>>> get_CharStrings() = 0;
    /// <summary>
    /// Returns DrFont corresponding to this font.
    /// </summary>
    virtual System::SharedPtr<Aspose::Foundation::Drawing::DrFont> get_Font() = 0;
    /// <summary>
    /// Returns System.Drawing.Font corresponding to this font.
    /// </summary>
    virtual System::SharedPtr<System::Drawing::Font> get_NativeFont() = 0;
    /// <summary>
    /// Returns font transform.
    /// </summary>
    virtual System::SharedPtr<System::Drawing::Drawing2D::Matrix> get_Transform() = 0;
    /// <summary>
    /// Returns font size.
    /// </summary>
    virtual float get_Size() = 0;
    /// <summary>
    /// Returns font style.
    /// </summary>
    virtual System::Drawing::FontStyle get_Style() = 0;
    
    /// <summary>
    /// Creates equivalent of this font with new size.
    /// </summary>
    /// <param name="size"> Size of new font. </param>
    /// <returns> A new font. </returns>
    virtual System::SharedPtr<ITrFont> DeriveFont(float size) = 0;
    /// <summary>
    /// Creates equivalent of this font with new style.
    /// </summary>
    /// <param name="style"> Style of new font. </param>
    /// <returns> A new font. </returns>
    virtual System::SharedPtr<ITrFont> DeriveFont(System::Drawing::FontStyle style) = 0;
    /// <summary>
    /// Creates equivalent of this font with new size and style.
    /// </summary>
    /// <param name="size"> Size of new font. </param>
    /// <param name="style"> Style of new font. </param>
    /// <returns> A new font. </returns>
    virtual System::SharedPtr<ITrFont> DeriveFont(float size, System::Drawing::FontStyle style) = 0;
    /// <summary>f character
    /// Creates equivalent of this font with new transform.
    /// </summary>
    /// <param name="transform"> Transformation of new font. </param>
    /// <returns> A new font. </returns>
    virtual System::SharedPtr<ITrFont> DeriveFont(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform) = 0;
    /// <summary>
    /// Returns a width of character.
    /// </summary>
    /// <param name="charValue"> Character. </param>
    /// <returns> A width of character. </returns>
    virtual float GetCharWidth(char16_t charValue) = 0;
    /// <summary>
    /// Returns an outline of glyph in specified location.
    /// </summary>
    /// <param name="charValue"> Character. </param>
    /// <param name="x"> X coordinate of the character location. </param>
    /// <param name="y"> Y coordinate of the character location. </param>
    /// <returns> An outline of glyph. </returns>
    virtual System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> GetOutline(char16_t charValue, float x, float y) = 0;
    /// <summary>
    /// Clones the font.
    /// </summary>
    /// <returns> A new font. </returns>
    virtual System::SharedPtr<ITrFont> Clone() = 0;
    
};

} // namespace Page
} // namespace Aspose


