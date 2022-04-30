#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsContentElement.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Aps
{
class ApsConverter;
} // namespace Aps
namespace Xps
{
class XpsPageWriter;
class XpsSerializationContext;
class XpsSerializer;
} // namespace Xps
class XpsPresenter;
} // namespace Presentation
namespace Tests
{
class GlyphsToApsTests;
class GlyphsToImageTests;
class GlyphsToPdfTests;
} // namespace Tests
class XpsDocumentVisitor;
namespace XpsModel
{
template <typename> class XpsArray;
class XpsBrush;
class XpsContentElement;
class XpsContext;
class XpsElement;
class XpsFont;
class XpsGlyphMapping;
class XpsGlyphsClusterMap;
class XpsObject;
template <typename> class XpsProperty;
enum class XpsStyleSimulations;
class XpsTreeLoader;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class SortedList;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
enum class FontStyle;
} // namespace Drawing
namespace Xml
{
class XmlElement;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Class incapsulating Glyphs element features.
/// This element represents a run of uniformly-formatted text from a single font.
/// It provides information necessary for accurate rendering and supports search
/// and selection features in viewing consumers. 
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsGlyphs final : public Aspose::Page::XPS::XpsModel::XpsContentElement
{
    typedef XpsGlyphs ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsContentElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializationContext;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsTreeLoader;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend class Aspose::Page::XPS::Tests::GlyphsToPdfTests;
    friend class Aspose::Page::XPS::Tests::GlyphsToImageTests;
    friend class Aspose::Page::XPS::Tests::GlyphsToApsTests;
    
public:

    /// <summary>
    /// Returns/sets the value specifying the Unicode algorithm bidirectional nesting level.
    /// Even values imply left-to-right layout, odd values imply right-to-left layout.
    /// Right-to-left layout places the run origin at the right side of the first glyph,
    /// with positive advance widths (representing advances to the left) placing subsequent
    /// glyphs to the left of the previous glyph.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_BidiLevel() const;
    /// <summary>
    /// Returns/sets the value specifying the Unicode algorithm bidirectional nesting level.
    /// Even values imply left-to-right layout, odd values imply right-to-left layout.
    /// Right-to-left layout places the run origin at the right side of the first glyph,
    /// with positive advance widths (representing advances to the left) placing subsequent
    /// glyphs to the left of the previous glyph.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_BidiLevel(int32_t value);
    /// <summary>
    /// Returns/sets the brush used to fill the shape of the rendered glyphs.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsBrush> get_Fill();
    /// <summary>
    /// Returns/sets the brush used to fill the shape of the rendered glyphs.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Fill(System::SharedPtr<XpsBrush> value);
    /// <summary>
    /// Returns font resource for the TrueType font used to typeset elements text.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsFont> get_Font();
    /// <summary>
    /// Returns/sets the font size in drawing surface units, expressed as a float
    /// in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_FontRenderingEmSize() const;
    /// <summary>
    /// Returns/sets the font size in drawing surface units, expressed as a float
    /// in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_FontRenderingEmSize(float value);
    /// <summary>
    /// Returns/sets the x coordinate of the first glyph in the run,
    /// in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_OriginX() const;
    /// <summary>
    /// Returns/sets the x coordinate of the first glyph in the run,
    /// in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OriginX(float value);
    /// <summary>
    /// Returns/sets the y coordinate of the first glyph in the run,
    /// in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_OriginY() const;
    /// <summary>
    /// Returns/sets the y coordinate of the first glyph in the run,
    /// in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OriginY(float value);
    /// <summary>
    /// Returns/sets the value indicating that a glyph is turned on its side,
    /// with the origin being defined as the top center of the unturned glyph. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsSideways() const;
    /// <summary>
    /// Returns/sets the value indicating that a glyph is turned on its side,
    /// with the origin being defined as the top center of the unturned glyph. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_IsSideways(bool value);
    /// <summary>
    /// Returns/sets the string of text rendered by the Glyphs element.
    /// The text is specified as Unicode code points.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_UnicodeString() const;
    /// <summary>
    /// Returns/sets the string of text rendered by the Glyphs element.
    /// The text is specified as Unicode code points.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_UnicodeString(System::String value);
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::SortedList<int32_t, System::SharedPtr<XpsGlyphMapping>>> get_Indices();
    ASPOSE_PAGE_SHARED_API void set_Indices(System::SharedPtr<System::Collections::Generic::SortedList<int32_t, System::SharedPtr<XpsGlyphMapping>>> value);
    /// <summary>
    /// Returns/sets the value specifying a style simulation.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsStyleSimulations get_StyleSimulations() const;
    /// <summary>
    /// Returns/sets the value specifying a style simulation.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StyleSimulations(XpsStyleSimulations value);
    
    /// <summary>
    /// Clone this glyphs.
    /// </summary>
    /// <returns>Clone of this glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGlyphs> Clone();
    
protected:

    /// <summary>
    /// Returns font resource for the TrueType font used to typeset elements text.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Font(System::SharedPtr<XpsFont> value);
    System::String get_FontUri() const;
    void set_FontUri(System::String value);
    
    XpsGlyphs(System::SharedPtr<XpsContext> context, System::String fontFamily, float fontRenderingEmSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsGlyphs, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::String fontFamily, float fontRenderingEmSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString));
    
