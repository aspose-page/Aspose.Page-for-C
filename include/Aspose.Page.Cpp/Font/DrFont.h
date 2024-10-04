#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum_helpers.h>
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
namespace EPS
{
class PsDocument;
} // namespace EPS
class ExternalFontCache;
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Drawing
{
enum class FontStyle;
class SizeF;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Page {

namespace Font {

/// <summary>
/// The <b>Aspose.Page.Font</b> namespace contains classes for fonts manipulation.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Use this class instead of GDI+ Font
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DrFont : public System::Object
{
    typedef DrFont ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class System::ObjectExt;
    friend class Aspose::Page::ExternalFontCache;
    friend class Aspose::Page::EPS::PsDocument;
    
public:

    /// <summary>
    /// Gets the true type font.
    /// </summary>
    /*public TTFont TrueTypeFont
            {
                get { return mFont.TrueTypeFont; }
            }*/
    /// <summary>
    /// Gets style of this font.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::FontStyle get_Style();
    /// <summary>
    /// Gets a value indicating whether this instance is bold.
    /// </summary>
    /// <value>
    ///   <c>true</c> if this instance is bold; otherwise, <c>false</c>.
    /// </value>
    ASPOSE_PAGE_SHARED_API bool get_IsBold();
    /// <summary>
    /// Gets a value indicating whether this instance is italic.
    /// </summary>
    /// <value>
    ///   <c>true</c> if this instance is italic; otherwise, <c>false</c>.
    /// </value>
    ASPOSE_PAGE_SHARED_API bool get_IsItalic();
    /// <summary>
    /// Gets the font capitals.
    /// </summary>
    /*public FontCapitals Capitals
            {
                get { return mFont.Capitals; }
            }*/
    /// <summary>
    /// Gets the SmallCaps scale factor.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_SmallCapsScaleFactor();
    /// <summary>
    /// Gets name of this font.
    /// </summary>
    /// <value>
    /// The name of the family.
    /// </value>
    ASPOSE_PAGE_SHARED_API System::String get_FamilyName();
    /// <summary>
    /// Gets size of this font (points).
    /// </summary>
    /// <value>
    /// The size points.
    /// </value>
    ASPOSE_PAGE_SHARED_API float get_SizePoints();
    /// <summary>
    /// Gets size of this font (points).
    /// </summary>
    /// <value>
    /// The size points.
    /// </value>
    ASPOSE_PAGE_SHARED_API void set_SizePoints(float value);
    /// <summary>
    /// Returns the cell ascent in points.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_AscentPoints();
    /// <summary>
    /// Returns the cell descent in points.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_DescentPoints();
    /// <summary>
    /// Shortcut for <see cref="AscentPoints"></see> + <see cref="DescentPoints"></see>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_CellHeightPoints();
    /// <summary>
    /// Cell ascent of this font (lis).
    /// This is a vertical distance from cell top to cell baseline.
    /// </summary>
    /// <remarks>
    /// This value is also called <b>cell baseline</b>.
    /// </remarks>
    ASPOSE_PAGE_SHARED_API int32_t get_AscentLis();
    /// <summary>
    /// Cell descent of this font (lis).
    /// This is a vertical distance from cell bottom to cell baseline.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_DescentLis();
    /// <summary>
    /// Returns cell height of this font (lis).
    /// This is a shortcut for <see cref="AscentLis"></see> + <see cref="DescentLis"></see>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_CellHeightLis();
    /// <summary>
    /// Returns leading of this font (lis).
    /// This is a shortcut for <see cref="LineSpacingLis"></see> - <see cref="CellHeightLis"></see>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_LeadingLis();
    /// <summary>
    /// Returns leading of this font (lis).
    /// This is a shortcut for <see cref="LineSpacingLis"></see> - <see cref="CellHeightLis"></see>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_LeadingPoints();
    /// <summary>
    /// Returns cell spacing of this font (lis).
    /// This is a vertical distance between baselines of the two glyphs.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_LineSpacingLis();
    /// <summary>
    /// Returns cell spacing of this font (points).
    /// This is a vertical distance between baselines of the two glyphs.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_LineSpacingPoints();
    /// <summary>
    /// This property contains additional information about font's style
    /// </summary>
    ASPOSE_PAGE_SHARED_API int16_t get_StyleEx();
    /// <summary>
    /// This property contains additional information about font's style
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StyleEx(int16_t value);
    
    /// <summary>
    /// Replace font content
    /// </summary>
    /// <param name="font">The source font.</param>
    ASPOSE_PAGE_SHARED_API void Replace(System::SharedPtr<DrFont> font);
    /// <summary>
    /// Returns width of the character (points).
    /// </summary>
    /// <param name="c">The symbol to calculate.</param>
    /// <returns>Returns width</returns>
    ASPOSE_PAGE_SHARED_API float GetCharWidthPoints(char16_t c);
    /// <summary>
    /// Gets the text width points.
    /// </summary>
    /// <param name="text">The text to calculate.</param>
    /// <returns>Returns width</returns>
    ASPOSE_PAGE_SHARED_API float GetTextWidthPoints(System::String text);
    /// <summary>
    /// Gets the text width points.
    /// </summary>
    /// <param name="text">The text to calculate.</param>
    /// <param name="startIndex">The start index.</param>
    /// <param name="charCount">The char count.</param>
    /// <returns>Returns width</returns>
    ASPOSE_PAGE_SHARED_API float GetTextWidthPoints(System::String text, int32_t startIndex, int32_t charCount);
    /// <summary>
    /// Returns measurement text box of the text in points.
    /// </summary>
    /// <param name="text">The text to calculate.</param>
    /// <returns>Returns size</returns>
    ASPOSE_PAGE_SHARED_API System::Drawing::SizeF GetTextSizePoints(System::String text);
    /// <summary>
    /// Gets the char width lis.
    /// </summary>
    /// <param name="c">The symbol to calculate.</param>
    /// <returns>Returns width</returns>
    ASPOSE_PAGE_SHARED_API int32_t GetCharWidthLis(char16_t c);
    /// <summary>
    /// Gets the text width lis.
    /// </summary>
    /// <param name="text">The text to calculate.</param>
    /// <returns>Returns width</returns>
    ASPOSE_PAGE_SHARED_API int32_t GetTextWidthLis(System::String text);
    /// <summary>
    /// Returns True for "Microsoft Sans Serif" font. This one is poorly rendered by GDI+. See Test286 and Gemini-6959.
    /// </summary>
    /// <param name="fontName">Name of the font.</param>
    /// <returns>
    ///   <c>true</c> if [is poorly rendered by GDI plus] [the specified font name]; otherwise, <c>false</c>.
    /// </returns>
    static ASPOSE_PAGE_SHARED_API bool IsPoorlyRenderedByGdiPlus(System::String fontName);
    /// <summary>
    /// Determines whether the specified <see cref="System::Object"></see>, is equal to this instance.
    /// </summary>
    /// <param name="obj">The <see cref="System::Object"></see> to compare with this instance.</param>
    /// <returns>
    ///   <c>true</c> if the specified <see cref="System::Object"></see> is equal to this instance; otherwise, <c>false</c>.
    /// </returns>
    ASPOSE_PAGE_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Returns a hash code for this instance.
    /// </summary>
    /// <returns>
    /// A hash code for this instance, suitable for use in hashing algorithms and data structures like a hash table. 
    /// </returns>
    ASPOSE_PAGE_SHARED_API int32_t GetHashCode() const override;
    
protected:

    System::SharedPtr<Foundation::Drawing::DrFont> get_Font() const;
    
    DrFont(System::SharedPtr<Aspose::Foundation::Drawing::DrFont> font);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DrFont, CODEPORTING_ARGS(System::SharedPtr<Aspose::Foundation::Drawing::DrFont> font));
    /// <summary>
    /// Equalses the specified other.
    /// </summary>
    /// <param name="other">The other object.</param>
    /// <returns>
    ///   <c>true</c> if the specified <see cref="DrFont"></see> is equal to this instance; otherwise, <c>false</c>.
    /// </returns>
    ASPOSE_PAGE_SHARED_API bool Equals(System::SharedPtr<DrFont> other);
    
    virtual ASPOSE_PAGE_SHARED_API ~DrFont();
    
private:

    System::SharedPtr<Aspose::Foundation::Drawing::DrFont> mFont;
    float smallCapsScaleFactor;
    
};

} // namespace Font
} // namespace Page
} // namespace Aspose