    XpsGlyphs(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsFont> font, float fontRenderingEmSize, float originX, float originY, System::String unicodeString);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsGlyphs, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsFont> font, float fontRenderingEmSize, float originX, float originY, System::String unicodeString));
    
    XpsGlyphs(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsElement> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsGlyphs, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsElement> parent));
    
    XpsGlyphs(System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsGlyphs, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void ForcePropertyValueReferencesUpdate(System::SharedPtr<XpsElement> parent, bool add = true) override;
    ASPOSE_PAGE_SHARED_API void ForceRegisterForPreprocessing(bool add = true) override;
    void InitIndices(System::String indices);
    System::String IndicesToString();
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index) override;
    ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsGlyphs();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    int32_t _bidiLevel;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsBrush>>> _fill;
    System::SharedPtr<XpsFont> _font;
    float _fontRenderingEmSize;
    System::String _fontUri;
    float _originX;
    float _originY;
    bool _isSideways;
    System::SharedPtr<System::Collections::Generic::SortedList<int32_t, System::SharedPtr<XpsGlyphMapping>>> _indices;
    System::String _unicodeString;
    XpsStyleSimulations _styleSymulations;
    
};


// C# preprocessor directive: #if CPLUSPLUS


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PAGE_SHARED_CLASS XpsGlyphMapping : public System::Object
{
    typedef XpsGlyphMapping ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphs;
    
public:

    static const ASPOSE_PAGE_SHARED_API float AdvanceWidthUndefined;
    
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGlyphsClusterMap> get_ClusterMap() const;
    ASPOSE_PAGE_SHARED_API float get_AdvanceWidth() const;
    ASPOSE_PAGE_SHARED_API float get_UOffset() const;
    ASPOSE_PAGE_SHARED_API float get_VOffset() const;
    
    ASPOSE_PAGE_SHARED_API XpsGlyphMapping(System::SharedPtr<XpsGlyphsClusterMap> clusterMap, float advanceWidth, float uOffset, float vOffset);
    ASPOSE_PAGE_SHARED_API XpsGlyphMapping(float advanceWidth, float uOffset, float vOffset);
    ASPOSE_PAGE_SHARED_API XpsGlyphMapping(float uOffset, float vOffset);
    ASPOSE_PAGE_SHARED_API XpsGlyphMapping(float advanceWidth);
    ASPOSE_PAGE_SHARED_API XpsGlyphMapping(System::SharedPtr<XpsGlyphsClusterMap> clusterMap, float advanceWidth);
    ASPOSE_PAGE_SHARED_API XpsGlyphMapping(System::SharedPtr<XpsGlyphsClusterMap> clusterMap);
    
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGlyphMapping> Clone();
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    static System::SharedPtr<XpsGlyphMapping> Create(System::String indices);
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<XpsGlyphsClusterMap> _clusterMap;
    float _advanceWidth;
    float _uOffset;
    float _vOffset;
    
    System::String ToString_NonConst();
    
};


// C# preprocessor directive: #if CPLUSPLUS


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PAGE_SHARED_CLASS XpsGlyphsClusterMap : public System::Object
{
    typedef XpsGlyphsClusterMap ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphMapping;
    
public:

    ASPOSE_PAGE_SHARED_API uint8_t get_CodeUnitCount() const;
    ASPOSE_PAGE_SHARED_API uint8_t get_GlyphCount() const;
    ASPOSE_PAGE_SHARED_API int32_t get_GlyphId() const;
    
    ASPOSE_PAGE_SHARED_API XpsGlyphsClusterMap(uint8_t codeUnitCount, uint8_t glyphCount, int32_t glyphId);
    ASPOSE_PAGE_SHARED_API XpsGlyphsClusterMap(uint8_t codeUnitCount, int32_t glyphId);
    ASPOSE_PAGE_SHARED_API XpsGlyphsClusterMap(int32_t glyphId);
    
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGlyphsClusterMap> Clone();
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    static System::SharedPtr<XpsGlyphsClusterMap> Create(System::String clusterMap);
    
private:

    uint8_t _codeUnitCount;
    uint8_t _glyphCount;
    int32_t _glyphId;
    
    System::String ToString_NonConst();
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


